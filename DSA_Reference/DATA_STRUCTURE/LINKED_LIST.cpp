// ? 22-sept -24
// ? DSA is going well

// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// void LinkedList(Node *head)
// {
//     Node *curr = head;
//     while (curr != nullptr)
//     {
//         cout << curr->data << "->";
//         curr = curr->next;
//     }
//     cout << "NULL";
// }
// int main()
// {
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);

//     LinkedList(head);

//     return 0;
// }

// ? Traversal linked list using recursion

// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// void traversalLinkedList(Node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << "->";
//     traversalLinkedList(head->next);

// }

// int main()
// {
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     traversalLinkedList(head);

//     return 0;
// }

// ? Searching in the Linked List
// * algorithum
/*
    1.initilized head to curr
    2.iterate over all the nodes
    3.check the key to the node data
    4.then move to next iteraiton
    5.return false if it is not present
*/

// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int new_data)
//     {
//         data = new_data;
//         next = nullptr;
//     }
// };

// bool SerachInLinkedList(Node *head, int key)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         if (curr->data == key)

//             return true;

//         curr = curr->next;
//     }
//     return false;
// }

// int main()
// {
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     int key = 2;
//     if (SerachInLinkedList(head, key))
//     {
//         cout << "we Find it " << endl;
//     }
//     else
//     {
//         cout << "Key not Found" << endl;
//     }
//     return 0;
// }

// ? Insert a new Node In linked list
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int new_data)
//     {
//         data = new_data;
//         next = nullptr;
//     }
// };

// Node *InsertAtHead(Node *head, int new_data)
// {
//     Node *new_node = new Node(new_data);

//     new_node->next = head;
//     return new_node;
// }

// void PrintLinkedList(Node *head)
// {
//     Node *curr = head;
//     while (curr != nullptr)
//     {
//         cout << curr->data << " ";
//         curr = curr->next;
//     }
// }

// int main()
// {
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     cout << "Before Insertion:" << endl;
//     PrintLinkedList(head);
//     cout << endl;
//     cout << " AFter Insertion:" << endl;
//     int new_value = 21;
//     head = InsertAtHead(head, new_value);
//     PrintLinkedList(head);
//     return 0;
// }

// ? Delete node at any positon
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int data) : data(data), next(nullptr) {}
// };
// Node *deleteNode(Node *head, int position)
// { // previous of node to be deleted
//     Node *prev;
//     Node *temp = head;
//     if (temp == NULL)
//     {
//         return head;
//     }
//     if (position == 1)
//     {
//         head = temp->next;
//         free(temp);
//         return head;
//     }
//     for (int i = 0; i < position; i++)
//     {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (temp != NULL)
//     {
//         prev->next = temp->next;
//         free(temp);
//     }
//     else{
//         cout << "data not Present!!"<<endl;
//     }
//     return head;
// }

// void PrintList(Node * head)
// {
//     while(head != nullptr)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int main()
// {
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     int position = 3;
//     head = deleteNode(head, position);
//     PrintList(head);
//     // Cleanup remaining nodes
// while (head != nullptr)
// {
//     Node *temp = head;
//     head = head ->next;
//     delete temp;
// }
//         return 0;
// }