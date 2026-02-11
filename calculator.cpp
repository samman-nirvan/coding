#include <iostream>
using namespace std;

int main() {
    float a, b; 
    int choice;
    cout<<"choice (1.Add, 2.Sub, 3.Mul, 4.Div) and Enter two numbers:";
    cin>>choice;
    cin>>a>>b;
    switch(choice) {
        case 1:
            cout<<"Result:"<<(a+b)<<endl;
            break;
        case 2:
            cout<<"Result:"<<(a-b)<<endl;
            break;
        case 3:
            cout<<"Result:"<<(a*b)<<endl;
            break;
        case 4:
            if(b != 0)
                cout<<"Result:"<<(a/b)<<endl;
            else
                cout<<"Error: Division by zero not allowed."<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    return 0;
} 