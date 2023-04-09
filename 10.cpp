/*10.Unlike a set, a multiset may contain multiple occurrences of same number.
The multiset equivalence problem states to check if two given multisets are equal or not.
 For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 occurs twice in B),
  whereas A and B are both multisets. More formally, “Are the sets of pairs defined
  as \(A' = \{ (a, frequency(a)) | a \in \mathbf{A} \}\)  equal for the two given multisets?”
   Given two multisets A and B, write a program to check if the two multisets are equal.*/
#include<bits/stdc++.h>
using namespace std;
bool aresame(vector<int>& a,vector<int>& b)
{
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     return(a==b);
}
int  main()
{
     vector<int> a({5,7,2,3}),b({5,2,3,7});
     if(aresame(a,b))
          cout<<" Yes ";
     else
          cout<<" No";
    return 0;
}
