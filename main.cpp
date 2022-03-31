//Title = Basis use of String literal
//Purpose = Practice coding with string literal, take inputs from user and make a story
// Enjoy the Process
// Author = Fransiskus Agapa

#include <iostream>
#include <string>                              // enable us to use string library

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string adjWord;
    string adjWord1;
    string myHobby;
    string favFood;
    string favSeason;

    cout << " -Let's make a story!-" << endl;
    cout << " Enter 1st adjective word that describe yourself : " << endl;
    cin >> adjWord;

    cout << " Enter 2nd adjective word that describe yourself : " << endl;
    cin >> adjWord1;

    cout << " Enter one of your hobby/ies : " << endl;
    cin >> myHobby;

    cout << " Enter your one of your favorite food : " << endl;
    cin >> favFood;

    cout << "Enter your favorite season in a year : " << endl;
    cin >> favSeason ;

    cout << endl;                                                                            // create newline
    cout << "                     = About Me! = " << endl << endl;               // simplest way to make the title be in the middle
    cout << " I am " << adjWord << " and " << adjWord1 << ", ";
    cout << "my hobby is " << myHobby << '.' << endl;
    cout << "My favorite food is " << favFood << " and my favorite season in a year is "  << favSeason << '.' << endl;

    return 0;
}
