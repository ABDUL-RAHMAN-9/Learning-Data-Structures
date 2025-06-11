//?  STL : Standard Template Library

//* Vectors : - sequence containers representing arrays that can change their size during runtime.
//* Syntax : - vector <data_type> vector_name;
//* Include <vector> Header file
// #include <iostream>
// #include <vector>
// using namespace std;
// int main ()
// {

//     vector<int> vec;
//     vec.push_back(100); // push-back :- Add element at the end
//     vec.push_back(200);
//     vec.push_back(300);

//     for(int i = 0 ; i < 3 ; ++i)
//     {
//         cout << vec[i] << endl;
//     }
//     cout << "Size of vector : "<<vec.size()<<endl;

//     vec.pop_back(); // pop_back :- delete last element
//     cout << "After pop back the size is : "<<vec.size()<<endl;

//     return 0;
// }

//? STL
// #include <iostream>
// #include <vector>
// using namespace std;

// int main ()
// {

//     vector<int > vec;
//     vec.push_back(100);
//     vec.push_back(200);
//     vec.push_back(300);
//     cout<< vec.front()<<endl;
//     cout<< vec.back()<<endl;
//     cout << "after using at "<<endl;
//      //?Now what if we want to access value at any index
//     cout << vec.at(1);

//     return 0;
// }

//? Iterator :-an object (like a pointer) that points to an element inside the container
//* Data type :- vector <datatype>::iterator name of iterator
//! Exp:- vector <int> :: iterator vit;
// #include <iostream>
// #include <vector>
// using namespace std;

// int main ()
// {
//     vector<int > vec;
//     vec.push_back(100);
//     vec.push_back(200);
//     vec.push_back(300);

//     vector<int> ::iterator it = vec.begin(); // It will print 1 element
//     cout << *it<<endl;
//     it++; // Here we are increment the value of it by 1 , which will give use 200
//     cout << *it<<endl;

//     return 0;
// }

//?Iterator :- like a pointer

// #include <iostream>
// #include <list>
// using namespace std;

// int main ()
// {
//     list <int> numbers; // list
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_back(30);
//     numbers.push_back(40);

//     // iterator
//     list <int >:: iterator iterate = numbers.begin(); // it give only 1 element

//     for(iterate; iterate != numbers.end();++iterate)
//     {
//                 cout << *iterate<<endl;

//     }

//     return 0;
// }

//? Reverse the iterator
// #include <iostream>
// #include <list>
// using namespace std;

// int main ()
// {
//     list <int> numbers; // list
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_back(30);
//     numbers.push_back(40);

//     // reverse_iterator here we  want to use it for reverse it
//     list <int >:: reverse_iterator iterate = numbers.rbegin(); // it give print the last item

//                 cout << *iterate<<endl;

//     return 0;
// }

//? Map  :- All the key must be unique
// #include <iostream>
// #include <map>
// using namespace std;

// int main ()
// {
//     map <string , int > car;
//     car["BMW"] = 30;
//     car["R15"] = 20;
//     car["G"] = 40;

//     cout << car["G"] <<endl;

//     return 0;
// }

//? map  ..

// #include <iostream>
// #include <map>
// using namespace std;

// int main ()
// {
//     map <string , int > car;
//     car["BMW"] = 30; // The integer is key here
//     car["R15"] = 20;
//     car["G"] = 40;

//     if(car.find("TOP") != car.end())
//     {
//         cout << "Found"<<endl;
//     }
//     else
//         cout << "NOt found"<<endl;

//     return 0;
// }

// ? Multimaps :- Allow duplicate keys

//? Ranged for Loop
//* Syntax :- for(rangeDeclaration : RangeExpression){ // code  }
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int array[] = {2,3,4,5,6};
//     for(int numbers : array)
//     {
//         cout << numbers <<endl;
//     }

//     return 0;
// }

//? Ranged for loop in the vectors

// #include <iostream>
// #include <vector>
// using namespace std;

// int main ()
// {
//     vector <int> num_vec = {3,4,5,6,7,8};
//     for(int n : num_vec)
//     {
//         cout <<n <<endl;
//     }

//     return 0;
// }

//?Example 3: Declare Collection inside the Loop
// #include <iostream>
// using namespace std;

// int main ()
// {
//     for(int n : {1,2,3,4,5})
//     {
//         cout << n <<endl;
//     }

//     return 0;
// }

// ? Better program ranged for loop
// #include <iostream>
// using namespace std;

// int main ()
// {
//     int array[] = {5,4,3,2,1};
//     for(int &nums: array)
//     {
//         cout << nums<<endl;
//     }

//     return 0;
// }

//? Nested for loop :- Loop in a loop
// #include <iostream>
// using namespace std;

// int main ()
// {
//     int weeks = 3; int days = 7;
//     for(int i = 1; i <= weeks ; ++i)
//     {
//         cout << "weeks: "<<i<<endl;
//         for (int j = 1; j <= days ; ++j)
//         {

//             cout << "Days : -----"<<j <<endl;
//         }

//     }

//     return 0;
// }

//? Displaying a Pattern

// #include <iostream>
// using namespace std;

// int main ()
// {
//     int rows = 5;
//     int column = 3;

//     for(int i = 1; i <= rows ; ++i)
//     {
//         for (int j = 1; j <= column ; ++j)
//         {
//             cout << "* ";
//         }
//         cout <<endl;
//     }

//     return 0;
// }

//! Sorting a string

// #include<bits/stdc++.h>

// using namespace std;

