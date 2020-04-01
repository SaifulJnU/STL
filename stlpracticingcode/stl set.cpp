#include<iostream>
#include<utility>
#include<set>
using namespace std;
int main()
{
    set<int > setvar;
    set<int >::iterator it;
    int a,n;
    cout<<"How many elements do u want : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        setvar.insert(a);
    }

    cout<<"which element do u want to delete : "<<endl;
    int to;
    cin>>to;
    setvar.erase(setvar.find(to),setvar.end()); ///to delete from last
   /// setvar.erase(setvar.begin(),setvar.find(to)); //to delete from first
   /// setvar.erase(to); //to delete from a certain number from anywhere


    for(it=setvar.begin();it!=setvar.end();it++)
    {
        cout<<*it<< " ";
    }

}
