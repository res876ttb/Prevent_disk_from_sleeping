#include <fstream>

#define _WIN32_WINNT 0x0500
#include <windows.h>
using namespace std;

int main() {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	while (true) {
		ofstream fout;
		fout.open(".tmp_file");
		fout << "DontSleep!" << endl;
		fout.close();
		Sleep(120000);
	}
	return 0;
}
