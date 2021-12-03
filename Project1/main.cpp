#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <time.h>
using namespace std;
int main()
{
    //int md, su, sp, prnm, stt, st, rm, kpe, nl, hnl;
    int N, i;
    char a;
    cout << "Pick a topic:" << endl << endl;
    cout << "1 - Mechanical movement" << endl;
    cout << "2 - Speed and acceleration" << endl;
    cout << "3 - Free falling" << endl;
    cout << "4 - Mechanical principles" << endl;
    cout << "5 - Force of gravity and weight " << endl;
    cout << "6 - Mechanical movement" << endl;
    cout << "7 - Work and power" << endl;
    cout << "8 - Kinetic and potential energy" << endl;
    cout << "9 - Pressure and Paskal's law" << endl;
    cout << "10 - Hydrostatic pressure" << endl << endl;
    
    cout << "Enter number: ";
    cin >> N;

    switch (N)
    {
    case 1:
        srand((unsigned)time(NULL));       
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1: 
            cout << "A1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            
            break;
        case 2:
            cout << "A2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "A3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 4:
            cout << "A4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "A5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
       }    
        break;
    case 2:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "B1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "B2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "B3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 4:
            cout << "B4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "B5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        }
        break;
    case 3:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "C1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "C2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 3:
            cout << "C3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 4:
            cout << "C4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "C5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        }
        break;
    case 4:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "D1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "D2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "D3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 4:
            cout << "D4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cout << endl;
            cin >> a;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "D5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        }
        break;
    case 5:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "E1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 2:
            cout << "E2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 3:
            cout << "E3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 4:
            cout << "E4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "E5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        }
        break;
    case 6:
        srand((unsigned)time(NULL));
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "F1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "F2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "F3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 4:
            cout << "F4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "F5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        }
        break;
    case 7:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "G1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "G2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "G3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 4:
            cout << "G4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "G5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        }
        break;
    case 8:
        srand((unsigned)time(NULL));       
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "H1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "H2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 3:
            cout << "H3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 4:
            cout << "H4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "H5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        }
        break;
    case 9:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "I1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "I2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "I3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        case 4:
            cout << "I4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "I5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;
            }
            break;
        }
        break;
    case 10:
        srand((unsigned)time(NULL));        
        i = (rand() % 5) + 1;

        switch (i)
        {
        case 1:
            cout << "J1" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 2:
            cout << "J2" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 3:
            cout << "J3" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 4:
            cout << "J4" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        case 5:
            cout << "J5" << endl << endl;
            cout << " a) \n\n b) \n\n c) \n\n d) \n" << endl;
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                break;
            case 'b':
                cout << "Incorrect";
                break;
            case 'c':
                cout << "Incorrect";
                break;
            case 'd':
                cout << "Incorrect";
                break;

            }
            break;
        }
        break;
    default:
        cout << "Wrong input";
    }
}