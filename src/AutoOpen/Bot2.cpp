#include <iostream>
#include <chrono>
#include <ctime>
#include <windows.h>

using namespace std;

//Bot#2
void SkidBot2() {
	cout << "SkidBot2 is opening... \n";
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
		L"C:\\Users\\ttcpi\\Documents\\VRCBots2\\notbot2\\Bot2\\start_protected_game.exe",
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
		cout << "Create Process Success Bot#2 \n";
	}
	cout << "Bot#2 Process ID -> " << pi.dwProcessId << endl;
	cout << "Bot#2 Thread ID -> " << pi.dwThreadId << endl;
	cout << "Bot#2 GetProcessId -> " << GetProcessId(pi.hProcess) << endl;
	cout << "Bot#2 GetThreadId -> " << GetThreadId(pi.hThread) << endl;
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
}