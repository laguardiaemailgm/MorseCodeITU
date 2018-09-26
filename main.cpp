//Converts input message into ITU Morse code.
#include <iostream>
#include <cstring>
#include "MorseCode.h"

#ifndef Windows_H
#define Windows_H
    #include <windows.h>
#endif


using namespace std;


int main ()
{
    SetConsoleTitle( "Text to Morse Code" );
    string in;

    cout<< "Enter a word: ";
    getline(cin, in, '\n');

    int len = in.length();
    string opcode;
    //int value;

    // compute the cost to the customer to sent message
    cout << "\ncount of letters and spaces is :"<< in.length();

    float cost;
    float price_per_letter = 0.01; // 1 cent per letter,includes that operator must read blanks.

    cost = price_per_letter * len;
    cout<< "\nYour text message cost $"<< cost << endl;

    // take part the message, character-by-character

    for(int i=0; i < len ; i++)
        {
        char letter = in[i];
        cout << "letter: "<< letter << ": ";

        morseCode(letter);
        cout << endl;

        delay(1);
    }
return 0;
} // end of main

