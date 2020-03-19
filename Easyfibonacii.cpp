#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll int highestPowerof2(ll int n) 
{ 
 ll int x = n, count = 0;
 
 while(x>0)
 {
 		x/=2;
		count++;	
 }   
 
 return pow(2,count-1);
	 
 
} 

int main()
{
	ll int arr[61];
	
	ll int a = 0, b = 1, c, i; 
  
    arr[1]=0;
    arr[2]=1;
  
  for (i = 3; i <61; i++) 
  { 
     c = a + b;
	 arr[i]=c%10; 
     a = b; 
     b = c; 
  } 
	
	ll int t;
	cin >> t;
	
	while(t--)
	{
		ll int n;
		cin >> n;
		
		ll int fibo;
		fibo = highestPowerof2(n);
		cout << arr[fibo%60] << endl;
	}
	
}
