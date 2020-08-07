#pragma once
//#include "lib/madCHook.h"	// TODO: ...

// #include "madCHook.h"

// ----------------------------------------------------
// Common

// End of Common
// -----------------------------------------------------

// ----------------------------------------------------
// Web Browser
#define IPC_WebBrowser "IPC_WebBrowser"

#define MAX_FILECOPY_COUNT	32	// �ʹ� ���� ������ �����ϸ� �ý��ۿ� ������ ���� �����Ƿ� 32���� �켱 �����Ѵ�.

enum EM_WebBrowser
{
	wbIE=0,
	wbFireFox,
	wbChrome
};

enum HookedAPI
{
	apiHttpSendRequest=0,	// IE
	apiInternetWriteFile,	// IE
	apiPR_Write,			// FireFox
	apiWSASend,				// Chrome
	apiCount
} ;

/********************************************************************
- Web Message Protocol
00   01  02  03  04  05  06  07  08  09  10  11  12  13  14  15
��---��--��--��--��--��--��--��--��--��--��--��--��--��--��---��
��Browser Type   ��  Hooked API  ��  Session ID			      ��
��------------------------------------------------------------��
��URL Size       ��URL ....				.........End of URL   ��
��------------------------------------------------------------��
��Message Size �� Message ..��								  ��
��------------------------------------------------------------��
URL and Message is null teminated.
****************************************************************/

// End of Web Browser
// -----------------------------------------------------


#define PIPE_COMMAND_BUFFER_COUNT	4

// ----------------------------------------------------
// IPC Name
// ----------------------------------------------------
#define IPC_FileCopy	"IPC_FileCopy"
#define IPC_FileCopyW	"IPC_FileCopyW"
#define	IPC_Execute		"IPC_PISupervisorExecute"
#define	IPC_ExecuteW	"IPC_PISupervisorExecuteW"
#define IPC_CDS			"IPC_CDS"
#define IPC_PWManager	"IPC_PWManager"
//#define IPC_Explorer	"IPC_Explorer"

// ----------------------------------------------------
// IPC Command
// ----------------------------------------------------
#define	PIPE_COMMAND_PISUPERVISOR_EXECUTE_N						1000
#define	PIPE_COMMAND_PISUPERVISOR_EXECUTE						"PISupervisorExecute"

#define	PIPE_COMMAND_PISUPERVISOR_PERMIT_AGENT_CLOSE_N			1001
#define	PIPE_COMMAND_PISUPERVISOR_PERMIT_AGENT_CLOSE			"PISupervisorPermitAgentClose"

#define	PIPE_COMMAND_PISUPERVISOR_START_AGENT_RESTART_N			1002
#define	PIPE_COMMAND_PISUPERVISOR_START_AGENT_RESTART			"PISupervisorStartAgentRestart"

#define	PIPE_COMMAND_PISUPERVISOR_SET_PRINTER_OPTION_N			1003
#define	PIPE_COMMAND_PISUPERVISOR_SET_PRINTER_OPTION			"PISetPrinterOption"

#define	PIPE_COMMAND_PISUPERVISOR_REQUEST_EXECUTE_N				1004

#define	PIPE_COMMAND_PISUPERVISOR_START_CDSU_RESTART_N			1005

// ----------------------------------------
// start, 2015.03. added by sally, [#136994] ���ϼ� ��ȭ sc stop ���� ���. 
#define	PIPE_COMMAND_UTIL_STOP_ALL							"PIUtilStopAll"
#define	PIPE_COMMAND_UTIL_STOP_PISUPERVISOR					"PIUtilStopPISupervisor"
#define	PIPE_COMMAND_UTIL_STOP_PIPROTECTOR					"PIUtilStopPIProtector"
#define	PIPE_COMMAND_UTIL_STOP_PISECSMARTDRV				"PIUtilStopPISecSmartDrv"
#define	PIPE_COMMAND_UTIL_START_PISECSMARTDRV				"PIUtilStartPISecSmartDrv"
#define	PIPE_COMMAND_UTIL_STOP_PISECPROTECTORXX				"PIUtilStopPISecProtectorxx"
#define	PIPE_COMMAND_UTIL_START_PISECPROTECTORXX			"PIUtilStartPISecProtectorxx"
#define	PIPE_COMMAND_UTIL_STOP_PISECNETWORKNS				"PIUtilStopPISecNetworkNS"
#define	PIPE_COMMAND_UTIL_START_PISECNETWORKNS				"PIUtilStartPISecNetworkNS"
#define	PIPE_COMMAND_UTIL_STOP_PIFILTERDEVICE				"PIUtilStopPIFilterDevice"
#define	PIPE_COMMAND_UTIL_START_PIFILTERDEVICE				"PIUtilStartPIFilterDevice"

