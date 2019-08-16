#pragma once

enum {
	/* [Arancino] - note that 2-5 were commented out */
	VIRTUALFREE_INDEX = 0,
	CREATEPROCESS_INDEX,
	VIRTUALALLOC_INDEX,
	RTLALLOCATEHEAP_INDEX,
	ISDEBUGGERPRESENT_INDEX,
	RTLREALLOCATEHEAP_INDEX,
	/*SUPPLI*/
	SLEEP_INDEX,
	REGQUERYVALUE_INDEX,
	REGOPENKEY_INDEX,
	GETFILEATTRIBUTES_INDEX,
	GETADAPTER_INDEX,
	CREATEFILE_INDEX,
	FINDWINDOW_INDEX,
	WGETNET_INDEX,
	NEXTPROC_INDEX,
	EXECQUERY_INDEX,
	GETTICKCOUNT_INDEX,
	SETTIMER_INDEX,
	WAITOBJ_INDEX,
	ICMPFILE_INDEX,
	ICMPECHO_INDEX,
	ZWQUERY_INDEX,
	SYSALLOC_INDEX,
	GETDISKSPACE_INDEX,
	GETFIRSTFILE_INDEX,
	TIMEASFILE_INDEX,
	POPEN_INDEX,
	LOADLIB_INDEX,
	VPROTECT_INDEX,
	DEVICEBASE_INDEX,
	WINNAME_INDEX,
	GETMODULE_INDEX,
	GETMODULEX_INDEX,
	LDRHND_INDEX,
	ENUMDIS_INDEX,
	SETUPDEV_INDEX,
	CLOSEH_INDEX,
	GETCUR_INDEX,
	//SCARD_INDEX,
	/********* index for registry report ***********/
	REGOPEN_INDEX = 60,
	REGSET_INDEX,
	REGCLOSE_INDEX,
	REGCREATE_INDEX,
	/********* index for special logging hooks ***********/
	NTDELAYEXEC_INDEX = 70,
	NTQUERYPERF_INDEX,
	/*************  index for debug **************/
	CMPSTR_INDEX = 100,
	RTLSTR_INDEX,
	WCSSTR_INDEX,
	WCSCMP_INDEX,
	STRSTR_INDEX,
	STRCMP_INDEX
};

#define MAX_HOOK_FUNCTIONS_INDEX	128 // TODO
