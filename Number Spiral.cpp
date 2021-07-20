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

void solve()
{
	ll y,x;
	cin>>y>>x;
	if(y>=x)
	{
		if(y%2==0)
		{
			y=y*y;
			x--;
			y-=x;
		}
		else
		{
			y--;
			y=y*y+1;
			x--;
			y+=x;
		}
		
		cout<<y<<endl;
	}
	else
	{
		if(x%2==1)
		{
			x=x*x;;
			y--;
			x-=y;
		}
		else
		{
			x--;
			x=x*x+1;
			y--;
			x+=y;
		}
		
		cout<<x<<endl;
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}



