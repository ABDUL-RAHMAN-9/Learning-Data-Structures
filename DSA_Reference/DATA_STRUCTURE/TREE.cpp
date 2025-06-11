// ? 13-sept-2024

// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };
// Node *CreateNode(int data)
// {
//     Node *newNode = new Node();
//     newNode->data = data;
//     newNode->left = newNode->right = nullptr;
//     return newNode;
// }

// int main()
// {
//     // !L1
//     Node *root = CreateNode(1);

//     // !L2
//     root->left = CreateNode(2);
//     root->right = CreateNode(3);

//     // !L3
//     root->left->left = CreateNode(4);
//     root->left->right = CreateNode(5);
//     root->right->left = CreateNode(6);
//     root->right->right = CreateNode(7);

//     // !l4
//     root->left->right->left = CreateNode(9);
//     root->right->right->left = CreateNode(15);

//     return 0;
// }

// ?DFS
// ! Tree traversal in : In-order traversal.
// * O(N)
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };

// // Func to peform tree traversal
// void InorderTreaversal(Node *root)
// {
//     if(root == nullptr)
//     {
//         return;
//     }

//     // recur on the left subtree
//     InorderTreaversal(root->left);

//     // visit the current node
//     cout << root->data << " ";

//     // recure on the right subtree
//     InorderTreaversal(root->right);
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Inorder Traversal : "<< endl;

//     InorderTreaversal(root);
//     return 0;
// }

// ? Pre-ordered traversal
// * O(N)
// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int x)
//     {
//         data = x;
//         left = right = nullptr;
//     }
// };

// void PreorderedTraversal(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     PreorderedTraversal(root->left);
//     PreorderedTraversal(root->right);
// }
// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);

//     PreorderedTraversal(root);

//     return 0;
// }

// ? Post-order Traversal
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int x)
//     {
//         data = x;
//         left = right = nullptr;
//     }
// };
// void PostOrderTraversal(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     PostOrderTraversal(root->left);
//     PostOrderTraversal(root->right);
//     cout << root->data << " ";
// }
// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     PostOrderTraversal(root);
//     return 0;
// }

// ? BFS :- Level order traversal

// #include <iostream>
// #include <queue>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
//     Node(int x)
//     {
//         data = x;
//         left = right = nullptr;
//     }
// };
// void LevelOrderTraversal(Node *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *curr = q.front();
//         q.pop();
//         cout << curr->data << " ";
//         if (curr->left)
//             q.push(curr->left);

//         if (curr->right)
//             q.push(curr->right);
//     }
// }
// int main()
// {
//     Node *root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->right->left = new Node(5);
//     root->right->right = new Node(6);

//     root->left->left->left = new Node(7);
//     root->left->left->right = new Node(8);

//     root->right->left->left = new Node(9);
//     root->right->left->right = new Node(10);

//     root->right->right->left = new Node(11);
//     root->right->right->right = new Node(12);
//     LevelOrderTraversal(root);

//     return 0;
// }

//? Sum of the Kth level of Binary Tree
/*

        1
      /   \
     2     3
    / \  /  \
   4  5  6  7    = 22

*/

// #include <iostream>
// #include <queue>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// int SumAtK(Node *root, int k)
// {
//     if (root == NULL)
//     {
//         return -1;
//     }
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     int level = 0;
//     int sum = 0;
//     while (!q.empty())
//     {
//         Node *node = q.front();
//         q.pop();
//         if (node != NULL)
//         {
//             if (level == k)
//             {
//                 sum += node->data;
//             }
//             if (node->left)
//                 q.push(node->left);

//             if (node->right)
//                 q.push(node->right);
//         }
//         else if (!q.empty())
//         {
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
//     SumAtK(root, 2);
//     return 0;
// }

//! Binary Tree:
// ? Pre, In, post, level order Treaversal
//* Pre-order DFS: Root, Left, Right
//* In-order DFS: Left, Root, Right
//* Post-order DFS: Left, Right, Root
//* Level order also. BFS

/*

        1
      /   \
     2     3
    / \  /  \
   4  5  6  7

*/
// #include <iostream>
// #include <queue>
// using namespace std;
// class Node
// {
// public:
//   int data;
//   Node *left;
//   Node *right;
//   Node(int val)
//   {
//     data = val;
//     left = nullptr;
//     right = nullptr;
//   }
// };

// //* Pre-order DFS: Root, Left, Right

