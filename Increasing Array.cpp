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

/*

My inital approach

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,sum=0;
    cin>>n;
    ll a[n];
    frr(i,0,n) cin>>a[i];
    
    frr(i,1,n)
    {
    	if(a[i]<a[i-1])
    	{
    		sum+=(a[i-1]-a[i]);
    		a[i]=a[i-1];
		}
	}
	cout<<sum;
    
    
}



Final Solution >>>>>>>>>>>>>> 

*/

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,sum=0;
    cin>>n;
    ll mx=0;
    frr(i,0,n)
    {
    	ll x;
    	cin>>x;
    	mx=max(mx,x);
    	sum+=(mx-x);
	}
	cout<<sum;
    
    
}



