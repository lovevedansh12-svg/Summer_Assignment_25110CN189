// Create ATM simulation

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pin = "1234";
    string enteredPin;
    string choice;

    double balance = 5000.0;
    double amount;

    int attempts = 0;
    const int maxAttempts = 6;

    while (true)
    {
        cout << "\n========== ATM MENU ==========\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == "5")
        {
            cout << "\nThank you for using our ATM.\n";
            break;
        }
        if (choice != "1" && choice != "2" &&
            choice != "3" && choice != "4")
        {
            cout << "\nInvalid choice.\n";
            continue;
        }
        cout << "\nEnter your 4-digit PIN: ";
        cin >> enteredPin;

        attempts++;

        bool valid = true;

        for (char ch : enteredPin)
        {
            if (ch < '0' || ch > '9')
            {
                valid = false;
                break;
            }
        }
        if (enteredPin.length() != 4 || !valid)
        {
            cout << "\nInvalid PIN.\n";
            cout << "Attempts remaining: " << maxAttempts - attempts << endl;

            if (attempts >= maxAttempts)
            {
                cout << "\nToo many incorrect attempts.\n";
                cout << "Your account has been blocked.\n";
                return 0;
            }
            continue;
        }
        if (enteredPin != pin)
        {
            cout << "\nIncorrect PIN.\n";
            cout << "Attempts remaining: "
                 << maxAttempts - attempts << endl;

            if (attempts >= maxAttempts)
            {
                cout << "\nToo many incorrect attempts.\n";
                cout << "Your account has been blocked.\n";
                return 0;
            }
            continue;
        }
        attempts = 0;

        if (choice == "1")
        {
            cout << "\nCurrent Balance: Rs. "
                 << balance << endl;
        }
        else if (choice == "2")
        {
            cout << "\nEnter deposit amount: Rs. ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "\nDeposit successful.\n";
                cout << "Updated Balance: Rs. " << balance << endl;
            }
            else
            {
                cout << "\nInvalid amount.\n";
            }
        }
        else if (choice == "3")
        {
            cout << "\nEnter withdrawal amount: Rs. ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "\nInvalid amount.\n";
            }
            else if (amount > balance)
            {
                cout << "\nInsufficient balance.\n";
            }
            else
            {
                balance -= amount;
                cout << "\nWithdrawal successful.\n";
                cout << "Remaining Balance: Rs. "
                     << balance << endl;
            }
        }
        else if (choice == "4")
        {
            string newPin;

            cout << "\nEnter new 4-digit PIN: ";
            cin >> newPin;

            valid = true;

            for (char ch : newPin)
            {
                if (ch < '0' || ch > '9')
                {
                    valid = false;
                    break;
                }
            }
            if (newPin.length() != 4 || !valid)
            {
                cout << "\nInvalid PIN.\n";
            }
            else if (newPin == pin)
            {
                cout << "\nNew PIN cannot be the same as the current PIN.\n";
            }
            else
            {
                pin = newPin;
                cout << "\nPIN changed successfully.\n";
            }
        }
    }
    return 0;
}