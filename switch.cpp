#include <iostream>
#include <cmath>

using namespace std;

// This function uses switch statements to return the day of the week. Instead of using the standard
// if else statements we are using switch statements to do it. 
string getDay(int dayNum);

int main()
{
    // variables
    int num;
    string result;

    // Start of the main program
    cout << "Please enter a number to find out what day of the week it is. " << endl;
    cin >> num;

    result = getDay(num);

    cout << num << " Is: " << result << endl;
    

}

string getDay(int dayNum){
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid";
    }
    return dayName;
}
