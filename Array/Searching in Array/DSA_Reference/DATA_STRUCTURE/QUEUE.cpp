// #include <bits/stdc++.h>
// using namespace std; //! Queue: enqueue, dequeue,isEmpty,isFull, size.

// class solution
// {
// public:
//     void insert(queue<int> &q, int k)
//     {
//         q.push(k);
//     }
//     int findFrequency(queue<int> &q, int k)
//     {
//         int currFreuency = 0;
//         int h = q.size();

//         while (h)
//         {
//             h = h - 1;
//             int x = q.front();
//             q.pop();

//             if (x == k)
//             {
//                 currFreuency += 1;
//             }
//             q.push(x);
//         }
//         return currFreuency;
//     }
// };
// int main()
// {
//     queue<int> q;
//     int N = 8;
//     int a[N] = {1, 2, 3, 4, 5, 2, 3, 1};
//     int M = 5;
//     int b[M] = {1, 3, 2, 9, 10};
//     solution obj;

//     for (int i = 0; i < N; i++)
//     {
//         obj.insert(q,a[i]);
//     }
//     for (int i = 0; i < M; i++)
//     {
//         int f = obj.findFrequency(q, b[i]);
//         if (f != 0)
//         {
//             cout << f << " ";
//         }
//         else
//         {
//             cout << ("-1") << " ";
//         }
//     }

//     return 0;
// }

