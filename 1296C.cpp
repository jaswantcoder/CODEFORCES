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
   ll n,i,c;
  cin>>n;
  string s;
  cin>>s;
  map<pll,ll> m;
  ll x=0,y=0,ans2=n+1,ans1=0;;
 

     bool f=true;
  ll l=0,r=n+1;
     for(i=0;i<n;i++)
     {
        
        m[mp(x,y)]=i+1;
             if(s[i]=='L')
            x--;
            if(s[i]=='R')
            x++;
            if(s[i]=='U')
            y++;
            if(s[i]=='D')
            y--;
            
         //   cout<<x<<" "<<y<<" "<< a[x][y] <<" "<<i<<endl; 
            if(m[mp(x,y)]!=0)
            {
           // cout<<"axy="<<a[x][y]<<" ";
             //   cout<<"hi";
          
         //    cout<<a[x][y]<<" "<<i+1<<endl;
            f=false;
         if(r-l>(i+1-m[mp(x,y)]))
         {
             r=i+1;
             l=m[mp(x,y)];
         }
         
            }
           
     }
     if(f)
     cout<<-1<<endl;
     else
     cout<<l<<" "<<r<<endl;
     
  }
return 0;
}
