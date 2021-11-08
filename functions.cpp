#include <iostream>
#include <cmath>

using namespace std;


// This is a function that prints out the sentence Hello man
// The function can take in a parameter inside the parenthesis. 
// FOR EX: if i put in a string inside the parenthesis and give the string a name I can pass in a name
// for the function that i am going to right. 
void sayHi(string name);


// This function is the function that takes in a parameter of an int which is the age. 
// Then it prints out the age of the person. 
// The parameter that it takes is from the main program. 
void getAge(int age);


// This function takes in what time it is currently
// The parameter of this function is that it takes in a double 
// and then it prints out a sentence saying what the time is
// The parameter is given in the main function. 
void getTime(string time);


// This function is to turn and take 2 parameters. Im just writing this to try and take two parameters
// The first parameter is going to be a string and the second parameter is also gonna be a string. 
void getWords(string word1, string word2);

// This new function that I am going to write is going to to test functions that i am gonna write
// that returns a double instead of a void. 
double sum(double num1, double num2);




// This is the main function
int main()
{
    
    cout << "Top" << endl;


    // To pass in a parameter I can just put it inside the parenthesis inside this function. at the 
    // bottom. 
    // Since it is a string i can just pass in a string inside this function. And use the double 
    // qoutes
    // for the string inside this function. 
    string userName;
    int userAge;
    string userTime;
    string userWord1, userWord2;
    double userNum1, userNum2, userSum;
    
    // This is the start of the time function and all you put in for the parameter of this is a double.
    cout << "What is the time right now? ";
    getline(cin, userTime);
    getTime(userTime);
    
    // This is the beginning of the code for the name function
    cout << "What is your name? ";
    getline (cin, userName);
    sayHi(userName);
    
    // This is the function that uses two parameters. I will promot the user to enter 2 parameters.
    cout << "What is the first word that comes into your mind? " << endl;
    getline (cin, userWord1);
    cout << "What is the second word that comes into your mind? " << endl;
    getline (cin, userWord2);
    getWords(userWord1, userWord2);

    // This is the start of the age function where i am taking in an int instead of an string.
    cout << "What is your age? ";
    cin >> userAge;
    getAge(userAge);

    // This is the start of the sum function that i am going to write. 
    cout << "Choose a number: " << endl;
    cin >> userNum1;
    cout << "Choose anoher number: " << endl;
    cin >> userNum2;
    userSum = sum(userNum1, userNum2);
    cout << "The sum of the two numbers that you chose is: " << userSum << endl;

    // This is just code that shows that this is the bottom of the program. 
    cout << "Bottom" << endl; 


    

    return 0;
}


// We can define all the functions here so that the code can look better probably. In the
// top we can just put the functions signature so that we know that a function exitsts. 


// sayHi function
void sayHi(string name){
    cout << "Hello man your name is " << name << endl;
}

// get age function
void getAge(int age){
    cout << "You are " << age << " years old \n YOUR SO FUCKING OLD" << endl;
}

// getTime function
void getTime(string time){
    cout << "The time is currently " << time << endl;
}

// getWords function
void getWords(string word1, string word2){
    cout << "The first word is " << word1 << endl;
    cout << "The second word is " << word2 << endl;
}

// sum function that returns a double
double sum(double num1, double num2){
    double sumNum;
    sumNum = num1 + num2;
    return sumNum;
}










