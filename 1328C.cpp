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
#define maxn 200005
#define db double
#define fi first
#define se second
#define ll long long 
//#define for(i,n) for(i=0;i<n;i++)
using namespace std;
 
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main() {
 ll t,i,j;
    cin>>t;
 
 while(t--)
 {
  ll n,k;
  cin>>n;
     string s;
     cin>>s;
     string a="",b="";
     i=0;
     while(i<s.size() && ( s[i]=='2' || s[i]=='0'))
     {
           if(s[i]=='2')
             {
                 a+='1';
                 b+='1';
             }
             else
             {
                 a+='0';
                 b+='0';
             }
         i++;
     }
        if(i<s.size())
        { a+='0';
         b+='1';
         i++;
     }
     while(i<s.size())
     {
     
        a+=s[i];
        b+='0';
         i++;
     }
     
     
     cout<<b<<endl<<a<<endl;
     
     
    
}
 
return 0;
}


