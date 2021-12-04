#include "Menu.h"
using namespace std;
void menu()
{
  
    
    
    //Topics
    topics();

    //clear
    system("cls");

    //TopicFunctions 
    //turn it into a function when you see this
    do {
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
            cout << "Wrong input" << endl << endl;
            cout << "Enter number: ";
            cin >> N;
            break;
        }
    } while (N > 5);
}