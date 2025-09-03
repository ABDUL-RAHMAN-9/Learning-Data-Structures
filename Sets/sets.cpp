// ! 02-sept-2025
// * Set :- When you need uniqueness + fastest lookups, order doesn’t matter.

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     unordered_set<int> mySet;

//     mySet.insert(10);
//     mySet.insert(20);
//     mySet.insert(30);
//     mySet.insert(20); // duplicate , won't be added in the set

//     cout << "Elements in set : ";
//     for (int num : mySet)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     // check if the element exists
//     if (mySet.find(20) != mySet.end())
//     {
//         cout << "20 is in the set.";
//     }
//     else
//     {
//         cout << "not present";
//     }
//     cout << endl;

//     // Erase an element

//     mySet.erase(10);
//     // Display after erase

//     cout << "after erase 10 in set : ";
//     for (int num : mySet)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     //  size of the set
//     cout << "Set size : " << mySet.size() << endl;

//     return 0;
// }

// ! set Use: - When you need uniqueness + sorted order.

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     // Create a set of integers
//     set<int> mySet;

//     // Insert elements
//     mySet.insert(10);
//     mySet.insert(40);
//     mySet.insert(20);
//     mySet.insert(30);
//     mySet.insert(20); // duplicate, won't be added

//     // Display elements (sorted order)
//     cout << "Elements in set: ";
//     for (int num : mySet)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Check if an element exists
//     if (mySet.find(20) != mySet.end())
//     {
//         cout << "20 is in the set" << endl;
//     }

//     // Erase an element
//     mySet.erase(10);

//     // Display after erase
//     cout << "After erasing 10: ";
//     for (int num : mySet)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Size of set
//     cout << "Set size: " << mySet.size() << endl;

//     return 0;
// }
