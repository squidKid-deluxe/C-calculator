/*

   ____      _      ____         ____  
  / ___|__ _| | ___|___ \       / ___| 
 | |   / _` | |/ __| __) |     | |     
 | |__| (_| | | (__ / __/   _  | |___  
  \____\__,_|_|\___|_____| (_)  \____| 
                                       

This is a very simple C++ script, only 57 lines without comments.
It can do multiplication, division, addition, and subtraction.
*/

// Include the i/o and system libaries
#include <iostream>
#include <cstdlib>
// So I don't have to type 'std::' on every cout/cin
using namespace std;

// Create varibles
int product;
int Num;
int Num2;
char x;
string greeting;

// Clearing the screen.
void clear() {
	system("clear");
}

// main process
int main() {
	// Clear the screen
	clear();
	// The greeting/instructions
	greeting = """Hi! This is a C++ calculator.\nTo use it enter either:\n\t1) *,\n\t2) /,\n\t3) -, or\n\t4) +.\n""";
	// Output the greeting
	cout << greeting;
	// Get the operation
	cin >> x;
	// Clear the screen
	clear();
	// Ask for the first number...
	cout << "\nNow, enter the first number:\n";
	cin >> Num;
	// Clear the screen
	clear();
	// ... and ask for the second.
	cout << "\nFinally, enter the first number:\n";
	cin >> Num2;
	// Clear the screen
	clear();
	// Begin a switch command
	switch(x) {
		// If 'x' is '*', multiply
		case '*':
			product = Num * Num2;
			cout << Num << " times " << Num2 << " is " << product << '\n';
			break;

		// If 'x' is '/', divide
		case '/':
			product = Num / Num2;
			cout << Num << " divided by " << Num2 << " is " << product << '\n';
			break;

		// If 'x' is '-', subtract
		case '-':
			product = Num - Num2;
			cout << Num << " minus " << Num2 << " is " << product << '\n';
			break;

		// If 'x' is '+', add
		case '+':
			product = Num + Num2;
			cout << Num << " plus " << Num2 << " is " << product << '\n';
			break;

		// Else, print invalid input
		default:
			cout << "Sorry, invalid input.";
	}
	return 0;
}
