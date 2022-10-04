#include <Windows.h>

// The main function looks exactly how is has to look for not showing any warning from Microsoft compiler
// Windows applications require "WinMain" or "wWinMain" function for entry point. I chose the second function because
// it handles Unicode characters and my application uses them to, so it's just for convention.
int wWinMain(_In_ HINSTANCE instance, _In_opt_ HINSTANCE previousInstance, _In_ LPWSTR commandLine, _In_ int commandShow)
{
	return 0;
}