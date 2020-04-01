#include<iostream>
#include<utility>
using namespace std;
int main()
{
    string s;
    int a;
    char ch;
    cin>>s>>a>>ch;

    pair<string, pair<int , char>>p;
    p=make_pair(s,make_pair(a,ch));
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

return 0;
}
