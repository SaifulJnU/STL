#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    list<int> mylist;
    list<int>::iterator it;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int input;
       cin>>input;
       mylist.push_back(input);
    }
    it=find(mylist.begin(),mylist.end(),3);
    mylist.erase(it);
        for(it=mylist.begin();it!=mylist.end();it++)
        {
            cout<<*it<<" ";
        }
}
