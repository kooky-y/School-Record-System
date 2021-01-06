#pragma once 
#include<iostream>
#include"Teacher.h"
#include<cassert>
#include<string>
#include<cctype>
#include<cstring>
#include<fstream>
#include<sstream>
#include "student.h"
#include "course.h"
#include <regex>

using namespace std;
TeacherFiling::~TeacherFiling() {
	delete[] first;
	delete[] last;
	delete[] email;
	delete[] Date;
	delete[] confirm_password;
	delete[] cnic;
	delete[] gender;
	delete[] qualification;
	delete[] contact;
	delete[] date;
	delete[] address;
	delete[] salary;
	delete[] username;
}
 Teacher::Teacher()
{
		first = "";
		last = "";
		email = "";
		joining_date = 0;
		joining_month = 0;
		joining_year = 0;
		password = "";
		confirm_password = "";
		cnic = "";
		gender = 0;
		qualification = "";
		contact = "";
		date = 0;
		month = 0;
		year = 0;
		address = "";
		salary = 0;
}
void Teacher::SetFirst(string first)
{
		this->first = first;
}
void Teacher::SetLast(string last)
{
		this->last = last;
}
void Teacher::SetEmail(string email)
{
	this->email=email;
}
void Teacher::SetJoiningDate(int joining_date)
{
this->joining_date = joining_date;
}
		
void Teacher::SetJoiningMonth(int joining_month)
{
		
			this->joining_month = joining_month;
	
}
void Teacher::SetJoiningYear(int joining_year)
	{
		
		this->joining_year = joining_year;
	}
	void Teacher::SetPassword(string password)
	{
		this->password = password;
	}
	void Teacher::SetConfirmPassword(string confirm_password)
	{
		this->confirm_password = confirm_password;
	}
	void Teacher::SetCnic(string cnic)
	{
		this->cnic = cnic;
	}
	void Teacher::SetGender(char gender)
	{
	this->gender = gender;
    }
    void Teacher::SetQualification(string qualification)
	{
		this->qualification = qualification;
	}
	void Teacher::SetContact(string contact)
	{
	
		this->contact = contact;
	}
	void Teacher::SetDate(int date)
	{
			this->date = date;
	
	}
	void Teacher::SetMonth(int month)
	{
	
			this->month = month;
		
	}
	void Teacher::SetYear(int year)
	{
	
		this->year = year;
	}
	void Teacher::SetAddress(string address)
	{
	
		this->address = address;
	}
	void Teacher::SetSalary(float salary)
	{
		this->salary = salary;
	}
	string Teacher::GetFirst()
	{
		return first;
	}
	string Teacher::GetLast()
	{
		return last;
	}
	string Teacher::GetEmail()
	{
		return email;
	}
	int Teacher::GetJoiningDate()
	{
		return joining_date;
	}
	int Teacher::GetJoiningMonth()
	{
		return joining_month;
	}
	int Teacher::GetJoiningYear()
	{
		return joining_year;
	}
	string Teacher::GetPassword()
	{
		return password;
	}
	string Teacher::GetConfirmPassword()
	{
		return confirm_password;
	}
	string Teacher::GetCnic()
	{
		return cnic;
	}
	char Teacher::GetGender()
	{
		return gender;
	}
	string Teacher::GetQualification()
	{
		return qualification;
	}
	string Teacher::GetContact()
	{
		return contact;
	}
	int Teacher::GetDate()
	{
		return date;
	}
	int Teacher::GetMonth()
	{
		return month;
	}
	int Teacher::GetYear()
	{
		return year;
	}
	string Teacher::GetAddress()
	{
		return address;
	}
float Teacher::GetSalary()
	{
		return salary;
	}
