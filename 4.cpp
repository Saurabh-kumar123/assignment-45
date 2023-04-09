/*4. Create a c++ program  using multiset and returns the maximum number of elements that
the multiset can hold –> O(1)*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    unordered_multiset<int> g;
    multiset<int> m;
    unsigned int max_elements;
    //calculate the max size of multiset
    max_elements = g.max_size();
    //cout<<"number of element of multiset can hold is : "<<m.max_size()<<endl;
    cout<<"number of elements the multiset can hold is  :  "<<max_elements<<endl;
     return 0;
}

