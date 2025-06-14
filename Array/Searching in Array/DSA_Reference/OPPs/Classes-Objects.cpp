//? 12-5-24
//* Learning OPPs concepts

// ? Friend Class
// #include <iostream>
// using namespace std;

// class base {
// private :
//     int data1;

// protected:
//     int data2;

// public:
//     base()

//     {
//         data1 = 10;
//         data2 = 99;
//     }
//     //* friend class declaration
//     friend class fri_var;
// };

// class fri_var{
//     public:
//         void display(base& obj)
//         {
//             cout << "Private Variable = "<< obj.data1<<endl;
//             cout << "Protected Variable = "<< obj.data2<<endl;
//         }
// };

// int main()
// {
//     base object;
//     fri_var get;
//     get.display(object);

//     return 0;
// }

// ? Friend Function

//* Global Function as Friend Function

// #include <iostream>
// using namespace std;

// class base{
//     private :
//        int data1;

//     protected:
//        int data2;

//     public:
//         base()
//         {
//             data1 = 100;
//             data2 = 99;
//         }
//         // friend function declaration
//         friend void function(base& obj);

// };

//     void function(base& obj)
//         {
//            cout << "Private Variable = "<< obj.data1<<endl;
//            cout << "Protected Variable = "<< obj.data2<<endl;
//         }

// int main ()
// {
//     base object;
//     function(object);

//     return 0;
// }

//? 2. Member Function of Another Class as Friend Function

// #include <iostream>
// using namespace std;
// //? Forward declare
// class base;

// class another {
// public:
//     void member_func(base& obj);
// };

// class base {
// private:
//     int data1;

// protected:
//     int data2;

// public:
//     base()
//     {
//         data1 = 33;
//         data2 = 52;
//     }
//         friend void another::member_func(base&);
// };

// void another::member_func(base& obj)
// {
//     cout << "Private Variable :"<<obj.data1<<endl;
//     cout << "Protected Variable: " << obj.data2<<endl;
// }

// int main ()
// {
//     base object1;
//     another object2;
//     object2.member_func(object1);

//     return 0;
// }

// ? A Function Friendly to Multiple Classes

// #include <iostream>
// using namespace std;

// class one;

// class two {
//     int x;
// public:
//     void data(int a)
//     {
//         x = a ;
//     }
//     friend void max(two ,one);
// };

// class  one {
//     int y;
// public:
//     void data(int a)
//     {
//         y = a;
//     }
//     friend void max(two ,one);
// };

// void max(two f1,one f2)
// {
//     if (f1.x > f2.y)

//         cout << f1.x;
//     else
//         cout <<f2.y;

// }

// int main ()
// {

//     one obj1;
//     two obj2;
//     obj2.data(20);
//     obj1.data(49);
//     max(obj2,obj1);

//     return 0;
// }

// ? Constructor within the class

// #include <iostream>
// using namespace std;

// class student{
//     int roll_no;
//     char name[50];
//     int fee;

//     public:
//     // constructor
//     student()
//     {
//         cout <<"Enter the roll: ";
//         cin >> roll_no;
//         cout <<"Enter the Name: ";
//         cin >> name;
//         cout <<"Enter the Fee: ";
//         cin >> fee;

//     };
//     void display()
//     {
//         cout << roll_no <<"\t"<< name <<"\t"<<fee;
//     }

// };
// int main()
// {
//     student object;
//     object.display();

//     return 0;
// }

// ? Destructors

// #include <iostream>
// using namespace std;

// class test{
//     public:
//     test()
//     {
//         cout << "Constructor executed"<<endl;
//     }
//     ~test()
//     {
//         cout << "Destructor executed"<<endl;
//     }
// };

// int main ()
// {
//     test object;

//     return 0;
// }

// ? demonstrates the number of times constructors and destructors are called.

// #include <iostream>
// using namespace std;
// static int count = 0;
// class test{
//     public :
//     test()
//     {
//         count++;
//         cout << "NO of object created: "<<count<<endl;
//     }

//     ~test()
//     {
//         cout <<"NO of object destroyed: "<<count <<endl;
//         count--;
//     }
// };

// int main ()
// {
//     test t,t1,t2,t3;

//     return 0;
// }

// ? Copy constructor

// #include <iostream>
// using namespace std;

// class store{

//     public:
//     // constructor
//     store(){}

//     // copy constructor
//     store(const store& s)
//     {
//         cout << "Copy constructor has been called"<<endl;
//     }
// };
// // function that returns the object
// store foo()
// {
//     store obj;
//     return obj;
// }

// // function that takes argument of object type
// void foo2(store& obj)
// {
//     return;
// }

// int main ()
// {
//     store obj1;
//     cout << "Case 1 :";
//     foo();
//     cout <<endl;
//     cout << "Case 2 :";
//     foo2(obj1);
//     cout <<endl;

//     cout << "Case 3 :";
//     store obj2 = obj1;

//     return 0;
// }

//? Shallow Copy

// #include <iostream>
// using namespace std;

// class box {
//     private:
//         int length;
//         int breadth;
//         int height;

//     public:
//         void set(int length1,int breadth1,int height1)
//         {
//             length = length1;
//             breadth = breadth1;
//             height = height1;
//         }

//     void show()
//     {
//         cout << "Length = "<<length <<endl;
//         cout << "breadth = "<<breadth <<endl;
//         cout << "height = "<<height <<endl;
//     }
// };
// int main ()
// {
//     box b1, b3;

//     b1.set(14, 12, 16);
//     b1.show();

//     // copy constructor
//     box b2 = b1;
//     b2.show();

//     b3 = b1;
//     b3.show();

//     return 0;
// }

// ? Deep copy

// #include <iostream>
// using namespace std;

// class box{
//     private:
//         int length;
//         int* breadth;
//         int height;

