//? 11-7-24

//? Stack Data Structure
//* operations :- push(), pop(), top(), isEmpty(), size().
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int> s;  // creating a stack of integers
//     s.push(5);
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     cout << "Stack Elements : ";
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }

//  #include<bits / stdc++.h>
// using namespace std;

// int TopElement(stack<int> &s)
// {
//     return s.top();
// }
// int main()
// {
//     stack<int> s;
//     s.push(1);
//     cout << TopElement(s);

//     s.push(2);
//     cout << TopElement(s);

//     s.push(3);
//     cout << TopElement(s);

//     s.push(4);
//     cout << TopElement(s);

//     return 0;
// }

// ? Stack isEmpty()
// #include <bits/stdc++.h>
// using namespace std;

// bool IsEmptyCkeck(stack<int> &s)
// {
//     bool check = s.empty();
//     return check;
// }

// int main()
// {
//     stack<int> s;
//     if (IsEmptyCkeck(s))
//     {
//         cout << "Empty stack" << endl;
//     }
//     else
//     {
//         cout << "IS not empty ";
//     }

//     s.push(22);

//     if (IsEmptyCkeck(s))
//     {
//         cout << "Empty stack" << endl;
//     }
//     else
//     {
//         cout << "IS not empty ";
//     }

//         return 0;
// }

//? ------ Stack   =>  push , pop , top , empty

// #include <iostream>
// #define n 100
// using namespace std;
// class stack
// {  // private memebers
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];  // n = 100
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "Stack overflow";
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "NO elemeent to pop in Stack " << endl;
//             return;
//         }
//         top--;
//     }
//     int Top()
//     {
//         if (top == -1)
//         {
//             cout << "NO element in Stack " << endl;
//             return -1;
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top == -1;
//     }

// };

// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.Top() << endl;
//     st.pop();
//     cout << st.Top() << endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout << st.empty() << endl;

//     return 0;
// }


// ?

// #include <bits/stdc++.h>
// using namespace std;
// bool checkStackIsEmpty(stack<int> &s)
// {
//     bool checkFunc = s.empty();
//     return checkFunc;
// }

// int TopElement(stack<int> &s)
// {
//     return s.top();
// }

// int StackSize(stack<int> &s)
// {
//     return s.size();
// }

// int main()
// {
//     stack<int> s;

//     if (checkStackIsEmpty(s))
//     {
//         cout << "Stack is empty." << endl;
//     }
//     else
//     {
//         cout << "Stack is not empty." << endl;
//     }

//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     if (checkStackIsEmpty(s))
//     {
//         cout << "Stack is empty." << endl;
//     }
//     else
//     {
//         cout << "Stack is not empty." << endl;
//     }

//     cout << TopElement(s) << endl;
//     cout << StackSize(s) << endl;

    

//     return 0;
// }



