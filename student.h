#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
class Student {
	string FirstName;
	string LastName;
	int Grade;
	int RollNo;
	date Reg;
	char Gender;
	string ContactNo;
	string FatherName;
	string	Profession;
	string PNo;
	string Fee;
	string BloodGroup;
	string Address;
	
public:
	Student() {
		string FirstName = " ";
		string LastName = " ";
		string username = " ";
		string password = " ";
		int Grade = 0;
		int RollNo = 0;
		date Reg;
		char Gender = ' ';
		double	ContactNo = 0;
		string FatherName = " ";
		string	Profession = " ";
		double PNo = 0;
		string Fee = " ";
		string BloodGroup = " ";
		string Address = " ";
	}
	void setFirstName(string FirstName);
	string getFirstName();
	void setLastName(string LastName);
	string getLastName();
	void setGrade(int Grade);
	int getGrade();
	void setRollNo(int Grade);
	int getRollNo();
	void setReg(int day,int month,int year);
	int getRegDay();
	int getRegMonth();
	int getRegYear();
	void setGender(char Gender);
	char getGender();
	void setContact(string Contact);
	string getContact();
	void setFatherName(string FatherName);
	string getFatherName();
	void setProfession(string Profession);
	string getProfession();
	void setPContact(string PContact);
	string getPContact();
	void setFee(string Fee);
	string getFee();
	void setBlood(string BloodGroup);
	string getBlood();
	void setAddress(string Address);
	string getAddress();
	void enterData();
	
	

	
};
class StudentFiling {
public:
	string *FirstName;
	string *LastName;
	string *Grade;
	string *RollNo;
	string *Reg;
	string *Contact;
	string *Gender;
	string *FatherName;
	string *Profession;
	string *PContact;
	string *FeeStatus;
	string *BloodGroup;
	string *Address;
	string *username;
	string line;
    int size = 2;
	int check = 0;
	int count = 1;
	~StudentFiling();
};
int ConfigurationFile();
void ViewAllStudents();
void EditStudents();
string* Resize(string *ptr, int size);
//LOGIN SYSTEM FUNCTION STARTS FROM HERE
void RegisteringAdmin();
bool checkAdminExistingUsername(string name);
bool CheckingAdminDetails(string user,string pass);
void AdminLoginSystemFun();
//Student 
string RegisteringStudent();
bool checkStudentExistingUsername(string name);
void GivingStudentAuthority();
string StudentLoginSystemFun();
bool CheckingStudentDetails(string user,string pass);
//Student MArks
void AssignStudentCourse(bool specefic,int checking);
void ViewStudentMarks(string rollNo);
void ViewFeeStatus(string rollNo);
void PromoteStudents();
void PromoteAndWriting();
