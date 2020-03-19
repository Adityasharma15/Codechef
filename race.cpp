#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	
	float x1 , x2 ,x3, v1,v2;
	cin >> x1 >> x2 >> x3 >> v1 >> v2;
	
    float t1, t2;
	 
	 t1= ((x1-x3)/v1);
	 
	 if(t1<0)
	 t1=t1*(-1);
	 
	 t2 =((x2-x3)/v2);
	 
	 
	 if(t2<0)
	 t2=t2*(-1);
	 
	 if(t2<t1)
	 cout << "Kefa" << endl;
	 
	 else if(t2>t1)
	 cout << "Chef" << endl;
	 
	 else if(t1==t2)
	 cout << "Draw" << endl;
	 
	 
	
	
    }
}
