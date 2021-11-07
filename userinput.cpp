#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age;
    //cout << "Enter your age: ";
    //cin >> age;

    //cout << "You are " << age << " Years old\n";

    //thats for a number and for a string of text that will be different
    // I notced that when you have another cin at the top then the getline function doesnt work correctly. 
    

    string name;
    cout << "Enter your name ";
    getline (cin, name);

    cout << "Hello " << name << " How are you doing\n";


    return 0;
}
