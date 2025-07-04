//* Date : 04-july-25
// ! There are mainly two forms of hash typically implemented in programming languages.
/*
    1. Hash set : undordered_set :- going to store value in unorder manner
    2. Hash map : undordered_map
*/

#include <iostream>
#include <unordered_map>
using namespace std;
void print(unordered_map<int, string> um)
{
    for (auto i : um)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << endl;
}
void deleteElement(unordered_map<int, string> um)
{
    um.erase(4);
    um.erase(um.begin());

}

int main()
{
    unordered_map<int, string> um = {
        {1, "first"},
        {2, "second"},
        {3, "third"}};

    //  Inserting Elements
    um[1] = "Roman";
    um.insert({4, "New value"});
    cout << "um: " << endl;
    print(um);

    cout << um[1] << endl;
    cout << um.at(2) << endl;

    // Find element
    auto it = um.find(3);
    if (it != um.end())
    {
        cout << "Find it";
    }
    else
    {
        cout << "Not Found";
    }
    cout << endl;
    deleteElement(um);
    print(um);

    return 0;
}