//     public:
//         // constructor
//         box()
//         {
//             breadth  = new int;
//         }
//     void set(int len,int bre,int hgt)
//     {
//         length = len;
//         *breadth = bre;
//         height = hgt;
//     }
//     void display()
//     {
//         cout << "length = "<< length <<endl;
//         cout << "breadth = "<< *breadth <<endl;
//         cout << "height = "<< height <<endl;

//     }

//     // Parameterized Constructors for
//     // for implementing deep copy
//     box(box& sample)
//     {
//         length = sample.length;
//         breadth = new int;
//         *breadth = *(sample.breadth);
//         height = sample.height;
//     }
//     // Destructors
//     ~box()
//     {
//         delete breadth;
//     }
// };

// int main ()
// {
//     box first;
//     first.set(12,14,16);
//     first.display();
//     // When the data will be copied then
//     // all the resources will also get
//     // allocated to the new object

//     box second ;
//     second = first ;
//     second.display();

//     return 0;
// }

// ? Static Data Members

// #include <iostream>
// using namespace std;
// class A{
//     public:
//     // constructor
//     A()
//     {
//         cout << "A constructor called "<<endl;
//     }
// };
// class B{
//     static A a;
//     public:
//      // constructor
//     B()
//     {
//         cout << "B constructor called "<<endl;
//     }
// };

// int main ()
// {
//     B obj;

//     return 0;
// }

//? Static Member Function

// #include <iostream>
// using namespace std;

// class student {
//     public:
//     // static member
//         static int total;
//     // Constructor called
//     student()
//     {
//         total = total + 1;
//     }
// };

// int student::total = 0;
// int main ()
// {
//     student s1;
//     cout <<  "Number of students:"<< s1.total<<endl;

//     student s2;
//     cout << "Number of students:" << s2.total << endl;

//     student s3;
//     cout << "Number of students:" << s3.total << endl;
//     return 0;
// }

// ? Static Member Function
// #include <iostream>
// using namespace std;
// class box
// {
//     private:
//     static int len;
//     static int brt;
//     static int hgt;

//     public:

//     static void print()
//     {
//         cout << "The value of the length is: " << len << endl;
//         cout << "The value of the breadth is: " << brt << endl;
//         cout << "The value of the height is: " << hgt << endl;

//     }
// };
// // initialize the static data members
// int box :: len = 10;
// int box :: brt = 20;
// int box :: hgt = 30;

// int main ()
// {
//     box show;
//     cout <<"Static member function is called through Object name: \n" << endl;
//     show.print();
//     cout << "\nStatic member function is called through Class name: \n" << endl;
//     box::print();

//     return 0;
// }

// ? ‘this’ pointer
//? Following are the situations where ‘this’ pointer is used:
//? 1) When local variable’s name is same as member’s name
// #include <iostream>
// using namespace std;

// class test{
//     private:
//     int x;
//     public:
//     void set(int x)
//     {
//         this->x = x;
//     }
//     void print()
//     {
//         cout <<" X = "<<x ;
//     }
// };

// int main ()
// {
//     test obj;
//     int x = 20;
//     obj.set(x);
//     obj.print();

//     return 0;
// }

//? 'This'  -> Pointer

// #include <iostream>
// using namespace std;

// class employee{
//     public:
//     int id;   //data member (also instance variable)
//     string name;   //data member (also instance variable)
//     float salary;

//     employee(int id ,string name, float salary)
//     {
//         this->id = id;
//         this->name = name;
//         this->salary = salary;
//     }
//     void display()
//     {
//         cout << id <<" \n"<<name<<" \n"<<salary<<endl;
//     }
// };

// int main ()
// {
//     employee object = employee(21,"Roman",59.00);
//     object.display();

//     return 0;
// }

//? this
// #include <iostream>
// using namespace std;
// class test {
//     private:
//     int x;
//     public:
//     test(int x = 0)
//     {
//         this->x = x;
//     }
//     test &obj(int a)
//     {
//         x = a;
//         return *this;
//     }
//     void print()
//     {
//         cout << "X = "<< x ;
//     }
// };
// int main ()
// {

//     test object(5);
//     object.obj(5);
//     object.print();

//     return 0;
// }

//? Scope Resolution Operator vs this pointer

// #include <iostream>
// using namespace std;
// class test
// {
//     int a;
//     public:
//     test()
//     {
//         a = 1;
//     }
//    // Local parameter 'a' hides class member 'a'
//     void func(int a)
//     {
//         cout <<a;
//     }
// };

// int main ()
// {
//     test obj;
//     int k = 3;
//     obj.func(k);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test {
//     int a;

// public:
//     Test()
//     {
//         a = 1;
//     }

//     // Local parameter 'a' hides object's member
//     // 'a', but we can access it using this.
//     void func(int a)
//     {
//         cout << this-> a;
//     }
// };

// // Driver code
// int main()
// {
//     Test obj;
//     int k = 3;
//     obj.func(k);
//     return 0;
// }

// ? Local class

// #include <iostream>
// using namespace std;

// void func()
// {
//     class test
//     {
//         public:

//             void method()
//             {
//                 cout <<"Local Class method() called";
//             }
//     };
//     test obj;
//     obj.method();

// }
// int main ()
// {

//     func();

//     return 0;
// }

//?
// #include <iostream>
// using namespace std;
// void func()
// {
//     class test
//     {
//         public:
//             static void method()
//             {
//                 cout << "Local class method() called";
//             }
//     };
//     test ::method();
// }

// int main ()
// {
//     func();

//     return 0;
// }

// ? Local class can access Global types

// #include <iostream>
// using namespace std;
// // Global variable
// int x;
// void func()
// {
//     // First local class
// class test1{
//     public:
//         test1()
//         {
//             cout << "Test1 :: test1()"<<endl;
//         }
//     };
//     // Second local class
//     class test2 {
//         test1 t;
//     public:
//         void method()
//         {
//             cout <<"X = "<<x;
//         }
//     };
//     test2 obj;
//     obj.method();

// }

// int main ()
// {
//     func();

//     return 0;
// }

//? Enum Classes

