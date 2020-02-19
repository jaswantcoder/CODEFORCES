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
  cin>>t;
  while(t--)
  {
   ll n,m,i,c;
 // cin>>n;
  string s;
  cin>>s;
  ll x=-1,cnt=0,y=-1;
         for(i=0;i<s.size();i++)
         {
             
              if(s[i]=='1' && x<0)
              {
                  x=i;
              }
              else if(s[i]=='1' )
              y=i;
            
         }
         for(i=x;i<y;i++)
          if(s[i]=='0' )
              {
                 cnt++;
              }
        cout<<cnt<<endl;
        
         
     
  }
return 0;
}
