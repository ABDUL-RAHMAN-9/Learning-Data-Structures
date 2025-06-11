//? C++ Coding Problems Solve

//* 14-6-24
//! 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, sum;
//     cout << "Enter two numbers: ";
//     cin >> num1;
//     cout << "Enter two numbers: ";
//     cin >> num2;
//     sum = num1 + num2;
//     cout << num1 << " + " << num2 << " = " << sum << endl;

//     return 0;
// }

//! 2 :- Here we are swapping the numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int temp, num1, num2;
//     cout << "Here we are swapping the numbers:"<< endl;

//     cout << "----------------------------------------------------------" << endl;
//     cout << "Enter number1 : ";
//     cin >> num1;
//     cout << "Enter number2 : ";
//     cin >> num2;

//     cout << "------------- Before swapping ------------" << endl;

//     cout << "num1 = " << num1 << " num2 = " << num2 <<"\n"<< endl;

//     cout << "------------ After swapping -----------" << endl;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     cout << "num1 = " << num1 << " num2 = " << num2 << endl;

//     return 0;
// }

// ! 3 :-  Write a C++ program that calculates the volume of a sphere.

//* Formula : -(4/3) * π * r^3

// #include <iostream>
// using namespace std;
// int main ()
// {
//     cout << "Calculating the volume of a sphere: \n"
//          << endl;
//     int radius;
//     float volume;
//     cout << "Input radius ";
//     cin >> radius;

//     volume = (4 * 3.14 * radius * radius * radius) / 3;

//     cout << "The volume of a sphere is: " << volume<< endl;

//     return 0;
// }

// ! 4 : Calculating the volume of a cube
//? Formula : V = a x a x a = a3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int side_length;
//     float volume_cube;
//     cout << "Calculating the volume of a sphere: \n" << endl;

//     cout << "Input radius :";
//     cin >> side_length;

//     volume_cube = side_length * side_length * side_length;

//     cout << "The volume of a sphere is: " << volume_cube << endl;

//     return 0;
// }

//! 5 : Printing 1 -10 from descending order

//! 6 : Using function swapping two number entered by teh user

// #include <iostream>
// using namespace std;

// void swapping(int a, int b)
// {
//     cout << "Num1: " << a  << endl << "Num2: " << b << endl;
// }
// int main()
// {

//     int a;
//     int b;
//     cout << "Enter num1 : ";
//     cin >> a;
//     cout << "Enter num2 : ";
//     cin >> b;

//     //? using temp swapping the numbers
//     // int temp;
//     // temp = x;
//     // x = y;
//     // y = temp;

//     //? using multiplication and division for swapping
//     a = a * b; // a = 50
//     b = a / b; // b = 5
//     a = a / b; // a = 10

//     //? using only two values swap
//     // a = a + b;
//     // b = a - b;
//     // a = a - b;

//     cout << "After swapping the number ---------" << endl;

//     swapping(a, b);

//     return 0;
// }


 
//! 7 : Check wether the a character is vowel or constant

// #include <stdio.h>

// int main()
// {
//     char ch;

//     /* Input character from user */
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     /* Condition for vowel */
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//     {
//         printf("'%c' is Vowel.", ch);
//     }
//     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         /* Condition for consonant */
//         printf("'%c' is Consonant.", ch);
//     }
//     else
//     {
//         /*
//          * If it is neither vowel nor consonant
//          * then it is not an alphabet.
//          */
//         printf("'%c' is not an alphabet.", ch);
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello Coders";

    return 0;
}