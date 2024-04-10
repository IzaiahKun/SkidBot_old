#include<iostream>
#include <chrono>
#include <ctime>
#include <windows.h>	

using namespace std;
		

void SkidBot3() {
cout << "SkidBot3 is opening... \n"; 
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
		L"C:\\Users\\ttcpi\\Documents\\VRCBots3\\notbot3\\Bot3\\start_protected_game.exe",
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
		cout << "Create Process Success Bot#3 \n";
	}
	cout << "Bot#3 Process ID -> " << pi.dwProcessId << endl;
	cout << "Bot#3 Thread IDv -> " << pi.dwThreadId << endl;
	cout << "Bot#3 GetProcessId -> " << GetProcessId(pi.hProcess) << endl;
	cout << "Bot#3 GetThreadId -> " << GetThreadId(pi.hThread) << endl;
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
}