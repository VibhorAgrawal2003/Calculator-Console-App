#include "Handle.h"
#include "Colors.h"
#include "Macros.h"

using namespace std;

/* Text Formatting Functions */

void setColor(int k) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, k);
}

void setLeft(int k, std::string s) {
	for (int i = 0; i < k; i++) std::cout << " ";
	std::cout << s;
}

void setCenter(std::string s) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	PCONSOLE_SCREEN_BUFFER_INFO lpScreenInfo = new CONSOLE_SCREEN_BUFFER_INFO(); 
	GetConsoleScreenBufferInfo(hConsole, lpScreenInfo); 
	COORD NewSBSize = lpScreenInfo->dwSize; 
	if (NewSBSize.X > s.size()) {
		int newpos = ((NewSBSize.X - (int)s.size()) / 2); 
		for (int i = 0; i < newpos; i++) std::cout << " ";
	}
	std::cout << s << std::endl;
}

int getCenter(std::string s) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	PCONSOLE_SCREEN_BUFFER_INFO lpScreenInfo = new CONSOLE_SCREEN_BUFFER_INFO();
	GetConsoleScreenBufferInfo(hConsole, lpScreenInfo);
	COORD NewSBSize = lpScreenInfo->dwSize;

	return ((NewSBSize.X > s.size()) ? ((NewSBSize.X - (int)s.size()) / 2) : 0);
}

/* Console Handling Functions */

void pause() {
	setColor(YELLOW);
	setLeft(MARGIN, "");
	system("pause");
	std::cout << "\n";
}

void clear() {
	system("cls");
}

void error(string s) {
	setColor(RED);
	std::cout << endl;
	setLeft(MARGIN, s);
	std::cout << endl;
	pause();
}

void sleep(int t) {
	return;
}


/* IO Handling Functions */

int grabInt() {
	int k;
	cin >> k;
	cin.clear();
	cin.ignore(1000, '\n');
	return k;
}

char grabChar() {
	char c;
	cin >> c;
	cin.clear();
	cin.ignore(1000, '\n');
	return c;
}