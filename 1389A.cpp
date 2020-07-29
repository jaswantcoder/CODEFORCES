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



int main()
{

  fast;
  ll t,i,j,k,T;
  cin>>T;
  for(t=1;t<=T;t++)
  {
      ll l,r;
    cin>>l>>r;
    if(r>=2*l)
    {
    cout<<l<<" "<<2*l<<endl;;
    }
    else
    {
    cout<<-1<<" "<<-1<<endl;
    }


  }





return 0;
}