// void sorting(string &str){
//     sort(str.begin(), str.end());
//     cout << str;
// }

// int main (){

//     string sentence = "Roman";

//     sorting(sentence);

//     return 0;
// }

//? ----------------- STL -------------------
//? vectors : it is like an array but it is a class and it have cool features

// #include <iostream>
// #include <vector>
// using namespace std;

// int main ()
// {

//     vector<int> numbers {1,2,3,4,5,6};

//     for(int value : numbers)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

//? Iterators

// #include <iostream>
// #include <vector>
// using namespace std;

// int main ()
// {
//     vector<int>number {1,2,3,4,5};
//     vector<int>::iterator itr = number.begin();
//     cout << "First element :" << *itr << " " << endl;

//     itr = number.end() - 1;
//     cout << "last element :" << *itr;

//     return 0;
// }

//? Algorithms :- An algorithm is a series of instructions to solve a particular problem.
//* Sorting Algorithm

// #include <iostream>
// #include <vector>
// #include<algorithm>

// using namespace std;
// int main()
// {
//     // initialize vector of int type
//     vector<int> number {5,3,6,2,4,1};

//     cout << "Without sorting :" ;
//     for(int value : number)
//     {
//         cout << value << " ";
//     }
//     cout << "\n";

//     // using sort method
//     sort(number.begin(), number.end());

//     cout << "Sorting the numbers :";

//     // printing the elements
//     for(int value : number)
//     {
//         cout << value << " ";
//     }

//     return 0;

// }

//? Sequential Container(vector)

// #include<iostream>
// #include <vector>

// using namespace std;
// int main ()
// {
//     vector<int> num = {1, 2, 5, 3, 5};

//     cout << "number is :";
//     for(auto &number : num)
//     {
//         cout << number<< " ";
//     }

//     return 0;
// }

//? Associative Containers

// #include<iostream>
// #include <set>

// using namespace std;
// int main ()
// {
//     set <int> num = {1, 2, 5, 3, 5}; // it remove the duplicate element

//     cout << "number is :";
//     for(auto &number : num)
//     {
//         cout << number << " ";
//     }

//     return 0;
// }

//? Unordered Associative Container

// #include<iostream>
// #include <unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<int> numbers = {1, 2, 4, 3, 5, 6, 4};

//     for(int value : numbers)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

