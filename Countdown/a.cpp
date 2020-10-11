#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll a[200005];


ll solve()
{
	ll count=0;
	bool flag=1;
	for(int i=1; i<=n-k+1; i++)
	{
		flag=true;
		if(a[i]==k)
		{
			for(int j=i; j<=i+k-2; j++)
			{
				if(a[j]!=a[j+1]+1)
				{
					flag=false;
					break;
				}
			}
			if(flag==true)
			{
				count++;
			}	
		}
		
	}
	return count;
}

int main()
{
	ll tc;
	cin>>tc;
	for(int t=1; t<=tc; t++)
	{
		cin>>n>>k;
		for(int i=1; i<=n; i++)
		{
			cin>>a[i];
		}
		ll ans= solve();
		cout<<"Case #"<<t<<": "<<ans<<endl;
	}
	return 0;
}
