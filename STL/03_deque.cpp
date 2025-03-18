// Double-ended queue

#include<deque>
#include<iostream>
using namespace std;
int main()
{
    deque<int> d;

    d.push_front(2);
    d.push_back(1);
    d.push_front(2);
    d.push_back(1);
    d.push_front(2);
    d.push_back(1);


    
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    // d.pop_back(); 

    // d.pop_front();


    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"print first index element -->  "<<d.at(0)<<endl;
    
    cout<<"the fornt element is --> "<<d.front()<<endl;
    cout<<"the last element is --> "<<d.back()<<endl;

    cout<<"is it empty or not --> "<<d.empty()<<endl;

    cout<<"the size before erase is --> "<<d.size()<<endl;

    d.erase(d.begin()+2,d.end());

    cout<<"the size after erase is --> "<<d.size()<<endl;

}