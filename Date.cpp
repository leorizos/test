#include "Date.h"
#include <iostream>

using namespace std;

// Date constructor
Date::Date()
{
    m_month = 0;
    m_day = 0;
    m_year = 0;
    m_name = "peos";
}

// Date member function
void Date::SetDate()
{
    int year;
    int month;
    int day;
    string name;

    cin >> year;
    cin >> month;
    cin >> day;
    cin >> name;

    m_month = month;
    m_day = day;
    m_year = year;
    m_name = name;
}


int Date::getYear() { return m_year; }
int Date::getMonth() { return m_month; }
int Date::getDay()  { return m_day; }
string Date::getName() {return m_name;}

string Date:: cry(){
   return "bitch";
}



