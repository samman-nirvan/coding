#include <iostream>
using namespace std;

int main(){
     int arr[5], key;
     bool flag = false;
     for (int i = 0; i < 5; i++)
     {
          cout<<"Enter "<<i+1<<"th element: ";
          cin>>arr[i];
     }
     cout<<"Enter what to search: ";
     cin>>key;
     for (int j = 0; j < 5; j++)
     {
          if (arr[j] == key){
               flag = true;
               cout<<"Present";
               break;
          }
     }
     if(! flag){
          cout<<"Unsuccessful Search";
     }
     return 0;
}