#define	PIPE_COMMAND_UTIL_IS_USE_PISECSMARTDRV				"PIUtilIsUseControlSecSmartDrv"
#define	PIPE_COMMAND_UTIL_IS_USE_PISECPROTECTORXX			"PIUtilIsUseControlSecProtectorxx"
#define	PIPE_COMMAND_UTIL_IS_USE_PISECNETWORKNS				"PIUtilIsUseControlSecNetworkNS"
#define	PIPE_COMMAND_UTIL_IS_USE_PIFILTERDEVICE				"PIUtilIsUseControlFilterDevice"
/// ----------------------------------------

// Ư�� ���μ��� ���� ���ܱ��
// parkdo2001, 2013.8.7 
#define	PIPE_COMMAND_PISUPERVISOR_REGISTER_PROCESS_N			1101
#define	PIPE_COMMAND_PISUPERVISOR_REGISTER_PROCESS				"PISupervisorRegisterProcess"
// [02/20/2013 sally PIAgent ��������]
#define	PIPE_COMMAND_PISUPERVISOR_AGENT_CLOSE_N					1102
#define	PIPE_COMMAND_PISUPERVISOR_AGENT_CLOSE					"PISupervisorAgentClose"

// ----------------------------------------
#define	PIPE_COMMAND_PISUPERVISOR_SYNC_REGISTER_N				1201
#define	PIPE_COMMAND_PISUPERVISOR_SYNC_REGISTER					"PISupervisorSyncRegister"

#define	PIPE_COMMAND_PISUPERVISOR_SYNC_ISPATHUNDERCONTROL_N		1202
#define	PIPE_COMMAND_PISUPERVISOR_SYNC_ISPATHUNDERCONTROL		"PISupervisorSyncIsPathUnderControl"

#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_UNREGISTER_N			1203
#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_UNREGISTER				"PISupervisorAsyncUnRegister"

#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_ONCHANGE_ONOFFLINE_N	1204
#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_ONCHANGE_ONOFFLINE		"PISupervisorAsyncOnChangeOffline"

#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_ONCHANGE_POLICY_N		1205
#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_ONCHANGE_POLICY			"PISupervisorAsyncOnChangePolicy"

#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_TTL_N					1206
#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_TTL						"PISupervisorAsyncTTL"

#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_DEVICELOG_N				1207
#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_DEVICELOG				"PISupervisorAsyncDeviceLog"

#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_EVENT_N					1208
#define	PIPE_COMMAND_PISUPERVISOR_ASYNC_EVENT					"PISupervisorAsyncEvent"
// ----------------------------------------

// #define PIPE_COMMAND_MEDIACONTROL_USB_WIRTEBLOCK_LOG			1401
// #define PIPE_COMMAND_MEDIACONTROL_USB_WIRTEBLOCK_LOG			"MediaControlUsbWirteBlockLog" 

// -
#define	PIPE_COMMAND_PISUPERVISOR_REGISTER_UPLOAD_ADDON_N		1501
#define	PIPE_COMMAND_PISUPERVISOR_REGISTER_UPLOAD_ADDON			"PISupervisorRegisterUploadAddon"

#define	PIPE_COMMAND_PISUPERVISOR_UNREGISTER_UPLOAD_ADDON_N		1502
#define	PIPE_COMMAND_PISUPERVISOR_UNREGISTER_UPLOAD_ADDON		"PISupervisorUnRegisterUploadAddon"
// -
// IP/Port ���� �˸� (Chrome/Firefox/Outlook �ֵ�� �̼�ġ)
#define	PIPE_COMMAND_IP_PORT_CONTROL_N							1601
#define	PIPE_COMMAND_IP_PORT_CONTROL							"ProcessIpPortControl"

#define	PIPE_COMMAND_WRITE_REMOVAL_DRIVE_N						1701
#define	PIPE_COMMAND_WRITE_REMOVAL_DRIVE						"CopyPlusContent"

