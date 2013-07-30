#include <string>
#include <iostream>
#pragma once
using namespace std;


class Student
{

private:
	int m_id;
	string m_name;
	double m_cgpa;

public:
	Student();
	Student(int id, string name, double cgpa);
	
	int getID;
	
	int getID()
	{
		return m_id;
	}
	
	string getName;
	
	string getName()
	{
		return m_name;
	}
	
	double getCGPA;
	
	double getCGPA()
	{
		return m_cgpa;
	}

};


