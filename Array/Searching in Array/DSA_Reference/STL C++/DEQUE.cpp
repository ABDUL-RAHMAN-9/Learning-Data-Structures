// ! removed from the front and added at the back.

// #include <bits/stdc++.h>
// using namespace std;
// void showDq(deque<int> data)
// {
//     deque<int>::iterator it;
//     for (it = data.begin(); it != data.end(); it++)
//     {
//         cout << *it << " ";
//     }
// }
// int main()
// {
//     deque<int> q;
//     q.push_back(10);
//     q.push_back(20);
//     q.push_front(30);
//     q.push_front(40);
//     showDq(q);

//     return 0;
// }

// * deque = double eneded deque
// ? It allow ramdom access

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);

    d.push_front(3);
    d.emplace_front(4);

    for (int i : d)
    {
        cout << i << " ";
    }
    // 4,3,1,2
    cout << endl;
    cout << "random acces :";
    cout << d[0];

    return 0;
}