//--
// ���� USB���� üũ �õ�, KTX(��)SR�� �̵�ϵ� USB�� ���� ��� �б⵵ ���� ��� ���� �߰� (4.0���� �ҽ� ������)
// ���� PIAgent�� PrivacyFileCopy,PrivacyWriteFile ������ ����USB ���� �˻��ϴ� ��ƾ�� �ҷ� Ȯ�νÿ� �˻��ϰ� �߰���. 
#define	PIPE_COMMAND_CHECK_DRIVE_MEDIALIST_N					1711					
#define	PIPE_COMMAND_CHECK_DRIVE_MEDIALIST						"CheckDriveMediaList" 
//-

#define	PIPE_COMMAND_DELETE_FILE_N								1801
#define	PIPE_COMMAND_DELETE_FILE								"FileDelete"

#define	PIPE_COMMAND_SET_SCREENSAVER_N							1901
#define	PIPE_COMMAND_SET_SCREENSAVER							"SetScreenSaver"


// PIPipeServer.h�� �ڸ��� �����ؾ� �Ѵ�.
#define		PIPE_COMMAND_PROCESS_CONTENT_N				2001
#define		PIPE_COMMAND_PROCESS_CONTENT				"ProcessPrintContent"

#define		PIPE_COMMAND_NETWORK_CONTENT_N				2002
#define		PIPE_COMMAND_NETWORK_CONTENT				"ProcessNetworkContent"

#define		PIPE_COMMAND_NETWORK_CONTENTN_N				2003
#define		PIPE_COMMAND_NETWORK_CONTENTN				"ProcessNetworkContentN"

#define		PIPE_COMMAND_CHECK_WARN_MESSAGE_N			2004
#define		PIPE_COMMAND_CHECK_WARN_MESSAGE				"CheckWarnMessage"

#define		PIPE_COMMAND_CHECK_NETWORK_WARN_MESSAGE_N	2005
#define		PIPE_COMMAND_CHECK_NETWORK_WARN_MESSAGE		"CheckNetworkWarnMessage"

#define		PIPE_COMMAND_SENDSM_CONTENT_N				2006
#define		PIPE_COMMAND_SENDSM_CONTENT					"SendShardMemoryContent"

// -
// ���� ����
typedef struct _ContentControlData {
	CHAR		szCommand[MAX_PATH];
	int			nNetAppID;
	DWORD		dwTID;
	BOOL		bClearResult;
	CHAR		szContentFilePath[_MAX_PATH];
} ContentControlData;

typedef struct _ContentCloseData {
	CHAR	szCommand[MAX_PATH];
	DWORD	dwTID;
} ContentCloseData;

typedef struct _ContentControlDataW {
	//	WCHAR		szCommand[MAX_PATH];
	int			nNetAppID;
	DWORD		dwTID;
	BOOL		bClearResult;
	WCHAR		wszContentFilePath[_MAX_PATH];
} ContentControlDataW;

typedef struct _ContentCloseDataW {
	//	WCHAR	szCommand[MAX_PATH];
	DWORD	dwTID;
} ContentCloseDataW;

#define		PIPE_COMMAND_NETWORK_CONTENT_CONTROL_N		2007							// POST ������ ���� �� �˻�
#define		PIPE_COMMAND_NETWORK_CONTENT_CONTROL		"ProcessNetworkContentControl"	// POST ������ ���� �� �˻�

#define		PIPE_COMMAND_NETWORK_CONTENT_CLOSE_N		2008		
#define		PIPE_COMMAND_NETWORK_CONTENT_CLOSE			"ProcessNetworkContentClose"	// POST ������ ���� �� �˸�
// -

#define		PIPE_COMMAND_CLIPBOARD_CONTENT_N			2009
#define		PIPE_COMMAND_CLIPBOARD_CONTENT				"ProcessClipboardContent"

#define		PIPE_COMMAND_PRINT_CONTENT_CONTROL_N		2010
#define		PIPE_COMMAND_PRINT_CONTENT_CONTROL			"ProcessPrintContentControl"	// Chrome ��¹� ����

// ----------------------------------------
// start, 20111125, added by rikky, �������� ���� ����.
#define		PIPE_COMMAND_PRIVACY_FILE_COPY_N			2101
#define		PIPE_COMMAND_PRIVACY_FILE_COPY				"ProcessPrivacyFileCopy"

#define		PIPE_COMMAND_PRIVACY_FILE_MOVE_N			2102
#define		PIPE_COMMAND_PRIVACY_FILE_MOVE				"ProcessPrivacyFileMove"