// void PreOrderTraversal(Node *root)
// {
//   if (root == nullptr)
//   {
//     return;
//   }
//   cout << root->data << " ";
//   PreOrderTraversal(root->left);
//   PreOrderTraversal(root->right);
// }

// //* In-order DFS: Left, Root, Right
// void InOrederTraversal(Node *root)
// {
//   if (root == nullptr)
//   {
//     return;
//   }
//   InOrederTraversal(root->left);
//   cout << root->data << " ";
//   InOrederTraversal(root->right);
// }

// //* Post-order DFS: Left, Right, Root
// void PostOrdertraversal(Node *root)
// {
//   if (root == nullptr)
//   {
//     return;
//   }
//   PostOrdertraversal(root->left);
//   PostOrdertraversal(root->right);
//   cout << root->data << " ";
// }

// //* Level order Treaversal
// void BFS(Node *root)
// {
//   if (root == nullptr)
//   {
//     return;
//   }
//   queue<Node *> q;
//   q.push(root);
//   while (!q.empty())
//   {
//     Node *node = q.front();
//     q.pop();
//     cout << node->data << " ";
//     if (node->left != nullptr)
//       q.push(node->left);

//     if (node->right != nullptr)
//       q.push(node->right);
//   }
// }
// int main()
// {
//   Node *root = new Node(1);
//   root->left = new Node(2);
//   root->right = new Node(3);

//   root->left->left = new Node(4);
//   root->left->right = new Node(5);

//   root->right->left = new Node(6);
//   root->right->right = new Node(7);

//   cout << "PreOrderTraversal :" << endl;
//   PreOrderTraversal(root);
//   cout << endl;

//   cout << "InOrederTraversal: " << endl;
//   InOrederTraversal(root);
//   cout << endl;

//   cout << "PostOrdertraversal: " << endl;
//   PostOrdertraversal(root);
//   cout << endl;

//   cout << "BFS Level :" << endl;
//   BFS(root);

//   return 0;
// }

// ? Insertion in Binary tree
// #include <iostream>
// #include <queue>
// using namespace std;

// struct Node
// {
//   int data;
//   Node *left, *right;
//   Node(int val)
//   {
//     data = val;
//     left = right = nullptr;
//   }
// };

// Node *InsertInBinaryTree(Node *root, int key)
// {
//   if (root == nullptr)
//   {
//     root = new Node(key);
//     return root;
//   }

//   queue<Node *> q;
//   q.push(root);

//   while (!q.empty())
//   {
//     Node *temp = q.front();
//     q.pop();

//     if (temp->left == nullptr)
//     {
//       temp->left = new Node(key);
//       break;
//     }
//     else
//     {
//       q.push(temp->left);
//     }
//     // if right child is empty,then insert the new node here

//     if (temp->right == nullptr)
//     {
//       temp->right = new Node(key);
//       break;
//     }
//     else
//     {
//       q.push(temp->right);
//     }
//   }
//   return root;
// }

// void Inoreder(Node *root)
// {
//   if (root == nullptr)
//   {
//     return;
//   }
//   Inoreder(root->left);
//   cout << root->data << " ";
//   Inoreder(root->right);
// }

// int main()
// {
//   Node *root = new Node(2);
//   root->left = new Node(3);
//   root->right = new Node(4);
//   root->left->left = new Node(5);

//   cout << "IN-Order Treaversal before Insertion : ";
//   Inoreder(root);
//   cout << endl;

//   cout << "IN-Order Treaversal after Insertion : ";
//   int key = 6;
//   root = InsertInBinaryTree(root, key);
//   Inoreder(root);

//   return 0;
// }

// ? Building tree from pre-order and in-order

// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//   int data;
//   Node *left;
//   Node *right;
//   Node(int val)
//   {
//     data = val;
//     left = NULL;
//     right = NULL;
//   }
// };

// // Search function
// int Search(int inorder[], int start, int end, int curr)
// {
//   for (int i = start; i <= end; i++)
//   {
//     if (inorder[i] == curr)
//     {
//       return i;
//     }
//   }
//   return -1;
// }

// Node *BuildTree(int preorder[], int inorder[], int start, int end)
// {
//   static int idx = 0;
//   if (start > end)
//   {
//     return NULL;
//   }
//   int curr = preorder[idx];
//   idx++;
//   Node *node = new Node(curr);

