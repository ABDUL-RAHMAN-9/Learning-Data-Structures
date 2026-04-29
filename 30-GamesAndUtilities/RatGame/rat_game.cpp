#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Game(int amount_bet, int *cash)
{
    char Hole[3] = {'N', 'R', 'N'};
    cout << "\nRat is shuffling its position. Please Wait !!\n";
    srand(time(NULL));
    int i, x, y, temp;

    for (i = 0; i < 5; ++i)
    {
        x = rand() % 3;
        y = rand() % 3;
        temp = Hole[x];
        Hole[x] = Hole[y];
        Hole[y] = temp;
    }

    int PlayerGuess;
    cout << "\n\nYou may now guess the Hole in which Rat is Present (1-3): ";
    cin >> PlayerGuess;

    if (Hole[PlayerGuess - 1] == 'R')
    {
        (*cash) += 2 * amount_bet;
        cout << "You won! The holes are: " << Hole[0] << " " << Hole[1] << " " << Hole[2] << endl;
        cout << "Your Cash is now = " << *cash << endl;
    }
    else
    {
        (*cash) -= amount_bet;
        cout << "You lose! The holes are: " << Hole[0] << " " << Hole[1] << " " << Hole[2] << endl;
        cout << "Your Cash is now = " << *cash << endl;
        cout << "------------------------------------------------" << endl;
    }
}

int main()
{
    int amount_bet, cash;
    cout << "---------------Enter the cash Right Now-----------------\n";
    cout << "Enter here : ";
    cin >> cash;

    while (cash > 0)
    {
        cout << "\nEnter the amount of bet: ";
        cin >> amount_bet;
        if (cash == 0 || amount_bet > cash)
            break;
        Game(amount_bet, &cash);
    }

    if (cash == 0 || amount_bet > cash)
    {
        cout << "\nSorry You don't have enough cash to play.\n";
        cout << "Thank you for playing." << endl;
    }

    return 0;
}
