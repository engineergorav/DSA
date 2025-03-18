//  last in first out

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Hi");
    s.push("my");
    s.push("name");
    s.push("is");
    s.push(" gorav ");
    s.push("thakur");
    s.push("and ");
    s.push("bye:");

    cout<<"top element is "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    
    s.pop();
    cout<<"top element is "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;


}