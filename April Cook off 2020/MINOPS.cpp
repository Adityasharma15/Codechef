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

    string a, b;
    cin >> a >> b;

    ll k = 0, ans2 = 0;

    ll count = 0;

    bool counting = false;

    bool carboncopy = true;

    ll len = a.length();

    for(ll i = 0; i<len; i++)
    {
      if(a[i] != b[i])
      {
        count++;
        counting = true;
        carboncopy = false;
      }

      else if(counting && a[i]==b[i])
      {
        ans2+=count;
        k++;
        counting = false;
        count = 0;
      }
    }

    if(a[len-1]!=b[len-1])
    {
       k++;
       ans2+=count;
    }

    if(k==0 && !carboncopy)
      {
        k = 1;
        ans2+=count;
      }

     ll ro = k*ans2;
     cout << ro << "\n";

	}

  return 0;
}
