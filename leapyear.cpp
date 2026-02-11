#include <iostream>
using namespace std;

int main()

{
    //largest element and smallest element in 2d array
    int a;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>a){
                a=arr[i][j];
            }
            else{
            }
        }
    }
    cout<<a;
    return 0;
}