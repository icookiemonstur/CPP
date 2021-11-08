#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool go;
    int test;
    
    cout << "Enter a 1 or a 0 or a 2: ";
    cin >> test;


    if(test == 1){
        cout << "The value you entered is 1" << endl;
    }else if(test == 2){
        cout << "The value that you entered is 2" << endl;
    }else {
        cout << "The value you entered was not 1 or a 2, prolly a 0" << endl;
    }


    return 0;
}
