#include<bits/stdc++.h>
#define ll long long
#define testcases ll t; cin >> t; while(t--)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	testcases
  {

    ll n;
    cin >> n;

    ll arr[n];

    vector<ll> even;
    vector<ll> four;

		four.push_back(-1);

    for(ll i = 0; i<n; i++)
    {
      cin >> arr[i];

      if(arr[i]%4==0 && arr[i]!=0)
        four.push_back(i);

      if(arr[i]%2==0  && arr[i]!=0)
        even.push_back(i);
    }

		four.push_back(n);

    ll start = 0, end, ans = 0;

		bool evenoccured = false;

    for(ll i = 0;i<n; i++)
    {
       end = i;

       if(arr[i]%2!=0 || arr[i]==0)
       {
				 		if(evenoccured)
						{
								start = i;
								evenoccured = false;
						}

						ans =  ans + ((end - start) + 1);
            continue;
       }

       else
			 {
				 	start = i;
				 	evenoccured = true;
			 }

	}

    cout << "ans  " << ans << "\n";

		ll count = 0;

    for(ll i = 0; i<(even.size() -1); i++)
    {
			if(i==0)
			ans+= (even[i] + 1)*( n - even[i+1]);

			else
			ans+= (even[i] -even[i-1])*(n - even[i+1]);
		//	count++;
		}

		cout << "ans  " << ans << "\n";

    for(ll i = 1 ; i<( four.size() - 1); i++)
    {
				ans += ((four[i] - four[i-1])*(four[i+1] - four[i]));
				// count++;
		}
		//
		cout << ans << "\n";
		//
		// cout << "count " << count << "\n";

		// there is an error, there is redundancy as 1 10^9 -10^9 shows
//		if(four.size() >= 1 || even.size() >=2)


    // if(even.size() >=2)
    // {
		// 	  // the whole array has been added count times
		// 		ans -= (count-1);
		// }

    cout << ans << "\n";

	}

  return 0;
}