// #include <iostream>
// using namespace std;

//     enum roll_no {
//         student1 = 20,
//         student2 = 69,
//         student3 = 40,
//         student4 = 55,
//     };

// int main ()
// {
//     enum roll_no obj;
//     obj = student3;
//     cout << " The roll no :" <<obj;

//     return 0;
// }

//? Encapsulation

// ?  Example 1:
// #include <iostream>
// #include <string>
// using namespace std;
// class person {
// private:
//     string name;
//     int age;

// public:
//     person(string name,int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

//     void set_name(string name)
//     {
//         this->name = name;
//     }
//     string get_name()
//     {
//         return name;
//     }

//     void set_age(int age)
//     {
//         this-> age = age;
//     }
//     int get_age()
//     {
//         return age;
//     }
// };

// int main ()
// {
//     person person1("ANA",39);

//     cout << "Name: " << person1.get_name()<<endl;
//     cout << "Age: " << person1.get_age()<<endl;

//     person1.set_name("Alex");
//     person1.set_age(40);

//     cout << "Name: "<< person1.get_name()<<endl;
//     cout << "Age: " << person1.get_age()<<endl;

//     return 0;
// }

// ? Example 2:
// #include <iostream>
// using namespace std;

// class hide {
// private:
//     int y;

// public:
//     void set(int x)
//     {
//         y = x;
//     }

//     int get()
//     {
//         return y;
//     }

// };

// int main ()
// {
//     hide obj;
//     obj.set(77);
//     cout << "Value : " <<obj.get();

//     return 0;
// }

//? Example 3:
// #include <iostream>
// using namespace std;
// class circle {
// private:
//     float radius;
//     float area;

// public:
//     void get()
//     {
//         cout <<"Enter Radius :";
//         cin >> radius;
//     }
//     void sum()
//     {
//         area = 3.14 * radius * radius ;
//         cout <<"Area :"<<area;
//     }
// };

// int main ()
// {
//     circle sum;
//     sum.get();
//     sum.sum();

//     return 0;
// }

//? Abstraction
//* Exp : 1
// #include <iostream>
// using namespace std;
// class info {
// private:
//     int a;
//     int b;
// public:
//     void get(int x ,int y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << "A "<<a<<endl;
//         cout << "B "<<b;
//     }
// };

// int main ()
// {

//     info information;
//     information.get(30,55);
//     information.display();

//     return 0;
// }

//* Exp :2
// #include <iostream>
// using namespace std;
// class car{
//     private:
//         void car1()
//         {
//             cout <<"BMW"<<endl;
//         }
//     public:
//         void car2()
//         {
//             cout <<"ROLLS RoYAL"<<endl;
//         }
//         void car3()
//         {
//             cout <<"Cr1"<<endl;
//         }
// };

// int main ()
// {
//     car call;
//     call.car2();
//     call.car3();
//     return 0;
// }

//* -----------------------------------------------------------------------------------------------------------------------------

//?                Polymorphism
//* 1. Compile-Time Polymorphism
//! A. Function Overloading
// #include <iostream>
// using namespace std;
// class same{
//     public:
//         void func(int x)
//         {
//             cout << "value of x is " << x<<endl;
//         }

//         void func(double x)
//         {
//             cout << "value of x is " << x<< endl;
//         }
//         void func(int x , int y)
//         {
//             cout << "value of x and y is " << x << "," <<y <<endl;
//         }
// };

// int main ()
// {
//     same obj;
//     obj.func(50);
//     obj.func(44.23);
//     obj.func(32,13);
//     return 0;
// }

//! B] Operator Overloading

// #include <iostream>
// using namespace std;
// class complex {
// private:
//     int real, imag;
// public:
//     complex(int r = 0 , int i = 0)
//     {
//         real = r;
//         imag = i;
//     }
//     // This is automatically called
//     // when '+' is used with between
//     // two Complex objects
//     complex operator+(complex const& obj)
//     {
//         complex sum;
//         sum.real = real + obj.real;
//         sum.imag = imag + obj.imag;
//         return sum;
//     }

//     void print()
//     {
//         cout << real << " + i" << imag << endl;
//     }

// };

// int main ()
// {
//     complex c1(10,5), c2(2,4);

//     complex c3 = c1 + c3;
//     c3.print();

//     return 0;
// }

// ? RUN time polymorphism
// ! A. Function Overriding

// #include <iostream>
// using namespace std;
// class animal {
//     public:
//     string color = " White";

// };
// // inheriting Animal class.
// class dog : public animal {
//     public:
//     string color = "Grey";
// };

// int main ()
// {
//     animal obj = dog();
//     cout << obj.color;

//     return 0;
// }

//? b] Virtual Function

// #include <iostream>
// using namespace std;
// class base{
//     public:
//     // virtual function
//     virtual void display()
//     {
//         cout << "called virtual base class function"<<endl;
//     }
//      void print()
//      {
//         cout << "Called base print function"<<endl;
//      }

// };
// // Declaring a Child Class
// class child : public base{
//     public:
//         void display()
//         {
//             cout <<"Child Function "<<endl;
//         }
//         void print(){
//             cout << "Child Class"<<endl;
//         }
// };

// int main ()
// {
//     // Creating a reference of class base
//     base* obj;
//     child obj2;
//     obj = &obj2;

//     obj->base::display();

//     obj->print();

//     return 0;
// }

//  *1 ; FUNCTION OVERLOADING

// #include <iostream>
// using namespace std;
// void add(int a ,int b)
// {
//     cout << a + b << endl;
// }

// void add(double x, double y)
// {
//     cout << x + y <<endl;
// }

// int main ()
// {
//     add(4,6);
//     add(32.0,18.0)
//     return 0;
// }

// * Constructor Overloading
// #include <iostream>
// using namespace std;

// class same{

// public:
//     int area;
//     // Constructor with no parameters
//     same()
//     {
//         area = 0;
//     }
//     // Constructor with two parameters
//     same(int a,int b)
//     {
//         area = a * b;
//     }
//     print()
//     {
//         cout <<area<<endl;
//     }

