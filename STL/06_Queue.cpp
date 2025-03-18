// first in first out

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Hi");
    q.push("my");
    q.push("name");
    q.push("is");
    q.push(" gorav ");
    q.push("thakur");
    q.push("and ");
    q.push("bye:");

    cout<<"the first element is "<<q.front()<<endl;
    cout<<"sz=ize before pop: "<<q.size()<<endl;

    q.pop();
    cout<<"the first element after pop: "<<q.front()<<endl;

    cout<<"the size after pop "<<q.size()<<endl;
}