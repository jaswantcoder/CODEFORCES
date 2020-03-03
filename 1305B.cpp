#include <bits/stdc++.h>
#include<queue>
#include <iostream>
#include<cstdio>
#define  ll long long
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define pll pair<ll,ll>
#define vll vector<ll>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define ss  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define ll long long 
//#define for(i,n) for(i=0;i<n;i++)
using namespace std;
 
 
 
int main() {
   ss;
  ll t,i;
 // cin>>t;
t=1;
  while(t--)
  {
   string s; cin>>s;
   vl a(s.size()+2),b(s.size()+2);
   ll n=s.size();
   b[0]=0;a[n+1]=0;
   ll j=n;
   for(i=n-1;i>=0;i--)
   {
       if(s[i]==')')
             a[j]=a[j+1]+1;
       else
       a[j]=a[j+1];
       j--;
       
   }
   j=1;
     for(auto it:s)
   {
       if(it=='(')
       b[j]=b[j-1]+1;
       else b[j]=b[j-1];
       j++;
   }
   ll mm=0;
   for(i=1;i<=n;i++)
   {
      // cout<<a[i]<<" "<<b[i]<<" "<<endl;
       a[i]=min(a[i],b[i]);
       mm=max(mm,a[i]);
   }
   if(!mm)
{ cout<<0<<endl;continue;}
  cout<<1<<endl;
   cout<<2*mm<<endl;
   
   j=0;
  for(i=0;i<n;i++)
  {
      if(j==mm)
      break;
      if(s[i]=='(')
      {
          cout<<i+1<<" ";
          j++;
      }
  }
   j=0;
  for(i=n-1;i>=0;i--)
  {
      if(j==mm)
      break;
      if(s[i]==')')
      {
          a[j]=i+1;
          j++;
      }
  }
  for(i=mm-1;i>=0;i--)
  cout<<a[i]<<" ";
   cout<<endl;
    
  }
return 0;
}
