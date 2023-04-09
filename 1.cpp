//1. Create a c++ program  using multiset and returns an iterator to the first element in the multiset –>  O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[]={14,12,65,12,34};
     multiset<int> m(arr,arr+5);
     multiset<int>::iterator it;
     cout<<endl<<"first element in the multiset : "<<*(m.begin())<<endl;
     for(it=m.begin();it!=m.end();it++)
          cout<<*it<<" ";
          cout<<endl;
     for(auto i=m.begin();i!=m.end();i++)
         cout<<*i<<" ";
     return 0;
}
