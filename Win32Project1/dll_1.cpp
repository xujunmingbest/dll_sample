#define DLL_IMPLEMENT

#include "dll_1.h"
#include <windows.h>
#include <intrin.h>
#include <stdlib.h>

#include <string.h>

int DLL_API add(int x, int y) {
	return x + y;
}

DLL_API const wchar_t* getPlayUrl(const wchar_t *mgrIp, long mgrPort, long materialId)
{
	static wchar_t url[260] = { 0 };
	wcscpy_s(url, L"http://中文");
	wcscat_s(url, mgrIp);
	wcscat_s(url, L":");
	wchar_t szPort[20] = { 0 };
	_ltow_s(mgrPort, szPort,10);
	wcscat_s(url, szPort);
	return url;
}

DLL_API const char* getUrl(const char *mgrIp, long mgrPort, long materialId)
{
	static char url[260] = { 0 };
	strcpy_s(url, "http://中文");
	strcat_s(url, mgrIp);
	strcat_s(url, ":");
	char szPort[20] = { 0 };
	_ltoa_s(mgrPort, szPort, 10);
	strcat_s(url, ":");
	strcat_s(url, szPort);
	return url;
}
