#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int md, su, sp, prnm, stt, st, rm, kpe, nl, hnl, N;
    cout << "Pick a topic:" << endl;
    cout << "1 - Mechanical movement" << endl;
    cout << "2 - Speed and acceleration" << endl;
    cout << "3 - Free falling" << endl;
    cout << "4 - Mechanical principles" << endl;
    cout << "5 - Force of gravity and weight " << endl;
    cout << "6 - Mechanical movement" << endl;
    cout << "7 - Work and power" << endl;
    cout << "8 - Kinetic and potential energy" << endl;
    cout << "9 - Pressure and Paskal's law" << endl;
    cout << "10 - Hydrostatic pressure" << endl;
    

    cin >> N;
    switch (N)
    {
    case 1 : 
        cout << "1";
        break;
    case 2 :
        cout << "2";
        break;
    case 3 :
        cout << "3";
        break;
    case 4 :
        cout << "4";
        break;
    case 5 :
        cout << "5";
        break;
    case 6 :
        cout << "6";
        break;
    case 7 :
        cout << "7";
        break;
    case 8 :
        cout << "8";
        break;
    case 9 :
        cout << "9";
        break;
    case 10 :
        cout << "10";
        break;
    default:
        cout << "yes";
    }
}
