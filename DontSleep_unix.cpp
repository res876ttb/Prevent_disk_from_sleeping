#include <fstream>
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	while (true) {
		ofstream fout;
		fout.open(".tmp_file");
		fout << "DontSleep!" << endl;
		fout.close();
		sleep(120);
	}
	return 0;
}
