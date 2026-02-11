#include <iostream>
using namespace std;

int main()
{
    float basicsalary, DA, HRA, grosssalary, PF, netsalary;
    cout<<"enter basic salary:";
    cin>>basicsalary;
    DA =0.25* basicsalary;
    HRA =0.15* basicsalary;
    grosssalary =basicsalary+ DA+ HRA;
    PF =0.10* grosssalary;
    netsalary =grosssalary- PF;
    cout<<"netsalary:"<<netsalary;
    return 0;
}