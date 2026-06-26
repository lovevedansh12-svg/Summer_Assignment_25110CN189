// Create voting eligibility system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    string name[MAX];
    int age[MAX];
    string status[MAX];
    string reason[MAX];

    int total = 0;
    int eligible = 0;
    int notEligible = 0;

    int choice = 1;

    while (choice == 1)
    {
        string voterName;
        int voterAge;
        char citizen;
        char voterID;

        cout << "Enter voter name: ";
        cin >> voterName;

        cout << "Enter age: ";
        cin >> voterAge;

        if (voterAge < 0 || voterAge > 120)
        {
            cout << "Invalid age!\n";
            continue;
        }
        cout << "Are you an Indian citizen? (Y/N): ";
        cin >> citizen;

        cout << "Do you have a voter ID? (Y/N): ";
        cin >> voterID;

        bool canVote = true;
        string why = "";

        if (voterAge < 18)
        {
            canVote = false;
            why += "Underage";
        }
        if (citizen == 'N' || citizen == 'n')
        {
            canVote = false;

            if (why != "")
                why += ", ";

            why += "Not a citizen";
        }
        if (voterID == 'N' || voterID == 'n')
        {
            canVote = false;

            if (why != "")
                why += ", ";

            why += "No voter ID";
        }
        name[total] = voterName;
        age[total] = voterAge;

        if (canVote)
        {
            status[total] = "Eligible";
            reason[total] = "-";
            eligible++;
        }
        else
        {
            status[total] = "Not Eligible";
            reason[total] = why;
            notEligible++;
        }
        total++;

        cout << "\n1. Add another voter";
        cout << "\n2. Exit\n";
        cout << "\nEnter choice: ";
        cin >> choice;
        cout << endl;
    }
    cout << "\n\n----- VOTER REPORT -----";
    cout << "\nName\tAge\tStatus\t\tReason\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < total; i++)
    {
        cout << name[i] << "\t"
             << age[i] << "\t"
             << status[i] << "\t"
             << reason[i] << endl;
    }
    cout << "\nTotal voters: " << total;
    cout << "\nEligible voters: " << eligible;
    cout << "\nNot eligible voters: " << notEligible;

    if (total > 0)
    {
        double percent = (double)eligible * 100 / total;
        cout << "\nEligibility percentage: " << percent << "%";
    }
    cout << endl;

    return 0;
}