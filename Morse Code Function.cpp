#include <iostream>

#ifndef Windows_H
#define Windows_H

    #include <windows.h>
#endif

#ifndef MorseCode_H
#define MorseCode_H
    #include "MorseCode.h"
#endif



//Macros
#define dash dash_();
#define dot dot_();

using namespace std;

// Simply use the Windows API, Sleep to cause a delay.
void delay(int wait)
{
    Sleep( wait);
}

///////////////////////////////////////////////////////////////////////////////
void dot_()
{
    Beep(400, 100); //Beep( freq, duration)
    cout << '.';
}

////////////////////////////////////////////////////////////////////////////
void dash_()
{
    Beep(500, 200);
    cout << '-';
    delay(1); // Sleep(1000);
}

/////////////////////////////////////////////////////////////////////////////////////

//This code converts a message into ITU morse code
void morseCode(char letter)
{
    switch(toupper(letter))
    {
    case 'A':
        {
            dot  dash
            break;
        }
    case 'B':
        {
            dash dot  dot  dot
            break;
        }
    case 'C':
        {
            dash dot  dash dot
            break;
        }
    case 'D':
        {
            dash dot  dot
            break;
        }
    case 'E':
        {
            dot
            break;
        }
    case 'F':
        {
            dot  dot  dash dot
            break;
        }
    case 'G':
        {
            dash dash dot
            break;
        }
    case 'H':
        {
            dot  dot  dot  dot
            break;
        }
    case 'I':
        {
            dot  dot
            break;
        }
    case 'J':
        {
            dot  dash dash dash
            break;
        }
    case 'K':
        {
            dash dot  dash
            break;
        }
    case 'L':
        {
            dot  dash dot  dot
            break;
        }
    case 'M':
        {
            dash dash
            break;
        }

    case 'N':
        {
            dash dot
            break;
        }
    case 'O':
        {
            dash dash dash
            break;
        }
    case 'P':
        {
            dot dash dash  dot
            break;
        }
    case 'Q':
        {
            dash dash dot  dash
            break;
        }
    case 'R':
        {
            dot  dash dot
            break;
        }
    case 'S':
        {
            dot dot  dot
            break;
        }
    case 'T':
        {
            dash
            break;
        }
    case 'U':
        {
            dot  dot dash
            break;
        }
    case 'V':
        {
            dot dot dot dash
            break;
        }
    case 'W':
        {
            dot dash dash
            break;
        }
    case 'X':
        {
            dash dot dot dash
            break;
        }
    case 'Y':
        {
            dash dot dash dash
            break;
        }
    case 'Z':
        {
            dash dash dot dot
            break;
        }

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

//                  Numbers in Morse Code
    case '1':
        {
            dot dash dash dash dash
            break;
        }
    case '2':
        {
            dot dot dash dash dash
            break;
        }
    case '3':
        {
            dot dot dot dash dash
            break;
        }
    case '4':
        {
            dot dot dot dot dash
            break;
        }
    case '5':
        {
            dot dot dot dot dot
            break;
        }
    case '6':
        {
            dash dot dot dot dot
            break;
        }
    case '7':
        {
            dash dash dot dot dot
            break;
        }
    case '8':
        {
            dash dash dash dot dot
            break;
        }
    case '9':
        {
            dash dash dash dash dot
            break;
        }
    case '0':
        {
            dash dash dash dash dash
            break;
        }
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
//                  punctuation
    case '.':// Period
        {
            dot dash dot dash dot dash
            break;
        }
    case ',':// Comma
        {
            dash dash dot dot dash dash
            break;
        }
    case '?':// Question Mark
        {
            dot dot dash dash dot dot
            break;
        }
    case '\'':// Apostrophe
        {
            dot dash dash dash dash dot
            break;
        }
    case '!':// Exclamation mark
        {
            dash dot dash dot dash dash
            break;
        }
    case '/':// Slash
        {
            dash dot dot dash dot
            break;
        }
    case '('://  Parenthesis open
        {
            dash dot dash dash dot
            break;
        }
    case ')'://  Parenthesis close
        {
            dash dot dash dash dot dash
            break;
        }
    case '&'://  Ampersand [&]
        {
            dot dash dot dot dot
            break;
        }
    case ':'://  Colon
        {
            dash dash dash dot dot dot
            break;
        }
    case ';':// 	Semicolon
        {
            dash dot dash dot dash dot
            break;
        }
    case '=':// Equal Sign/Double dash
        {
            dash dot dot dot dash
            break;
        }
    case '+':// Plus
        {
            dot dash dot dash dot
            break;
        }
    case '-'://  Hyphen/Minus
        {
            dash dot dot dot dot dash
            break;
        }
    case '_':// Underscore
        {
            dot dot dash dash dot dash
            break;
        }
    case '"':// Quotation mark
        {
            dot dash dot dot dash dot
            break;
        }
    case '$':// Dollar sign
        {
            dot dot dot dash dot dot dash
            break;
        }
    case '@':// '@' sign
        {
            dot dash dash dot dash dot
            break;
        }
    }
} // end of  ITU morse code