//? Container Adapter(Stack)

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {

//     stack<int> numbers;

//     //push into the stack
//     numbers.push(1);
//     numbers.push(2);
//     numbers.push(3);
//     numbers.push(4);
//     numbers.push(5);

//     cout << "Number are: ";
//     while(!numbers.empty()) // it check if the stack is not empty
//     {
//         cout << numbers.top() << " "; // and it will print the top element
//         numbers.pop(); // here pop is use to remove the first element
//     }

//     return 0;
// }

//? Filling the std::array

// #include <iostream>
// #include <array>
// using namespace std;

// int main()
// {
//     array<int, 5> number;
//     number.fill(0);  // fill the array with zeros

//     cout << "the elements are :";
//     for(int & value : number)
//     {
//         cout << value << " ";
//     }
//     return 0;
// }

//? std::array: -is a container class that encapsulates fixed size arrays.

// #include <iostream>
// #include <array>
// using namespace std;
// int main ()
// {
//     array<int, 5> array_name = {1, 2, 3, 4, 5};
//     for(int numbers : array_name)
//     {
//         cout << numbers << " ";
//     }
//     cout << endl;

//     cout << "The size of array is: " << array_name.size() << endl;
//     if(array_name.empty())
//     {
//         cout << "the array is empty.";
//     }
//     else
//     {
//         cout << "the array not empty.";
//     }

//     return 0;
// }

//? Using STL Algorithms

// #include <iostream>
// #include <algorithm>
// #include <numeric>
// #include <array>
// using namespace std;

// int main ()
// {

//     array<int, 5> numbers{45, 23, 66, 87, 21};

//     sort(numbers.begin(),numbers.end());
//     cout << "The sorted array is: " ;
//     for(int num : numbers)
//     {
//         cout << num << " ";
//     }

//     cout << endl;

//     //? Searching 55 in the array
//     auto found = find(numbers.begin(), numbers.end(),87);

//     if(found != numbers.end())
//     {
//         cout << "Number is found";
//     }
//     else
//     {
//         cout << "Numbers is not found.";
//     }
//     cout << endl;
//     // sum
//     int sum = accumulate(numbers.begin(), numbers.end(),0);

//     cout << "Sum is :" << sum << endl;
//     return 0;
// }

//? Vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vector1 = {1, 2, 3, 4, 5};
//     vector<int> vector2 {6, 7, 8, 9, 10};
//     vector<int> vector3(5, 33);

//     cout << "vector1 : " ;
//     for(int vec1 : vector1)
//     {
//         cout << vec1 << " ";
//     }

//     cout <<endl;
//     cout << "vector2 : " ;
//     for(int vec2 : vector2)
//     {
//         cout << vec2<<" " ;

//     }
//     cout << endl;
//     cout << "vector3 : ";
//     for (int vec3 : vector3)
//     {
//         cout << vec3 << " ";
//     }

//     return 0;
// }

//? Adding elements to the vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> number{1, 2, 3, 4, 5};

//     cout << "Vector Elements: ";
//     for(const int& i : number)
//     {
//         cout << i << " ";

//     }
//     cout << endl;
//     number.push_back(6);
//     number.push_back(7);
//     number.push_back(8);

//     cout << "Update Vector Elements :";
//     for(const int &i : number)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

//? Access the element of a vector

// #include<iostream>
// #include<vector>
// using namespace std;
// int main ()
// {
//     vector<int> num {1,2,3,4,5};

//     //? changing the element of the vector
//     cout << "Without changing :";
//     for(const int& val : num)
//     {
//         cout << val << " ";
//     }

//     // ?changing the element of the vector
//     cout << endl;
//     num.at(0) = 10;
//     num.at(1) = 20;
//     num.at(2) = 30;
//     num.at(3) = 40;
//     num.at(4) = 50;

//     cout << " changing elements:";
//     for (const int &val : num)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     //? Now here we are deleting the value of vector
//     //? we are using pop_back :-delete a single element from a vector.
//     //? It remove the last element
//     num.pop_back();
//     cout << "here we delete last element";
//     for (const int &val : num)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

//? Vector Iterators:- use to point the memory address of a vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> numbers {1,2,3,4,5,6,7};
//     vector<int>::iterator itr;

//     // it will print the first element

//     cout << "this is all value :" ;
//     for(itr = numbers.begin() ; itr != numbers.end() ; ++itr)
//     {
//         cout << *itr << " ";
//     }

//     return 0;
// }

// ?STL list :-container that stores elements randomly in unrelated locations.

// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> numbers{1, 2, 3, 4, 5, 6};
//     cout << "List elements:";

//     //? add element using push_front
//     numbers.push_front(0);
//     //? add element at last position
//     numbers.push_back(10);
//     for(int nums : numbers)
//     {
//         cout << nums << " ";
//     }
//     cout << endl;

//     cout << "First element: " ;

//     cout << numbers.front() << endl;

//     cout <<"last element: ";
//     cout << numbers.back();

//     cout << endl;

//     //? Here we ar deleting the element using pop_front() and pop_back()
//     cout << "Delete element of the list is :";
//     numbers.pop_front();
//     numbers.pop_back();
//     for (int i: numbers)
//     {
//         cout << i << " ";
//     }
//         return 0;
// }

//? access element using iterator

// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> numbers{1,2,3,4,5,6};
//     list<int> ::iterator itr = numbers.begin();

//     do{
//             cout << *itr << " ";
//             ++itr;
//     }
//     while (itr != numbers.end());

//     return 0;
// }

//? forward List :-sequence containers ordered in a strict linear sequence.

// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
//     forward_list<string> names{"anna", "roman", "alex", "olsen"};
//     for(string val : names)
//     {
//         cout << val << " ,";
//     }
//     cout << endl;

//     cout << "The first element is: " << names.front();
//     return 0;
// }

//? Queue:-  FIFO (First In First Out) principle where elements that are added first will be removed first.

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     queue<string>animals;
//     // add elements
//     animals.push("Tiger");
//     animals.push("lion");
//     animals.push("horse");

//     cout  << "Queue elements: " ;
//     while(!animals.empty())
//     {
//         cout << animals.front() << " ";

//          animals.pop();
//     }

//     return 0;
// }

//? Remove element from a Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// void display_queue(queue<string> que);
// int main()
// {
//     queue<string> animals;
//     // add elements
//     animals.push("Tiger");
//     animals.push("lion");
//     animals.push("horse");

//     cout << "Initial Queue: ";
//     display_queue(animals);
//      // remove element from queue
//     animals.pop();
//     cout << "Queue elements: ";
//     display_queue(animals);

//     return 0;
// }
// void display_queue(queue<string> que)
// {

//     while (!que.empty())
//     {
//         cout << que.front() << " ";

//         que.pop();
//     }
//     cout << endl;
// }

//? Access element form the queue

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {

//     queue<int> number;
//     number.push(1);
//     number.push(2);
//     number.push(3);

//     int get_front = number.front();

//     cout <<"First element : "<< get_front << endl;

//     int get_last = number.back();
//     cout << "Last element : " << get_last << endl;

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {

//     queue<string> number;

//     cout << "Is the queue empty?" << endl;

//     if (number.empty())
//     {
//         cout << "yes";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     cout << endl;

//     cout << "Pushing the elements ... " << endl;

//     number.push("Python");
//     number.push("C++");
//     number.push("Java");

//     cout << "Is the queue empty?" << endl;
//     if (number.empty())
//     {
//         cout << "yes";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

//? Adding the elements in deque
// #include <iostream>
// #include <deque>
// using namespace std;
// int main()
// {
//     // uniform initialization
//     deque<int> num {2,3,4,5};

//     cout << "Initial Deque:";
//     for (int i : num)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << "Final Deque:";
//     num.push_front(1);
//     num.push_back(7);

//     for (int i : num)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     // Access the element
//     cout << "Front element :" << num.front() << endl;
//     cout << "Second element :" << num.at(1);
//     return 0;
// }

//? Priority Queue :-  The element with the highest priority is removed first.

//? Stack :-  LIFO (Last In First Out) principle. That is, the
//?           element added last will be removed first.

// #include <iostream>
// #include <stack>
// using namespace std;

// void display(stack<string> names);
// int main()
// {
//     stack<string> names;

//     names.push("Anna");
//     names.push("Alex");
//     names.push("Olsen"); // it will print this
//     // because stack have the last element which is olsen

//     // adding elements
//     cout << "stack :";
//     display(names);
//     // Remove elements in stack
//     cout << "After Removing :";
//     names.pop();
//     display(names);
//     int size = names.size();
//     cout << "Size of stack :" << size;

//     return 0;
// }

// void display(stack<string> names)
// {

//     while (!names.empty())
//     {
//         cout << names.top() << " ";
//         names.pop();
//     }
//     cout << endl;
// }

//?  Maps:- are associated containers that hold pairs of data.
//? These paris, known as key- value pairs.
//* Syntax : map <int , string> values {{1,"Roman"},{2,"Tom"}};

// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {

//     map<int, string> students;

//     // use [] operator to add elements
//     students[1] = "Roman";
//     students[2] = "Olsen";

//     // use insert()   and make_pair()   method to add elements
//     students.insert(make_pair(3,"Jom"));
//     students.insert(make_pair(4, "Anna"));

//     for(int i= 1 ; i <= students.size() ; ++i)
//     {
//         cout << "student[" << students[i] << "]"<<endl;
//     }

//     return 0;
// }

//? Access keys and values
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<int ,string> student;
//     student[1] = "Jacqueline";
//     student[2] = "Blake";
//     student[3] = "Denise";
//     student[4] = "Aaron";

//     // making iterator
//     map<int, string>::iterator iter;

//     for(iter = student.begin() ; iter != student.end(); ++iter)
//     {
//         cout << iter->first << "-" << iter->second << endl;
//     }

//     cout << endl;
//     iter = student.find(2);
//     if (student.find(2) == iter)
//     {
//         cout << "WE found it";
//     }
//     else{
//         cout << "we dont ";
//     }

//         return 0;
// }

// ? Creating a set

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> numbers{5, 3, 8, 1, 3};

//     for(int i : numbers)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

//? Insert elements in set

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> numbers;

//     numbers.insert(20);
//     numbers.insert(30);
//     numbers.insert(10);
//     numbers.insert(50);
//     numbers.insert(40);

//     for (int var : numbers)
//     {
//         cout << var << " ";
//     }
//     cout << endl;
//     // ?Check if an Element Exists in a Set

//     int num = 50;
//     if (numbers.count(num) == 1)
//     {
//         cout << num << " : is Exist.";
//     }
//     else
//     {
//         cout << num << "NOt exist";
//     }

//     cout << endl;

//     numbers.erase(10);
//     numbers.erase(50);
//     cout << "after Delete numbers: ";
//     for (int var : numbers)
//     {
//         cout << var << " ";
//     }
//     cout << endl;
//     cout << "after clear all number:";
//     numbers.clear();
//     for (int var : numbers)
//     {
//         cout << var << " ";
//     }

//     return 0;
// }

//? Multimap:-

// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     multimap<int, string> elements = {{1, "One"},
//                           {2, "two"},
//                           {2, "three"},
//                           {1, "four"}};

//     cout << "Key - value " << endl;

//     for (const auto &Key_value : elements)
//     {
//         int store = Key_value.first;
//         string value = Key_value.second;
//         cout << store << " - " << value << endl;
//     }

//     return 0;
// }

//? Removing an Element
// #include <iostream>
// #include <map>
// using namespace std;
// void print(multimap<int, string> &);
// int main()
// {
//     multimap<int, string> students = {{111, "John"},
//                                       {132, "Mark"},
//                                       {143, "Chris"},
//                                       {143, "Christopher"}};

//     cout << "Initial Multimap: " << endl;
//     print(students);
//     students.erase(143);

//     cout << "Multimap After Erasing Key 143: " << endl;

//     print(students);

//     cout << "Multimap After Clearing: " << endl;
//     students.clear();
//     print(students);

//     return 0;
// }

// void print(multimap<int, string> &display)
// {
//     for(const auto &i : display)
//     {
//         int key = i.first;
//         string names = i.second;
//         cout << key << " - " << names << endl;
//     }
// }

//? Multiset
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     multiset<int> elements {5,3,8,1,3};
//     for (int val: elements)
//     {
//         cout << val << " ";
//     }

//         return 0;
// }
//? Multiset in Descending order
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// { // multiset<int, greater<int>> my_multiset ;
//     multiset<int, greater<int>> elements{5, 3, 8, 1, 3};
//     for (int val : elements)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

//? Unordered Map

// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     unordered_map<string, int> elements{
//         {"One-", 1}, {"Two-", 2}, {"three-", 3}

//     };

//     cout << "key - value " << endl;
//     for (const auto &key_value : elements)
//     {
//         string key = key_value.first;
//         int value = key_value.second;
//         cout << key << " " << value << endl;
//     }
//     cout << endl;
//     cout << "Does id Two  exist?" << endl;
//     if (elements.find("Two-") != elements.end())
//     {
//         cout << "Yes";
//     }
//     else
//     {
//         cout << "No";
//     }

//     return 0;
// }

//? Unordered_set:- store elements like a multiset but without any specific order, allowing quick retrieval by value.
// #include <iostream>
// #include <unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<int> elements;

//     elements.insert(5);
//     elements.insert(3);
//     elements.insert(2);
//     elements.insert(3);
//     elements.insert(1);
//     elements.insert(4);

//     cout << "value: ";

//     for (int val : elements)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     cout << "size is : " << elements.size() << endl;
//     cout << "Is it empty? "; // 0 false it is not empty
//     cout << elements.empty() << endl;

//     int target = 3;

//     unordered_set<int>::iterator iter = elements.find(target);
//     if (iter != elements.end())
//     {
//         cout << "FOund : " << target << " in it .";
//     }
//     else
//     {
//         cout << "Not found : " << target << " in it .";
//     }
//     cout << endl
//          << "\n";

//     int value_count = 3;
//     int result = elements.count(value_count);
//     cout << value_count << " is Repeat :" << result << " Times in it . ";

//     return 0;
// }

//? Unordered_map :- Elements in an unordered multimap are not sorted based on their keys or values.
// ? Instead, they are organized into buckets using hash values for quick direct access by key, resulting in constant average time complexity.

// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     unordered_map<int, string> fruits{
//         {1, "Apple"},
//         {22, "Banana"},
//         {1, "Apricot"},
//         {3, "Avocado"}};

//     fruits.insert({4, "Orange"});

//     cout << "unordered_map elements:" << endl;
//     for (const auto &pairs : fruits)
//     {
//         cout << pairs.first << " - " << pairs.second << endl;
//     }
//     cout << endl;
//     cout << fruits.empty()<<endl;
//     cout << fruits.size();

//     return 0;
// }

//? Iterator :- An iterator is a pointer-like object representing an element's position in a container. It is used to iterate over elements in a container.

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<string> languages { "Python", "C++", "Java" ,"C#","Ruby"};

//     // creating iterator
//     vector<string>::iterator iter;

//     for (iter = languages.begin(); iter != languages.end();++iter)
//     {
//         cout << *iter << " ,";
//     }

//         return 0;
// }

//? Iterator Types

// Input Iterator
//     Output Iterator
//         Forward Iterator

// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
//     forward_list<int> nums{1, 2, 3, 4, 5};

//     forward_list<int>::iterator itr;
//     itr = nums.begin();

//     while(itr != nums.end())
//     {
//         int original_value = *itr;

//         *itr = original_value * 2;

//         ++itr;
//     }
//     for(int values : nums)
//     {
//         cout << values << " ";
//     }

//     return 0;
// }

// ?Bidirectional Iterators:  are able to iterate both forward and backward.
// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> nums{1, 2, 3, 4, 5};

//     list<int>::iterator itr;
//     itr = nums.begin();

//     cout << "Moving forward:";

//     while (itr != nums.end())
//     {

//         cout << *itr << " ";
//         //  move iterator by 1 position forward
//         ++itr;
//     }

//     cout << endl;
//     cout << "Moving backward:";
//     while (itr != nums.begin())
//     {
//         if (itr != nums.end())
//         {
//             cout << *itr << " ";
//         } //  move iterator by 1 position backward
//         --itr;
//     }
//     cout << *itr << endl;

//     return 0;
// }

//? Random access iterator: - have all the properties of bidirectional iterators along with random access.

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec{1, 2, 3, 4};
//     // create iterator to point to the first and last elements
//     vector<int>::iterator first_vec = vec.begin();
//     vector<int>::iterator last_vec = vec.end() - 1;

//     cout << "First Element: " << *first_vec << endl;
//     cout << "second element : " << first_vec[1] << endl;
//     cout << "First Element: " << *(last_vec - 1) << endl;
//     cout << "second element : " << *last_vec << endl;

//     return 0;
// }

// ? Algorithms
//* 1 : Sort a vector in Ascending order
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {

//     vector<int> vec{4, 2, 3, 1, 5, 8, 9, 10, 6, 7};
//     // sort the elements of the vector
//     sort(vec.begin(), vec.end());

//     for (int elements : vec)
//     {
//         cout << elements << " ";
//     }

//     return 0;
// }

//* 2: Copy Vector Elements

// #include <iostream>
// #include <vector>
// #include <iostream>
// using namespace std;
// int main()
// {

//     vector<int > source {1,2,3,4,5};
//     vector<int> destination(5);
//     // copy the contents of source to destination
//     copy(source.begin(), source.end(), destination.begin());
//     for (int all : destination)
//     {
//         cout << all << " ";
//     }
//     return 0;
// }

// * 3: Move Vector Elements

// #include <iostream>
// #include <vector>
// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<string> source{"Apple", "banana", "cherry"};
//     vector<string> destination(3);

//     cout << "---------- before Move ----------" << endl;
//     cout << "source :";

//     for (const string &str : source)
//     {
//         cout << str << " ";
//     }

//     cout << endl;

//     cout << "destination: ";
//     for (const string &str : destination)
//     {
//         cout << str << "  ";
//     }
//     cout << endl;

//     cout << "----------After Move ------------ " << endl;
//     move(source.begin(), source.end(), destination.begin());

//     for (const string &str : source)
//     {
//         cout << str << " ";
//     }
//     cout << endl;
//     cout << "source :";

//     for (const string &str : source)
//     {
//         cout << str << " ";
//     }
//     cout << endl;
//     cout << "destination: ";
//     for (const string &str : destination)
//     {
//         cout << str << " ";
//     }

//     return 0;
// }

//? 4: Swap the Contents of Two Vectors

// #include <iostream>
// #include <vector>
// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<int> vec1{ 100,200,300,400,500};
//     vector<int> vec2{600, 700, 800, 900, 101};

//     cout << "---------Before swap -------" << endl;
//     cout << "Vector 1 : ";
//     for(int vec : vec1)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;
//     cout << "Vector 2 : ";
//     for (int vec : vec2)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;

//     cout << "---------After swap -------" << endl;
//     swap(vec1, vec2);
//     cout << "Vector 1 : ";
//     for (int vec : vec1)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;
//     cout << "Vector 2 : ";
//     for (int vec : vec2)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;

//     return 0;
// }

//?*  5: Merge Two Vectors

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> vec1{ 100,200,300,400,500};
//     vector<int> vec2{600, 700, 800, 900, 101};
//     vector<int> result(10);

//     cout << "---------Before Merge -------" << endl;
//     cout << "Vector 1 : ";
//     for(int vec : vec1)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;
//     cout << "Vector 2 : ";
//     for (int vec : vec2)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;

//     cout << "---------After Merge -------" << endl;
//     merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());

//     for(int value : result)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

// * 6: Replace Vector Element
// #include<iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;
// int main()
// {
//     vector<int> vec1{100, 200, 300, 400, 500};

//     cout << "---------Before Replace -------" << endl;
//     cout << "Vector 1 : ";
//     for (int vec : vec1)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;

//     replace(vec1.begin(), vec1.end(), 300, 3);
//     cout << "---------After Replace -------" << endl;

//     cout << "Vector 2 : ";
//     for (int vec : vec1)
//     {
//         cout << vec << " ";
//     }
//     cout << endl;

//     return 0;
// }

//? 7: Delete a Value From the Given Range

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> vec{1, 2, 3, 4, 5};
//     cout << "Before Deleting :";
//     for(int val : vec)
//     {
//         cout << val << "  ";

//     }
//     cout << endl;

//     cout << "After Deleting :";
//     remove(vec.begin(), vec.end(), 4);
//     for (int val: vec)
//     {
//         cout << val << " ";
//     }

//         return 0;
// }

//! Functors: -
//* functor (function object) is a class or struct object that can be called like a function.

// #include <iostream>
// using namespace std;
// class greet
// {
// public:
//     // overload function call/parentheses operator
//     void operator()() // we must write operator to call
//     {
//         cout << "THis is functor , it is an object of function.";
//     }
// };
// int main()
// { // create an object of Greet class
//     // ?In order to create a functor, we first have to create a class whose object we can call like a function.

//     greet obj;
//     // call the object as a function
//     obj();

//     return 0;
// }
//? Functors with return type and parameter
// #include <iostream>
// using namespace std;
// class add {
//     public:
//     int operator()(int a, int b)
//     {
//         return a + b;
//     }
// };
// int main()
// {
//     add sum;
//     int result  = sum(22, 48);
//     cout <<"result :" << result;

//     return 0;
// }

//? Functor with a member variable

// #include <iostream>
// using namespace std;
// class add_values
// {
// private:
//     int initial_sum;

// public:
//     add_values(int num)
//     {
//         initial_sum = num;
//     }

//     int operator()(int num2)
//     {
//         return initial_sum + num2;
//     }
// };
// int main()
// {
//     add_values sum = add_values(100);
//     int result = sum(78);
//     cout << "100 + 78 = " << result << endl;

//     return 0;
// }

//? Predefined Functors
// #include <iostream>
// #include <functional>
// #include<algorithm>
// #include <vector>
// using namespace std;
// int main()
// {

//     vector<int> elements{11, 12, 13, 14, 15};

//     cout << "Elements in Ascending order  :";
//     for(int value : elements)
//     {
//         cout << value<< " ";
//     }
//     cout << endl;

//     cout << "Elements in Descending order  :";
//     //* In this we use functor :-       greater<T>()
//     sort(elements.begin(), elements.end(), greater<int>());
//     for(int value : elements)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

//? Exception Handling : - event that occurs during program execution.

// #include <iostream>
// using namespace std;
// int main()
// {
//     double numerator, denominator, divide;

//     cout << "Enter Numerator: ";
//     cin >> numerator;
//     cout << "Enter Denominator: ";
//     cin >> denominator;
//     divide = numerator / denominator;
//     try
//     {
//// throw an exception if denominator is 0
//         if (denominator == 0)
//         {
//             throw 0;
//         }
// // not executed if denominator is 0
//         cout << numerator << " / " << denominator << " = " << divide;
//     }
//     catch (int num_exception)
//     {
//         cout << "Error : cannot divide by " << num_exception;
//     }

//     return 0;
// }

// ?  Multiple catch Statements
// #include <iostream>

// using namespace std;
// int main()
// {
//     double numerator, denominator, array[4] = {0.0, 0.0, 0.0, 0.0};

//     int index;
//     cout << "Enter the array index : ";
//     cin >> index;

//     try
//     {

//         if (index >= 4)
//         { // throw exception if array out of bounds
//             throw "Error: Array out of bond !!";
//         } // not executed if array is out of bounds
//         cout << "Enter numerator: ";
//         cin >> numerator;

//         cout << "Enter denominator: ";
//         cin >> denominator;
//         if (denominator == 0)
//         {
//             throw 0;
//         }
//         array[index] = numerator / denominator;
//         cout<< "Result :" << array[index] << endl;
//     }
//     // catch "Array out of bounds" exception
//     catch (const char *message)
//     {
//         cout << message << endl;
//     } // catch "Divide by 0" exception
//     catch (int num)
//     {
//         cout << "Error!! Can't Divide with " << num << endl;
//     } // catch any other exception
//     catch (...)
//     {
//         cout << "Unexpected  Error!!" << endl;
//     }

//     return 0;
// }

//? Create and Write To a File
// #include <iostream>
// #include <fstream>

// using namespace std;

// int main()
// {
//     // creating and open a text file
//     ofstream My_file("NewFile.txt");
//     // write to the file
//     My_file << "File is to write in the NewFile." << endl;
//     My_file.close();

//     return 0;
// }

// ? Read a File
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     string My_text; // ifstream ; use for Read file
//     ifstream readFile("NewFile.txt");

//     while(getline (readFile,My_text))
//     {
//         cout << My_text;
//     }
//     readFile.close();

//     return 0;
// }

// ? Nested Loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows = 5;
//     int column = 3;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j =1 ;j <= column; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//         return 0;
// }

// ? Function Template :-We can create a single function to work with different data types by using a template.
// #include <iostream>
// using namespace std;
// template <typename data>  // first it become int and then it become double
// data function(data num1, data num2)
// {
//     return num1 + num2;
// }

// int main()
// {
//     int result1;
//     double result2;

//     result1 = function<int>(2,8);
//     cout << "result : " << result1 << endl;

//     result2 = function<double>(3.4, 6.1);
//     cout << "result : " << result2 << endl;

//     return 0;
// }

// ? Class Template :-

// #include <iostream>
// using namespace std;
// template <class T>
// class Number
// {
// private:
//     T number;

// public:
//     // constructor
//     Number(T n) : number(n) {}

//     T getNum()
//     {
//         return number;
//     }
// };
// int main()
// {
//     Number<int> int_type(44);

//     Number<double> double_type(33.23);

//     cout << "Int Number : " << int_type.getNum() << endl;
//     cout << "Double Number : " << double_type.getNum();

//     return 0;
// }

// ? Simple Calculator Using Class Templates
// #include <iostream>
// using namespace std;

// template <class T>
// class Calculator
// {
// private:
//     T num1, num2;

// public:
//     Calculator(T n1, T n2)
//     {
//         num1 = n1;
//         num2 = n2;
//     }

//     void Display()
//     {
//         cout << "Numbers :" << num1 << " and " << num2 << endl;
//         cout << num1 << " + " << num2 << " = " << add() << endl;
//         cout << num1 << " - " << num2 << " = " << subtraction() << endl;
//         cout << num1 << " * " << num2 << " = " << multiplication() << endl;
//         cout << num1 << " / " << num2 << " = " << division() << endl;
//     }
//     T add()
//     {
//         return num1 + num2;
//     }
//     T subtraction()
//     {
//         return num1 - num2;
//     }
//     T multiplication()
//     {
//         return num1 * num2;
//     }
//     T division()
//     {
//         return num1 / num2;
//     }
// };

// int main()
// {
//     cout << "Int results: " << endl;
//     Calculator<int> Int_values(3, 5);
//     Int_values.Display();

//     cout << endl;

//     cout << "Float results: " << endl;
//     Calculator<double> Double_value(2.4, 1.2);
//     Double_value.Display();

//     return 0;
// }

// ? Example 1: Conversion From int to double

// #include <iostream>
// using namespace std;
// int main()
// {
//     int int_val = 9;
//     double double_val;

//     double_val = int_val;

//     cout << "num_int = " << int_val << endl;
//     cout << "num_double = " << double_val;
//     return 0;
// }

// ? operator Overloading

// #include <iostream>
// using namespace std;
// class count
// {

// private:
//     int value;

// public:
//     // constructor
//     count() : value(5) {}
//     // Overload ++ when used as prefix
//     void operator++()
//     {
//         ++value;
//     }
//     void display()
//     {
//         cout << "Count:" << value << endl;
//     }
// };

// int main()
// {
//     count obj1;
//     ++obj1;
//     obj1.display();

//     return 0;
// }

// ? C++ 11

//* Lambda Expression

// #include <iostream>
// using namespace std;
// int main()
// {
//     // define a lambda function named 'add'
//     // that takes two integers  and returns their sum
//     auto array = [](int a, int b)
//     {
//         return a + b;
//     };
//     int sum = array(3, 4);
//     cout << "sum :" << sum << endl;

//     return 0;
// }

// ? Smart Pointers

// #include <iostream>
// #include<memory>
// using namespace std;
// int main()
// {
//     shared_ptr<int> share_ptr = make_shared<int>(43);
//     unique_ptr<double> uniq_ptr = make_unique<double>(3.14);

//     cout << "shared Pointer: " << *share_ptr << endl;
//     cout << "Unique Pointer : " << *uniq_ptr << endl;

//     return 0;
// }

// ? Move Semantics: -Move semantics allows the resources owned by an object to be moved into another object instead of copying them.

// #include <iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> source = {1, 2, 3, 4};
//     vector<int> destination = move(source);

//     for(const int Num :destination)
//     {
//         cout << Num << " ";
//     }

//         return 0;
// }

// ?Delegating Constructors: may call another constructor of the same class.
// #include <iostream>
// #include <vector>
// using namespace std;
// class complex {
//     int imag;
//     int real;
//     public:
//     complex(int i , int r) :  imag(i) , real(r){}
//     complex() : complex( 0 , 0) {
//         cout << "Delegating Constructors" << endl;
//         cout << " imag :" << imag << endl;
//         cout << " Real :" << real << endl;
//     }
// };
// int main()
// {
//     complex obj;

//     return 0;
// }

// ? Lambda - Explicit Return type
// #include <iostream>
// using namespace std;
// int main()
// {
//     auto lambda = [](int num1, int num2, string word) -> double
//     {
//         if (word == "sum")
//         {
//             return num1 + num2;
//         }
//         else
//         {
//             return (num1 + num2 )/ 2.0;
//         }
//     };
//     int a = 1;
//     int b = 2;
//     auto sum = lambda(a, b, "sum");
//     cout << "sum :" << sum << endl;
//     auto aver = lambda(a, b, "aver");

//     cout << "aver :" << aver << endl;

//     return 0;
// }

// ? Lambda Capture by Value:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int Initial_val = 100;
//     // capture initial_sum by value
//     auto add_val = [Initial_val](int num)
//     {
//         // here inital_val = 100 from local scope
//         return Initial_val + num;
//     };
//     int final_val = add_val(78);
//     cout << "Sum  : " << final_val << endl;

//     return 0;
// }

// ? Lambda Capture by Reference

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 0;
//     cout << "Initially, num  = " << num << endl;
//     // increment the num value by 1
//     auto increase = [&num]()
//     {
//         cout << "Incrementing num by 1." << endl;
//         num++;
//     };
//     increase();
//     cout << "Now , Num = " << num << endl;

//     return 0;
// }

// ?  Lambda Function as Argument in STL Algorithm

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> nums{1, 2, 3, 4, 5, 8, 10, 12};

//     int even_count = count_if(nums.begin(), nums.end(), [](int nums)
//         {
//             return nums % 2 == 0;
//         }
//             );

//     cout << "Even count is : " << even_count << endl;

//     return 0;
// }

// ? Namespaces:-a collection of related names or identifiers (functions, class, variables).
// #include <iostream>
// using namespace std;
// namespace value {
//     double number;

// }
// int main()
// {
//     int number  = 5;
//     value::number = 44.4;
//     cout << "number: " << number << endl;
//     cout << "value::number: "<< value::number << endl;

//         return 0;
// }

// ? Multiple and Nested Namespaces

// #include <iostream>
// using namespace std;
// namespace one
// {
//     void display()
//     {
//         cout << "namespace one " << endl;
//     }

//     namespace one_one
//     {
//         void display()
//         {
//             cout << "namespace one_one " << endl;
//         }
//     }
// }

// namespace two
// {
//     void display()
//     {
//         cout << "namespace two " << endl;
//     }
// }
// void display()
// {
//     cout << "not a namespace Only Function  " << endl;
// }
// int main()
// {
//     one::display();
//     one::one_one::display();
//     two::display();
//     display();

//     return 0;
// }

// ?using Directive: -We can create and use multiple namespaces in a single program.

// #include <iostream>
// using namespace std;
// namespace one
// {
//     void display()
//     {
//         cout << "namespace one :" << endl;
//     }

// }
// namespace two
// {
//     void display()
//     {
//         cout << "Namespace two : " << endl;
//     }
// }
// int main()
// {
//     using namespace one;
//     display();
//     two ::display();

//     return 0;
// }

// ? Preprocessor

// #include <iostream>
// #define PI 3.1415  // Preprocessor : Pre - define
// using namespace std;
// int main()
// {
//     double radius, area;
//     cout << "Enter the Radius :";
//     cin >> radius;

//     area = PI * radius * radius;

//     cout << "area : " << area;

//     return 0;
// }

// ?Function-like Macros
// #include <iostream>
// #define PI 3.1415
// #define circle_area(r) (PI * r * r)
// using namespace std;
// int main()
// {
//     double radius = 2.5;

//     cout << "Area :" << circle_area(radius);

//     return 0;
// }

// ? #if Preprocessor Directive
// #include <iostream>

// // create NUMBER macro with a value of 3
// #define Number 3

// using namespace std;

// int main()
// {

// // use #if directive to check
// // if NUMBER is greater than 0
// #if (Number > 0)

//     cout << Number << "is greater";

// #else

//     cout << Number << "is less";

// #endif

//     return 0;
// }

// ?3: Predefined Macros
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "current Time :" << __TIME__;

//     return 0;
// }

//? Buffer :- memory space for temporarily storing data before processing,

// #include <iostream>
// using namespace std;
// int main()
// {
//     const int buffer_size = 1024;
//     char *buffer = new char[buffer_size];

//     cout << "Enter a line of txt: ";
//     cin.getline(buffer, buffer_size);

//     cout << "You entered :" << buffer;
//     delete[] buffer;

//     return 0;
// }

// ? Generate the Random number

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     srand(time(0));

//     // Generate a random number between 0 - 100
//     int random_num = rand() % 101;
//     cout << "Num :" << random_num;

//     return 0;
// }

// ?Access Structure Members

// #include <iostream>
// using namespace std;
// int main()
// {
//     struct person
//     {
//         int age;
//         string name;
//         int id;
//     };
//     person ROMAN;
//     ROMAN.age = 19;
//     ROMAN.name = "Anna De ";
//     ROMAN.id = 997055;

//     cout << "Age : " << ROMAN.age << endl;
//     cout << "Name : " << ROMAN.name << endl;
//     cout << "Id : " << ROMAN.id << endl;

//     return 0;
// }

// ? One Structure in Multiple Variables
// #include <iostream>
// using namespace std;
// int main()
// {
//     struct
//     {
//         int age;
//         string name;
//         int id;
//     } obj1, obj2; // Here we are creating objects

//     obj1.age = 19;
//     obj1.name = "Roman ";
//     obj1.id = 997055;

//     obj2.age = 39;
//     obj2.name = "Anna De ";
//     obj2.id = 43523;

//     cout << "Age : " << obj1.age << endl;
//     cout << "Name : " << obj1.name << endl;
//     cout << "Id : " << obj1.id << endl;
//     cout << "------------------------------------" << endl;

//     cout << "Age : " << obj2.age << endl;
//     cout << "Name : " << obj2.name << endl;
//     cout << "Id : " << obj2.id << endl;

//     return 0;
// }

// ? User input in the array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int user;
//     cout << "Enter user array elements :" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Displaying array:" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


