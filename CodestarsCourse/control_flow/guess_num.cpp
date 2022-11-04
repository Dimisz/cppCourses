#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int random_num = rand() % 100 + 1;
    int user_guess;
    int attempts = 0;
    
    while(true)
    {
        attempts++;
        cout << "Guess a number from 1 to 100: " << endl;
        cin >> user_guess;
        
        if(user_guess == random_num)
        {
            cout << "Congratulations! You guessed the number in " << attempts << " guesses." << endl;
            break;
        }
        else if(user_guess < random_num)
        {
            cout << "Your guess is too low." << endl;
        }
        else
        {
            cout << "Your guess is too high." << endl;
        }
        
        cout << random_num << endl;
    }
    
    
    return 0;
}
