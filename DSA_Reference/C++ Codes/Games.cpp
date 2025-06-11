
// ! Number guessing game
// #include <iostream>
// using namespace std;
// int main()
// {

//     int guess, secret_num = 6;
//     int i, limit = 3;
//     bool flag = true;

//     for (i = 1; i <= limit; ++i)
//     {

//         cout << "Enter the number :";
//         cin >> guess;
//         if (guess != secret_num)
//         {
//             continue;
//             flag = false;
//             break;
//         }
//     }

//     if (flag)
//     {
//         cout << "You won the game !!!!" << endl;
//     }
//     else
//     {
//         cout << "Sorry You can't have guesses!!!" << endl;
//     }

//     return 0;
// }








// ? THE LEGEND'S GAME !!!

// #include <bits\stdc++.h>
// using namespace std;

//     void game() 

//     {
//         int ans[5] , ans_count = 0; correct = 0;
//         int answer[5] = {1600,779,69,80,121};
//         string question[5] = {"Q.1] 40 x 40 = _____","Q.2] 999 - 33-87-100 = ___","Q.3] What is 22 + 47 = ____","Q.4] 58 - 3 - 5 + 30  = ___","Q.5] 120 + 240 + 400 - 240 - 400 + 1 = ___"};

//         cout << "\n ********************** WELCOME TO THE LEGENDS GAME ******************************"<<endl;


// tryagain:
//     for(int i = 0 ; i < 5 ; ++i)
//     {
//         cout << question[i] <<endl;
//         cin >> ans[i];

//             if(ans[i] != 0 )
//             {
//                 correct++;
//                 cout << "Correct Answer!";
//             }
//             else 
//             {
//                  cout << "Wrong Answer"<<endl;
//             cout << "Answer = "<< answer[i] <<endl;
//             }
//     }

//         if(correct >= 3)
//         {
//             cout <<"Congratulations ! You have completed this level.\n";
//             cout << "Total no. of Questions asked is 5";
             
//         }

//         else 
//         {
//             cout << "You Failed! Try again!! \n";
//             cout << "Total no. of Questions asked is 5";
//             goto tryagain;
//         }
//     }


// // rematch:
    
//             // cout << "\n ********************** WELCOME TO THE LEGENDS GAME ******************************"<<endl;
        

// int main ()
//  {


//     char choice;

//     void game();  

//     // cout << "DO you want to play again ? "<<endl;
//     // cout << "Yes = 'Y' OR No = 'N' "<<endl;

//     // cin >> choice;
//     // if (choice == 'y' || choice  == 'n')
//     // {
//     //     goto rematch;
//     // }
//     // else 
//     // cout << "COme later play again "<<endl;

//     return 0;
// }



//  ! This is the Best Calculator

// #include <iostream>
// using namespace std;

// int main () 
// {
//     cout << "------------------------------ This is the Best Calculator --------------------------------------\n\n"<<endl;
//     //? Getting the user input first
//     char  oper ;
//     double num1 , num2;

//     cout << "First enter Operator for Calculation :  ";
//     cin >> oper;

//     cout << "Now Enter the Two number for Calculation :"<<endl;
//     cin >> num1 >> num2;


//     if(oper == '+')
//     {
//         cout << num1 << " + "<<num2 << " = "<< num1 + num2 <<endl;
//     } 
//     else if (oper == '-')
//     {
//         cout << num1 << " - "<<num2 << " = "<< num1 - num2 <<endl;
//     }
//     else if (oper == '*')
//     {
//         cout << num1 << " * "<<num2 << " = "<< num1 * num2 <<endl;
//     }
//     else if (oper == '/')
//     {
//         cout << num1 << " / "<<num2 << " = "<< num1 / num2 <<endl;
//     }
//     else 
//     {
//         cout << "Your are entering the Wrong Operator!!!!!!!!!!!!"<<endl;
//     }

//     return 0;
// }





// ! The Rat Game

// #include <iostream>
// #include <cstdlib>
// #include <time.h> 
// using namespace std;

// void Game(int amount_bet, int *cash)
// {
//     char Hole[3] = {'N', 'R', 'N'};
//     cout <<"\nRat is shuffling its position. Please Wait !!\n";
//     srand((time(NULL)));
//     int i, x, y, temp;

//     for (i = 0; i < 5; ++i)
//     {
//         x = rand() % 3;
//         y = rand() % 3;
//         temp = Hole[x];
//         Hole[x] = Hole[y];
//         Hole[y] = temp;
//     }

//     int PlayerGuess;
//     cout <<("\n\nYou may now guess the Hole in which Rat is Present : ");
//     cin >>PlayerGuess;

//     //? Here we are [ - ] using because we enter the 1 not 0 that's why
//     //? So like we enter 1 it will be 0 and for computer it is ...
//     if (Hole[PlayerGuess - 1] == 'R')
//     {
//         (*cash) += 2 * amount_bet;
//         cout <<"You won ! The holes are as follows: ";
//         cout << Hole[1], Hole[2], Hole[3];
//         cout <<"\nYour Cash is now = "<< *cash;
//     }
//     else
//     {
//         (*cash) -= amount_bet;
//         cout <<"You lose ! The holes are as follows: ";
//         cout << Hole[1], Hole[2], Hole[3];
//         cout <<"\nYour Cash is now = "<< *cash;
//         cout <<"\n------------------------------------------------";
//     }
// }

// int main () 
// {

//      int amount_bet, cash;
//     cout <<("---------------Enter the cash Right Now----------------- \n");
//     cout <<" Enter here : ";
//     cin>> cash;

//     while (cash > 0)

//     {
//         cout <<"\nEnter the amount of bet:- ";
//         cin>> amount_bet;
//         if (cash == 0 || amount_bet > cash)
//             break;
//             Game(amount_bet, &cash);

//     }

//     if (cash == 0 || amount_bet > cash)
//     {
//         cout <<"\nSorry You don't have enough cash to play.\n";
//         cout <<"Thanks you for playing.";
//     }
       

//     return 0;
// }
