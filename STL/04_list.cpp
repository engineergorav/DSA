#include<iostream>
#include<list>
using namespace std;

int main() 
{
    list<int> l;
    // copy a list
    list<int> k(l);
    
    
    l.push_front(1);
    l.push_back(2);
    
    list<int> n(10,10);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of the list "<<l.size()<<endl;
    
    cout<<"the element of copied list is --> "<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}