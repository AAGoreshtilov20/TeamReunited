#include "Menu.h"
using namespace std;
void menu()
{
    //int md, su, sp, prnm, stt, st, rm, kpe, nl, hnl;
    int N;

    //Topics
    cout << "Pick a topic:" << endl << endl;
    cout << "1 - Mechanical movement" << endl;
    cout << "2 - Speed and acceleration" << endl;
    cout << "3 - Free falling" << endl;
    cout << "4 - Friction forces" << endl;
    cout << "5 - Gravity and weight" << endl << endl;
    cout << "Enter number: ";
    cin >> N;

    //TopicFunctions
    switch (N)
    {
    case 1:
        mechanicalMovement();
        break;
    case 2: 
        speedAcceleration();
        break;
    case 3:
        freeFalling();
        break;
    case 4:
        frictionForces();
        break;
    case 5:
        gravityWeight();
        break; 

    default:
        cout << "Wrong input";
        break;
    }
}