#include "MechanicalMovement.h"

void mechanicalMovement()
{
    int i;
    char a;
    srand((unsigned)time(NULL));
    i = (rand() % 3) + 1;

    switch (i)
    {
    case 1:
        cout << "A cyclist is moving with 400m/50s. What is his averege speed ? " << endl << endl;
        cout << " a) 28.8km/h \n\n b) 80km/h \n\n c) 20.5km/h \n\n d) 15km/h \n" << endl;
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
        default:
            cout << "Wrong input";
            cout << "Type the correct answer: ";
            cin >> a;
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
        default:
            cout << "Wrong input";

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
        default:
            cout << "Wrong input";
        }
        break;
    }
}