// };
// int main ()
// {   // Constructor Overloading
//     // with two different constructors
//     // of class name
//     same obj1;
//     same obj2(20,5);
//     obj1.print();
//     obj2.print();

//     return 0;
// }

//*3 ; Function overloading and const
// #include <iostream>
// using namespace std;
// void fun(char* a)
// {
//     cout <<"NON Const "<<endl<<a;
// }
// void fun(const char* a)
// {
//     cout <<"Const "<<a <<endl;
// }

// int main ()
// {
//     const char* ptr = "Roman";
//     fun(ptr);

//     return 0;
// }

//* Overloading of main function
// #include <iostream>
// using namespace std;
// class test{
// public:
//     int main(int x)
//     {
//         cout << x << endl;
//         return 0;
//     }
//     int main(char * x)
//     {
//         cout << x << endl;
//         return 0;
//     }
//     int main(int x, int y)
//     {
//         cout << x <<" "<< y <<endl;
//         return 0;
//     }
// };

// int main ()
// {
// test obj;
//     obj.main(5);
//     obj.main("Love To Code.");
//     obj.main(4,6);

//     return 0;
// }

//? Factors

// #include <bits/stdc++.h>
// using namespace std;

// int increase(int x)
// {
//     return x + 1;
// }

// int main ()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     transform(arr,arr + n, arr , increase);
//     for(int i =0 ; i < n ; ++i)
//     {
//         cout <<arr[i]<<" ";
//     }

//     return 0;
// }

//? Operators that can be overload
//* 1; Overloading ++ Operator

// #include <iostream>
// using namespace std;
// class overload{
// private:
//     int count;
// public:
//     overload(): count(4){}

//     void operator++()
//     {
//         count = count + 1;
//     }
//     void print()
//     {
//         cout << "Count : "<<count<<endl;
//     }
// };

// int main ()
// {
//     overload obj;
// // this calls "function void operator ++()" function
//     ++obj;
//     obj.print();

//     return 0;
// }

//* 2: Overloading [] operator

// #include <iostream>
// using namespace std;
// class overload{
//     int a[3];
// public:
//     overload(int i ,int j,int k)
//     {
//         a[0] = i;
//         a[1] = j;
//         a[2] = k;
//     }
//     int operator[] (int i)
//     {
//         return a[i];
//     }
// };

// int main ()
// {
//     overload obj(1,2,3);
//     cout <<obj[1];

//     return 0;
// }

//* Overloading -> operator

// #include <bits/stdc++.h>
// using namespace std;
// class base{
// public:
//     int num;
//     base(int j )
//     {
//         num = j;
//     }
//     base* operator->(void)
//     {
//         return this;
//     }
// };

// int main ()
// {
//     base t(5);
//     base* ptr = &t;
//     // Accessing num normally
//         cout<<t.num<<endl;
//     // Accessing num using normal object pointer
//         cout <<ptr->num<<endl;
//         // Accessing num using -> operator
//         cout <<t->num<<endl;
//     return 0;
// }

// !---------------------------------------------------------------------------------------------------------------------

//? Inheritance

//! 1 : Single Inheritance
// #include <iostream>
// using namespace std;

// class parent{
//     int id;
//     char name[100];
// public:
//     void tell()
//     {
//         cout << "Enter the id first : ";
//         cin >> id;
//         cout << "Enter the name: ";
//         cin >> name;
//     }

//     void display()
//     {
//         cout <<"--------------------------------------------------\n"<<endl;
//         cout <<"Showing the detail which you entered :- \n"<<endl;
//         cout <<"Id : " << id <<endl<<"Name: "<<name<<endl;
//     }
// };

// class child :private parent{
// public:
//     char course[100];
//     int fee;
//     void get()
//     {
//         tell();
//         cout << "now enter the course name here: ";
//         cin >> course;
//         cout << "Enter the Fee : ";
//         cin >> fee;
//     }
//     void print()
//     {
//         display();
//         cout <<"course : " << course<<endl <<"Fees : "<< fee;
//     }
// };

// int main()
// {
//     child obj;
//     obj.get();
//     obj.print();
//     return 0;
// }

//! 2: Multiple Inheritance

// #include <iostream>
// using namespace std;

// class make1{
//     public:
//          make1()
//         {
//             cout <<"This is first class.\n";
//         }

// };
// class make2{
//     public:
//          make2()
//         {
//             cout << "This is Second class.";
//         }
// };

// class subclass : public make1 , public make2{
// };

// int main ()
// {
//     subclass object;
//     return 0;
// }

// !  Best Example =========================
//! 3: Multilevel Inheritance
// #include <iostream>
// using namespace std;
// class A {
//     protected:
//         int a ;
//         public :
//             void set_a()
//             {
//                 cout << "Enter a :";
//                 cin >> a;
//             }
//             void print_a()
//             {
//                 cout <<endl << "value : "<<a;
//             }
// };
// class B: public A{
//     protected:
//         int b;
//         public:
//             void set_b()
//             {
//                 cout <<"Enter B :";
//                 cin >> b;
//             }
//             void print_b()
//             {
//                 cout<< endl << "value : "<<b;
//             }
// };

// class C : public B
// {
//     protected:
//         int c ,sum;
//         public:
//             void set_c()
//             {
//                 cout << "Enter c: ";
//                 cin >> c;
//             }
//             void print_c()
//             {
//                 cout<<endl <<"value : "<<c;
//             }
//             void result()
//             {
//                 sum = a * b * c;
//             }
//             void display()
//             {
//                 cout <<endl<< "Sum : "<<sum ;
//             }
// };

// int main ()
// {

//     C obj;
//     obj.set_a();
//     obj.set_b();
//     obj.set_c();

//     obj.print_a();
//     obj.print_b();
//     obj.print_c();

//     obj.result();
//     obj.display();

//     return 0;
// }

