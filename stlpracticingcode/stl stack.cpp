#include<iostream>
#include<utility>
#include<stack>
using namespace std;
void show(stack<int> st)
{
    stack <int> st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.top()<<endl;
         st2.pop();
    }
}
int main()
{
    stack < int > st;
    int a,n;
    cout<<"how many elements do u want : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
          cin>>a;
          st.push(a);
    }

    show(st);
}
