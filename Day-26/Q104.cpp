// Create quiz application

#include <iostream>
using namespace std;

int main()
{
    char playAgain = 'Y';

    while (playAgain == 'Y' || playAgain == 'y')
    {
        int score = 0;
        char answer;

        cout << "=====================================\n";
        cout << "      GENERAL SCIENCE QUIZ\n";
        cout << "=====================================\n";

        // Question 1
        cout << "\n1. Which planet is known as the Red Planet?\n";
        cout << "A. Earth\n";
        cout << "B. Mars\n";
        cout << "C. Venus\n";
        cout << "D. Jupiter\n";
        cout << "Your answer: ";
        cin >> answer;

        if (answer == 'B' || answer == 'b')
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Oops! The correct answer is B. Mars.\n";
        }

        // Question 2
        cout << "\n2. Which gas do plants absorb from the atmosphere?\n";
        cout << "A. Oxygen\n";
        cout << "B. Nitrogen\n";
        cout << "C. Carbon Dioxide\n";
        cout << "D. Hydrogen\n";
        cout << "Your answer: ";
        cin >> answer;

        if (answer == 'C' || answer == 'c')
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Oops! The correct answer is C. Carbon Dioxide.\n";
        }

        // Question 3
        cout << "\n3. Which is the largest organ in the human body?\n";
        cout << "A. Heart\n";
        cout << "B. Liver\n";
        cout << "C. Brain\n";
        cout << "D. Skin\n";
        cout << "Your answer: ";
        cin >> answer;

        if (answer == 'D' || answer == 'd')
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Oops! The correct answer is D. Skin.\n";
        }

        // Question 4
        cout << "\n4. What is the chemical formula of water?\n";
        cout << "A. CO2\n";
        cout << "B. H2O\n";
        cout << "C. O2\n";
        cout << "D. NaCl\n";
        cout << "Your answer: ";
        cin >> answer;

        if (answer == 'B' || answer == 'b')
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Oops! The correct answer is B. H2O.\n";
        }

        // Question 5
        cout << "\n5. Which part of a plant carries out photosynthesis?\n";
        cout << "A. Root\n";
        cout << "B. Stem\n";
        cout << "C. Leaf\n";
        cout << "D. Flower\n";
        cout << "Your answer: ";
        cin >> answer;

        if (answer == 'C' || answer == 'c')
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Oops! The correct answer is C. Leaf.\n";
        }

        double percentage = (score / 5.0) * 100;

        cout << "\n=====================================\n";
        cout << "             RESULT\n";
        cout << "=====================================\n";
        cout << "You scored " << score << " out of 5.\n";
        cout << "Percentage: " << percentage << "%\n";

        if (percentage == 100)
            cout << "Excellent! You got every question right.\n";
        else if (percentage >= 80)
            cout << "Great job! You have a strong understanding of science.\n";
        else if (percentage >= 60)
            cout << "Good effort! A little more practice will help.\n";
        else if (percentage >= 40)
            cout << "Not bad. Keep learning and you'll improve.\n";
        else
            cout << "Keep practicing. You'll do better next time!\n";

        cout << "\nWould you like to play again? (Y/N): ";
        cin >> playAgain;
    }

    cout << "\nThanks for playing! Have a great day.\n";

    return 0;
}