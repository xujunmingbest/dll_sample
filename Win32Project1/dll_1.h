#pragma once

#ifdef DLL_IMPLEMENT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

DLL_API int add(int x, int y);
DLL_API const wchar_t* getPlayUrl(const wchar_t *mgrIp, long mgrPort, long materialId);
DLL_API const char* getUrl(const char *mgrIp, long mgrPort, long materialId);
