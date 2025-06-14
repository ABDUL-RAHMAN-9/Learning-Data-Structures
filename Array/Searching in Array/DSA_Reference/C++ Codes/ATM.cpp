//! 20-6-24
//* Here we are making the ATM Machine project :1

// #include <bits/stdc++.h>
// using namespace std;

// void showMenu()
// {
//     cout << "-------------- Menu --------------" << endl;
//     cout << "1. Check Balance. " << endl;
//     cout << "2. Deposit." << endl;
//     cout << "3. Withdraw. " << endl;
//     cout << "4. Exit. " << endl;
//     cout << "**********************************" << endl;
// }

// int main()
// {

//     //? Check balance , deposit , withdraw , show menu
//     int options;
//     double balance = 500;
//     double deposit;
//     double withdraw;
//     srand(time(0));
//     long int radom_num = rand() % 9999;

//     //? Program start
//     do
//     {
//         //? 1. First Enter Password

//         showMenu();

//         cout << "Options: ";
//         cin >> options;

//         system("cls");

//         switch (options)
//         {
//         case 1:
//             cout << "Balance is : " << balance << "$" << endl;
//             break;

//         case 2:
//             cout << "Deposit amount: ";
//             cin >> deposit;
//             balance += deposit;
//             break;

//         case 3:
//             cout << "Withdraw: " << endl;
//             cin >> withdraw;
//             if (withdraw <= balance)
//             {
//                 balance -= withdraw;
//             }
//             else
//             {
//                 cout << "Sorry! You don't have enough Money." << endl;
//                 break;
//             }
//         };
//     } while (options != 4);

//     return 0;
// }
