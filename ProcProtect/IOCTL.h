#ifndef _IOCTL_H
#define _IOCTL_H

#define IOCTL_Install_SSDTHook CTL_CODE(\
	FILE_DEVICE_UNKNOWN, \
	0x800, \
	METHOD_BUFFERED, \
	FILE_ANY_ACCESS)

#define IOCTL_UnInstall_SSDTHook CTL_CODE(\
	FILE_DEVICE_UNKNOWN, \
	0x801, \
	METHOD_BUFFERED, \
	FILE_ANY_ACCESS)

#define IOCTL_AddPortectProc CTL_CODE(\
	FILE_DEVICE_UNKNOWN, \
	0x802, \
	METHOD_BUFFERED, \
	FILE_ANY_ACCESS)

#define IOCTL_DelPortectProc CTL_CODE(\
	FILE_DEVICE_UNKNOWN, \
	0x803, \
	METHOD_BUFFERED, \
	FILE_ANY_ACCESS)

#define IOCTL_SetSafeExe CTL_CODE(\
	FILE_DEVICE_UNKNOWN, \
	0x804, \
	METHOD_BUFFERED, \
	FILE_ANY_ACCESS)

#endif

