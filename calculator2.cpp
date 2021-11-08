#include <iostream>
#include <cmath>

using namespace std;

// Addition function
double addNum(double num1, double num2);

// Subtraction function
double subNum(double num1, double num2);

// Multiplication function
double mulNum(double num1, double num2);

// Division function
double divNum(double num1, double num2);


int main(){
    
    double userNum1, userNum2, resultNum;
    char op;

    cout << "Enter a number: ";
    cin >>  userNum1;
    cout << "Enter a operator: ";
    cin >> op;
    cout << "Enter another number: ";
    cin >> userNum2;
    
    if (op == '+'){
        resultNum = addNum(userNum1, userNum2);
        cout << "The sum of the 2 numbers is: " << resultNum << endl;
    }else if(op == '-'){
        resultNum = subNum(userNum1, userNum2);
        cout << "The difference of the 2 numbers is: " << resultNum << endl;
    }else if(op == '*'){
        resultNum = mulNum(userNum1, userNum2);
        cout << "The product of the 2 numbers is: " << resultNum << endl;
    }else if(op == '/'){
        resultNum = divNum(userNum1, userNum2);
        cout << "The qoutient of the 2 numbers is: " << resultNum << endl;
    }else{
        cout << "You have entered an incorrect type of operator " << endl;
    }

    return 0;
}


// Addition function
double addNum(double num1, double num2){
    return num1 + num2;
}

// Subtraction function
double subNum(double num1, double num2){
    return num1 - num2;
}

// Multiplication function
double mulNum(double num1, double num2){
    return num1 * num2;
}

// Division function 
double divNum(double num1, double num2){
    return num1/num2;
}
