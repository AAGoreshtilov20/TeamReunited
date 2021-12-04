#include "MechanicalMovement.h"

void mechanicalMovement()
{
    int i;
    char a;
    char yesno = 'Y';

    //randomiser
    srand((unsigned)time(NULL));
    i = (rand() % 3) + 1;

    //Questions
    switch (i)
    {
    case 1:
        
            cout << "A cyclist is moving with 400m/50s. What is his averege speed ? " << endl << endl;
            cout << " a) 28.8km/h \n\n b) 80km/h \n\n c) 20.5km/h \n\n d) 15km/h \n" << endl;
            cout << "Type the correct answer: ";
            do {
            cin >> a;
            cout << endl;
            switch (a)
            {
            case 'a':
                cout << "Correct";
                
                break;
            case 'b':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            case 'c':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            case 'd':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            default:
                cout << "Wrong input";
                yesno = 'Y';
            }
        } while (yesno == 'Y');
        
      

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
                cout << "Correct";
                
                break;
            case 'b':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            case 'c':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            case 'd':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            default:
                cout << "Wrong input";
                yesno = 'Y';
            }
        } while (yesno == 'Y');


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
                cout << "Correct";
                
                break;
            case 'b':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            case 'c':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            case 'd':
                cout << "Incorrect";
                cout << "Do you want to retry? Type Y/N:";
                cin >> yesno;
                break;
            default:
                cout << "Wrong input";
                yesno = 'Y';
            }
        } while (yesno == 'Y');


        break;
    }
}