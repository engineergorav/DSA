#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;

    m[1]="gorav";
    m[2]="thakur";
    m[4]="that's it";
    m.insert({ 3,"Hello"});

    cout<<"before erase"<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    cout<<m.count(3)<<endl;
    
    cout<<"after erase "<<endl;
    m.erase(2);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(3);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
}