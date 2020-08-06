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
  ll t,i,j,x,n;
  cin>>t;
  while(t--)
  {
    vl a,b;
    cin>>n;
    n=2*n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x&1)
            a.pb(i+1);
        else b.pb(i+1);
    }

    ll cnt=0;
        for(i=0;i<a.size();i+=2)
        {
            if(i+1<a.size() && cnt<n-2)
                {
                    cout<<a[i]<<" "<<a[i+1]<<endl;;
                    cnt+=2;
                }
        }
        for(i=0;i<b.size();i+=2)
        {

             if(i+1<b.size() && cnt<n-2)
                {
                    cout<<b[i]<<" "<<b[i+1]<<endl;
                    cnt+=2;
                }
        }


  }



return 0;
}
