#include "stdafx.h"
#include "ControlWorkerThread.h"
#include "DriverToolFrame.h"
#include "ServiceControl.h"

class CDriverToolFrame;

CControlWorkerThread::CControlWorkerThread(CDriverToolFrame * pFrame)
{
	m_pFrame = pFrame;
}

CControlWorkerThread::~CControlWorkerThread()
{
}

wxThread::ExitCode CControlWorkerThread::Entry()
{
	wxString strNotify = "�������";
	TCHAR buff[1024];
	m_pFrame->DisableAllButton();
	do 
	{
		wxString strFile = m_pFrame->m_pEdtDriverPath->GetLabelText();
		CServiceControl sc;
		sc.SetPath(strFile.c_str().AsWCharBuf().data());

		switch (m_ulMessageID)
		{
		case INSTALL:
			if (sc.InstallService() != TRUE)
			{
				//strNotify.Format(wxT("������룺%lu,%s"), sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				swprintf_s(buff, L"������룺%lu,%s", sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				strNotify = buff;
			}
			break;

		case START:
			if (sc.RunService() != TRUE)
			{
				//strNotify.Format(wxT("������룺%lu,%s"), sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				swprintf_s(buff, L"������룺%lu,%s", sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				strNotify = buff;
			}
			break;

		case STOP:
			if (sc.StopService() != TRUE)
			{
				//strNotify.Format(wxT("������룺%lu,%s"), sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				swprintf_s(buff, L"������룺%lu,%s", sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				strNotify = buff;
			}
			break;

		case UNINSTALL:
			if (sc.UnInstallService() != TRUE)
			{
				//strNotify.Format(wxT("������룺%lu,%s"), sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				swprintf_s(buff, L"������룺%lu,%s", sc.GetErrorCode(), sc.GetErrorStr(sc.GetErrorCode()));
				strNotify = buff;
			}
			break;
		}

	} while (0);
	wxThreadEvent event(wxEVT_THREAD, THREAD_SERVER_CONTROL_COMPLETE);
	event.SetString(strNotify);
	wxQueueEvent(m_pFrame, event.Clone());

	m_pFrame->EnableAllButton();
	return NULL;
}

void CControlWorkerThread::OnExit()
{

}