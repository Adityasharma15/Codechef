#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	ll n, q;

	cin >> n >> q;

	ll arr[n];

	for(ll i = 0; i< n; i++)
	{
		cin >> arr[i];
	}


	ll inci[n], deci[n];

	memset(inci, 0, sizeof(inci));
	memset(deci, 0, sizeof(deci));

	ll inc = 0, dec = 0;

	ll temp = 0, temp2 = 0;

	for(ll i = 0; i<n; i++)
	{
			if( arr[i] < arr[i+1])
			{
				if(temp==0)
					inci[i+1] = inci[i] + 1;

				else
					inci[i+1] = inci[i];

				deci[i+1] = deci[i];

				temp++;


			
				if(temp2 > 0)
					{
						dec++;
						temp2 = 0;
					}
			}

			else if(arr[i] > arr[i+1])
			{

				inci[i+1] = inci[i];

				if(temp2==0)
					deci[i+1] = deci[i] + 1;
				else
					deci[i+1] = deci[i];

				temp2++;

				if(temp>0)
				{	
					inc++;
					temp = 0;
				}	
			}

			else if(arr[i] == arr[i+1])
			{
				if(temp>0)
					{
						inc++;
					}

				if(temp2>0)
					{
						dec++;
					}

				temp = 0;
				temp2 = 0;
			}
		}


				if(temp>0)
					{
						inc++;
					}

				if(temp2>0)
					{
						dec++;
					}


	while(q--)
	{
		ll l, r;
		cin >> l >> r;


		if(arr[l-1] < arr[l] && inci[l-1] == inci[r-1])
		{
			inc = 1;	
		}




		ll inc = (inci[r-1] - inci[l-1]) , dec = (deci[r-1] - deci[l-1]);
		

		// if(arr[l-1] > arr[l])
		// {
		// 	if((l-2) >=0 && arr[l-2] < arr[l-1])
		// 		inc = (inci[r-1] - (inci[l-1] - 1));
		// }


		// if(arr[l-1] < arr[l])
		// {
		// 	if(inci[l-1] == inci[r-1])
		// 		inc = 1;		
		// }		

		// if(arr[l-1] < arr[l])
		// {
		// 	if(deci[l-1] == deci[r-1])
		// 		dec = 1;
		// }


		// if(arr[l-1] < arr[l])
		// {
		// 	if((l-2) >=0 && arr[l-2] > arr[l-1])
		// 		inc = (deci[r-1] - (deci[l-1] - 1));
		// }

		cout << "inc " << inc << "  dec " << dec << "\n";


		if(inc == dec)
			cout << "YES" << "\n";

		else
			cout << "NO" << "\n";
	}

}