#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // all the variables
    string color, noun, name;

    // get color
    cout << "Enter a color: ";
    getline(cin, color);

    // get noun
    cout << "Enter a noun: ";
    getline(cin, noun);

    // get name
    cout << "Enter a name: ";
    getline(cin, name);

    cout << "MADLIBS GAME\n";
    cout << "Roses are " << color << "\n";
    cout << noun << " are blue\n";
    cout << "I love " << name << "\n";


    return 0;




}
