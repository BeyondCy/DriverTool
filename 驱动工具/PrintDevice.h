#pragma once
#define IOCTL_DOT4_CREATE_SOCKET                 CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  7, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_DOT4_DESTROY_SOCKET                CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  9, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_DOT4_WAIT_FOR_CHANNEL              CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  8, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_DOT4_OPEN_CHANNEL                  CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  0, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_DOT4_CLOSE_CHANNEL                 CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_DOT4_READ                          CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  2, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_DOT4_WRITE                         CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  3, METHOD_IN_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_DOT4_ADD_ACTIVITY_BROADCAST        CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  4, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_DOT4_REMOVE_ACTIVITY_BROADCAST     CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  5, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_DOT4_WAIT_ACTIVITY_BROADCAST       CTL_CODE(FILE_DEVICE_DOT4, IOCTL_DOT4_USER_BASE +  6, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)