//   if (start == end)
//   {
//     return node;
//   }
//   int pos = Search(inorder, start, end, curr);
//   node->left = BuildTree(preorder, inorder, start, pos - 1);
//   node->right = BuildTree(preorder, inorder, pos + 1, end);

//   return node;
// }

// void InorderPrint(Node *root)
// {
//   if (root == NULL)
//   {
//     return;
//   }
//   InorderPrint(root->left);
//   cout << root->data << " ";
//   InorderPrint(root->right);
// }
// int main()
// {
//   int preorder[] = {1, 2, 3, 4, 5};
//   int inorder[] = {4, 2, 1, 5, 3};
//   Node *root = BuildTree(preorder, inorder, 0, 4);
//   InorderPrint(root);

//   return 0;
// }

// ? Searching in the Binary tree

// #include <iostream>
// using namespace std;

// struct Node
// {
//    int data;
//    Node *left;
//    Node *right;
//    Node(int val)
//    {
//       data = val;
//       left = right = nullptr;
//    }
// };

// bool SearchDFS(Node *root, int value)
// {
//    if (root == nullptr)

//       return false;

//    if (root->data == value)

//       return true;

//    bool left_result = SearchDFS(root->left, value);
//    bool right_result = SearchDFS(root->right, value);

//    return left_result || right_result;
// }

// int main()
// {
//    Node *root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);

//    root->left->left = new Node(4);
//    root->left->right = new Node(5);

//    root->right->left = new Node(6);
//    root->right->right = new Node(7);

//    int value = 4;

//    if(SearchDFS(root , value))
//    {
//       cout << value << " found at Binary Tree." << endl;
//    }
//    else{
//       cout << value << " We can't found !!!" << endl;
//    }

//    return 0;
// }

// ? Deleting In Bineary Tree
// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//   int data;
//   Node *left, *right;
//   Node(int val)
//   {
//     data = val;
//     left = right = nullptr;
//   }
// };

// // function to delete a node from the binary tree
// Node *deleteNode(Node *root, int deleVal)
// {
//   if (root == nullptr)
//     return nullptr;

//   // BFs
//   queue<Node *> q;
//   q.push(root);
//   Node *target = nullptr;

//   while (!q.empty())
//   {
//     Node *curr = q.front();
//     q.pop();
//     if (curr->data == deleVal)
//     {
//       target = curr;
//       break;
//     }
//     if (curr->left)
//       q.push(curr->left);

//     if (curr->right)
//       q.push(curr->right);
//   }

//   // if target not found return original tree
//   if (target == nullptr)
//     return root;
//   // Find the deepest rightmost node and its parent
//   pair<Node *, Node *> last = {nullptr, nullptr};
//   queue<pair<Node *, Node *>> q1;
//   q1.push({root, nullptr});

//   while (!q1.empty())
//   {
//     auto curr = q1.front();
//     q1.pop();

//     last = curr;

//     if (curr.first->left)
//       q1.push({curr.first->left, curr.first});

//     if (curr.first->right)
//       q1.push({curr.first->right, curr.first});
//   }

//   Node *lastNode = last.first;
//   Node *lastParent = last.second;

//   target->data = lastNode->data;

//   if (lastParent)
//   {
//     if (lastParent->left == lastNode)
//       lastParent->left = nullptr;
//     else
//       lastParent->right = nullptr;
//     delete lastNode;
//   }
//   else
//   {
//     delete lastNode;
//     return nullptr;
//   }
//   return root;
// }

// void InorderTraversal(Node *root)
// {
//   if(root == nullptr)
//     return;
//   InorderTraversal(root->left);
//   cout << root->data << " ";
//   InorderTraversal(root->right);
// }
// int main()
// {
//   Node *root = new Node(2);
//   root->left = new Node(3);
//   root->right = new Node(4);
//   root->left->left = new Node(5);
//   root->left->right = new Node(6);

//   cout << "Original tree: " << endl;
//   InorderTraversal(root);
//   int Delvalue = 4;
//   cout << endl;
//   cout << "After Deleting " << Delvalue << " :" << endl;
//   root = deleteNode(root, Delvalue);
//   InorderTraversal(root);

//   return 0;
// }

// ? Inordered Tree Traversal without recursion and without stack!
// ? Using Morris Traveral
// #include <iostream>
// using namespace std;
// struct tNode
// {
//   int data;
//   struct tNode *left;
//   struct tNode *right;
// };

