/**
 * @file chatbot.cpp
 * @author Felix McGowan
 * @brief Chatbot program
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <iostream>
 using namespace std;

 int main()
 {
    // Line 18-21 for asking the users name and storing it, using it in a sentence.
    cout << "Oh hello there! What is your name?" << endl;
    string name;
    cin >> name;
    cout << "It's super nice to meet you " << name << " my name is Jarvis but my friends call me Chatbot." << endl;

    // Line 24-27 for asking where they're from, labeled home, and using it in a sentence.
    cout << "Now that we're aquainted, let's get to know eachother. Where are you from?" << endl;
    string home;
    cin >> home;
    cout << home << " sounds like a nice place, I should visit one day." << endl;

    // Lines 30-39 for taking user age, storing it, and dividing it by the chatbot's age (10).
    int userAge = 0;
    int jarvisAge = 10;
    
    cout << "I'm curious, how old are you new friend?" << endl;
    cin >> userAge;

    double betweenAge = (double)userAge / jarvisAge;

    cout << "You're " << userAge << "? That's " << betweenAge 
    << " times older than me! I'm only " << jarvisAge << " years old in machine years." << endl;

    // Lines for asking and storing dream car, simple one.
    string dreamCar;
    

 }