//! 4: Hierarchical Inheritance

// #include <iostream>
// using namespace std;

// class base {
//     public:
//         base()
//         {
//             cout << "This is the Base class";
//         }
// };
// class second : public base{};

// class third : public base{};

// int main ()
// {
//     third obj;

//     return 0;
// }

//! 5 : Hybrid (Virtual) Inheritance

// #include <iostream>
// using namespace std;

// class vehicle{
//     public:
//         vehicle()
//         {
//             cout <<"This is part of upper body"<<endl;
//         }
// };
// class control{
//     public:
//         control()
//         {
//             cout <<"This is the control system.";
//         }
// };

// class engine : public vehicle{};

// class start : public vehicle , public control {};

// int main ()
// {
//     start object;

//     return 0;
// }

//! 6 : A special case of hybrid inheritance: Multipath inheritance:

// #include <iostream>
// using namespace std;
// class A{
//     public :
//     int a;
// };
// class B: public A{
//     public:
//     int b;
// };
// class C : public A{
//     public:
//     int c;
// };
// class D : public B , public C {
//     public:
//     int d;
// };

// int main ()
// {
//     D obj;
//     obj.B::a = 100;
//     obj.C::a = 20;
//     obj.b = 30;
//     obj.c = 40;
//     obj.d = 50;

//     cout << "  a form classA :"<<obj.B::a<<endl;
//     cout << "  a form classB :"<<obj.C::a<<endl;

//     cout << "B :"<<obj.b<<endl;
//     cout << "C :"<<obj.c<<endl;
//     cout << "D :"<<obj.d<<endl;

//     return 0;
// }

//? PUBLIC Inheritance

// #include <iostream>
// using namespace std;

// class base {
//     private:
//     int n = 1;
//     protected:
//     int m = 2;
//     public:
//     int o = 3;

//     int get()
//     {
//         return n;
//     }
// };

// class derived: public base{
//     public:
//     int print()
//     {
//         return m;
//     }
// };
// int main ()
// {
//     derived obj;
//     cout << obj.get();
//     cout << obj.print();
//     cout << obj.o;

//     return 0;
// }

//?  Multilevel Inheritance

// #include <iostream>
// using namespace std;
// class A{
// public:
//     int a;
//     void data_a()
//     {
//         cout <<"Enter a : ";
//         cin >> a;
//     }
// };
// class B : public A{
// public:
//     int b;
//     void data_b()
//     {
//         cout << "Enter b: ";
//         cin >>b;
//     }
// };
// class C : public B{
// private:
//     int c;

// public:
//     void data_c()
//     {
//         cout << "Enter c: ";
//         cin >>c;
//     }
//     void sum()
//     {
//         int ans = a + b + c;
//         cout << "Sum : "<<ans;
//     }
// };
// int main ()
// {
//     C obj;
//     obj.data_a();
//     obj.data_b();
//     obj.data_c();
//     obj.sum();

//     return 0;
// }

//? Constructor in Multiple Inheritance

// #include <iostream>
// using namespace std;
// class a{
//     public:
//     a()
//     {
//         cout <<"Constructor of the base class "<<endl;
//     }
// };
// class b{
//     public:
//     b()
//     {
//         cout <<"Constructor of the base class "<<endl;
//     }
// };

// class c :public b,public a{
//     public:
//     c():a(),b()
//     {
//         cout <<"Constructor of the derived class S \n"<<endl;
//     }
// };

// int main ()
// {
//     c obj;
//     return 0;
// }

// ? Default Arguments and Virtual Function

// #include <iostream>
// using namespace std;
// class base{
//     public:
//     virtual fun(int x = 0)
//     {
//         cout << "X:"<<x;
//     }
// };
// class child: public base {
//     public:
//     virtual fun(int x = 10)
//     {
//         cout <<"x : "<<x;
//     }
// };

// int main ()
// {

//     child obj;
//     base* ptr;
//     ptr = &obj;

//     ptr->fun();

//     return 0;
// }

//? Can Virtual Functions be Inlined

// #include <iostream>
// using namespace std;
// class base {
//     public:
//     virtual void who()
//     {
//         cout << "i am base: "<<endl;
//     }
// };
// class derived :public base {
//     public:
//     void who()
//     {
//         cout << "I am derived :"<<endl;
//     }
// };
// int main ()
// {

//     base obj;
//     obj.who();

//     base* ptr = new derived();
//     ptr-> who();

//     return 0;
// }

//* Constructor :- is a class obj
// #include <iostream>
// using namespace std;
// class demo{
//     int data;
//     public:
//         demo()
//         {
//             data = 30;
//         }
//         void display()
//         {
//             cout << "Data :"<<data;
//         }
// };
// int main ()
// {

//     demo obj;
//     obj.display();

//     return 0;
// }

//* Constructor types
//* 2 types  :- 1] Parameter constructor   .2] non- Parameter constructor 3] Copy constructor
//?1] Parameter constructor

// #include <iostream>
// using namespace std;
// class demo{
//     int data;
//     public:
//  demo(int a)   // ? Parameter constructor
//         {
//             data = a;
//         }
//         void print()
//         {
//             cout << "data:"<<data;
//         }
// };
// int main ()
// {
//     demo obj(33);
//     obj.print();

//     return 0;
// }

//? Constructor Overloading
// #include <iostream>
// using namespace std;
// class base{
//     int x ,y;
//     public:
//     base()
//     {
//         x = 0;
//         y = 0;
//     }
//     base(int a)
//     {
//         x = a;
//         y = 0;
//     }
//     base(int b , int c)
//     {
//         x = b;
//         y = c;
//     }
//     void print()
//     {
//         cout << "X : " << x <<" Y : "<<y <<endl;
//     }
// };

// int main ()
// {
//     base obj,obj1(23),obj2(33,44);
//     obj.print();
//      obj1.print();
//       obj2.print();

//     return 0;
// }

//? 3] Copy constructor

