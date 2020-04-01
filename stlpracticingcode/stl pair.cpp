#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int a,b;
    pair<int ,int >p;
    int t; ///for test case
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        p=make_pair(a,b);///here make pair is a function for assigning of pair
        cout<<p.first<<" "<<p.second;  ///this is how we have to print pair value
    }

}
