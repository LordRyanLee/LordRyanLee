//#include <windows.h>
//#include <iostream>
#include <stdio.h>
//#include <conio.h>

using namespace std;

int main ()
{
	Sleep(5000);

	INPUT in[4] = {};
	ZeroMemory(in, sizeof(in));

	in[0].type = INPUT_KEYBOARD;
	in[0].ki.wVk = 0x44;
	in[0].ki.dwFlags = KEYEVENTF_EXTENDEDKEY;

	in[1].type = INPUT_KEYBOARD;
	in[1].ki.wVk = 0x44;
	in[1].ki.dwFlags = KEYEVENTF_KEYUP;

	in[2].type = 0;
	in[2].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

	in[3].type = 0;
	in[3].mi.dwFlags = MOUSEEVENTF_LEFTUP;

	UINT uS = SendInput(4, in, sizeof(INPUT));
	if (uS != 4)
	{
		cout<<"Oops!"<<endl;
	}
	else
	{
		cout<<"Done!"<<endl;
	}
}
