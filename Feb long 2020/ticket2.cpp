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

	ll pro = 0;

	vector<string> s;
	
	cout << "*";
	 
	s.push_back("ABCD");
	s.push_back("ACBD");
//		s.push_back("ABDC");
//		s.push_back("ACDB");
//		s.push_back("ADCB");
//		s.push_back("ADBC");
//		s.push_back("BACD");
//		s.push_back("BADC");
//		s.push_back("BCAD");
//		s.push_back("BCDA");
//		s.push_back("BDCA");
//		s.push_back("CBDA");
//		s.push_back("CBAD");
//		s.push_back("BDAC");
//		s.push_back("CABD");
//		s.push_back("CADB");
//		s.push_back("CDAB");
//		s.push_back("CDBA");
//		s.push_back("DBCA");
//		s.push_back("DBAC");
//		s.push_back("DCBA");
//		s.push_back("DCAB");
//		s.push_back("DACB");
//		s.push_back("DABC");


	while(t--)
	{
		cout << "*";
		
		ll profit = 0;
		
		ll n;
		cin >> n;
		
		ll show[4][4];
		
		memset(show, 0, sizeof(show)); 
		
		char a;
		 
		ll b, t1, t2;
		
		while(n--)
		{
			cin >>  a >> b;
			
			t1 = a - 'A';
			t2 = (b/3) - 1;
			
			if(t1>=0 && t1<4 && t2>=0 && t2<4)
				show[t1][t2]++;
		}
		
		cout << "*";
		cout << "*";
		
		
		cout << "*";
		
		for(ll i = 0; i<28; i++)
		{
			
			vector<ll> v;
	
			for( ll j = 0; j<4; j++)
			{
				//set<int, greater<int> > set;
				

				int c = s[i][j] - 'A';
				v.push_back(show[c][j]);
				//set.insert(show[c][j]); 
			}

			ll temp = 100;

			sort(v.begin(), v.end(), greater<ll>());
			
			 for (ll o = 0; o<v.size(); o++) 
			{
				profit += (v[o])*temp;
				temp-=25;

				if((v[o])==0)
					profit-=100;
			}

		}

}

}



