#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll arr[100005];

ll solve()
{
	ll sum=0, minSum=0, ans=0;
	unordered_map<ll,ll> m;	
	m[0]=1;
	for(int i=1; i<=n; i++)
	{
		sum+=arr[i];
		minSum=min(sum,minSum);
		for(int j=0; (sum-j*j)>=minSum; j++)
		{
			if(m.count(sum-j*j))
			{
				ans+=m[sum-j*j];
			}
		}
		m[sum]+=1;
	}
	return ans;
}

int main()
{
	ll tc;
	cin>>tc;
	for(int t=1; t<=tc; t++)
	{
		cin>>n;
		for(int i=1; i<=n; i++)
		{
			cin>>arr[i];
		}
		ll ans=solve();
		cout<<"Case #"<<t<<": "<<ans<<endl;
	}
}
