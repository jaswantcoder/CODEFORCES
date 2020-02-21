#include<deque>
#include<queue>
#include<stack>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>
#include<set>
#include<complex>
#include<list>
#include<climits>
#include<cctype>
#include<bitset>
#include<string.h>
using namespace std;
int main()
{
  //freopen("a.txt","rt",stdin);
//  freopen("a.open","wt",stdout);
  int T;
  cin>>T;
  //cout<<T<<" " ;
  for(int t=1;t<=T;++t)
  {int x;
      cin>>x;
   string s;
   cin>>s;
   int i,p=s.size()-1,mx=0;
   for(i=0;i<s.size();i++)
   {
   if(s[i]=='A')
   {
             //  cout<<"("<<i<<" "<<p<<")";
        mx=max(i-p-1,mx);
        p=i;

   }

   }
   mx=max(int(s.size())-p-1,mx);
     cout<<mx<<endl;
  }

}
