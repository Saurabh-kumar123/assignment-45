/*9. Create a c++ program  using multiset and remove only one instance of element from
multiset having same value*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[]={10,20,20,30,40,50,50,60};
     multiset<int> m(arr,arr+8);
     multiset<int>::iterator it;

     for(it=m.begin();it!=m.end();it++)
          cout<<*it<<" ";
          cout<<endl;
        //m.erase(50);
        m.erase(m.find(50));
       // multiset<int>::iterator itr;


     for(auto i=m.begin();i!=m.end();i++)
         cout<<*i<<" ";
     return 0;
}
