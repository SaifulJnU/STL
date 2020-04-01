#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
int main()
{

        int a[]={2,1 ,3 ,4,6};  ///array
        list<int>mylist(a,a+5);  ///list
        list<int>::iterator it;  ///iterator for looping
        it= find(mylist.begin(),mylist.end(),4);///for finding element....remember that element is store in (it)
        mylist.insert(it,4);///here how to insert the element insert(where gonna insert and , what to insert)
        for(it=mylist.begin();it!=mylist.end();it++)  /// looping for print the element
        {
            cout<<*it<<" "; /// printing iterator
        }
 return 0;
}
