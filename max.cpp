#include <iostream>
#include <cmath>

using namespace std;

// This function compares 2 numbers and see which number is bigger
double getMax(double num1, double num2);


int main()
{
    double userNum1, userNum2;
    double maxNum;

    cout << "Enter  2 numbers to see which number is bigger" << endl;
    cout << "Enter the first number: " << endl;
    cin >> userNum1;
    cout << "Enter the second number: " << endl;
    cin >> userNum2;

    maxNum = getMax(userNum1, userNum2);
    
    if (maxNum != 0){
        cout << "The maximum number of the two numbers you put is: " << maxNum << endl;
    }else{
        cout << "The numbers you entered are the same. " << endl;
    }

    return 0;
}

// This is the code for the get max function
double getMax(double num1, double num2){
    if (num1 > num2){
        return num1;
    }else if(num2 > num1){
        return num2;
    }else{
        return 0;
    }
}
