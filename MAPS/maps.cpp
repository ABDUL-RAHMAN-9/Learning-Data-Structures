// ! Map : which is a sorted associative container.

// #include <iostream>
// #include <map>

// using namespace std;

// int main()
// {
//     map<int, string> mp;

//     mp = {
//         {7, "Seven"},
//         {1, "One"},
//         {4, "Four"},
//         {10, "Ten"},
//         {3, "Three"},
//         {6, "Six"},
//         {2, "Two"},
//         {9, "Nine"},
//         {5, "Five"},
//         {8, "Eight"}};

//     map<int, string>::iterator it;

//     mp.emplace(12, "Twelve");

//     cout << "Inital value :" << endl;
//     for (it = mp.begin(); it != mp.end(); it++)
//     {
//         cout << it->second << ", ";
//     }

 
//     // Erase by key and by iterator
//     mp.erase(5);
//     mp.erase(mp.begin()); // erase first element (key=1)

//     cout << "Final value :" << endl;
//     for (auto &[key, value] : mp)
//     {
//         cout << value << ", ";
//     }

//     return 0;
// }