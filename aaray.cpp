#include <iostream>
using namespace std;

int main()
{
    int year;
    cin>>year;
    (year%400==0)?
    cout<<"leap year":(year%100==0)?
    cout<<"not a leap year":(year%4==0)?
    cout<<"leap year":
    cout<<"not a leap year";
    return 0;
}