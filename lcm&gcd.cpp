#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int a, b;
		cin >> a >> b;
		
		cout << __gcd(a,b) << " " << boost::math::lcm(10,20) << endl;
	}
	
}
