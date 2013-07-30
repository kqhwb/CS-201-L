#include <iostream>
#include <string>
#include "SortedList.h"
#include "Student.h"
#include <fstream>


using namespace std;

int main
{
    
    Student student;
    SortedList sortedlist;

    char students[5];
    ifstream sortedlist;
    sortedlist.open("students.txt");
    while(!sortedlist.eof())
    {
        for(int i=0; i<=3; i++)
        {            
            sortedlist.getline(students, 5);
            if(i==0)
            {
                sortedlist.SortedList(string(students));
            }
            else if(i==1)
            {
                int SortedList.getID(string(students));
            }
            else
            {
                sortedlist.numberOfStudents(string(students));
            }
        }

    }
	

	return 0;
}
