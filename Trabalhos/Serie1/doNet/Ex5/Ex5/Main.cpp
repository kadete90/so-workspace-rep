// Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <tchar.h>
#include "../ExifDLL/ExifDll.h"

int main(int argc, _TCHAR * argv[])
{
	ExifApi:PrintExifTags(argv[1]);

	return 0;
}
