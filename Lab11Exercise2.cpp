#include <iostream>
#include <cmath>

using namespace std;




int num(int x)
{
int f;
if (x==1)
{
	cout<<x;
	return x;
}
else
{
	f= x * num(x-1);
	cout<<" * " << x ;
	return(f);
}


}

int main()
{
	int n, factorial;
 
	cout<<"Enter a number: ";
	cin>> n;
	cout<<" = " <<num(n)<<endl;

	system("pause");
}

 


















