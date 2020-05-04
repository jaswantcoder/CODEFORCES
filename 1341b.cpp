#include <bits/stdc++.h>
#include<queue>
#include <iostream>
#include<cstdio>
#define  ll long long
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define pll pair<ll,ll>
#define vl vector<ll>
#define vs vector<string>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define vi vector<int>
#define maxn 200005
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define db double
#define fi first
#define se second
using namespace std;

int num(char x)
{
    return int(x)-'0';
}



int main()
{


  fast;
  ll t;
  cin>>t;
  while(t--)
  {
     ll n,i,k;
     cin>>n>>k;
     vl v(n+2,0);
     v[0]=0;
     v[n+1]=0;
     vl a(n+2,0);
     for(i=1;i<=n;i++)
     {
        cin>>v[i];

        }
        for(i=1;i<=n;i++)
        {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        a[i]++;
        }
        for(i=1;i<=n;i++)
        {
        a[i]+=a[i-1];
      //  cout<<a[i]<<" ";
        }
       // cout<<endl;
       ll l=1,tt=0;
       for(i=1;i<=n-k+1;i++)
       {

   if(a[i+k-2]-a[i]>tt)
   {
   tt=a[i+k-2]-a[i];
  // cout<<"l="<<i<<" ";
   l=i;
   }

       }

    cout<<tt+1<<" "<<l<<endl;




  }
return 0;
}