// void MorrisTraversal(struct tNode *root)
// {
//   struct tNode *curr, *pre;
//   if (root == NULL)
//   {
//     return;
//   }
//   curr = root;
//   while (curr != NULL)
//   {
//     if (curr->left == NULL)
//     {
//       cout << curr->data << " ";
//       curr = curr->right;
//     }
//     else
//     {
//       pre = curr->left;
//       while (pre->right != NULL && pre->right != curr)
//         pre = pre->right;

//       if (pre->right == NULL)
//       {
//         pre->right = curr;
//         curr = curr->left;
//       }
//       else
//       {
//         pre->right = NULL;
//         cout << curr->data << " ";
//         curr = curr->right;
//       }
//     }
//   }
// }

// struct tNode *newTNode(int data)
// {
//   struct tNode *node = new tNode;
//   node->data = data;
//   node->left = NULL;
//   node->right = NULL;
//   return (node);
// }
// int main()
// {
//   /* Constructed binary tree is
//             1
//           /   \
//          2     3
//        /   \
//       4     5
//   */

//   struct tNode *root = newTNode(1);
//   root->left = newTNode(2);
//   root->right = newTNode(3);
//   root->left->left = newTNode(4);
//   root->left->right = newTNode(5);
//   MorrisTraversal(root);

//   return 0;
// }

// !
// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//   int data;
//   Node *left;
//   Node *right;
//   Node(int val)
//   {
//     data = val;
//     left = right = nullptr;
//   }
// };

// void BFS(Node *root)
// {
//   if (root == nullptr)
//   {
//     return;
//   }
//   queue<Node *> q;
//   q.push(root);
//   while (!q.empty())
//   {
//     Node *curr = q.front();
//     q.pop();
//     cout << curr->data << " ";
//     if (curr->left)
//     {
//       q.push(curr->left);
//     }
//     if (curr->right)
//     {
//       q.push(curr->right);
//     }
//   }
// }

// int main()
// {
//   Node *root = new Node(1);
//   root->left = new Node(2);
//   root->right = new Node(3);
//   root->left->left = new Node(4);
//   root->left->right = new Node(5);

//   BFS(root);

//   return 0;
// }

// ? Binary Tree Right view
// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//   int data;
//   Node *left, *right;
//   Node(int value)
//   {
//     data = value;
//     left = right = nullptr;
//   }
// };

// void rightView(Node *root)
// {
//   if (root == NULL)
//   {
//     return;
//   }
//   queue<Node *> q;
//   q.push(root);
//   while (!q.empty())
//   {
//     int n = q.size();

//     for (int i = 0; i < n; i++)
//     {
//       Node *curr = q.front();
//       q.pop();
//       if (i == n - 1)
//       {
//         cout << curr->data << " ";
//       }
//       if (curr->left != nullptr)
//       {
//         q.push(curr->left);
//       }
//       if (curr->right != nullptr)
//       {
//         q.push(curr->right);
//       }
//     }
//   }
// }

// int main()
// {
//   Node *root = new Node(1);
//   root->left = new Node(2);
//   root->right = new Node(3);
//   root->left->left = new Node(4);
//   root->left->right = new Node(5);
//   root->right->left = new Node(6);
//   root->right->right = new Node(7);
//   cout << "Right View of the Binary Tree:" << endl;
//   rightView(root);

//   return 0;
// }

//! Left view of binary tree
// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//   int data;
//   Node *left, *right;
//   Node(int value)
//   {
//     data = value;
//     left = right = nullptr;
//   }
// };

// void leftView(Node *root)
// {
//   if (root == NULL)
//   {
//     return;
//   }
//   queue<Node *> q;
//   q.push(root);
//   while (!q.empty())
//   {
   
//     int n = q.size();
//     for (int i = 0; i < n; i++)
//     {
//       Node *curr = q.front();
//       q.pop();
//       if (i == n - 1)
//       {
//         cout << curr->data << " ";
//       }
//       if(curr->right != nullptr)
//       {
//         q.push(curr->right);
//       }
//       if(curr->left != nullptr)
//       {
//         q.push(curr->left);
//       }
//     }
//   }
// }

// int main()
// {
//   Node *root = new Node(1);
//   root->left = new Node(2);
//   root->right = new Node(3);
//   root->left->left = new Node(4);
//   root->left->right = new Node(5);
//   root->right->left = new Node(6);
//   root->right->right = new Node(7);

//   cout << "left view of Binary tree: " << endl;
//   leftView(root);

//   return 0;
// }


// ?