#pragma once
#include<iostream>
#include<cassert>
#include<string>
#include<cctype>
#include<cstring>
#include<fstream>
#include <sstream>
#include "course.h"
#include "Teacher.h"
using namespace std;
CourseFiling::~CourseFiling() {

	delete[]  CourseName;
	delete[]  Code;
	delete[]  Classes;
	delete[]  PCourse;
	delete[] Marks;
}
Course::Course()
{
	course_name = " ";
	code = 0;
	classes = 0;
	parent_course = " ";
}
void Course::Set_Name(string course_name)
{
this->course_name = course_name;
}
void Course::Set_Code(int code)
{
	this->code = code;
}
 void Course::setGrade(int grade)
{
	 this->classes = grade;
}
void Course::Set_Parent_Course(string parent_course)
{
	this->parent_course = parent_course;
}
string Course::Get_Name()
{
	return course_name;
}
int Course::Get_Code()
{
	return code;
}
int Course::Get_Classes()
{
	return classes;
}
string Course::Get_Parent()
{
	return parent_course;
}
void Course::AddCourse() {
	ofstream write;
	string course_name;
	int code;
	int classes;
	string parent_course;
	cin.ignore();
	//cout << "Enter the Name of the Course:" << endl;
	//getline(cin, course_name);
	try
	{
		cout << "Enter course name" << endl;
		getline(cin, course_name);
		int length = course_name.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(course_name[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, course_name );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw course_name;
		}

	}
	catch (string course_name)
	{
		cout << course_name << endl;
		Set_Name(course_name);
	}
	
	//cout << "Enter the Code of the course: " << endl;
	//cin >> code;
	try
	{
	
	cout<<"Enter code of course"<<endl;
	while(!(cin>>code))
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw code;
}
catch(int code)
{
	cout<<"Valid code"<<endl;
	cout<<code;
	Set_Code(code);
}

	//cout << "Enter the class of which it's course: " << endl;
	//cin >> classes;
	try
	{
	
	cout<<"Enter class (from 1-10)"<<endl;
	while(!(cin>>classes) || (classes>10)|| (classes<1))
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw classes;
}
catch(int classes)
{
	cout<<"Valid class"<<endl;
	cout<<classes;
	setGrade(classes);
}
	cin.ignore();
	
	//cout << "Enter the Parent Course Name: " << endl;
	//getline(cin, parent_course);
	try
	{
		cout << "Enter parent course name" << endl;
		getline(cin, parent_course);
		int length = parent_course.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(parent_course[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, parent_course );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw parent_course;
		}

	}
	catch (string parent_course)
	{
		cout << parent_course<< endl;
		Set_Parent_Course(parent_course);
		
	}

	write.open("course.txt", ios::app);
	write << Get_Name() << "," << Get_Code() << "," << Get_Classes() << "," << Get_Parent() << endl;
	write.close();
}
void DisplayCourses() {
	ifstream read;
	int count = 1;
	read.open("course.txt");
	string line;
	string course_name;
	string code;
	string classes;
	string parent_course;
	char val = ',';
	cout << "\tCourseName\tCode\tParentcourse" << endl;
	while (getline(read, line)) {
		stringstream ss(line);
		getline(ss, course_name, val);
		getline(ss, code, val);
		getline(ss, classes, val);
		getline(ss, parent_course, val);
		cout <<count <<"\t" <<  course_name << "\t     " << code << "\t      " << parent_course << endl;
		count++;
	}
}
string* ResiZe(string *ptr, int size) {
	string *newptr;
	newptr = new string[size + 1];
	for (int i = 0; i < size; i++)
	{
		newptr[i] = ptr[i];
	}
	delete[] ptr;
	return newptr;
}
void AssignCourse() {
	int option;
	DisplayCourses();
	DisplayTeacher();
	cout << "Enter the course number you want to assign that is being displayed on the left of the course Name: " << endl;
	cin >> option;
	string copy = ReadingCourses(option);
	string Class = ReadingClasses(option);
	cout << "Enter the Teacher number that is being displayed: " << endl;
	cin >> option;
	string Cnic = getTeacherName(option);
	ofstream write;
	write.open("TeacherCourse.txt", ios::app);
	write << Cnic << "," << copy << "," << Class << endl;
	write.close();
}
string ReadingCourses(int index) {
	CourseFiling file;
	file.CourseName = new string[file.size];
	file.Code = new string[file.size];
	file.Classes = new string[file.size];
	file.PCourse = new string[file.size];
	char value = ',';
	ifstream read;
	read.open("course.txt");
	while (getline(read, file.line)) {
		stringstream ss(file.line);
		getline(ss, file.CourseName[file.check], value);
		getline(ss, file.Code[file.check], value);
		getline(ss, file.Classes[file.check], value);
		getline(ss, file.PCourse[file.check], value);
		file.CourseName = ResiZe(file.CourseName, file.size - 1);
		file.Code = ResiZe(file.Code, file.size - 1);
		file.Classes = ResiZe(file.Classes, file.size - 1);
		file.PCourse = ResiZe(file.PCourse, file.size - 1);
		file.check++;
		file.size++;
	}
	read.close();
	return file.CourseName[index - 1];
}
string ReadingClasses(int index) {
	CourseFiling file;
	file.CourseName = new string[file.size];
	file.Code = new string[file.size];
	file.Classes = new string[file.size];
	file.PCourse = new string[file.size];
	char value = ',';
	ifstream read;
	read.open("course.txt");
	while (getline(read, file.line)) {
		stringstream ss(file.line);
		getline(ss, file.CourseName[file.check], value);
		getline(ss, file.Code[file.check], value);
		getline(ss, file.Classes[file.check], value);
		getline(ss, file.PCourse[file.check], value);
		file.CourseName = ResiZe(file.CourseName, file.size - 1);
		file.Code = ResiZe(file.Code, file.size - 1);
		file.Classes = ResiZe(file.Classes, file.size - 1);
		file.PCourse = ResiZe(file.PCourse, file.size - 1);
		file.check++;
		file.size++;
		file.count++;
	}
	read.close();
	return file.Classes[index - 1];
}

