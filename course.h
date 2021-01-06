#pragma once
#include<iostream>
#include<cassert>
#include<string>
#include<cctype>
#include<cstring>
#include<fstream>
#include "Teacher.h"
#include "student.h"
using namespace std;
class Course
{
	string course_name;
	int code;
	int classes;
	string parent_course;
public:
	    Course();
		void Set_Name(string course_name);
		void Set_Code(int code);	
		void Set_Parent_Course(string parent_course);
		string Get_Name();
		int Get_Code();	
		int Get_Classes();		
		string Get_Parent();	
		void setGrade(int grade);
		void AddCourse();
};
class CourseFiling : public TeacherFiling {
public:
	string *CourseName;
	string *Code;
	string *Classes;
	string *PCourse;
	string *Marks;
	~CourseFiling();
};
string ReadingCourses(int index);
string ReadingClasses(int index);
void DisplayCourses();
void AssignCourse();
string* Resize(string *ptr, int size);
string getTeacherName(int index);


