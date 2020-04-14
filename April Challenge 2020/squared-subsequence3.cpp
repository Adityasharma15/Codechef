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

    ll arr[n];

    vector< ll> even;

    for(ll i = 0; i<n; i++)
    {
      cin >> arr[i];

      if(arr[i]%2==0  && arr[i]!=0)
        even.push_back(i);
    }

    ll start = 0, end, ans = 0;

		// cout << "ans " << ans << "\n";

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

    // cout << "ans  " << ans << "\n";

		ll count = 0;

		if(even.size() >= 1)
		{

    for(ll i = 0; i<(even.size() -1 ); i++)
    {

      if(arr[even[i]]%4==0)
      {

          if(i==0)
          {
              ans += ((even[i] + 1)*(n - even[i]));

          }

          else
          {
            ans+= (even[i] - even[i-1])*(n - even[i]);
          }


      }

      else
      {

			if(i==0)
			   ans+= (even[i] + 1)*( n - even[i+1]);

			else
			   ans+= (even[i] - even[i-1])*(n - even[i+1]);
      }

		}


    ll temper = even.size()-1;

    if(arr[even[temper]]%4 == 0 )
    {

      if(even.size()==1)
        ans+= (even[temper] + 1)*(n - even[temper]);

      else
        ans+= (even[temper] - even[temper-1])*(n - even[temper]);
    }

	}

	  cout << ans << "\n";
	}

  return 0;
}
