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
    ll n;
    cin>>n;
   vector<int> a(n),b(n);
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    ll x=0,y=0;
   sort(all(a));
   sort(all(b));
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
   for(auto it:b)
   cout<<it<<" ";
   cout<<endl;
   
    
  }
return 0;
}
