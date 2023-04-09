/*2. Create a c++ program  using multiset and returns an iterator to the theoretical element
that follows the last element in the multiset –> O(1)*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[]={14,12,3,81,67,12,34,54,31};
     multiset<int> m(arr,arr+9);
     multiset<int>::iterator it;
     cout<<endl<<"first element in the multiset : "<<*(m.begin())<<endl;
     for(it=m.begin();it!=m.end();it++)
          cout<<*it<<" ";
          cout<<endl;
           cout<<"last element in the multiset : "<<*(--m.end())<<endl;
     /*for(auto i=m.begin();i!=m.end();i++)
         cout<<*i<<" ";*/
     return 0;
}

