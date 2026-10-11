//count target occurences
#include<iostream>
using namespace std;

int main(){
    // size of array
    int n;
    cout<<"enter the size:";
    cin>> n;

    // input target values
    int a;
    cout<<"enter the target value:";
    cin>> a;

    // input array elements
    int arr[n];
    cout<<"enter the array elements "<<endl ;
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
    
    // to check the target value and count its occurence
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==a){
            count++;
        }
    }
    cout<<"the number of occurences of target value in given array is :"<<count ;

    return 0;
}