/******************************************************************************
#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "rus"); 
    double x; 
    cout << "Введите x: ";
    cin >> x;
 
    double yi = x, 
           yi1 = 0; 
 
    while ( true)
    {
        yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi)); 
 
        if (abs(yi1 - yi) < pow(10.0, -5.0)) 
            break; 
 
        yi = yi1; 
    }
 
    cout << yi << endl;
 
    system("pause");
    return 0;
}