// end, 20111125,  added by rikky, �������� ���� ����.
// ----------------------------------------
typedef struct _ANSWER_PRINT_CONTENT
{
	unsigned long ulResult;
	char szSerialNumber[_MAX_PATH];

} ANSWER_PRINT_CONTENT,*LPANSWER_PRINT_CONTENT;

typedef struct _ANSWER_PRINT_CONTENT_W
{
	unsigned long ulResult;
	WCHAR wszSerialNumber[_MAX_PATH];

} ANSWER_PRINT_CONTENT_W,*LPANSWER_PRINT_CONTENT_W;

#define		PIPE_COMMAND_PRINT_CONTENT_PRE_N			2103
#define		PIPE_COMMAND_PRINT_CONTENT_PRE				"PreCheckPrintContent"

#define		PIPE_COMMAND_PRINT_CONTENT_EACH_PAGE_N		2104
#define		PIPE_COMMAND_PRINT_CONTENT_EACH_PAGE		"PreCheckEachPagePrintContent"	// sally add 20140820

// ----------------------------------------
// start, 20121224, added by sally, CD/DVD Write �� Windows CD���� ������ ���� 
#define		PIPE_COMMAND_CDRW_CONTENT_N					2105
#define		PIPE_COMMAND_CDRW_CONTENT					"PreCheckCDRWContent"
// end, 20121224, added by sally, CD/DVD Write �� Windows CD���� ������ ���� 
// ----------------------------------------
#define		PIPE_COMMAND_BUFFER_COUNT			4

// ----------------------------------------
// start, 20121002, added by parkdo2001, mtp ���� 
#define		PIPE_COMMAND_MTP_CONTENT_N					2106
#define		PIPE_COMMAND_MTP_CONTENT					"ProcessMtpContent"

// end, 20121002, added by parkdo2001, mtp ���� 
// ----------------------------------------

// ----------------------------------------
// start, 20140112, added by parkdo2001, �б� ��� ���� �����̰� ����̹� ��������� Ȯ��. 
#define		PIPE_COMMAND_REMOVAL_READ_BLOCK_CONTENT_N	2107
#define		PIPE_COMMAND_REMOVAL_READ_BLOCK_CONTENT		"RemovalReadBlockpContent"
// end, 20140112, added by parkdo2001, �б� ��� ���� �����̰� ����̹� ��������� Ȯ��. 
// ----------------------------------------

// ----------------------------------------
// start, 20140915, added by parkdo2001, ���μ��� ���� ���� �α� ����  
#define		PIPE_COMMAND_APPLICATION_EXECUTE_CONTROL_N	2108
#define		PIPE_COMMAND_APPLICATION_EXECUTE_CONTROL	"ProcessApplicationExecuteControl" 
// end, 20140915, added by parkdo2001, ���μ��� ���� ���� �α� ����
// ----------------------------------------

#define	PIPE_COMMAND_PIPROTECTOR_START_AGENT_RESTART_N		2201
#define	PIPE_COMMAND_PIPROTECTOR_START_AGENT_RESTART		"PIProtectorStarAgentRestart"

#define	PIPE_COMMAND_PIPROTECTOR_PERMIT_AGENT_CLOSE_N		2202
#define	PIPE_COMMAND_PIPROTECTOR_PERMIT_AGENT_CLOSE			"PIProtectorPermitAgentClose"

#define	PIPE_COMMAND_PIPROTECTOR_GET_HOOK_CONFIG_LEN_N		2203
#define	PIPE_COMMAND_PIPROTECTOR_GET_HOOK_CONFIG_LEN		"PIProtectorGetHookConfigLen"

#define	PIPE_COMMAND_PIPROTECTOR_GET_HOOK_CONFIG_N			2204
#define	PIPE_COMMAND_PIPROTECTOR_GET_HOOK_CONFIG			"PIProtectorGetHookConfig"

#define	PIPE_COMMAND_PIPROTECTOR_COPY_CONFIG_FOLDER_N		2205
#define	PIPE_COMMAND_PIPROTECTOR_COPY_CONFIG_FOLDER			"PIProtectorCopyConfigFolder"

#define	PIPE_COMMAND_PIPROTECTOR_IS_ALLOW_WINDOW_STOREAPP_N 2206
#define	PIPE_COMMAND_PIPROTECTOR_IS_ALLOW_WINDOW_STOREAPP	"PIProtector_Is_Allow_Window_StoreApp"

