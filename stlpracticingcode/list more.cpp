#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include<iterator>


using namespace std;
int main()
{
    int n;
    cout<<"how many element do u want : ";
    cin>>n;

    list<int>mylist;
    list<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        mylist.push_back(input);
    }

      cout<<"size : "<<mylist.size()<<endl;  /// for finding size of a list

      mylist.sort();    /// in this case there have no parameter like in case of vector
      mylist.reverse();  /// same thing is here


    for(it = mylist.begin();it!=mylist.end();it++)  /// for printing the list by using iterator
    {
         cout<<*it<<" ";
    }
return 0;
}
