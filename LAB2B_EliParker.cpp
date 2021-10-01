#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	int number;
	int guess;
	int guesses = 0;
	bool isguessed;
	
	cout << " I am thinking of a number between 1 and 100.... ";
	
	srand(time(0));
	number = rand() % 100;
	
	
	isguessed = false;
	
	while (!isguessed)
	{
		
		cout << " please enter a number ";
		cin >> guess;
		
		guesses ++;
		
		if (guess == number)
		{
			
			cout << " congratulations! you guessed the correct number in " << guesses << " guesses ";
			isguessed = true;
		}
		else if (guess < number)
		cout << " Sorry, but the number you entered was too low! ";
		
		else 
		
		cout << " Sorry, but the number you have guessed is too high! ";
	}
	
	return 0;
	
	

}