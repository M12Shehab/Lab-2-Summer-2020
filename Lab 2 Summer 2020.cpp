// Lab 2 Summer 2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
    int SIZE = 0;
    do
    {
        cout << "Enter how many points you want to create : ";
        cin >> SIZE;
        if (SIZE < 0)
        {
            cout << "-Error: please enter positive valuse.\nTry again.\n";
        }
    } 
    while (SIZE < 0);


    Point* arr = new Point[SIZE]; // Dynmaic memory 
    
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
        for (int j = 0; j < SIZE; j++)
        {
            // Inner loop
            cout << "The distance between "<<i<< " and "<<j<<" = "<<arr[i].get_distance(arr[j]);
            cout << endl;
        }// End inner loop
    }

    /*for (int i = 0; i < SIZE; i++)
    {
        cout << "Point [" << i << "] (" << arr[i].get_x() << " , " << arr[i].get_y() << ").\n";
    }*/

}

