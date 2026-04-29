#include <iostream>
using namespace std;

int main()
{
    int guess, secret_num = 6;
    int i, limit = 3;
    bool flag = true;

    for (i = 1; i <= limit; ++i)
    {
        cout << "Enter the number : ";
        cin >> guess;
        if (guess == secret_num)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "You won the game !!!!" << endl;
    }
    else
    {
        cout << "Sorry You can't have guesses!!!" << endl;
    }

    return 0;
}
