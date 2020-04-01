#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    ///vector
    vector<int> vec;
    int n;
    cout<<"how many element do u want to sort : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        vec.push_back(input);
    }
    sort(vec.begin(),vec.end());///sorting function for vector
    cout<<"sorting of vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    ///array
    cout<<"sorting of arrays elements"<<endl;
    int arr[100]={2,1,5,4,7};
    sort(arr+0,arr+5);///sorting function for array
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    ///list
    cout<<endl;
    cout<<"sorting of list"<<endl;
    list<int>mylist(arr,arr+n);
    list<int>::iterator it;
//     for(int i=0;i<n;i++)
//    {
//        int input;
//        cin>>input;
//        mylist.push_back(input);
//    }

    mylist.sort();///sorting function for list
    for(it=mylist.begin();it!=mylist.end();it++)
    {
       cout<<*it<<" ";
    }
return 0;
}

