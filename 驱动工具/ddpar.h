#pragma once

#define IOCTL_PAR_QUERY_INFORMATION     CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 1, METHOD_BUFFERED,FILE_ANY_ACCESS)
#define IOCTL_PAR_SET_INFORMATION       CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 2, METHOD_BUFFERED,FILE_ANY_ACCESS)
#define IOCTL_PAR_QUERY_DEVICE_ID       CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 3, METHOD_BUFFERED,FILE_ANY_ACCESS)
#define IOCTL_PAR_QUERY_DEVICE_ID_SIZE  CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 4, METHOD_BUFFERED,FILE_ANY_ACCESS)
#define IOCTL_IEEE1284_GET_MODE         CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 5, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_IEEE1284_NEGOTIATE        CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 6, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_SET_WRITE_ADDRESS     CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 7, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_SET_READ_ADDRESS      CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 8, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_GET_DEVICE_CAPS       CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 9, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_GET_DEFAULT_MODES     CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 10, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_PING                  CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 11, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_QUERY_RAW_DEVICE_ID   CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 12, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_ECP_HOST_RECOVERY     CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 13, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_GET_READ_ADDRESS      CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 14, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_GET_WRITE_ADDRESS     CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_TEST                  CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 20, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_IS_PORT_FREE          CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 21, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PAR_QUERY_LOCATION        CTL_CODE(FILE_DEVICE_PARALLEL_PORT, 22, METHOD_BUFFERED, FILE_ANY_ACCESS)