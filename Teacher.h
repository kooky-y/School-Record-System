#pragma once
#include<iostream>
#include<cassert>
#include<string>
#include<cctype>
#include<cstring>
#include<fstream>
#include "student.h"
using namespace std;
class Teacher 
{
private:
	string first;
	string last;
	string email;
	int joining_date, joining_month, joining_year;
	string password;
	string confirm_password;
	string cnic;
	char gender;
	string qualification;
	string contact;
	int date, month, year;
	string address;
	float salary;
public:
	Teacher();
	void SetFirst(string first);
	void SetLast(string last);
	void SetEmail(string email);
	void SetJoiningDate(int joining_date);
	void SetJoiningMonth(int joining_month);
	void SetJoiningYear(int joining_year);
	void SetPassword(string password);
	void SetConfirmPassword(string confirm_password);
	void SetCnic(string cnic);
	void SetGender(char gender);
	void SetQualification(string qualification);
	void SetContact(string contact);
	void SetDate(int date);
	void SetMonth(int month);
	void SetYear(int year);
	void SetAddress(string address);
	void SetSalary(float salary);
	string GetFirst();
	string GetLast();
	string GetEmail();
	int GetJoiningDate();
	int GetJoiningMonth();
	int GetJoiningYear();
	string GetPassword();
	string GetConfirmPassword();
	string GetCnic();
	char GetGender();
	string GetQualification();
	string GetContact();
	int GetDate();
	int GetMonth();
	int GetYear();
	string GetAddress();
	float GetSalary();
	void Add();	
};
class TeacherFiling: public StudentFiling {
public:
	string *first ;
	string *last ;
	string *email ;
	string *Date ;
	string *password ;
	string *confirm_password ;
	string *cnic ;
	string *gender ;
	string *qualification;
	string *contact ;
	string *date ;
	string *address ;
	string *salary ;
	string *username;
	string line;
	~TeacherFiling();
};
void DisplayTeacher();
void EditTeacher();
string* ReSize(string *ptr, int size);
string RegisteringTeacher();
string TeacherLoginSystemFun();
bool checkTeacherExistingUsername(string name);
bool CheckingTeacherDetails(string user, string pass);
void GivingTeacherAuthority();