// #include <iostream>
// using namespace std;
// class show{
//     int data;
//     public:
//     show(){} // Default constructor

//     show(int x) // Parameter constructor
//     {
//         data = x;
//     }
//     void print()
//     {
//         cout <<"Data :"<< data<<endl;
//     }
// };

// int main ()
// {
//     show obj1(33);
//     show obj2(obj1);//? Copy constructor
//     obj1.print();
//     obj2.print();

//     return 0;
// }

//? How to make copy constructor make manually

// #include <iostream>
// using namespace std;
// class show{
//     int data;
//     public:
//     show(){} // Default constructor

//     show(int x) // Parameter constructor
//     {
//         data = x;
//     }
//     void print()
//     {
//         cout <<"Data :"<< data<<endl;
//     }
//     show (show &object) //! Manually Constructor
//     {
//         data = object.data;
//         cout << "Default constructor is this ."<<endl;
//     }

// };

// int main ()
// {
//     show obj1(33);
//     show obj2(obj1);
//     obj1.print();
//     obj2.print();
//     return 0;
// }

//? Destructor :- It Destroy the object of constructor

// #include <iostream>
// using namespace std;

// class destructor {

//     public:
//         destructor()
//         {
//             cout << "This is Constructor."<<endl;
//         }
//         ~destructor()
//         {
//             cout << "This is destructor"<<endl;
//         }
// };

// int main ()
// {
//     destructor obj;

//     return 0;
// }

//?  Function overloading

// #include <iostream>
// using namespace std;

// void func(int a , int b)
// {
//         cout << "a + b : "<<a + b<<endl;
// }

// void func(float a, float b)
// {
//         cout << "a + b : "<<a + b<<endl;
// }

// int main ()
// {
//         int a , b;
//         float x ,y;
//         cout <<"Enter the two number : ";
//         cin >> a >>b;
//         func(a, b);
//         cout <<"Re-Enter the two number: ";
//         cin >>x >>y;
//         func(x, y);

//     return 0;
// }

//? Inline function:- It reduce compile time

// #include <iostream>
// using namespace std;
// inline void print()
// {
//         cout <<"THis code run faster ";
// }
// int main ()
// {
//         print();

//     return 0;
// }

//? Just an exp of class

// #include <iostream>
// using namespace std;
// class complex {
//      int first , second;
// public:
//         void get_data(int x, int y)
//         {
//                 first = x;
//                 second = y;
//         }

// void show_data();

// complex add(complex c) // here c is represent c2
// {
//         complex temp;
//         temp.first = first + c.first;
//         temp.second = second + c.second;
//         return (temp);
// }

// };

// void complex::show_data()
// {
//         cout << "First: "<< first<< endl <<"Second :"<< second<<endl;
// }
// int main ()
// {
//         complex c1,c2,c3;

//         c1.get_data(5,10);
//         c2.get_data(25,10);
//         c3 = c1.add(c2);
//         c3.show_data();

//     return 0;
// }

//? Static Variable :- Start from zero[0]

// #include <iostream>
// using namespace std;

// void increase()
// {
//         static int count;
//         cout << " "<<count++;
// }

// int main ()
// {
//         for(int i = 0 ; i < 3 ; ++i)
//         {
//                 increase();
//         }
//     return 0;
// }

//? Static function

// #include <iostream>
// using namespace std;
// class demo {
//         static int count;
// public:
//         void increase()
//         {
//                 count++;
//         }
//         static void display()
//         {
//                 cout <<" Value : "<<count;
//         }
// };
// int demo::count; // Here we telling the class we have a static function
// int main ()
// {

//         demo obj;
//         obj.increase();
//         obj.increase();
//         demo::display();

//     return 0;
// }

//? UNARY OPERATOR OVERLOADING
// #include <iostream>
// using namespace std;
// class demo {
//         int x, y ,z;

//         public:
//         void get(int a, int b,int c)
//         {
//                 x = a;
//                 y = b;
//                 z = c;
//         }
//         void print();
//         void operator -();
// };
// void demo :: print()
// {
//         cout << "X :" <<x <<endl << "Y :" << y <<endl<<"Z :" << z<<endl;
// }
// void demo ::operator -()
// {
//         x = -x;
//         y = -y;
//         z = -z;
// }

// int main ()
// {
//         demo obj;
//         obj.get(10,20,30);
//         obj.print();
//         -obj;
//         obj.print();

//     return 0;
// }

// ? BINARY OPERATOR OVERLOADING

// #include <iostream>
// using namespace std;
// class demo{
//         int x,y;
//         public:
//         void get(int a, int b)
//         {
//                 x = a;
//                 y = b;
//         }
//         void print()
//         {
//                 cout <<"First : "<<x <<endl<< "Second : "<<y<<endl;
//         }
//         demo operator *(demo c);
// };
// demo demo :: operator *(demo c){
//         demo temp;
//         temp.x = x * c.x;
//         temp.y = y * c.y;
//         return temp;
// }

// int main ()
// {
//         demo obj1,obj2,obj3;
//         obj1.get(4,5);
//         obj2.get(2,2);
//         obj3 = obj1 * obj2;
//         obj3.print();

//     return 0;
// }

//? Friend function
// #include <iostream>
// using namespace std;

// class test {
//         private:
//         int num1 , num2;
//         public:
//         test() {} // default constructor

//         test(int x, int y)
//         {
//                 num1 = x;
//                 num2 = y;
//         }
//         void display();
//         friend void friend_class(test);
// };
// void test::display()
// {
//       cout <<"Num : "<<num1 <<"\n"<<"Num : "<<num2<<endl;

// }
// void friend_class(test t)
// {
//         int obj;
//         obj = t.num1 * t.num2;
//         cout << "Value : "<<obj;
// }

// int main ()
// {
//         test object(10,4);
//         object.display();
//         friend_class(object);

//     return 0;
// }

//! MAKING OWN THIS PROGRAM
//? Friend function with multiple classes
// #include <iostream>
// using namespace std;
// class employee;

