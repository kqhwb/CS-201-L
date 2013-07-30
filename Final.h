#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class SortedList : public Student
{
private:

	int m_size;
	int m_numOfStudents;

public:
	
	void addStudents(Student[], int size);
	  
	int getSize()
    {
        return m_size;
    }
    void setSize(int size)
    {
        m_size = size;
    }
    
	
	int getNumOfStudents();
	
	int getnumOfStudents()
    {
        return m_numOfStudents;
    }
    void setNumOfStusents(int numberOfStudents)
    {
        m_numOfStudents = numberOfStudents;
    }
	
	
	SortedList();
	SortedList(int size);
	Student* getSortedItem();
	
	
	void remove(int index);
	int searchByID (int id);
	void increaseSize();
	void sort();



}


