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
		 string s, r;
     cin >> s >> r;

     ll islands = 0, unequals = 0, ans, len = s.length();
     vector<ll> gaps;

		 bool island = false;
		 ll lastunequal = 0;

     for(ll i = 0; i<len; i++)
     {
       if(s[i]!=r[i])
        {
					if(!island)
						{
							islands++;
							island = true;

							if(islands>1)
							gaps.push_back((i-1) - lastunequal);
						}

          unequals++;
					lastunequal = i;
        }

				else
				{
					island = false;
				}
     }

     ans = unequals*islands;

		 sort(gaps.begin(), gaps.end());

		 for(auto i:gaps)
		 {
			 islands--;
			 unequals+=i;
			 ans = min( ans, unequals*islands);
	 	 }

		 cout << ans << "\n";
	}

  return 0;
}
