#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person
{
public:
    string getName()
    {
        return _name;
    }
    void setName(string name)
    {
        _name = name;
    }
    string getDOB()
    {
        return _dob;
    }
    void setDOB(string dob)
    {
        _dob = dob;
    }
private:
    string _name;
    string _dob;
};



class Student : public Person
{
public:
    string getID()
    {
        return _id;
    }
    void setID(string id)
    {
        _id = id;
    }
    string getCGPA()
    {
        return _cgpa;
    }
    void setCGPA(string cgpa)
    {
        _cgpa = cgpa;
    }
private:
    string _id;
    string _cgpa;
};
class Instructor : public Person
{
public:
    string getOffice()
    {
        return _office;
    }
    void setOffice(string office)
    {
        _office = office;
    }
    string getDesignation()
    {
        return _designation;
    }
    void setDesignation(string designation)
    {
        _designation = designation;
    }
private:
    string _office;
    string _designation;
};

class Course : public Student, Instructor
{
public:
    string getCourseID()
    {
        _courseid;
    }
    void setCourseID(string courseid)
    {
        _courseid = courseid;
    }

    string getCourseName()
    {
        _coursename;
    }
    void setCourseName(string coursename)
    {
        _coursename = coursename;
    }

    string getNumberOfStudents()
    {
        _numberofstudents;
    }
    void setNumberOfStudents(string numberofstudents)
    {
        _numberofstudents = numberOfStudents;
    }

    string numberOfStudents;
    Student student[20];
private:
    string _courseid;
    string _coursename;
    string _numberofstudents;
};
int main()
{
    Course course;
    Student student;
    Instructor instructor;

    char courseInfo[100];
    ifstream filecourse;
    filecourse.open("course.txt");
    while(!filecourse.eof())
    {
        for(int i=0; i<=2; i++)
        {            
            filecourse.getline(courseInfo, 100);
            if(i==0)
            {
                course.setCourseName(string(courseInfo));
            }
            else if(i==1)
            {
                course.setCourseID(string(courseInfo));
            }
            else
            {
                course.setNumberOfStudents(string(courseInfo));
            }
        }
    }

  
    char instructorInfo[100];
    ifstream fileInstructor;
    fileInstructor.open("instructor.txt");
    while(!fileInstructor.eof())
    {
        for(int i=0; i<=3; i++)
        {            
            fileInstructor.getline(instructorInfo, 100);
            if(i==0)
            {
                instructor.setName(string(instructorInfo));
            }
            else if(i==1)
            {
                instructor.setDOB(string(instructorInfo));
            }
            else if(i==2)
            {
                instructor.setOffice(string(instructorInfo));
            }
            else
            {
                instructor.setDesignation(string(instructorInfo));
            }

        }
    }
    char studentInfo[100];
    ifstream fileStudent;
    fileStudent.open("students.txt");
    int studentCount = 0;
    while(!fileStudent.eof())
    {
        for (int i = 0; i <= 3; i++)
        {            
            fileStudent.getline(studentInfo, 100);
            if(i == 0)
            {
                course.student[studentCount].setName(string(studentInfo));
            }
            else if(i == 1)
            {
                course.student[studentCount].setID(string(studentInfo));
            }
            else if(i==2)
            {
                course.student[studentCount].setDOB(string(studentInfo));
            }
            else
            {
                course.student[studentCount].setCGPA(string(studentInfo));
            }
        }
        studentCount++;
    }
    char s;
    cin >> s;
    return 0;
};