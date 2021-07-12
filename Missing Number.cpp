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
I did this trivially, using too many variables and functions, but found a better approach using sum of n natural!!

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    ll a[n-1];
    for(int i=0;i<n-1;i++) cin>>a[i];
    sort(a,a+n-1);
    frr(i,1,n-1)
    {
    	if(a[0]!=1)
    	{
    		cout<<1<<endl;
    		break;
		}
		else if(a[n-2]!=n)
		{
			cout<<n<<endl;
			break;
		}
    	else if(a[i]-a[i-1]==2) 
    	{
    		cout<<a[i]-1<<endl;
    		break;
		}
	}
	if(n==2)
	{
		cout<<2-a[0]+1<<endl;
	}
}
*/
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
    	ll x;
    	cin>>x;
    	sum+=x;
	}
	cout<<n*(n+1)*0.5-sum<<endl;
}


