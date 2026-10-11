// find the maximum element of input arrays
#include<iostream>
using namespace std;

int main(){
    // input size 
    int n;
    cout<<"enter the size of array:";
    cin>> n;
    
    // input array elements
    int arr[n];
    cout<<"enter the array elements "<<endl ;
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
    // comparing 1st element with others if any element is greater than that then it will be max 
    int max=arr[0];
    // element declared as a =i+1
    int a;
    for(int i=0;i<=n-1;i++){
        if(max < arr[i]){
            max=arr[i];
             a=i+1;
        }
    }
    cout<<"the maximum element of array is the "<<a<<"th element";

    return 0;
}