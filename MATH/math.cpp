#include <iostream>
#include <string>
using namespace std;

bool isArmstrong(int n)
{
    int copyN = n;
    int sumOfCubes = 0;

    while (n != 0)
    {
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);
        n = n / 10;
    }
    return sumOfCubes == copyN;
}

int main()
{
    int n = 153;
    if (isArmstrong(n))
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "This is NOT That one!";
    }

    return 0;
}