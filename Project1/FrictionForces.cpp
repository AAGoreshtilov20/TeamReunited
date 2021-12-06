#include "Frictionforces.h"
#include <iostream>
#include "Menu.h"
using namespace std;
void frictionForces()
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

        cout << "What happens when two surfaces rub into each other?" << endl << endl;
        cout << " a) They get hotter \n\n b) They get colder \n\n c) Nothing happens \n\n d) I don't know \n" << endl;
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

        cout << "What's the unit for friction?" << endl << endl;
        cout << " a) N (Newton) \n\n b) Kg (Kilogram) \n\n c) m (Meter) \n\n d) I don't know \n" << endl;
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

        cout << "What is coefficient of friction?" << endl << endl;
        cout << " a) ratio of the frictional force resisting the motion of two surfaces in contact to the normal force pressing the two surfaces together \n\n b) ratio of the frictional force not resisting the motion of two surfaces in contact to the normal force pressing the two surfaces together \n\n c) yes \n\n d) I don't know \n" << endl;
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