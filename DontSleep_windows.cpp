#include <fstream>

#define _WIN32_WINNT 0x0500
#include <windows.h>
using namespace std;

int main() {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	while (true) {
		ofstream fout;
		fout.open(".dontsleep");
		fout << "DontSleep!" << endl;
		fout.close();
		system("del .dontsleep");
		Sleep(120000);
	}
	return 0;
}
