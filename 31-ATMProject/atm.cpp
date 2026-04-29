#include <bits/stdc++.h>
using namespace std;

void showMenu()
{
    cout << "-------------- Menu --------------" << endl;
    cout << "1. Check Balance." << endl;
    cout << "2. Deposit." << endl;
    cout << "3. Withdraw." << endl;
    cout << "4. Exit." << endl;
    cout << "**********************************" << endl;
}

int main()
{
    int options;
    double balance = 500;
    double deposit;
    double withdraw;

    do
    {
        showMenu();
        cout << "Options: ";
        cin >> options;

        system("cls"); // clears the screen (Windows)

        switch (options)
        {
        case 1:
            cout << "Balance is : " << balance << "$" << endl;
            break;

        case 2:
            cout << "Deposit amount: ";
            cin >> deposit;
            balance += deposit;
            break;

        case 3:
            cout << "Withdraw amount: ";
            cin >> withdraw;
            if (withdraw <= balance)
            {
                balance -= withdraw;
            }
            else
            {
                cout << "Sorry! You don't have enough Money." << endl;
            }
            break;

        case 4:
            cout << "Exiting ATM. Thank you!" << endl;
            break;

        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (options != 4);

    return 0;
}
