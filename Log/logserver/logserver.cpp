// logserver.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "loggingserver.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//int ret = logserver(9999, "..\\configfile\\log4cplusserver.properties");
	int ret = logserver(9999, "log4cplusserver.properties");
	return 0;
}

