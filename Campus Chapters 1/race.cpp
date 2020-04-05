#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

  ll n;
  cin >> n;

  ll temp, max1 =-1, max2 = -1;

  for(ll i = 0; i<n; i++)
  {
    cin >> temp;
    if(temp>max1)
      max1 = temp;
  }

  for(ll i = 0 ;i<n ;i++)
  {
    cin >> temp;

    if(temp>max2)
      max2 = temp;
  }

  if(max1 == max2)
    cout << "NO" <<"\n";

  else
    cout << "YES" << "\n";

	}

}
