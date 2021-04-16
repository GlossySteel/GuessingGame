// cPlusPlusTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

int main()
{
	bool keep_playing = true;

	srand(time(NULL));

	int random_number = rand() % 10;

	int user_guess = 0;

	int number_of_guesses = 0;

	

	while (keep_playing)
	{
		cout << "Guess the number:\n";
		cin >> user_guess;

		cout << endl;

		if (random_number == user_guess) {
			cout << "Correct!\n";

			keep_playing = false;
		}
		else if (random_number < user_guess) {
			cout << "Too high!\n";
		}
		else {
			cout << "Too low!\n";
		}

		number_of_guesses++;
	}

	cout << "The random number was " << random_number << " and it took " << number_of_guesses << " attempts to guess it\n";
}
