#include<iostream> 

using namespace std; 


void bubblesort(int a[],int n) 

{ 

int temp; 

	for(int i=n-1; i>0; i--) 

	{ 

		for(int j=0; j<i; j++) 

		{ 

			if(a[j]> a[j+1]) 

			{ 

				temp=a[j]; 

				a[j]=a[j+1]; 

				a[j+1]=temp; 




			} 

		} 

	} 


} 




void display(int a[],int n) 

{ 

	for(int i=0; i<n; i++) 

		cout<< a[i] <<" "; 

} 


int main() 

{ 


int a[] = {19, 42, 54, 81, 51, 5, 43, 28, 36, 57, 77, 75, 59, 47, 78, 18, 7, 41, 1, 83}; 


cout <<"Your unsorted array's are: "; 

display(a,19); 


cout << endl; 


bubblesort(a,19); 


cout<<"Your sorted array's are: "; 

display(a,19); 

cout << endl; 




system("pause"); 

return 0; 

} 