#define		PIPE_COMMAND_CHECK_LOGIN_STATE_N			2207
#define		PIPE_COMMAND_CHECK_LOGIN_STATE				"CheckLoginState"

#define		PIPE_COMMAND_CHECK_RUN_STATE_N				2208
#define		PIPE_COMMAND_CHECK_RUN_STATE				"CheckRunState"

// �ֵ�� ����
typedef struct _UploadAddonInfo {
	CHAR		szCommand[MAX_PATH];
	CHAR		szProcessName[MAX_PATH];
	int			nProcessId;
} UploadAddonInfo;

typedef struct _UploadAddonInfoW {
//	WCHAR		wszCommand[MAX_PATH];
	WCHAR		wszProcessName[MAX_PATH];
	int			nProcessId;
} UploadAddonInfoW;


// PIPipeClient.h�� �ڸ��� �����ؾ� �Ѵ�.
//#define		PIPE_COMMAND_PROCESS_CONTENT_N					2311
//#define		PIPE_COMMAND_PROCESS_CONTENT					"ProcessPrintContent"

//#define		PIPE_COMMAND_NETWORK_CONTENT_N					2321				
//#define		PIPE_COMMAND_NETWORK_CONTENT					"ProcessNetworkContent"			  // sally add 20111021

//#define		PIPE_COMMAND_NETWORK_CONTENTN_N					2331
//#define		PIPE_COMMAND_NETWORK_CONTENTN					"ProcessNetworkContentN"		  // ���ε� ���� ��� �޽���

//#define		PIPE_COMMAND_CHECK_WARN_MESSAGE_N				2341
//#define		PIPE_COMMAND_CHECK_WARN_MESSAGE					"CheckWarnMessage"

//#define		PIPE_COMMAND_CHECK_NETWORK_WARN_MESSAGE_N		2351
//#define		PIPE_COMMAND_CHECK_NETWORK_WARN_MESSAGE			"CheckNetworkWarnMessage" // sally add 20111021

//#define		PIPE_COMMAND_SENDSM_CONTENT_N					2361
//#define		PIPE_COMMAND_SENDSM_CONTENT						"SendShardMemoryContent"		  // sally add 20111102 Receiver�� ���. (IE ��ȣ���) 

// -
// ���� ����
//#define		PIPE_COMMAND_NETWORK_CONTENT_CONTROL_N			2371
//#define		PIPE_COMMAND_NETWORK_CONTENT_CONTROL			"ProcessNetworkContentControl"	// POST ������ ���� �� �˻�

//#define		PIPE_COMMAND_NETWORK_CONTENT_CLOSE_N			2381
//#define		PIPE_COMMAND_NETWORK_CONTENT_CLOSE				"ProcessNetworkContentClose"	// POST ������ ���� �� �˸�
// -

// 20130201 add rikky : ������ �������� �ܺο��� �������� �뵵
#define		PIPE_COMMAND_GET_CONFIG_N						2391
#define		PIPE_COMMAND_GET_CONFIG							"GetConfig"						// 

#define		PIPE_SUB_COMMAND_IS_ENABLE_MAIL_BODY_SCAN_W		L"EnableMailBodyScan"
#define		PIPE_SUB_COMMAND_IS_ENABLE_MAIL_BODY_SCAN		"EnableMailBodyScan"

#define		PIPE_SUB_COMMAND_IS_ENABLE_NETWORK_FILE_SCAN_W	L"EnableNetworkFileScan"
#define		PIPE_SUB_COMMAND_IS_ENABLE_NETWORK_FILE_SCAN	"EnableNetworkFileScan"

//#define		PIPE_COMMAND_CLIPBOARD_CONTENT_N				2421
//#define		PIPE_COMMAND_CLIPBOARD_CONTENT					"ProcessClipboardContent"


// ----------------------------------------
// start, 20121002, added by parkdo2001, mtp ���� 
//#define		PIPE_COMMAND_MTP_CONTENT_N						2431
//#define		PIPE_COMMAND_MTP_CONTENT						"ProcessMtpContent"
// end, 20121002, added by parkdo2001, mtp ���� 
// ----------------------------------------

// ----------------------------------------
// start, 20111125, added by rikky, �������� ���� ����.
//#define		PIPE_COMMAND_PRIVACY_FILE_COPY_N				2441
//#define		PIPE_COMMAND_PRIVACY_FILE_COPY					"ProcessPrivacyFileCopy"

