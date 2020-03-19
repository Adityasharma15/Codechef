#include<iostream>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
int M, B;
cin >> M >> B;
while(1)
{   
if(M!=B && M>0 && B>0)
{

    if(M<B)
	B-=M;
	else
	M-=B;
}
	else
	break;
}
cout << M + B << endl;
}
}
