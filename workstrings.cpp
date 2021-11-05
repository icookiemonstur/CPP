#include <iostream>

using namespace std;

int main()
{
    string phrase = "My Name Is Alan";

    cout << "This is the .legnth() of the string phrase: " << phrase.length() << "\n";
    cout << "This is the 3rd word in the string: " << phrase[3] << "\n";
    cout << phrase[5] << "\n";
    phrase [0] = 'B'; 
    cout << phrase << "\n";

    cout << phrase.find("Name", 0) << "\n";

    cout << phrase.substr(0, 4) << "\n";
    
    string phrasesub;
    phrasesub = phrase.substr(0,4);

    cout << phrasesub << "\n";




    return 0;
}
