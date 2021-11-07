#include <iostream>
#include <cmath>

using namespace std;


// This is a function that prints out the sentence Hello man
// The function can take in a parameter inside the parenthesis. 
// FOR EX: if i put in a string inside the parenthesis and give the string a name I can pass in a name
// for the function that i am going to right. 
void sayHi(string name){
    cout << "Hello man your name is " << name << endl;
}

// This function is the function that takes in a parameter of an int which is the age. 
// Then it prints out the age of the person. 
// The parameter that it takes is from the main program. 
void getAge(int age){
    cout << "You are " << age << " years old \n YOUR SO FUCKING OLD" << endl;
}

// This function takes in what time it is currently
// The parameter of this function is that it takes in a double 
// and then it prints out a sentence saying what the time is
// The parameter is given in the main function. 
void getTime(string time){
    cout << "The time is currently " << time << endl;
}



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
    
    // This is the start of the time function and all you put in for the parameter of this is a double.
    cout << "What is the time right now? ";
    getline(cin, userTime);
    getTime(userTime);
    
   

    // This is the beginning of the code for the name function
    cout << "What is your name? ";
    getline (cin, userName);
    sayHi(userName);

    // This is the start of the age function where i am taking in an int instead of an string.
    cout << "What is your age? ";
    cin >> userAge;
    getAge(userAge);

    cout << "Bottom" << endl;


    

    return 0;
}
