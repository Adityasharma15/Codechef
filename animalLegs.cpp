#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
	
	int c , d, legs;
	cin >> c >> d >> legs;
	
	int f=0;
	
	if(d==0)
	{
		f=1;
		if(legs==(4*c))
		cout << "yes" << endl;
		
		else
		cout << "no" << endl;
	}
	
	
	if(legs==((4*c)+ (4*d)) && f==0)
	{
		cout << "yes" << endl;
		f=1;
	}
	
	if(legs%4!=0 && f==0) 
	{
	cout << "no" << endl;
	f=1;
    }


    if(c<=(2*d) && f==0)
    {
                                      	
	if( legs<=((4*c)+ (4*d)) && legs>=(4*d))                
	{	                   
    cout << "yes" << endl;                  
	f=1;     
	}  
    }
    
    if(c>(2*d) && f==0)
    {
    	//if(legs<=((8*d) + (4*d)))
    	if(legs<=((4*d) + ((c-1)*4 ))  &&  legs>=((4*d) + ((c-(2*d))*4)  ))
    	{
		cout << "yes" << endl;
    	f=1;
    }
    }
    
    if(f==0)
	cout << "no" << endl;
}	
}
