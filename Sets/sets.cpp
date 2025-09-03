// ! 02-sept-2025
// * Set :- A Set is a collection of unique elements (no duplicates).

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