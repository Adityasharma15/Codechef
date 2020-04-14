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

    ll arr[n+1];
    memset(arr, 0, sizeof(arr));

    map<ll, vector<ll> > dateWisePages;

    ll curr_day, temp ,multiplicity, maxDay = 0;

    dateWisePages[0].push_back(1);
		//
    // curr_day = arr[2];
    // multiplicity = 3;
    // temp = 4;
		//
    // while(temp<=n)
    // {
    //   if(arr[2] == arr[temp])
    //    {
    //      curr_day++;
    //      arr[temp] = curr_day;
    //    }
    //   maxDay = max(curr_day, maxDay);
		//
    //   dateWisePages[arr[temp]].push_back(temp);
		//
    //   temp = 2*multiplicity;
    //   multiplicity++;
    // }
		//
    // dateWisePages[arr[2]].push_back(2);
		//
    // curr_day = arr[3];
    // multiplicity = 3;
    // temp = 3*2;
		//
    // while(temp<=n)
    // {
		//
    //   if(arr[3] == arr[temp])
    //     arr[temp] = ++curr_day;
		//
    //   maxDay = max(curr_day, maxDay);
		//
    //   if(temp%2!=0)
    //     dateWisePages[arr[temp]].push_back(temp);
		//
    //   temp = 3*multiplicity;
    //   multiplicity++;
    // }
		//
    // dateWisePages[arr[3]].push_back(3);

    for(ll i = 2; i<=n; i++)
    {

      curr_day = arr[i];
      multiplicity = 3;
      temp = i*2;

      while(temp<=n)
      {

        if( arr[i] == arr[temp])
          arr[temp] = ++curr_day;

        maxDay = max(curr_day, maxDay);

        temp = i*multiplicity;
        multiplicity++;
      }

      dateWisePages[arr[i]].push_back(i);
    }

    cout << (maxDay+1) << "\n";

    for(auto i: dateWisePages)
    {
      cout << i.second.size() << " ";

      for(auto j:i.second)
        cout << j << " ";

      cout << "\n";
    }

	}

  return 0;
}
