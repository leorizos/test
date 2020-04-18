#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;
class Date
{
private:
    int m_year;
    int m_month;
    int m_day;
    string m_name;

public:
    Date();


    void SetDate();

    int getYear() ;
    int getMonth() ;
    int getDay() ;
    string getName() ;

    string cry();
};

#endif