//#define		PIPE_COMMAND_PRIVACY_FILE_MOVE_N				2451
//#define		PIPE_COMMAND_PRIVACY_FILE_MOVE					"ProcessPrivacyFileMove"
// end, 20111125,  added by rikky, �������� ���� ����.
// ----------------------------------------
// add, 20120810, added by sally, ���ø����̼� ��Ʈ�� ��å. 
#define		PIPE_COMMAND_APPLICATION_CONTENT_N				2461
#define		PIPE_COMMAND_APPLICATION_CONTENT				"ProcessApplicationContent" 

//#define		PIPE_COMMAND_PRINT_CONTENT_PRE_N				2471
//#define		PIPE_COMMAND_PRINT_CONTENT_PRE					"PreCheckPrintContent"

//#define		PIPE_COMMAND_PRINT_CONTENT_EACH_PAGE_N			2481
//#define		PIPE_COMMAND_PRINT_CONTENT_EACH_PAGE			"PreCheckEachPagePrintContent"	// sally add 20140820
// end, 20120810, added by sally, ���ø����̼� ��Ʈ�� ��å.

// add, 20140915, added by parkdo2001, ���ø����̼� ���� ���� �α� 
//#define		PIPE_COMMAND_APPLICATION_EXECUTE_CONTROL_N		2491
//#define		PIPE_COMMAND_APPLICATION_EXECUTE_CONTROL		"ProcessApplicationExecuteControl" 
// add, 20140915, added by parkdo2001, ���ø����̼� ���� ���� �α� 

// IP/Port ���� �˸� (Chrome/Firefox/Outlook �ֵ�� �̼�ġ)
//#define		PIPE_COMMAND_IP_PORT_CONTROL_N					2501
//#define		PIPE_COMMAND_IP_PORT_CONTROL					"ProcessIpPortControl"


/////////////////////////////////////////////////////////////////////
// start, [6/3/2013 sally] Copy + ��ȭ , S-oil �ݿ�
//#define		PIPE_COMMAND_WRITE_REMOVAL_DRIVE_N				2511
//#define		PIPE_COMMAND_WRITE_REMOVAL_DRIVE				"CopyPlusContent"

//#define		PIPE_COMMAND_DELETE_FILE_N						2521
//#define		PIPE_COMMAND_DELETE_FILE						"FileDelete"
// end, [6/3/2013 sally] Copy + ��ȭ , S-oil �ݿ�
/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
// PIAgent ����� ���
#define	 PIPE_COMMAND_PIAGENT_EXIT_N						2531
#define	 PIPE_COMMAND_PIAGENT_EXIT							"RequestPIAgentExit" // parkdo2001 add 20140919   
/////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
// Written by taehwa. 2015.06.30
// PIAgent ȭ����ݱ�� ( ����� ���� )
#define PIPE_COMMAND_PIAGENT_USER_VERIFY_N                  2541
#define PIPE_COMMAND_PIAGENT_USER_VERIFY                    "RequestPIAgentUserVerify"
///////////////////////////////////////////////////////////////////////////////////////////////////////

// PIAgent ȭ����ݱ�� ( ����� ���� )
#define PIPE_COMMAND_PIAGENT_CHANGE_USER_N 					2542
// PIAgent ȭ����ݱ�� ( ��й�ȣ ����)
#define PIPE_COMMAND_PIAGENT_CHANGE_PASSWORD_N 				2543
// ����ڿ� ���� PIAgent ���ν��� ����
#define PIPE_COMMAND_PIAGENT_NOTIFY_UNINSTALL_N				2544
// �����ڿ� ���� PIAgent ���ν��� ����
#define PIPE_COMMAND_PIAGENT_NOTIFY_UNINSTALL_BYADMIN_N		2545

#define PIPE_COMMAND_PIAGENT_ISOUTLOOKADDINACIVE_N			2546


