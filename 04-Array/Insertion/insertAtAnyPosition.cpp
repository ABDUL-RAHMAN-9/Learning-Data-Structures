// #include <iostream>
// using namespace std;

// void insertElementAtAnyPosition(int arr[], int n, int position, int newElement)
// {
//     // shift elements to the right
//     // which are on the right side of pos
//     for (int i = n - 1; i >= position; i--)

//         arr[i + 1] = arr[i];

//     arr[position] = newElement;
// }

// int main()
// {
//     int arr[10] = {10, 20, 30, 40, 50, 60};
//     int n = 6;

//     int i, newElement = 100, position = 3;

//     cout
//         << "Before Insertion: ";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     // Inserting position
//     insertElementAtAnyPosition(arr, n, position, newElement);
//     n++;
//     cout << "\nAfter Insertion: ";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }