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
//     names.insert({"Nepal", "ITLY", "USA", "Korea", "USA"});
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



// #include <iostream>
// #include <unordered_set>

// using namespace std;

// int main()
// {
//     unordered_set<string> countries;

//     // Insert
//     countries.insert("ITLY");
//     countries.insert("USA");
//     countries.insert("UK");
//     countries.insert("ITLY"); // Duplicate, won't be added

//     // Traverse
//     cout << "Countries: ";
//     for (const string &c : countries)
//         cout << c << " ";
//     cout << endl;

//     // Check if "USA" exists

//     if (countries.find("UK") != countries.end())
//     {
//         cout << "UK found" << endl;
//     }

//     // Remove "UK"
//     countries.erase("UK");

//     // Size
//     cout << "Size = " << countries.size() << endl;

//     // Check empty
//     cout << (countries.empty() ? "Set is empty" : "Set is not empty") << endl;

//     // Clear
//     countries.clear();

//     cout << "After clearing, size = " << countries.size() << endl;

//     return 0;
// }


