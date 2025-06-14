// ! Doubly linked list
// ? It don't allow ramdom access
#include <bits/stdc++.h>
using namespace std;

int main()
{
   list<int> l;
   l.push_back(1);
   l.emplace_back(2);
   
   l.push_front(3);
   l.emplace_front(4);

   // 4,3,1,2

   //! use pop_back() = remove back element
   // ! use pop_front() = remove fornt elelment
   
   l.pop_back();
   l.pop_front();

   // 3,1

   for (auto i : l)
   {
      cout << i << " ";
   }

   return 0;
}