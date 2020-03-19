#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

     ll int t;
     cin >> t;

     while(t--)

     {   
     	 ll int n;
     	 cin >> n;
       
         ll arr[n+1];

     	unordered_map<ll,ll> map;

     	ll mcount = 0;

     	for(ll i=0; i<n; i++)
     	{
     		cin >> arr[i];

     		ll x = arr[i];	

     		if(map[x] > mcount)
 				mcount = map[x];   

     		for(ll j = 1; j <= sqrt(x); j++ )
     		{
     			if(x%j==0)
     			{
     				if(x/j!=j)
     				{
     					map[j]++;
     					map[x/j]++;
     				}

     				else
     					map[j]++;
     			}
     				
     		}
     	}

     		cout << mcount << endl;
     }
}