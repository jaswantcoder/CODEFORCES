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

ll gcd(ll a, ll b)
{
   if(b%a==0) return a;
   return gcd(b%a,a);

}

bool comp(pair<ll,ll> a, pll b)
{
  if(a.fi>b.fi) return true;
  else if(a.fi<b.fi) return false;

  return a.se<b.se;
}



bool prime(ll n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

int findXOR(int n)
{
    int mod = n % 4;

    // If n is a multiple of 4
    if (mod == 0)
        return n;

    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;

    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;

    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
}

ll check(vector<ll> &v, ll p)
{
    ll i;
    ll n=v.size();
    for(i=p+1;i<n;i++)
    {
        if(v[i]==v[i-1])
            return i;
    }
    return i;
}
int main()
{

 fast;
ll t,i,n;

//cin>>t;
t=1;
while(t--)
{
    cin>>n;
    ll ans=0;
   ll j;
   vl v(n),a(n+1),b(n+1);
   a[0]=-1;
   b[0]=-1;
   ll x=0, y=0;

   for(i=0;i<n;i++)
    cin>>v[i];
  for(i=0;i<n;i++)
  {
     j=check(v,i);

     for(; i<j;i++)
     {
        if(v[i]==a[x])
        {
                 b[++y]=v[i];
        }
        else if(v[i]==b[y])
        {
            a[++x]=v[i];
        }
        else if(j<n&& a[x]==v[j])
        {
           a[++x]=v[i];
        }
        else
            b[++y]=v[i];
     }
     i--;
  }
   for(;i<n;i++)
     {
        if(v[i]==a[x])
        {
                 b[++y]=v[i];
        }
        else
        {
            a[++x]=v[i];
        }

     }

     for(i=1;i<=x;i++)
     {
        // cout<<a[i]<<" ";
         if(a[i]!=a[i-1])
         {
             ans++;
         }
     }
    // cout<<endl;
     for(i=1;i<=y;i++)
     {
        // cout<<b[i]<<" ";
         if(b[i]!=b[i-1])
         {
             ans++;
         }
     }
   //  cout<<endl;

     cout<<ans<<endl;

}


return 0;
}
