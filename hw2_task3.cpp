#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int NumberGenerator();
bool CheckUniqueNumber(int number);
void CalculatingProgramDigits(int& program_Num_digit1, int& program_Num_digit2, int& program_Num_digit3, int& program_Num_digit4, int program_Number);
void CalculatingUserDigits(int& user_Num_d1, int& user_Num_d2, int& user_Num_d3, int& user_Num_d4, int user_Num);


int main()
{
	srand(time(0));
	unsigned int program_Num = 0;
	unsigned int user_Num = 0;
	int option = 0;
	int countBulls = 0;
	int countCows = 0;
	int user_Num_d1 = 0;
	int user_Num_d2 = 0;
	int user_Num_d3 = 0;
	int user_Num_d4 = 0;
	int program_Num_d1 = 0;
	int program_Num_d2 = 0;
	int program_Num_d3 = 0;
	int program_Num_d4 = 0;

	program_Num = NumberGenerator();
	CalculatingProgramDigits(program_Num_d1, program_Num_d2, program_Num_d3, program_Num_d4, program_Num);
	CalculatingUserDigits(user_Num_d1, user_Num_d2, user_Num_d3, user_Num_d4, user_Num);

	cout << "Choose how many games do you want to play!" << endl;
	cout << "1. 1 game" << endl;
	cout << "2. 3 out of 5" << endl;



}
//Checking if all of the numbers are unique (Do not repeat)
bool CheckUniqueNumber(int number) {
	int d1 = number / 1000;
	int d2 = (number / 100) % 10;
	int d3 = (number / 10) % 10;
	int d4 = number % 10;

	return (d1 != d2 && d1 != d3 && d1 != d4 &&
		d2 != d3 && d2 != d4 &&
		d3 != d4);
}

//This will generate a random number for the game
int NumberGenerator() {
	int number;

	do {
		number = rand() % 9000 + 1000;
	} while (!CheckUniqueNumber(number)); 

	return number;
}
//Seprates the program number  one by one so they can be compared later
void CalculatingProgramDigits(int& program_Num_d1, int& program_Num_d2, int& program_Num_d3, int& program_Num_d4, int program_Num) {
		program_Num_d1 = (program_Num / 1000) % 10;
		program_Num_d2 = (program_Num / 100) % 10;
		program_Num_d3 = (program_Num / 10) % 10;
		program_Num_d4 = program_Num % 10;
}

//Seprates the user number one by one so they can be compared later
void CalculatingUserDigits(int& user_Num_d1, int& user_Num_d2, int& user_Num_d3, int& user_Num_d4, int user_Num) {
	user_Num_d1 = (user_Num / 1000) % 10;
	user_Num_d2 = (user_Num / 100) % 10;
	user_Num_d3 = (user_Num / 10) % 10;
	user_Num_d4 = user_Num % 10;
}

//Compares the program and user numbers
void ComparingNumbers(int user_Num_d1,int user_Num_d2,int user_Num_d3,int user_Num_d4, int program_Num_d1, int program_Num_d2, int program_Num_d3, int program_Num_d4, int) {
	if()
}
