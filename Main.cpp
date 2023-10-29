#include "PCH.h"
#include "Main.h"
#include "Handle.h"
#include "Colors.h"

typedef long long int ll;
using namespace std;

#define MARGIN getCenter("-----------------------------------")

/* List of function prototypes */
int mainWindow();
void addWindow();
void subWindow();
void mulWindow();
void divWindow();
void expWindow();
void modWindow();

/* Command Line Interface Functions */

int mainWindow() {
	clear();
	setColor(BLUE);
	setCenter("CALCULATOR APPLICATION");
	std::cout << endl;

	setColor(AQUA);
	setLeft(MARGIN, "Enter 1 for Addition\n");
	setLeft(MARGIN, "Enter 2 for Subtraction\n");
	setLeft(MARGIN, "Enter 3 for Multiplication\n");
	setLeft(MARGIN, "Enter 4 for Division\n");
	setLeft(MARGIN, "Enter 5 for Exponentiation\n");
	setLeft(MARGIN, "Enter 6 for Modulus\n");
	setLeft(MARGIN, "Enter 7 to exit application\n");

	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "Choice? ");

	int choice = grabInt();

	if (choice == 1) {
		addWindow();
	}

	else if (choice == 2) {
		subWindow();
	}

	else if (choice == 3) {
		mulWindow();
	}

	else if (choice == 4) {
		divWindow();
	}

	else if (choice == 5) {
		expWindow();
	}

	else if (choice == 6) {
		modWindow();
	}

	else if (choice == 7) {
		return 1;
	}

	else {
		error("Invalid option entered.");
	}

	return 0;
}


void addWindow() {
	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "First Integer: ");
	int x = grabInt();
	setLeft(MARGIN, "Second Integer: ");
	int y = grabInt();

	setColor(AQUA);
	setLeft(MARGIN, "");
	std::cout << "Sum: " << x + y << "\n\n";
	pause();
}

void subWindow() {
	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "First Integer: ");
	int x = grabInt();
	setLeft(MARGIN, "Second Integer: ");
	int y = grabInt();

	setColor(AQUA);
	setLeft(MARGIN, "");
	std::cout << "Difference: " << x - y << "\n\n";
	pause();
}

void mulWindow() {
	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "First Integer: ");
	int x = grabInt();
	setLeft(MARGIN, "Second Integer: ");
	int y = grabInt();

	setColor(AQUA);
	setLeft(MARGIN, "");
	std::cout << "Product: " << x * y << "\n\n";
	pause();
}

void divWindow() {
	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "First Integer: ");
	int x = grabInt();
	setLeft(MARGIN, "Second Integer: ");
	int y = grabInt();

	setColor(AQUA);
	if (y != 0) {
		setLeft(MARGIN, "");
		std::cout << "Quotient: " << x / y << "\n\n";
	}
	else {
		error("Invalid operation : Division by zero is undefined.");
	}
	pause();
}

void expWindow() {
	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "First Integer: ");
	int x = grabInt();
	setLeft(MARGIN, "Second Integer: ");
	int y = grabInt();

	setColor(AQUA);
	setLeft(MARGIN, "");
	std::cout << "Result: " << pow(x,y) << "\n\n";
	pause();
}

void modWindow() {
	setColor(GREEN);
	std::cout << endl;
	setLeft(MARGIN, "First Integer: ");
	int x = grabInt();
	setLeft(MARGIN, "Second Integer: ");
	int y = grabInt();

	setColor(AQUA);
	setLeft(MARGIN, "");
	std::cout << "Remainder: " << x % y << "\n\n";
	pause();
}


int main()
{
	while (true) {
		int code = mainWindow();

		if (code == 0) {
			continue;
		}

		else if (code == 1) {
			setColor(YELLOW);
			std::cout << endl;
			setLeft(MARGIN, "Shut down console application ? (Y / N)");
			char choice = grabChar();
			if (choice == 'Y') {
				break;
			}
			else if (choice == 'N') {
				continue;
			}
			else {
				error("Invalid option entered.");
				continue;
			}
		}

	}

	setColor(GRAY);
	return 0;
}
