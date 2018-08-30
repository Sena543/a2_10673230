	#include <iostream>
using namespace std;
int main()
{
	 
	int x=2,y;  bool prime=true;
	cout<<"Enter a random value "<< endl;
	cin>>y;
	  if (((y%x==1 )&(y%3==2 ))|((y%x==1)&(y%3==(0|1)))|((y%x==0)&(y%3==2)|((y%x==1)&(y%3==0))))
		
		{cout<< y << " is a prime number"<< endl;}
		else 
		{cout << y <<" is not a prime number"<< endl;
		}
		return 0;
}
