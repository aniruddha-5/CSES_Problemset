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

    int n;
    cin>>n;
    if(n==1)
    {
    	cout<<1;
	}
	else if(n==2 || n==3)
	{
		cout<<"NO SOLUTION";
		
	}
	else
	{
		for(int i=1;i<=n;i++) /*even loop must be before odd loop to avoid the pattern n=4 : 1 3 2 4*/
    	{
    		if(i%2==0)
    		{
    			cout<<i<<" ";
			}
		}
		for(int i=1;i<=n;i++)
    	{
    		if(i%2)
    		{
    			cout<<i<<" ";
			}
		}
	}
	
    
}



