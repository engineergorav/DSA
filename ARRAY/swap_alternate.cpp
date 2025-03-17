#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"enter the size of array";
    cin>>n;
    int arr[5]={1,2,3,4,5};
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int i=0;
    
    while(i<n-1)
    {
        a=arr[i];
        b=arr[i+1];
        arr[i]=b;
        arr[i+1]=a;
        i=i+2;
    }
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
}