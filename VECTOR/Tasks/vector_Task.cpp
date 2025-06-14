
// // * =======================  Task  =================================================================================
// /*
// Task:
// Write a C++ program that demonstrates the difference between emplace and emplace_back when inserting elements into a vector.
// Ensure you:
// - Add at least three different elements using emplace_back.
// - Insert an element at a specific position using emplace.
// - Display the vector contents before and after insertion.
// - Handle edge cases where an element might be inserted at the beginning or end of the vector.

// */

// #include <iostream>
// #include <vector>
// using namespace std;

// void CreateVector(vector<int> &vec)
// {

//     vec.emplace_back(30);
//     vec.emplace_back(40);
//     vec.emplace_back(50);
// }

// void insertAtBeginning(vector<int> &vec)
// {
//     if (!vec.empty())
//     {
//         vec.emplace(vec.begin(), 10);
//     }
//     else
//     {
//         cout << "Vector is empty";
//     }
// }

// void insertAtEnd(vector<int> &vec)
// {
//     if (!vec.empty())
//     {
//         vec.emplace_back(90);
//     }
//     else
//     {
//         cout << "Vector is empty";
//     }
// }

// int main()
// {
//     vector<int> vec;

//     cout << "Vector Before Insertion : ";
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     CreateVector(vec);
//     insertAtBeginning(vec);
//     insertAtEnd(vec);

//     cout << "Vector After Insertion : ";
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

//* Question :
/*

You have a vector of integers: {10, 20, 30, 40, 50}.
Perform the following operations step by step:
- Use push_back() to add two new elements: 60 and 70.
- Insert the value 25 at the second position using insert().
- Add the value 35 between 30 and 40 using emplace().
- Assign {100, 200, 300} to replace the entire vector using assign().
- Erase the last element using erase().
- Use empty() to check if the vector is empty.
Constraints:
- Print the vector before and after each operation.
- Ensure boundary conditions are handled to avoid errors.
- Consider edge cases where insert() or erase() might exceed valid indices.

 */
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &vec)
{
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

void UsingPushBackAddElements(vector<int> &vec)
{
    cout << "Vector Before Insertion 60,70: ";
    display(vec);

    if (!vec.empty())
    {
        vec.push_back(60);
        vec.push_back(70);
    }
    else
    {
        cout << "Vector is empty\n";
    }

    cout << "Vector After Insertion 60,70: ";
    display(vec);
}

void insertElement(vector<int> &vec)
{
    cout << "Vector Before Insert 25 at second position: ";
    display(vec);

    if (!vec.empty())
    {
        vec.insert(vec.begin() + 1, 25);
    }
    else
    {
        cout << "Vector is empty\n";
    }

    cout << "Vector After Insert 25 at second position: ";
    display(vec);
}

void addElementUsingEmplace(vector<int> &vec)
{
    cout << "Vector Before Adding 35 between 30 and 40: ";
    display(vec);

    if (!vec.empty() && vec.size() > 4)
    {
        vec.emplace(vec.begin() + 4, 35);
    }
    else
    {
        cout << "Vector does not have enough elements to safely insert 35\n";
    }

    cout << "Vector After Adding 35 between 30 and 40: ";
    display(vec);
}

void assignNewValueToVector(vector<int> &vec)
{
    cout << "Vector Before Assigning New Values: ";
    display(vec);

    vec.assign({100, 200, 300});

    cout << "Vector After Assigning New Values: ";
    display(vec);
}

void eraseLastElement(vector<int> &vec)
{
    cout << "Vector Before Erasing Last Element: ";
    display(vec);

    if (!vec.empty())
    {
        vec.erase(vec.end() - 1);
    }
    else
    {
        cout << "Vector is empty\n";
    }

    cout << "Vector After Erasing Last Element: ";
    display(vec);
}

void checkVectorIsEmpty(vector<int> &vec)
{
    cout << "Checking Vector Status: ";
    if (vec.empty())
    {
        cout << "Vector is empty\n";
    }
    else
    {
        cout << "Vector is NOT empty\n";
    }
}

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Vector Initially: ";
    display(vec);

    UsingPushBackAddElements(vec);
    insertElement(vec);
    addElementUsingEmplace(vec);
    assignNewValueToVector(vec); // Resets vector completely
    eraseLastElement(vec);
    checkVectorIsEmpty(vec);

    return 0;
}