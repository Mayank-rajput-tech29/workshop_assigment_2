// count even numbers of an array
#include<iostream>
using namespace std;

int main(){
// input size of array
    int n;
    cout<<"enter the size of array:";
    cin>> n;
    // input array elements 
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
    // counting number of even elements using loops
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"the number of even elements in input array are:"<<count ;

    return 0;
}