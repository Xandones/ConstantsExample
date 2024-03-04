#include <iostream>
// To use #define instead of a constant variable you need to define it after the includes whitout semicolon. Examble bellow:
//#define LIVES_NUMBER 10

int main()
{
	const int LIVES_NUMBER = 10;

	int LivesAmount = LIVES_NUMBER - 1;
	std::cout << "Total of lives: " << LivesAmount << '\n';
	std::cout << "Constant value LIVES_NUMBER: " << LIVES_NUMBER << '\n'; 
	std::cout << "Constant LIVES_NUMBER memory address: " << &LIVES_NUMBER << '\n'; // If you try to verify where's the address of something set through #define, the compiler will throw an error.

	system("PAUSE");
}
