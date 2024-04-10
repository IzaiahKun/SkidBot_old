#include <iostream>
#include <windows.h>

using namespace std;


void SkidBot1() {
	cout << "SkidBot1 is opening... \n";
	HANDLE hProcess;
	HANDLE hThread;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	DWORD dwProcessId = 0;
	DWORD dwThreadId = 0;
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	BOOL bCreateProcess = NULL;
	bCreateProcess = CreateProcess(
		L"C:\\Users\\ttcpi\\Documents\\VRCBots1\\notbot1\\Bot1\\start_protected_game.exe",
		NULL,
		NULL,
		NULL,
		FALSE,
		0,
		NULL,
		NULL,
		&si,
		&pi);

	if (bCreateProcess == FALSE)
	{
		cout << "Create Process Failed & Error No - " << GetLastError() << endl;
	}
	else
	{
		cout << "Create Process Success Bot#1 \n";;
	}

	cout << "Bot#1 Process ID -> " << pi.dwProcessId << endl;
	cout << "Bot#1 Thread ID -> " << pi.dwThreadId << endl;
	cout << "Bot#1 GetProcessId -> " << GetProcessId(pi.hProcess) << endl;
	cout << "Bot#1 GetThreadId -> " << GetThreadId(pi.hThread) << endl;
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);

	//add more process for the number of bots//

	//after the game has opened
}
