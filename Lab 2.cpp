#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	string studentName, courseName;
	int studentID;
	
	fstream inputStream;
	inputStream.open("student.txt");


		
	

	string array1[20][3] ;
		for (int i =0; i<20; i++) {
			for (int j=0; j<3; j++) {
				inputStream >> array1[i][j];
					
			} 
		}
	for (int i =0; i<20; i++) {
			for (int j=0; j<3; j++) {
				cout << array1[i][j] << endl;  
	
			}

	}
		system("pause");
inputStream.close();
}