string getTeacherName(int index) {
	ifstream read;
	TeacherFiling obj;
	obj.first = new string[obj.size];
	obj.last = new string[obj.size];
	obj.email = new string[obj.size];
	obj.Date = new string[obj.size];
	obj.password = new string[obj.size];
	obj.confirm_password = new string[obj.size];
	obj.cnic = new string[obj.size];
	obj.gender = new string[obj.size];
	obj.qualification = new string[obj.size];
	obj.contact = new string[obj.size];
	obj.date = new string[obj.size];
	obj.address = new string[obj.size];
	obj.salary = new string[obj.size];
	obj.username = new string[obj.size];
	char val = ',';
	read.open("teacher.txt");
	cout << "  Name \t Gender \t Degree \t Contact \t Email" << endl;
	while (getline(read, obj.line)) {
		stringstream ss(obj.line);
		getline(ss, obj.first[obj.check], val);
		getline(ss, obj.last[obj.check], val);
		getline(ss, obj.email[obj.check], val);
		getline(ss, obj.Date[obj.check], val);
		getline(ss, obj.password[obj.check], val);
		getline(ss, obj.confirm_password[obj.check], val);
		getline(ss, obj.cnic[obj.check], val);
		getline(ss, obj.gender[obj.check], val);
		getline(ss, obj.qualification[obj.check], val);
		getline(ss, obj.contact[obj.check], val);
		getline(ss, obj.date[obj.check], val);
		getline(ss, obj.address[obj.check], val);
		getline(ss, obj.salary[obj.check], val);
		getline(ss, obj.username[obj.check], val);
		cout << obj.count << " " << obj.first[obj.check] << " " << obj.last[obj.check] << "\t     " << obj.gender[obj.check] << "\t      " << obj.contact[obj.check] << "\t         " << obj.email[obj.check] << endl;
		obj.first = ReSize(obj.first, obj.size - 1);
		obj.last = ReSize(obj.last, obj.size - 1);
		obj.email = ReSize(obj.email, obj.size - 1);
		obj.Date = ReSize(obj.Date, obj.size - 1);
		obj.password = ReSize(obj.password, obj.size - 1);
		obj.confirm_password = ReSize(obj.confirm_password, obj.size - 1);
		obj.cnic = ReSize(obj.cnic, obj.size - 1);
		obj.gender = ReSize(obj.gender, obj.size - 1);
		obj.qualification = ReSize(obj.qualification, obj.size - 1);
		obj.contact = ReSize(obj.contact, obj.size - 1);
		obj.date = ReSize(obj.date, obj.size - 1);
		obj.address = ReSize(obj.address, obj.size - 1);
		obj.salary = ReSize(obj.salary, obj.size - 1);
		obj.username = ReSize(obj.username, obj.size - 1);
		obj.check++;
		obj.size++;
		obj.count++;
	}

	return obj.cnic[index - 1];
}
