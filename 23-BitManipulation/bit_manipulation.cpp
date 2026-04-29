#include <bits/stdc++.h>
using namespace std;

// Utility functions for bit manipulation
int setBit(int num, int pos)
{
    return num | (1 << pos);
}

int clearBit(int num, int pos)
{
    return num & ~(1 << pos);
}

int toggleBit(int num, int pos)
{
    return num ^ (1 << pos);
}

bool checkBit(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}

int countSetBits(int num)
{
    int count = 0;
    while (num)
    {
        num &= (num - 1); // Brian Kernighan’s algorithm
        count++;
    }
    return count;
}

bool isPowerOfTwo(int num)
{
    return num > 0 && (num & (num - 1)) == 0;
}

int reverseBits(int num, int bitSize = 32)
{
    int result = 0;
    for (int i = 0; i < bitSize; i++)
    {
        if (num & (1 << i))
            result |= (1 << (bitSize - 1 - i));
    }
    return result;
}

void printBinary(int num, int bitSize = 8)
{
    for (int i = bitSize - 1; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

// Generate all subsets using bitmask
void generateSubsets(vector<int> arr)
{
    int n = arr.size();
    int total = 1 << n;
    cout << "All subsets:\n";
    for (int mask = 0; mask < total; mask++)
    {
        cout << "{ ";
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                cout << arr[i] << " ";
            }
        }
        cout << "}\n";
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n================ Bit Manipulation Playground ================\n";
        cout << "1. Set a bit\n";
        cout << "2. Clear a bit\n";
        cout << "3. Toggle a bit\n";
        cout << "4. Check if bit is set\n";
        cout << "5. Count set bits\n";
        cout << "6. Check if number is power of two\n";
        cout << "7. Reverse bits\n";
        cout << "8. Print binary representation\n";
        cout << "9. Generate subsets using bitmask\n";
        cout << "10. Exit\n";
        cout << "=============================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int num, pos;
            cout << "Enter number and bit position: ";
            cin >> num >> pos;
            cout << "Result: " << setBit(num, pos) << endl;
        }
        else if (choice == 2)
        {
            int num, pos;
            cout << "Enter number and bit position: ";
            cin >> num >> pos;
            cout << "Result: " << clearBit(num, pos) << endl;
        }
        else if (choice == 3)
        {
            int num, pos;
            cout << "Enter number and bit position: ";
            cin >> num >> pos;
            cout << "Result: " << toggleBit(num, pos) << endl;
        }
        else if (choice == 4)
        {
            int num, pos;
            cout << "Enter number and bit position: ";
            cin >> num >> pos;
            cout << "Bit " << pos << " is " << (checkBit(num, pos) ? "SET" : "NOT SET") << endl;
        }
        else if (choice == 5)
        {
            int num;
            cout << "Enter number: ";
            cin >> num;
            cout << "Set bits count: " << countSetBits(num) << endl;
        }
        else if (choice == 6)
        {
            int num;
            cout << "Enter number: ";
            cin >> num;
            cout << (isPowerOfTwo(num) ? "Yes, power of two" : "No, not power of two") << endl;
        }
        else if (choice == 7)
        {
            int num;
            cout << "Enter number: ";
            cin >> num;
            cout << "Reversed bits: " << reverseBits(num) << endl;
        }
        else if (choice == 8)
        {
            int num;
            cout << "Enter number: ";
            cin >> num;
            cout << "Binary: ";
            printBinary(num, 16);
        }
        else if (choice == 9)
        {
            int n;
            cout << "Enter size of array: ";
            cin >> n;
            vector<int> arr(n);
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            generateSubsets(arr);
        }
        else if (choice == 10)
        {
            cout << "Exiting program. Goodbye!\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 10);

    return 0;
}
