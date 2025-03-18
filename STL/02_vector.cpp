#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity -->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -->"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity -->"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity -->"<<v.capacity()<<endl;
// kitnty element array mai hai
    cout<<"size -->"<<v.size()<<endl;

    cout<<"element at n in dex --> "<<v.at(2)<<endl;
    cout<<"front --> "<<v.front()<<endl;
    cout<<"back --> "<<v.back()<<endl;

    cout<<"-----before pop---"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"-----after pop------"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"-----before clear------ size is -->"<<v.size()<<endl;
    v.clear();
    cout<<"-----after clear------- size is -->"<<v.size() <<endl;
    

    // initialize a vector with capacity and with 1 and now all the
    //  element will be 1

    vector<int> a(5,2);
    cout<<"se what happend  "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // to copy a vector to a new vector
    
    vector<int> last(a);
    for(int i:last)
    {
        cout<<i<<" ";
    }
}
