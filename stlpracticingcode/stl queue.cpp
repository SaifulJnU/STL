#include<iostream>
#include<queue>
using namespace std;

void show(queue<string>q)   ///this function only for showing the element of queue
{
    while(!q.empty())

    {
        cout<<q.front()<<endl;
        q.pop();
    }
}

int main()
{
    queue<string> q;
    string s;
    int n;
    cout<<"how many input do u need ?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        q.push(s); ///pushing element in queue
    }
    show(q);///function calling
}
