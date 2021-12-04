#include "main.h"
using namespace std;
int main()
{
    //int md, su, sp, prnm, stt, st, rm, kpe, nl, hnl;
    int N, i;
    char a;
    cout << "Pick a topic:" << endl << endl;
    cout << "1 - Mechanical movement" << endl;
    cout << "2 - Speed and acceleration" << endl;
    cout << "3 - Free falling" << endl;
    cout << "Enter number: ";
    cin >> N;

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
   

    default:
        cout << "Wrong input";
    }
}