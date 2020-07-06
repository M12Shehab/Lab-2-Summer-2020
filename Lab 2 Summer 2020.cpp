// Lab 2 Summer 2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
    int SIZE = 0;
    cout << "Enter how many points you want to create : ";
    cin >> SIZE;

    Point* arr = new Point[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        int x, y;
        cout << "+ Initi point [" << i + 1 << "]\n";
        cout << "Please enter x : ";
        cin >> x;
        cout << "Please enter y : ";
        cin >> y;
        arr[i].set_x(x);
        arr[i].set_y(y);
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Point ["<<i<<"] ("<<arr[i].get_x()<<" , "<<arr[i].get_y()<<").\n";
    }

}

