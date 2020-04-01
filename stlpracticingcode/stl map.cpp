#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main()
{
    map <string,int> mp;
    map<string,int>::iterator it;
    cout<<"how many element do u want : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       string s;
       int a;
       cin>>s>>a;
       mp.insert(pair<string,int>(s,a)); /// to insert the elements in map by using pair
    }
    cout<<"all elements after inserting : "<<endl;

     for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl; /// to print all elements
    }
    cout<<endl;

    string s1;
    cout<<"write the name to delete the element :"<<endl;
    cin>>s1;
    mp.erase(s1);///to erase the element

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
