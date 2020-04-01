#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main()
{   int m;
    cout<<"How many element do u want : "<<endl;
    cin>>m;

    list<int>mylist;
    list<int>::iterator it;
    for(int i=0;i<m;i++)
    {   int n;
        cin>>n;
        mylist.push_back(n);
    }
    //mylist.push_back(23);
    //mylist.push_back(56);
    //mylist.push_front(5);

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
}