// class boss {
//         int salary;
// public:
//         boss() {}
//         boss(int a)
//         {
//                 salary = a;
//         }
//         void boss_display()
//         {
//                 cout << "Boss Salary : "<<salary<<endl;
//         }
//         friend void salaries(boss , employee);
// };

// class employee {
//         int salary;
// public:
//         employee() {}
//         employee(int b)
//         {
//                 salary = b;
//         }
//         void employee_display()
//         {
//                 cout <<"Employee Salary : "<<salary<<endl;
//         }
//         friend void salaries(boss , employee);

// };   //? Friend function definition
// void salaries(boss m, employee n)
// {
//         int result;
//         result = m.salary + n.salary;
//         cout << "TOTAL : "<<result;
// }

// int main ()
// {
//         boss obj1(20000);
//         employee obj2(30000);
//         obj1.boss_display();
//         obj2.employee_display();
//         salaries(obj1,obj2);

//     return 0;
// }

//? Function Over-ridding
//* :- func. have same prototype in base class also derived class

// #include <iostream>
// using namespace std;

// class base {
//         public:
//         void same_func()
//         {
//                 cout <<"THis is base class :"<<endl;
//         }
// };
// class derived :public base{
//         public:
//         void same_func()
//         {
//                 cout << "This is derived class :"<<endl;
//         }
// };

// int main ()
// {       //?Here if i make base class obj it will print base func..
//         derived obj;
//         obj.same_func();

//     return 0;
// }

//? Function Overloading
//* Func.. with same name but different argument
// #include <iostream>
// using namespace std;
// class car{
//         public:
//         void same_function(int a)
//         {
//                 cout <<"Value int : "<<a<<endl;
//         }
//         void same_function(double x)
//         {
//                 cout <<"Value double : "<<x<<endl;
//         }
// };

// int main ()
// {
//         car obj;
//         obj.same_function(30);
//         obj.same_function(20.44);

//     return 0;
// }

//? New and Delete operator
// #include <iostream>
// using namespace std;

// int main ()
// {
//         int *ptr;
//         ptr = new int;
//         *ptr = 10;
//         cout <<*ptr;

//     return 0;
// }

// ? Using new keyword making an array
// #include <iostream>
// using namespace std;

// int main ()
// {
//         int *ptr;
//         ptr = new int[5];

//         ptr[0] = 5;
//         ptr[1] = 4;
//         ptr[2] = 3;
//         ptr[3] = 2;
//         ptr[4] = 1;

//         for(int i = 0; i < 5 ; ++i)
//         {
//                 cout << ptr[i]<<endl;
//         }
//     return 0;
// }

//? New keyword in class

// #include <iostream>
// using namespace std;
// class same {
//         public:
//         same()
//         {
//                 cout <<" HI "<<endl;
//         }
// };

// int main ()
// {
//         same *ptr;
//         ptr = new same;

//     return 0;
// }

//? Delete operator

// #include <iostream>
// using namespace std;

// int main ()
// {
//         int *ptr;
//         ptr = new int;

//         *ptr = 44;
//         cout << *ptr <<endl;

//     return 0;
// }

// ? IN array
// #include <iostream>
// using namespace std;

// int main ()
// {
//         int *ptr;
//         ptr = new int[2];
//         ptr[0] = 33;
//         ptr[1] = 22;

//         delete []ptr;

//         cout << ptr[0] <<endl;
//         cout <<ptr[1] <<endl;

//     return 0;
// }

//? Virtual base class :- it will automatically decide the path
// #include <iostream>
// using namespace std;
// class base1{
//         public:
//         void func()
//         {
//                 cout <<"Base class "<<endl;
//         }
// };
// class base2 :virtual public base1{}; // here we use virtual
// class base3 : virtual public base1{}; // here we use virtual

// class base4 :public base3, public base2{};

// int main ()
// {
//         base4 obj;
//         obj.func();

//     return 0;
// }

//? Virtual function

//* late binding and early binding

// #include <iostream>
// using namespace std;
// class A {
//         public: //Here we use virtual to late binding
//         virtual void print()
//         {
//                 cout <<"A is here."<<endl;
//         }
// };
// class B :public A{
//         public:
//         void print()
//         {
//                 cout <<"B is here ."<<endl;
//         }
// };

// int main ()
// {
//         // and now it display B
//         A *ptr;
//         B obj2;
//         ptr = &obj2;   //? Late binding
//         ptr->print();  //?  "B is here ." will print

//     return 0;
// }

//* Abstract class :- Class contain pure virtual function

// #include <iostream>
// using namespace std;
// class base {
//         public:
// virtual func() = 0;  //? pure virtual function
// };
// class derived : public base {
//         public:
//         virtual func()
//         {
//                 cout << "THis is abstract class";
//         }
// };

// int main ()
// {
//         derived obj;
//         obj.func();

//     return 0;
// }

//? 8 - 6 - 24

// #include <iostream>
// using namespace std;

// int main ()
// {
//         int x  = 2 , y = 4 , max;
//         if (x > y)
//         {
//                 max = x;
//         }
//         else
//         {
//                 max = y;
//         }

//         cout << "Max :"<<max<<endl;

//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//         int i;
//         for(i = 0 ;  i <= 20 ; ++i)
//         {
//                 if(i % 2 == !0)
//                 {
//                         continue;
//                 }
//                 cout << i << " ";
//         }

//         return 0;
// }

//? Abstract class and pure virtual function

//* Abstract class :- you cannot create the object of the abstract class
//* All the common code in derived class is written in abstract class
// #include <iostream>
// using namespace std;
// class database{
//         public:
//         virtual void data() = 0; // ! Pure virtual function  //* Which do nothing in this class but
//                                  //! you have to define that class in all derived classes

// };
// class accountant : public database {
//         public:
//          void data()
//         {
//                 cout << "This class is accountant."<<endl;
//         }
// };

