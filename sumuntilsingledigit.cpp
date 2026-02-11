#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    while (num> 9) {
        int sum= 0;
        int temp= num;
        while (temp> 0) {
            sum+= temp% 10;
            temp/= 10;
        }
        num= sum;
    }
    cout<<num;
    return 0;
}