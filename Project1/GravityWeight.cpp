#include "GravityWeight.h"
#include <iostream>
#include "Menu.h"
using namespace std;
void gravityWeight()
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

        cout << "What are the units for mass?" << endl << endl;
        cout << " a) Kilograms \n\n b) Newtons \n\n c) Newtons per kilogram \n\n d) idk \n" << endl;
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

        cout << "What's the deffinition of weight?" << endl << endl;
        cout << " a) measure of the heaviness of an object \n\n b) the force, the object is pulled by \n\n c) yes \n\n d) I don't know \n" << endl;
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

        cout << "The formula for weight is:" << endl << endl;
        cout << " a) F = m * 9.8 m/s2  \n\n b) F = m \n\n c) F = vt \n\n d) idk \n" << endl;
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
