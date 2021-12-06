#include "FreeFalling.h"
#include <iostream>
#include "Menu.h"
void speedAcceleration()
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

        cout << "What is the formula for acceleration?" << endl << endl;
        cout << " a) Distance moved / time taken \n\n b) Time taken / distance moved  \n\n c) Distance moved * time taken \n\n d) I don't know \n" << endl;
        do {
            cout << "Type the correct answer: ";

            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
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
    case 2:

        cout << "If a car increases in velocity from +5 m/s to +15 m/s in three seconds, what is its acceleration?" << endl << endl;
        cout << " a) +3.3 m/s2 \n\n b) +33.3 m/s2 \n\n c) +10 m/s2 \n\n d) I don't know \n" << endl;
        do {
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
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

        cout << "What's the unit for acceleration?" << endl << endl;
        cout << " a) m/s2 \n\n b) km/h \n\n c) m/s \n\n d) I don't know \n" << endl;
        do {
            cout << "Type the correct answer: ";
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
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
