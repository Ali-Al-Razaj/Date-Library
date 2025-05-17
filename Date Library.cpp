// Date Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    clsDate date1;
    date1.Print();

    clsDate date2("29/2/2024");
    date2.Print();

    clsDate date3(24,11,2024);
    date3.Print();


    clsDate::PrintYearCalendar(2025);


    cout << clsDate::isLeapYear(2024) << endl;
    cout << clsDate::isLeapYear(2025) << endl;


    cout << clsDate::IsValidDate(date2) << endl;
    

    
}


