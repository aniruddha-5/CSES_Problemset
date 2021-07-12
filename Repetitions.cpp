/* Aniruddha Routh JGEC'23 */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define frr(i,a,n) for(ll i=a;i<n;i++)
#define fr(i,a,b) for(ll i=a;i>=b;i--)

#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define endl "\n"
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define F first
#define S second
#define vi vector<ll>
#define pii pair<ll,ll>


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

     string s;
     cin>>s;
     char a='A';
     int c=0,mx=0;
     for(char d: s)
     {
     	if(a==d)
     	{
     		c++;
     		mx=max(c,mx);
		}
		else
		{
			a=d;
			c=1;
			mx=max(c,mx);
		}
	 }
	 cout<<mx;
}



