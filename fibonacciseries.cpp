#include <iostream>
using namespace std;

int main() {
    int limit;
    cin>>limit;
    int a= 0, b= 1;
    if (a<= limit) cout<<a<<" ";
    if (b<= limit) cout<<b<<" ";
    int next= a+b;
    while (next<= limit) {
        cout<<next<<" ";
        a= b;
        b= next;
        next= a+b;
    }
    return 0;
}