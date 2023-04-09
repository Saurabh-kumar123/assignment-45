//8. Create a c++ program  using multiset and removes all the occurrences of x –> O(log n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[]={10,20,30,40,50,50,60};
     multiset<int> m(arr,arr+7);
     multiset<int>::iterator it;

     for(it=m.begin();it!=m.end();it++)
          cout<<*it<<" ";
          cout<<endl;
        //m.erase(50);
        //m.erase(m.find(50));
        //multiset<int>::iterator itr;
        auto itr = m.find(55);
        if(itr!=m.end())
          m.erase(itr);
        else
          cout<<"element not found : "<<endl;
     for(auto i=m.begin();i!=m.end();i++)
         cout<<*i<<" ";
     return 0;
}
