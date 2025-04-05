/*
Course: CS 215-012
Project: Lab 1
Purpose: Display snowman and introduce myself to my TA. Additionally, calculate how much time will be spent on class.
Author: Brennen Adams
*/

#include <iostream>
using namespace std;

int main()

{
    //Displays text introducing myself and my image
    cout << "Hi Bipin," << endl;
    cout << "I am glad you are my TA." << endl;
    cout << "My name is Brennen. Nice to meet you!" << endl;
    cout << "" << endl;
    cout << "This is my snowman." << endl;
    cout << "" << endl;
    
    //Prints a snowman on the screen.
    cout << "  ___  " << endl;
    cout << " |   | " << endl;
    cout << "_|___|_ " << endl;
    cout << "( O O )" << endl;
    cout << "(  :  )" << endl;
    cout << "(  :  )" << endl;

    //Ask the user how many classes they have and then display the result
    int classes = 0;
    cout << "How many classes do you have today?" << endl;
    cin >> classes;
    cout << "You have " << classes << " classes today!" << endl;
    cout << "Enjoy the rest of your day!" << endl;
    cout << "" << endl;

    //Collect user input and calculate the time spent
    double hours = 0.0;   //Declare a variable to store how many hours
    cout << "How many hours are you going to spend on CS 215 every week?" << endl;
    cin >> hours;
    const int Hour_to_min = 60; //Declare a constant: 1 hour = 60 minutes
    const int Min_to_sec = 60; //Declare a constant: 1 minute = 60 seconds
    double seconds = hours * Hour_to_min * Min_to_sec;
    cout << "Good Luck! You will spend " << seconds << " seconds each week on CS 215." << endl;

    return 0;
}
