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
 #include <cmath>
 using namespace std;

 int main()
 {
   // Line 18-21 for asking the users name and storing it, using it in a sentence.
    cout << "Oh hello there! What is your name?" << endl;
    string name;
    cin >> name;
    cout << "It's super nice to meet you " << name << " my name is Jarvis but my friends call me Chatbot.\n" << endl;

   // Line 24-27 for asking where they're from, labeled home, and using it in a sentence.
    cout << "Now that we're aquainted, let's get to know eachother. Where are you from?" << endl;
    string home;
    cin >> home;
    cout << home << " sounds like a nice place, I should visit one day.\n" << endl;

   // Lines 30-39 for taking user age, storing it, and dividing it by the chatbot's age (10).
    int userAge = 0;
    int jarvisAge = 10;
    
    cout << "I'm curious, how old are you new friend?" << endl;
    cin >> userAge;

    double betweenAge = (double)userAge / jarvisAge;

    cout << "You're " << userAge << "? That's " << betweenAge 
    << " times older than me! I'm only " << jarvisAge << " years old in machine years.\n" << endl;

   // Lines 42-45 for asking and storing dream car, simple one.
    string dreamCar;
    cout << "Now a fun question, what is your dream car?" << endl;
    cin >> dreamCar;
    cout << dreamCar << "? That's a super cool one, I wish I was able to drive!\n" << endl;

   // Lines 49-74 for asking price, loan, and years, storing them, and then using the formula
    float carCost;
    cout << "How much would a car like that go for?" << endl;
    cin >> carCost;
    cout << carCost << "?! That is more than I think I'll ever make.\n" << endl;

   // For interest rate question
   float interestRate;
   cout << "What's the interest rate like for that? Just a whole nubmer please, I struggle with percentages" << endl;
   cin >> interestRate;
   interestRate = interestRate / 100;
   cout << interestRate << "? Got it.\n" << endl;

   // For the years
   int yearsTaken = 0;
   cout << "Now with that, how many years would that loan be for?" << endl;
   cin >> yearsTaken;
   cout << yearsTaken << "? Alright perfect.\n" << endl;

   // Now for the monthly payment, fingers crossed
   double topPayment = (carCost * (interestRate / 12));
   double bottomPayment = 1 - (pow(1 + (interestRate / 12), -(12 * yearsTaken)));
   double monthlyPayment = topPayment / bottomPayment;
   double interestPayment = monthlyPayment * yearsTaken * 12;

   cout << "Alright so looks like your monthly payment will be $" << printf("%.1f", monthlyPayment) << " that's a total of $" 
   << printf("%.1f", interestPayment) << ", wow that's a lot!\n" << endl;

   //end
   cout << "Well that's pretty much all I got, goodbye " << name << "!" << endl;

 }