// class manager : public database {
//         public:
//         void data()
//         {
//                 cout << "This class is manager."<<endl;
//         }
// };
// class costumer : public database {
//         public:
//         void data()
//         {
//                 cout << "This class is costumer."<<endl;
//         }
// };

// int main ()
// {
//         accountant a;
//         manager m;
//         costumer c;
//         a.data();
//         m.data();
//         c.data();

//         return 0;
// }

//? 9-6-24
//* Template :-
// #include <iostream>
// using namespace std;
// template <class work> //* Here i am using work as a name which work like data types.
// void function(work a , work b)
//         {
//                 cout << "a  + b : "<<a + b<<endl;
//         }
// int main ()
// {      //! If i change the int to double the work[int] will become double
//         int a = 4, b = 6;
//         function(a , b);

//         return 0;
// }

//?  Char value
// #include <iostream>
// using namespace std;
// template <class t>

// void func(t var1, t var2)
// {
//         cout << "Var1 : "<< var1 <<"\n"<<"Var2 : "<<var2<<endl;
// }
// int main ()
// {       //* Here we are using char to make the template value to char
//         char a = 'X';
//         char b = 'Y';
//         func(a , b);
//         cout << "After swap"<<endl;

//         return 0;
// }

//? Function Template with multiple paramater

// #include <iostream>
// using namespace std;
// template <class first , class second>
//         void add(first a , second b)
//         {
//                 cout << " a + b :" <<a+b <<endl;
//         }
// int main ()
// {
//      //* Here is the multiple paramater template
//         int x = 5;     //* This is int
//         float y = 3.44;   //* This is float
//         add(x, y);

//         return 0;
// }

//? Two template are here 1 : is addition , 2: is subtraction
// #include <iostream>
// using namespace std;
// template <class num1 , class num2>

//         void addition(num1 a, num2 b)
//         {
//                 cout << "a + b = "<< a + b<<endl;
//         }
// template <class num1 ,class num2>
//         void subtraction(num1 a , num2 b)
//         {
//                 cout << "a - b = "<< a - b<<endl;
//         }
// int main ()
// {
//         int x = 8;
//         int y = 2;
//         addition(x , y);
//         subtraction(x , y);

//         return 0;
// }

//? Function Template with [typename]
// #include <iostream>
// using namespace std;
//         //* Here we are using typename
// template <typename y, typename z>
// //* Here we use auto keyword which automatically decide which one want to pick
// auto function(y num1, z num2)
// {
//         return (num1 > num2) ? num1 : num2;
// }

// int main ()
// {
//         int a = 4;
//         float b = 3.99;
//         cout << "value: "<< function(a , b);
//         return 0;
// }

//? Class Template     :- Imp
// #include <iostream>
// using namespace std;

// template <typename t>
// class math {
//         t first , second;
//         public:
//         math() {}
//         math(t a , t b)
//         {
//                 first  = a;
//                 second = b;
//         }
//         void add();
//         void multiply();
// };
// //? Defining the function out side the class
// template <typename t>
// void math<t>::add()
// {
//         cout <<"Addition of number : "<<first + second <<endl;
// }

// template <typename t>
// void math<t>::multiply()
// {
//         cout <<"Multiply of number : "<<first * second <<endl;
// }

// int main ()
// {       //* This will here is int for the data type
//         math<int>obj(30 , 2);
//         obj.add();
//         obj.multiply();
//         return 0;
// }

//? Using template with 3 diff.. data types
// #include <iostream>
// using namespace std;
// template <typename t>
//         t func(t a , t b)
//         {
//                 return (a > b ) ? a : b;
//         }

// int main ()
// {
//         cout << func<int>(3,7)<<endl;
//         cout << func<double>(3.0,7.0)<<endl;
//         cout << func<char>('g','e')<<endl;

//         return 0;

// }

//? Implementing Bubble Sort using templates
// #include <iostream>
// using namespace std;
// template <class t>
// void func(t array[] , int n)
// {
//         for (int i = 0 ; i < n - 1; ++i)
//         {
//                 for (int j = n - 1 ; i < j ; j--)
//                 {
//                         if(array[j] < array[j - 1])
//                         {
//                                 swap(array[j], array[j - 1]);
//                         }
//                 }
//         }
// }

// int main ()
// {
//         int array[5] = { 10, 50, 30, 40, 20 };
//         int size = sizeof(array) / sizeof(array[0]);

//         // Class template function
//         func<int>(array, size);

//         //sort array
//         cout << "Sorted array : " ;
//         for(int i = 0; i < size ; ++i)
//         {
//                 cout << array[i]<<" ";
//         }

//         return 0;
// }

//? pass non-type parameters to templates
// #include <iostream>
// using namespace std;
// template <class t , int max>
// int func(t array[] , int n )
// {
//         int m = max;
//         for(int i = 0; i < n ; ++i)
//         {
//                 if(array[i] < m)
//                 {
//                         m = array[i];
//                 }
//                 return m;
//         }

// }

// int main ()
// {
//         int arr1[]  = {10,20 ,25,13};
//         int n1 = sizeof (arr1) / sizeof(arr1[0]);

//         char arr2[] = {1,2,3};
//         int n2 = sizeof(arr2) / sizeof(arr2[0]);

//         cout << func<int,10000>(arr1, n1)<<endl;
//         cout << func<char,256>(arr2, n2);

//         return 0;
// }

//? Multiplication
// #include <iostream>
// using namespace std;
// template <typename t >
//         t function(t first , t second )
//         {
//                 return first * second;
//         }

// int main ()
// {
//         auto result = function(10,20);
//         cout <<  "10 * 20 : "<< result << endl;

//     return 0;
// }

//? Pointer to pointer
// #include <iostream>
// using namespace std;

// int main ()
// {
//         int number = 5;
//         int *ptr = &number;

//         cout << "Ptr = "<<*ptr<<endl;

//         int **double_ptr ;
//         double_ptr = &ptr;

//         cout << "Double Ptr = "<<**double_ptr<<endl;
//         return 0;
// }
