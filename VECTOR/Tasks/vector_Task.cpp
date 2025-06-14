
// * =======================  Task  =================================================================================
/*
Task:
Write a C++ program that demonstrates the difference between emplace and emplace_back when inserting elements into a vector.
Ensure you:
- Add at least three different elements using emplace_back.
- Insert an element at a specific position using emplace.
- Display the vector contents before and after insertion.
- Handle edge cases where an element might be inserted at the beginning or end of the vector.

*/

#include <iostream>
#include <vector>
using namespace std;

void CreateVector(vector<int> &vec)
{

    vec.emplace_back(30);
    vec.emplace_back(40);
    vec.emplace_back(50);
}

void insertAtBeginning(vector<int> &vec)
{
    if (!vec.empty())
    {
        vec.emplace(vec.begin(), 10);
    }
    else
    {
        cout << "Vector is empty";
    }
}

void insertAtEnd(vector<int> &vec)
{
    if (!vec.empty())
    {
        vec.emplace_back(90);
    }
    else
    {
        cout << "Vector is empty";
    }
}

int main()
{
    vector<int> vec;

    cout << "Vector Before Insertion : ";
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    CreateVector(vec);
    insertAtBeginning(vec);
    insertAtEnd(vec);

    cout << "Vector After Insertion : ";
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}