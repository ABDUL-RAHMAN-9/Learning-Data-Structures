// #include <iostream>
// #include <set>
// #include <unordered_set>
// #include <functional> // for greater
// using namespace std;

// void displayDescendingOrderSet(const set<int, greater<int>> &numbers)
// {
//     for (int num : numbers)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// void displayAscendingOrderSet(const set<int> &numbers)
// {
//     for (int num : numbers)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// void displayNames(unordered_set<string> &names)
// {
//     for (string name : names)
//     {
//         cout << name << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     unordered_set<string> names;

//     // Descending order set
//     set<int, greater<int>> numbers = {1, 2, 177, 32, 3, 4, 5, 5};

//     // Ascending order set
//     set<int> values = {87, 12, 45, 103, 76, 5, 29, 64, 98, 37};

//     // Insert names (unordered)
//     names.insert({"Nepal", "India", "USA", "Korea", "USA"});
//     names.insert("UK");

//     cout << "Names : ";
//     displayNames(names);

//     cout
//         << "Descending Order : ";
//     displayDescendingOrderSet(numbers);

//     cout << "Ascending Order : ";
//     displayAscendingOrderSet(values);

//     return 0;
// }
