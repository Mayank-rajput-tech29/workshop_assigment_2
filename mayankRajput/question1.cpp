// sum of array elements
#include<iostream>
using namespace std;

int main(){
    // input size of array
    int n;
    cout<<"enter the size of array";
    cin>> n;
    int arr[n];
    cout<<" enter the array elements :"<<endl;
    // taking array elements input
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];
    }
     // now sum using loops
     int sum=0;
     for(int i=0;i<=n-1;i++){
        sum+=arr[i];
     }
     cout<<"The sum of array elements is :"<<sum;

    return 0;
}