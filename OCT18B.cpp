#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int time , temp , bits;
		cin >> time;
		
		temp = time%26;
	
		bits = pow(2,(time/26));
			
	    if( temp >0 && temp <=2)
	    cout << bits << " " << "0" << " " << "0" << endl;
	    
	    else if( temp >2 && temp<= 10)
	    cout << "0" << " " << bits << " " << "0" << endl;
	    
	    else if( temp >10 && temp<= 26)
	    cout << "0" << " " << "0" << " " << bits << endl;
	    
	    else if (temp == 0)
	    cout << "0" << " " << "0" << " " << bits << endl;
	    
	}
}
