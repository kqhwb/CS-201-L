#include <iostream>
#include <string>
#include <cmath>

using namespace std;



void multiples(int even, int n){





  if(n == 1){
   
      cout<< even << " ";
	  return ;
  }
   else
   
   {
	    multiples(even , n - 1);
		cout<< even *  n << " ";
  }
}
	
  int main()
{
	
	 multiples(12, 10);
	
	
	system ("pause");
	return 0;
  }















