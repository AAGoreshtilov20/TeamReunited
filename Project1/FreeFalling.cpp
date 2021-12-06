#include "FreeFalling.h"
#include <iostream>
#include "Menu.h"
void freeFalling()
{
    int i;
    char a;
    char yesno = 'Y';
    char n = 'N';

    //randomiser
    srand((unsigned)time(NULL));
    i = (rand() % 3) + 1;

    //Questions
    switch (i)
    {
    case 1:

        cout << "The value of g depends on: " << endl << endl;
        cout << " a) G (gravitational constant) \n\n b) M (mass of Earth) \n\n c) r (radius of Earth) \n\n d) All of the above \n" << endl;
        do {
            cout << "Type the correct answer: ";

            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'b':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'c':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'd':               
                cout << "Correct" << endl << endl;
                cout << "Do you want to continue? Type Y/N: ";
                cin >> n;
                if (n == 'Y')
                {
                    system("cls");
                    menu();
                }
                else if (n == 'N')
                {
                    exit(0);
                }
                cout << endl;
                break;
            default:
                cout << "Wrong input" << endl << endl;
                yesno = 'Y';
            }
        } while (yesno == 'Y');
        if (yesno == 'N')
        {
            system("cls");
            menu();
        }




        break;
    case 2:

        cout << "The distance a ball falls after 5 seconds is: " << endl << endl;
        cout << " a) 50m\n\n b) 25m \n\n c) 125m \n\n d) 120m \n" << endl;
        do {
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':                
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'b':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'c':
                cout << "Correct" << endl << endl;
                cout << "Do you want to continue? Type Y/N: ";
                cin >> n;
                if (n == 'Y')
                {
                    system("cls");
                    menu();
                }
                else if (n == 'N')
                {
                    exit(0);
                }
                cout << endl;
                break;
            case 'd':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            default:
                cout << "Wrong input" << endl << endl;
                yesno = 'Y';
            }
        } while (yesno == 'Y');
        if (yesno == 'N')
        {
            system("cls");
            menu();
        }


        break;
    case 3:

        cout << "A ball is thrown upward in the air with an initial velocity of 40 m/s. How long does it take to reach back to the point it was thrown from? " << endl << endl;
        cout << " a) 4s \n\n b) 8s \n\n c) 6s \n\n d) 2s \n" << endl;
        do {
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'b':
                cout << "Correct" << endl << endl;
                cout << "Do you want to continue? Type Y/N: ";
                cin >> n;
                if (n == 'Y')
                {
                    system("cls");
                    menu();
                }
                else if (n == 'N')
                {
                    exit(0);
                }

                cout << endl;
                break;
            case 'c':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            case 'd':
                cout << "Incorrect" << endl << endl;
                cout << "Do you want to retry? Type Y/N: ";
                cin >> yesno;
                if (yesno != 'Y' && yesno != 'N')
                {
                    cout << "Wrong input" << endl << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            default:
                cout << "Wrong input" << endl << endl;
                yesno = 'Y';
            }
        } while (yesno == 'Y');
        if (yesno == 'N')
        {
            system("cls");
            menu();
        }
    }
}