void Teacher::Add()
{
	ofstream write;
	string first;
	string last;
	string email;
	int joining_date, joining_month=0, joining_year;
	string password;
	string confirm_password;
	string cnic;
	char gender;
	string qualification;
	string contact;
	int date, month, year;
	string address;
	float salary;
	cin.ignore();
	//cout << "Enter First Name" << endl;
	//getline(cin, first);
		try
	{
		cout << "Enter first name" << endl;
		getline(cin, first);
		int length = first.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(first[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, first );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw first;
		}

	}
	catch (string first)
	{
		cout << first<< endl;
		SetFirst(first);
	}
	
	//cout<<"Enter Last Name "<<endl;
	//getline(cin,last);
		try
	{
		cout << "Enter last name" << endl;
		getline(cin, last);
		int length = last.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(last[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, last );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw last;
		}

	}
	catch (string last)
	{
		cout << last<< endl;
		SetLast(last);
	}

	//SetLast(last);
	//cout<<"Enter email "<<endl;
	//getline(cin, email);
	
	try
	{
		regex sample("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
		cout << "Enter your Email-Id:" << endl;
		cin >> email;
		bool okay = false;
		while (regex_match(email, sample) != true)
		{
			cout << "Invalid email. Enter again" << endl;
			cin >> email;
		}
		throw email;
	}
	catch (string email)
	{
		cout << "Valid Email " << endl;
		cout <<email << endl;
		SetEmail(email);
	}
	
	//cout<<"Enter Joining Date "<<endl;
	//cin>>joining_date;
	try
	{
	
	cout<<"Enter joining date"<<endl;
	while(!(cin>>joining_date) || (joining_date>31) || joining_date<=0)
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw joining_date;
}
catch(int joining_date)
{
	cout<<"Valid date "<<endl;
	cout<<joining_date;
	SetJoiningDate(joining_date);
}
	//
	try
	{
	
	cout<<"Enter joining month. "<<endl;
	while(!(cin>>month) || (month>12)||(month<=0))
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw joining_month;
}
catch(int joining_month)
{
	cout<<"Valid month"<<endl;
	cout<<joining_month;
	SetJoiningMonth(joining_month);
}
	//
	//cout<<"Enter Joining Month "<<endl;
	//cin>>joining_month;
	//SetJoiningMonth(joining_month);
	//cout<<"Enter Joining Year "<<endl;
	//cin>>joining_year;
	//SetJoiningYear(joining_year);
	try
	{
	cout<<"Enter joining year"<<endl;
	while(!(cin>>joining_year) || (joining_year>2020) || joining_year<=0 || joining_year<1990)
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }
	
	throw joining_year;
}
catch(int joining_year)
{
	cout<<"Valid year"<<endl;
	cout<<joining_year;
	SetJoiningYear(joining_year);
}
	//cout<<"Enter Password "<<endl;
	//cin.ignore();
	//getline(cin,password);
	try
	{
	cout << "Enter Password. It must be 8 characters with at least one digit " << endl;
		cin.ignore();
		int length = password.length();
		while (length != 8)
		{
				cout << "Password must be 8 characters with atleast one digit.Enter again" << endl;
				getline(cin, password);
				length = password.length();
				cout << length<<endl;

		}
		bool okay = false;
		for (int i = 0; i<length; i++)
		{
			if (isdigit(password[i]))
			{
				okay = true;
			}
			else
			{
				okay = false;
			}
		}
		if (okay == true)
		{
			cout << "yes! Password criteria of at least one digit and 8 characters satisifed " << endl;
		}
		if (okay == false)
		{
			cout << "Password not satisfying criteria. Enter again " << endl;
			getline(cin, password);
		}
	throw password;
}
catch(string password)
{
	cout<<"Valid password "<<endl;
	cout<<password;
	SetPassword(password);
}
	//SetPassword(password);
	//cout<<"Enter confirmed password "<<endl;
	//cin.ignore();
	//getline(cin,confirm_password);
	try
	{
	cout << "Enter Confirmed Password. It must be 8 characters with at least one digit " << endl;
		cin.ignore();
        int length = confirm_password.length();
		while (length != 8)
		{
				cout << "Password must be 8 characters with atleast one digit.Enter again" << endl;
				getline(cin, confirm_password);
				length = confirm_password.length();
				cout << length<<endl;

		}
		
		
		bool okay = false;
		for (int i = 0; i<length; i++)
		{
			if (isdigit(confirm_password[i]))
			{
				okay = true;
			}
			else
			{
				okay = false;
			}
		}
		if (okay == true)
		{
			cout << "yes! Password criteria of at least one digit and 8 characters satisifed " << endl;
		}
		if (okay == false)
		{
			cout << "Password not satisfying criteria. Enter again " << endl;
			getline(cin, confirm_password);
		}
	throw confirm_password;
}
catch(string confirm_password)
{
	cout<<"Valid password "<<endl;
	cout<<confirm_password;
	SetConfirmPassword(confirm_password);
}
	
	//cout<<"Enter cnic "<<endl;
	//cin.ignore();
	//getline(cin,cnic);
	try
{

	cout << "Enter Cnic " << endl;
	getline(cin, cnic);
	int length = cnic.length();
	while (length != 15)
	{
		cout << "CNIC MUST BE OF 15 CHARACTERS WITH DASHES INCLUDED " << endl;
		cout << "example : XXXXX-XXXXXXX-X" << endl;
		getline(cin, cnic);
		length = cnic.length();
		if (length == 15)
		{
			continue;
		}
	}

	bool okay = false;
	for (int i = 0; i < 15; i++)
	{
		if (isdigit(cnic[i]))
		{
			cout<<"Valid";
			throw cnic;
		}
		else
		{
			cout<<"Enter again"<<endl;
			getline(cin,cnic);
			continue;
			
		}

	}

}
catch(string cnic)
{
	cout<<cnic<<endl;
	SetCnic(cnic);
}
		
	
	//cout<<"Enter Gender "<<endl;
	//cin>>gender;
	try
		{
		cout << "Enter the Gender" << endl;
		
			while(!(cin>>gender) || (gender!='f')&&gender!='F'&&gender!='m'&&gender!='M')
			{
				
				cin.clear();
		       
		       
			}
		
			throw gender;
		}
		catch (char gender)
		{
			cout<<"Valid "<<endl;
			cout<<gender<<endl;
			SetGender(gender);
		}
	
	//cout<<"Enter Qualification "<<endl;
	//cin.ignore();
	//getline(cin,qualification);
	try
	{
		cin.ignore();
		cout << "Enter qualification " << endl;
		getline(cin, qualification);
		int length = qualification.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(qualification[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, qualification );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw qualification;
		}

	}
	catch (string qualification)
	{
		cout << qualification<< endl;
		SetQualification(qualification);
	}
	//cout<<"Enter Contact "<<endl;
	//getline(cin,contact);
try
{

	cout << "Enter contact " << endl;
	getline(cin, contact);
	int length = contact.length();
	while (length != 12)
	{
			cout << "Must be 12 characters dash included. Example +92***-*******" << endl;
			getline(cin, contact);
			length=contact.length();
			
	}

	bool okay = false;
	for (int i = 0; i < length; i++)
	{
		if (isdigit(contact[i]))
		{
			cout<<"Valid";
			throw contact;
		}
		else
		{
			cout<<"Enter again"<<endl;
			getline(cin,contact);
			continue;
			
		}

	}

}
catch(string contact)
{
	cout<<contact<<endl;

	SetContact(contact);
}
	


	//cout<<"Enter Date "<<endl;
	//cin>>date;
	try
	{
	
	cout<<"Enter date of date of birth"<<endl;
	while(!(cin>>date) || (date>31) || date<=0)
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw date;
}
catch(int date)
{
	cout<<"Valid date "<<endl;
	cout<<date;
	SetDate(date);
}
	
	//cout<<"Enter Month "<<endl;
	//cin>>month;
		try
	{
	
	cout<<"Enter month of date of birth"<<endl;
	while(!(cin>>month) || (month>12) || month<=0)
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw month;
}
catch(int month)
{
	cout<<"Valid month"<<endl;
	cout<<month;
	SetMonth(month);
}

	//cout<<"Enter Year "<<endl;
	//cin>>year;
		try
	{
	
	cout<<"Enter date of birth's year. "<<endl;
	while(!(cin>>year) || (year>=2020|| year<=1990) || year<=0)
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw year;
}
catch(int year)
{
	cout<<"Valid year "<<endl;
	cout<<year;
	SetYear(year);
}
	cout<<"Enter Address "<<endl;
	cin.ignore();
	getline(cin,address);
	SetAddress(address);
	//cout<<"Enter Salary "<<endl;
	//cin>>salary;
try
{

	    cout << "Enter Salary " << endl;
		cin >> salary;
		while ((!(cin>>salary))||salary<=0.0)
		{
			cout<<"Invalid enter again"<<endl;
			cin.clear();
			cin.ignore(123,'\n');
		}
		throw salary;
}
catch(float salary)
{
	cout<<"Valid "<<endl;
	cout<<salary<<endl;
	SetSalary(salary);
}
	
	string username = RegisteringTeacher();
	write.open("teacher.txt", ios::app);
	write << GetFirst() << "," << GetLast() << "," << GetEmail() << ","<< GetJoiningDate() <<"/"<< GetJoiningMonth() <<"/"<<GetJoiningYear()<<","<<GetPassword()<<","<<GetConfirmPassword()<<","<<GetCnic()<<","<<GetGender()<<","<<GetQualification()<<","<<GetContact()<<","<<GetDate()<<"/"<<GetMonth()<<"/"<<GetYear()<<","<< GetAddress() << "," <<GetSalary()<< "," << username <<endl;
	
}
void DisplayTeacher()
{
	int count = 1;
	ifstream read;
	read.open("teacher.txt");
	string first;
	string last;
	string email;
	string Date;
	string password;
	string confirm_password;
	string cnic;
	string gender;
	string qualification;
	string contact;
	string DOB;
	string address;
	string salary;
	string username;
	char val = ',';
	string line;
	cout <<"\tName \t Gender \t Degree \t Contact \t Email" << endl;
	while (getline(read, line)) {
		stringstream ss(line);
		getline(ss,first, val);
		getline(ss,last, val);
		getline(ss, email, val);
		getline(ss, Date, val);
		getline(ss, password, val);
		getline(ss, confirm_password, val);
		getline(ss, cnic, val);
		getline(ss,gender, val);
		getline(ss, qualification, val);
		getline(ss,contact, val);
		getline(ss, DOB, val);
		getline(ss, address, val);
		getline(ss,salary, val);
		getline(ss, username, val);
		cout << count << "\t"<<first<<" "<<last<< "\t" <<gender<< "\t" << qualification<<"\t      "<< contact<< "\t  "<<email<<endl;
		count++;
	}
	read.close();
}
void EditTeacher()
{
	ifstream read;
	TeacherFiling obj;
	obj.size;
	obj.check;
	obj.count;
	obj.first=new string[obj.size];
	obj.last=new string[obj.size];
	obj.email=new string[obj.size];
	obj.Date = new string[obj.size];
	obj.password= new string[obj.size];
	obj.confirm_password=new string[obj.size];
	obj.cnic=new string[obj.size];
	obj.gender=new string[obj.size];
	obj.qualification=new string[obj.size];
	obj.contact=new string[obj.size];
	obj.date=new string[obj.size];
	obj.address=new string[obj.size];
	obj.salary=new string[obj.size];
	obj.username = new string[obj.size];
	char val = ',';
	string line;
	read.open("teacher.txt");
	cout <<"  Name \t Gender \t Degree \t Contact \t Email" << endl;
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
		cout << obj.count << " " << obj.first[obj.check]<<" "<< obj.last[obj.check]<< "\t     " << obj.gender[obj.check]<< "\t      " << obj.contact[obj.check]<< "\t         "<< obj.email[obj.check]<<endl;
		obj.first = ReSize(obj.first, obj.size-1);
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
		int edit;
		cout << "Do you want to Edit data?/n/tPress the index of student: " << endl;
		cin >> edit;
		cin.ignore();
		cout << "Enter new Address " << endl;
		getline(cin, obj.address[edit - 1]);
		cout << "Enter new contact " << endl;
		getline(cin, obj.contact[edit - 1]);
		cout<<"Enter new qualification "<<endl;
		getline(cin, obj.qualification[edit-1]);
		cout<<"Enter new Salary "<<endl;
		getline(cin, obj.salary[edit-1]);
		read.close();

		ofstream write;
		write.open("teacher.txt", ios::trunc);
		for (int i = 0; i <= obj.count - 2; i++)
		{
			write << obj.first[i] << "," << obj.last[i] << "," << obj.email[i] << "," << obj.Date[i] << "," << obj.password[i] << "," << obj.confirm_password[i] << "," << obj.cnic[i] << "," << obj.gender[i] << "," << obj.qualification[i] << "," << obj.contact[i] << "," << obj.date[i] << "," << obj.address[i] << "," << obj.salary[i] << "," << obj.username[i] << endl;

		}
		write.close();
}
void GivingTeacherAuthority() {
	string Uname = TeacherLoginSystemFun();
	ifstream read;
	TeacherFiling obj;
	obj.size;
	obj.check;
	obj.count;
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
	string line;
	read.open("teacher.txt");
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

	int z = 0;
	for (int x = 0; x <= obj.count - 2; x++) {
		if (Uname == obj.username[x]) {
			cout << obj.first[obj.check] << " " << obj.last[obj.check] << "\t     " << obj.gender[obj.check] << "\t      " << obj.contact[obj.check] << "\t         " << obj.email[obj.check] << endl;
			z = x;
			break;
		}

	}
	int opt;
	do {
		cout << "Select Following:\t\n1.View Courses\t\n2.Give Student Marks\t\n3.Exit" << endl;
		cin >> opt;

		CourseFiling file;
		file.CourseName = new string[file.size];
		file.Code = new string[file.size];
		file.Classes = new string[file.size];
		ifstream read;
		read.open("TeacherCourse.txt");
		while (getline(read, file.line)) {
			stringstream ss(file.line);
			getline(ss, file.Code[file.check], val);
			getline(ss, file.CourseName[file.check], val);
			getline(ss, file.Classes[file.check], val);
			file.CourseName = ReSize(file.CourseName, file.size - 1);
			file.Code = ReSize(file.Code, file.size - 1);
			file.Classes = ReSize(file.Classes, file.size - 1);
			file.check++;
			file.size++;
			file.count++;
		}
		CourseFiling toRead;
		ifstream Read;
		Read.open("StudentMarks.txt");
		toRead.FirstName = new string[toRead.size];
		toRead.LastName = new string[toRead.size];
		toRead.RollNo = new string[toRead.size];
		toRead.Grade = new string[toRead.size];
		toRead.CourseName = new string[toRead.size];
		toRead.Marks = new string[toRead.size];
		char value = ',';
		while (getline(Read, toRead.line)) {
			stringstream ss(toRead.line);
			getline(ss, toRead.FirstName[toRead.check], value);
			getline(ss, toRead.LastName[toRead.check], value);
			getline(ss, toRead.Grade[toRead.check], value);
			getline(ss, toRead.RollNo[toRead.check], value);
			getline(ss, toRead.CourseName[toRead.check], value);
			getline(ss, toRead.Marks[toRead.check], value);
			toRead.FirstName = ReSize(toRead.FirstName, toRead.size - 1);
			toRead.LastName = ReSize(toRead.LastName, toRead.size - 1);
			toRead.Grade = ReSize(toRead.Grade, toRead.size - 1);
			toRead.RollNo = ReSize(toRead.RollNo, toRead.size - 1);
			toRead.CourseName = ReSize(toRead.CourseName, toRead.size - 1);
			toRead.Marks = ReSize(toRead.Marks, toRead.size - 1);
			toRead.size++;
			toRead.count++;
			toRead.check++;
		}

		int  y = 0;
		if (opt == 1) {
			cout << "CourseName\tCourse Class\tTotal Students" << endl;
			for (int i = 0; i <= file.count - 2; i++) {
				if (obj.cnic[z] == file.Code[i]) {
					y = 0;
					for (int j = 0; j <= toRead.count - 2; j++) {
						if ((file.CourseName[i] == toRead.CourseName[j]) && (file.Classes[i] == toRead.Grade[j])) {
							y++;
						}
					}
					cout << file.CourseName[i] << "\t\t" << file.Classes[i] << "   \t\t       " << y << endl;
				}
			}
		}
		else if (opt == 2) {
			bool check = true;
			AssignStudentCourse(check,0);
		}
		else if (opt == 3) {
			exit(1);
		}
	} while (1);

}
string* ReSize(string *ptr, int size) {
	string *newptr;
	newptr = new string[size + 1];
	for (int i = 0; i < size; i++)
	{
		newptr[i] = ptr[i];
	}
	delete[] ptr;
	return newptr;
}

