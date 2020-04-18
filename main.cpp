#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date a;
    a.SetDate();
    cout << a.getYear()<< "\n" << a.getMonth() << "\n" << a.getDay() << "\n" << a.getName() << "\n" << a.cry() <<"\n";
    return 0;
}
