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

        cout << "A cyclist is moving with 400m/50s. What is his averege speed ? " << endl << endl;
        cout << " a) 28.8km/h \n\n b) 80km/h \n\n c) 20.5km/h \n\n d) 15km/h \n" << endl;
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
                    cout << "Wrong input" << endl;
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
                    cout << "Wrong input" << endl;
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
                    cout << "Wrong input" << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            default:
                cout << "Wrong input" << endl;
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

        cout << "A cyclist is moving with 400m/50s. What is his averege speed ? " << endl << endl;
        cout << " a) 28.8km/h \n\n b) 80km/h \n\n c) 20.5km/h \n\n d) 15km/h \n" << endl;
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
                    cout << "Wrong input" << endl;
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
                    cout << "Wrong input" << endl;
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
                    cout << "Wrong input" << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            default:
                cout << "Wrong input" << endl;
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

        cout << "A cyclist is moving with 400m/50s. What is his averege speed ? " << endl << endl;
        cout << " a) 28.8km/h \n\n b) 80km/h \n\n c) 20.5km/h \n\n d) 15km/h \n" << endl;
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
                    cout << "Wrong input" << endl;
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
                    cout << "Wrong input" << endl;
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
                    cout << "Wrong input" << endl;
                    cout << "Type only Y/N: ";
                    cin >> yesno;
                }
                break;
            default:
                cout << "Wrong input" << endl;
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
