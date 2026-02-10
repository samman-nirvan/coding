#include <iostream>
using namespace std;

int main()
{
    int num, rev=0, temp;
    cout<<"enter a 4-digit number:";
    cin>>num;
    temp=num;
    while (temp>0)
    {
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    (num==rev)?cout<<"yes":cout<<"no";
    return 0;
}