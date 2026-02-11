#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin>>num;
    int original= num;
    int count= 0, sum= 0;
    int temp= num;
    while (temp> 0) {
        temp/= 10;
        count++;
    }
    temp= num;
    while (temp> 0) {
        int digit= temp% 10;
        sum+= pow(digit, count);
        temp/= 10;
    }
    if (sum== original)
    cout<<"yes";
    else
    cout<<"not";
    return 0;
}