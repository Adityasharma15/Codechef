#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
  	int n;
	cin >> n;
	
	int arr[25]={0};
	
	arr[0]=arr[1]=1;
	
	for(int i=2;i<25;i++)
	{
		arr[i]=(pow(2,i)-arr[i-1]);
	}
	
	
	
	if(n<20)
		cout << arr[n-1] << " " << pow(2,n) << " "; 
	  
	if(n>=20)
		if(n==20)
		cout << arr[n-1] << " " << "1048576" << " ";
		
		if(n==21)
		cout << arr[n-1] << " " << "2097152" << " ";
		
		if(n==22)
		cout << arr[n-1] << " " << "4194304" << " ";
		
		if(n==23)
		cout << arr[n-1] << " " << "8388608" << " ";
		
		if(n==24)
		cout << arr[n-1] << " " << "16777216" << " ";
		
		if(n==25)
		cout << arr[n-1] << " " << "33554432" << " ";
	
  }	
}
