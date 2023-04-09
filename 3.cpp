//3. Create a c++ program  using multiset and returns the number of elements in the multiset –> O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{

     multiset<int> m;
     m.insert(14);
     m.insert(41);
     m.insert(12);
     m.insert(33);
     m.insert(54);
     m.insert(90);
     multiset<int>::iterator it;
     for(it=m.begin();it!=m.end();it++)
          cout<<*it<<" ";
          cout<<endl;
          cout<<"number of element present in the multiset  :  "<<m.size();
     return 0;
}
