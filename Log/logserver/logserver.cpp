// logserver.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "loggingserver.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int ret = 0;
#ifdef _DEBUG
	ret = logserver(9999, "..\\configfile\\log4cplusserver.properties");
#else
	ret = logserver(9999, "log4cplusserver.properties");
#endif

	return ret;
}

