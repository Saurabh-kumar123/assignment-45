//6. Create a c++ program  using multiset and inserts the element x in the multiset �> O(log n)
#include<bits/stdc++.h>
using namespace std;
int main()
{

     multiset<int,greater<int>> m;
     m.insert(14);
     m.insert(41);
     m.insert(12);
     m.insert(33);
     m.insert(54);
     m.insert(90);
     multiset<int,greater<int>>::iterator it;
     for(it=m.begin();it!=m.end();it++)
          cout<<*it<<" ";
          cout<<endl;
     return 0;
}
