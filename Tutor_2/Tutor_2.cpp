#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(static_cast<int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	std::cout << "\tWelcome to Guess My Number\n\n";
	do
	{
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		++tries;
		if (guess > secretNumber) {
			std::cout << "Too high!\n\n";
		}
		else if (guess < secretNumber) {
			std::cout << "Too low!\n\n";
		}
		else {
			std::cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
}