string RegisteringTeacher() {
	ofstream Stu;
	string username;
	string password;
	Stu.open("TeacherLogin.txt", ios::app);
	while (1) {
		cout << "Enter the your new Teacher's username : " << endl;
		cin >> username;
		if (!checkTeacherExistingUsername(username)) {
			continue;
		}
		cout << "Enter your new Teacher's Password: " << endl;
		cin >> password;
		Stu << username << "," << password << endl;
		Stu.close();
		break;
	}
	return username;
}
bool checkTeacherExistingUsername(string name) {
	ifstream admin;
	string user;
	string pwd;
	string line;
	char val = ',';
	admin.open("TeacherLogin.txt");
	while (getline(admin, line)) {
		stringstream ss(line);
		getline(ss, user, val);
		getline(ss, pwd, val);
		if (user == name) {
			cout << "\n\t\tUsername Already Taken!\n\t\tTry Another Username!\n";
			admin.close();
			return false;
		}
	}
	if (user != name) {
		admin.close();
		cout << "\tYou can keep this Username!" << endl;
		return true;
	}
}
/*

Teacher Login Starts From Here

*/
string TeacherLoginSystemFun() {
	string username;
	string password;
	while (1) {
		cout << "Enter the your Teacher's username : " << endl;
		cin >> username;
		cout << "Enter your Teacher's Password: " << endl;
		cin >> password;
		if (!CheckingTeacherDetails(username, password)) {
			break;
		}
	}
	return username;
}
bool CheckingTeacherDetails(string name, string pass) {
	ifstream admin;
	string user;
	string pwd;
	string line;
	char val = ',';
	admin.open("TeacherLogin.txt");
	while (getline(admin, line)) {
		stringstream ss(line);
		getline(ss, user, val);
		getline(ss, pwd, val);
		if ((user == name) && (pass == pwd)) {
			admin.close();
			cout << "Access Granted!" << endl;
			return false;
		}
	}
	if ((user != name) || (pass != pwd)) {
		admin.close();
		cout << "\tInvalid UserName or Password" << endl;
		return true;
	}
}
/*

 Teacher Login System Ends Here

 */
