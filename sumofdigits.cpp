#include <iostream>
using namespace std;

int main()
{
    int num,a,b,c,d,sum;
    cout<<"enter number:";
    cin>>num;
    a=(num%10);
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    sum=a+b+c+d;
    cout<<"sum of digit of the given number:"<<sum<<endl;
    return 0;
}