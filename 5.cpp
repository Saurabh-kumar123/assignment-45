//5. Create a c++ program  using multiset and returns whether the multiset is empty –> O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int ar[]={4,3,2,1,7};
     multiset<int> m(ar,ar+5);
     for(auto i=m.begin();i!=m.end();i++)
          cout<<*i<<" ";
     cout<<endl;
     if(m.empty())
          cout<<"multiset is empty : ";
     else
          cout<<"multiset is not empty : ";
     return 0;
}
