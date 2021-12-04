#include "GravityWeight.h"

void gravityWeight()
{
    int i;
    char a;
    srand((unsigned)time(NULL));
    i = (rand() % 3) + 1;

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
        default:
            cout << "Wrong input";
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
        default:
            cout << "Wrong input";

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
        default:
            cout << "Wrong input";
        }
        break;
    }
}