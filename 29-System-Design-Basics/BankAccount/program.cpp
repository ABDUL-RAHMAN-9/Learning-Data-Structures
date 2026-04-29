
// #include <bits/stdc++.h>
// using namespace std;
// class bankAccount
// {
// private:
//     double bankBalance;

// public:
//     void diposite(double amount)
//     {
//         if (amount > 0)
//         {
//             bankBalance += amount;
//         }
//     }
//     void withdraw(double amount)
//     {
//         if (amount > 0 || amount <= bankBalance)
//         {
//             bankBalance -= amount;
//         }
//     }
//     double getBalance() const
//     {
//         return bankBalance;
//     }
// };

// int main()
// {
//     bankAccount account;
//     account.diposite(10000);
//     account.withdraw(5000);
//     account.withdraw(300);

//     cout << "balance :" << account.getBalance();

//     return 0;
// }