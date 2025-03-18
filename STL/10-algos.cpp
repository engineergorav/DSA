#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);
    

    cout<<"finding 5 in the vector--> "<<binary_search(v.begin(),v.end(),5)<<endl;
    
    cout<<"lower bound--> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    
    cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;


    // here we can find min 
    //  here we can find max
    // here we can use swap()

    string a= "abcdefg";
    reverse(a.begin(),a.end());
    cout<<a<<endl;

    rotate(v.begin(),v.begin(),v.end());
    
    for(int i:v)
    {
        cout<<i<<endl;
    }

    // can  sort fun
    // and it is based on introsort
    // introsort is made by quick sort,heap insertion
}