///////////////////////////////////////////////////////////////////////////////////////////////////////
// Written by taehwa. 2016.02.01
#define PIPE_COMMAND_PIAGENT_QT_DISKFULL_MSG_N              2548
#define PIPE_COMMAND_PIAGENT_QT_DISKFULL_MSG                "RequestPIAgentQTDiskFull"
///////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// ���� �߾�ȭ ����
#define	PIPE_COMMAND_CDS_QUARANTINE_FILES_USER_N			2601
#define	PIPE_COMMAND_CDS_QUARANTINE_FILES_SCAN_N			2602
#define	PIPE_COMMAND_CDS_REGISTER_FILES_USER_N				2611
#define	PIPE_COMMAND_CDS_REGISTER_FILES_SCAN_N				2612
#define	PIPE_COMMAND_CDS_UNREGISTER_FILES_N					2621
#define	PIPE_COMMAND_CDS_MODIFIED_FILES_N					2631
#define	PIPE_COMMAND_CDS_RESUME_UPDATE_N					2641
#define	PIPE_COMMAND_CDS_STOP_UPDATE_N						2651
#define	PIPE_COMMAND_CDS_DELETE_FILES_N						2661
#define PIPE_COMMAND_CDS_DELETE_FILES_DRM_N					2662	// DRM ���μ����� ����ȭ ������ ������ ���
#define	PIPE_COMMAND_CDS_RELEASE_FILES_N					2671

#define	PIPE_COMMAND_CDS_LIST_FILES_N						2801	// PIPE_COMMAND_EXPLORER_LIST_FILES_N
#define	PIPE_COMMAND_CDS_GET_USER_INFORMATION_N				2802
#define PIPE_COMMAND_CDS_GET_FILE_LIST_COUNT_N				2803
#define	PIPE_COMMAND_CDS_GET_FILE_LIST_N					2804
#define	PIPE_COMMAND_CDS_DOWNLOAD_FILES_N					2805
#define	PIPE_COMMAND_CDS_GET_FILE_DOWNLOAD_STATE_N			2806
#define PIPE_COMMAND_CDS_GET_WINDOW_HWND_BY_PROCESSID_N		2900
#define	PIPE_COMMAND_CDS_OPEN_FILE_N						2911	// PIPE_COMMAND_EXPLORER_OPEN_FILE_N
#define	PIPE_COMMAND_CDS_REQUEST_UNQUARANTINE_N				2912	// ���� �ݸ� ���� ��û ���
#define	PIPE_COMMAND_CDS_REQUEST_UNQUARANTINE2_N			2913	// ���� �ݸ� ���� ��û ���

#define	PIPE_COMMAND_CDS_QUARANTINE_FILES_S					_T("Quarantine")
#define	PIPE_COMMAND_CDS_REGISTER_FILES_S					_T("Register")
#define	PIPE_COMMAND_CDS_UNREGISTER_FILES_S					_T("Unregister")
#define	PIPE_COMMAND_CDS_MODIFIED_FILES_S					_T("Modified")
#define	PIPE_COMMAND_CDS_RESUME_UPDATE_S					_T("Resume")
#define	PIPE_COMMAND_CDS_STOP_UPDATE_S						_T("Stop")
#define	PIPE_COMMAND_CDS_DELETE_FILES_S						_T("Delete")
#define	PIPE_COMMAND_CDS_RELEASE_FILES_S	
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_MOUNT_N			2701
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_DB_N				2702
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_FILTER_N			2703
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_DISKSPACE_N		2704
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_FILENOTFOUND_N		2705
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_QUARANTINE_N		2706
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_RELEASE_N			2707
#define	PIPE_COMMAND_PWMANAGER_LOG_ERROR_DELETE_N			2708

#define PIPE_COMMAND_PWMANAGER_EVENT_QUARANTINE_DISKSPACE_CHANGE_N	2801	// CDS�� ������� �ʴ� ���, PICLIENT�� ��ũ ������ ���� �̺�Ʈ�� PIAGENT�� ������ ���� �����
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// Ž����
#define	PIPE_COMMAND_EXPLORER_LIST_FILES_N					3001
#define	PIPE_COMMAND_EXPLORER_OPEN_FILE_N					3002
#define	PIPE_COMMAND_EXPLORER_REQUEST_UNQUARANTINE_FILES_N	3003
#define	PIPE_COMMAND_EXPLORER_UPLOAD_FILES_N				3004
#define	PIPE_COMMAND_EXPLORER_UNQUARANTINE_FILES_N			3005
#define PIPE_COMMAND_EXPLORER_DELETE_FILES_N				3006
#define	PIPE_COMMAND_EXPLORER_VIEW_DETAIL_N					3007
//////////////////////////////////////////////////////////////////////////

// PISupervisor�� ���� CreateProcessAsUser
#define	PIPE_COMMAND_PISUPERVISOR_CREATE_PROCESS_AS_USER	"PISupervisorCreateProcessAsUser"



