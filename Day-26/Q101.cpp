// Create number guessing game

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());

    char rePlay = 'y';
    int bestScore = 0;

    cout << "=================================\n";
    cout << "   WELCOME TO THE GUESSING GAME  \n";
    cout << "=================================\n";

    while (rePlay == 'y' || rePlay == 'Y')
    {
        int choice;
        int maxNumber;

        cout << "\nChoose Difficulty:\n";
        cout << "1. Easy   (1 - 50)\n";
        cout << "2. Medium (1 - 100)\n";
        cout << "3. Hard   (1 - 500)\n";
        cout << "\nEnter choice: ";

        while (!(cin >> choice) || choice < 1 || choice > 3)
        {
            cout << "Invalid choice. Enter 1, 2, or 3: ";

            cin.clear();
            cin.ignore(10000, '\n');
        }
        switch (choice)
        {
        case 1:
            maxNumber = 50;
            break;

        case 2:
            maxNumber = 100;
            break;

        case 3:
            maxNumber = 500;
            break;
        }
        uniform_int_distribution<> dist(1, maxNumber);
        int secretNum = dist(gen);

        int guess = 0;
        int attempts = 0;

        cout << "\nI have chosen a number between 1 and "
             << maxNumber << ".\n";
        cout << "Can you guess it?\n";

        while (guess != secretNum)
        {
            cout << "\nEnter your guess: ";

            if (!(cin >> guess))
            {
                cout << "Invalid input. Please enter a valid number.\n";

                cin.clear();
                cin.ignore(10000, '\n');

                continue;
            }
            if (guess < 1 || guess > maxNumber)
            {
                cout << "Please enter a number between 1 and "
                     << maxNumber << ".\n";

                continue;
            }
            attempts++;

            if (guess > secretNum)
            {
                if (guess - secretNum <= 5)
                    cout << "Very close! Try a lower number.\n";
                else
                    cout << "Too high! Try a lower number.\n";
            }
            else if (guess < secretNum)
            {
                if (secretNum - guess <= 5)
                    cout << "Very close! Try a higher number.\n";
                else
                    cout << "Too low! Try a higher number.\n";
            }
            else
            {
                cout << "\nCongratulations! You guessed it right!\n";
                cout << "Attempts: " << attempts << '\n';

                if (bestScore == 0 || attempts < bestScore)
                {
                    bestScore = attempts;
                    cout << "New Best Score!\n";
                }

                cout << "Best Score: " << bestScore << '\n';
            }
        }
        cout << "\nPlay again? (y/n): ";
        cin >> rePlay;
    }
    cout << "\nThanks for playing!\n";

    return 0;
}