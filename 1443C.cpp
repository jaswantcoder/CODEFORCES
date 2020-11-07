#include <bits/stdc++.h>
#define  ll long long
#define mp make_pair
#define pll pair<ll,ll>
#define pb push_back
#define vl vector<ll>
#define vs vector<string>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define vi vector<int>
#define maxn 200005
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define db double
#define fi first
#define se second

#define PI 3.14159265
using namespace std;

ll gcd_(ll a, ll b)
{
   if(b%a==0) return a;
   return gcd_(b%a,a);

}

bool comp(pair<ll,ll> a, pll b)
{
  if(a.fi>b.fi) return true;
  else if(a.fi<b.fi) return false;

  return a.se<b.se;
}

int main()
{


 fast;
 ll t,i;

 cin>>t;

 while(t--)
 {
     ll n,a,b,cnt=0,cost=0,ans;
     cin>>n;
     vl v1(n),v2(n);
     for(i=0;i<n;i++) cin>>v1[i];
      for(i=0;i<n;i++) cin>>v2[i];

      vector<pll> v;
      for(i=0;i<n;i++)
        v.pb(mp(v1[i],v2[i]));



       sort(all(v), comp);
       for(i=0;i<n;i++)
       {
           if(cnt+v[i].se<v[i].fi)
           {
               cnt+=v[i].se;
           }
           else break;
       }
      // cout<<i<<" "<<v[i].fi<<" "<<cnt;
       if(i<n)
       {
           ans=max(cnt,v[i].fi);
       }
       else
        ans=cnt;
       cout<<ans<<endl;



 }



return 0;
}
