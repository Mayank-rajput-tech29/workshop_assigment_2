// find the target by comparison with array elements linear search
#include<iostream>
using namespace std;

int main(){
    // input target elements 
    int x;
    cout<<"enter the target value:";
    cin>> x;
    bool flag= false;
    // now array input
    int n;
    cout<<"enter the size of array:";
    cin>> n;
    int arr[n];
    cout<< " enter array elements "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
    // now comparison of array with target value
    for(int i=0;i<=n-1;i++){
        if(x==arr[i]){
            flag= true;
        }
    }
    if(flag==false){
        cout<<"target value is not present";
    }
    else{
        cout<<"target value is present";
    }

    return 0;
}