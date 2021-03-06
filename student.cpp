#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <type_traits>
#include "student.h"
#include "course.h"
using namespace std;
/*

Student Data Entry Starts From here

*/
StudentFiling::~StudentFiling() {
		delete[]  FirstName;
		delete[]  LastName;
		delete[]  Grade;
		delete[]  RollNo;
		delete[]  Reg;
		delete[]  Contact;
		delete[]  Gender;
		delete[]  FatherName;
		delete[]  Profession;
		delete[]  PContact;
		delete[]  FeeStatus;
		delete[]  BloodGroup;
		delete[]  Address;
		delete[]  username;
	}

void Student::setFirstName(string FirstName) {
	this->FirstName = FirstName;
	}

string Student::getFirstName() {
	return FirstName;

	}
void Student::setLastName(string LastName) {
	this->LastName = LastName;
	}
	string Student::getLastName() {
		return LastName;
	}
	void Student::setGrade(int Grade) {
		this->Grade = Grade;
	}
	int Student::getGrade(){
		return Grade;
	}
	void Student::setRollNo(int Grade){
		int pow = 10;	
		int x = ConfigurationFile();
		if (x >= 10) {
			RollNo = Grade * 100 + x;
		}
		else if (x >= 100) {
			RollNo = Grade * 1000 + x;
		}
		else
		{
			RollNo = Grade * pow + x;
		}
		this->RollNo = RollNo;
	}
	int Student::getRollNo()
	{
		return RollNo;
	}
	void Student::setReg(int day, int month, int year){
		this->Reg.day = day;
		this->Reg.month = month;
		this->Reg.year = year;
	}
	int Student::getRegDay(){
		return Reg.day;
	}
	int Student::getRegMonth() {
		return Reg.month;
	}
	int Student::getRegYear() {
		return Reg.year;
	}
	void Student::setGender(char Gender){
		this->Gender = Gender;
	}
	char Student::getGender(){
		return Gender;
	}
	void Student::setContact(string Contact){
		this->ContactNo = Contact;
	}
	string Student::getContact(){
		return ContactNo;
	}
	void Student::setFatherName(string FatherName) {
		this->FatherName = FatherName;
	}
	string Student::getFatherName() {
		return FatherName;
	}
	void Student::setProfession(string Profession) {
		this->Profession = Profession;
	}
	string Student::getProfession() {
		return Profession;
	}
	void Student::setPContact(string PContact) {
		this->PNo = PContact;
	}
	string Student::getPContact() {
		return PNo;
	}
	void Student::setFee(string Fee) {
		this->Fee = Fee;
	}
	string Student::getFee() {
		return Fee;
	}
	void Student::setBlood(string BloodGroup) {
		this->BloodGroup = BloodGroup;
	}
	string Student::getBlood() {
		return BloodGroup;
	}
	void Student::setAddress(string Address) {
		this->Address = Address;
	}
	string Student::getAddress() {
		return Address;
	}
	void Student::enterData() {	
		string FirstName;
		string LastName;
		int Grade;
		int day;
		int month;
		int year;
		char Gender;
		string ContactNo;
		string FatherName;
		string	Profession;
		string PNo;
		bool Fee;
		char chose;
		string BloodGroup;
		string Address;
		cin.ignore();
		//cout << "Enter the First Name of the Student: " << endl;
		//getline(cin, FirstName);
			try
	{
		cout << "Enter FirstName " << endl;
		getline(cin, FirstName);
		int length = FirstName.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(FirstName[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, FirstName );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw FirstName;
		}

	}
	catch (string FirstName)
	{
		cout << FirstName<< endl;
		setFirstName(FirstName);
	}
		
		//cout << "Enter the the Last Name of the Student: " << endl;
		//cin >> LastName;
			try
	{
		cout << "Enter LastName " << endl;
		getline(cin, LastName);
		int length = LastName.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(LastName[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, LastName );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw LastName;
		}

	}
	catch (string LastName)
	{
		cout << LastName<< endl;
		setLastName(LastName);
	}
		
		//cout << "Enter the Grade of the Student: " << endl;
		//cin >> Grade;
	try
	{
	
	cout<<"Enter Grade (from 1-10)"<<endl;
	while(!(cin>>Grade) || (Grade>10)|| (Grade<1))
	{
		cout<<"Enter correct data\tAgain"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw Grade;
}
catch(int Grade)
{
	cout<<"Valid Grade"<<endl;
	cout<<Grade;
	setGrade(Grade);
}
		
		//cout << "Enter the Registration Date of the Student's Admission: " << endl;
		//cin >> day;
		try
	{
	
	cout << "Enter the Registration Date of the Student's Admission: " << endl;
	while(!(cin>>day) || (day>31) || day<=0)
	{
		cout<<"Enter correct data\tAgain"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }

	throw day;
}
catch(int day)
{
	cout<<"Valid date "<<endl;
	cout<<day;
}
		//cout << "Enter the Registration Month of the Student's Admission: " << endl;
		//cin >> month;
			
try
	{
	
	cout << "Enter the Registration Month of the Student's Admission: " << endl;
	while(!(cin>>month) || (month>12)||(month<=0))
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

}
		//cout << "Enter the Registration Year of the Student's Admission: " << endl;
		//cin >> year;
	try
	{
	cout << "Enter the Registration Year of the Student's Admission: " << endl;
	while(!(cin>>year) || (year>2020) || year<=0 ||year<1990)
	{
		cout<<"Enter correct data.Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
    }
	
	throw year;
}
catch(int year)
{
	cout<<"Valid year"<<endl;
	cout<<year;
	
}
		setReg(day, month, year);
		//cout << "Enter the Gender of the Student: (M/F) " << endl;
		//cin >> Gender;
		try
		{
			cout << "Enter the Gender of the Student: (M/F) " <<endl;
		
			while(!(cin>>Gender) || (Gender!='f')&&(Gender!='F')&&(Gender!='m')&&(Gender!='M'))
			{
				cout<<"INVALID INPUT "<<endl;
				cin.clear();
		        cin.ignore();
		       
			}
		
			throw Gender;
		}
		catch (char Gender)
		{
			cout<<"Valid "<<endl;
			cout<< Gender<<endl;
			setGender(Gender);
		}
		
		//cout << "Enter the Contact No. of the Student: " << endl;
		//cin >> ContactNo;
try
{

	cout << "Enter ContactNo " << endl;
	getline(cin, ContactNo);
	int length = ContactNo.length();
	while (length != 12)
	{
			cout << "Must be 12 characters dash included. Example +92***-*******" << endl;
			getline(cin, ContactNo);
			length=ContactNo.length();
			
	}

	bool okay = false;
	for (int i = 0; i < length; i++)
	{
		if (isdigit(ContactNo[i]))
		{
			cout<<"Valid";
			throw ContactNo;
		}
		else
		{
			cout<<"Enter again"<<endl;
			getline(cin,ContactNo);
			continue;
			
		}

	}

}
catch(string ContactNo)
{
	cout<<ContactNo<<endl;
	setContact(ContactNo);
}
		
		//cout << "Enter the Father Name of the Student: " << endl;
		//getline(cin, FatherName);
	try
	{
		cout << "Enter FatherName " << endl;
		getline(cin, FatherName);
		int length = FatherName.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(FatherName[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, FatherName );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw FatherName;
		}

	}
	catch (string FatherName)
	{
		cout << FatherName<< endl;
		setFatherName(FatherName);
	}
		
		//cout << "Enter the Profession of the Student's Father: " << endl;
		//getline(cin, Profession);
	try
	{
		cout << "Enter Profession " << endl;
		getline(cin, Profession);
		int length = Profession.length();
		bool okay = false;
		for (int i = 0; i < length; i++)
		{
			if (isalpha(Profession[i]))
			{
				okay = true;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, Profession );
				continue;
			}
		}
		if (okay == true)
		{
			cout << "valid" << endl;
			throw Profession;
		}

	}
	catch (string Profession)
	{
		cout << Profession<< endl;
		setProfession(Profession);
	}
	
		//cout << "Enter the Contact Number of Parent/Guardian: " << endl;
		//cin >> PNo;
try
{

	cout << "Enter Parent/Guardian's Contact Number:  " << endl;
	getline(cin, PNo);
	int length = PNo.length();
	while (length != 12)
	{
			cout << "Must be 12 characters dash included. Example +92***-*******" << endl;
			getline(cin, PNo);
			length=PNo.length();
			
	}

	bool okay = false;
	for (int i = 0; i < length; i++)
	{
		if (isdigit(PNo[i]))
		{
			cout<<"Valid";
			throw PNo;
		}
		else
		{
			cout<<"Enter again"<<endl;
			getline(cin,PNo);
			continue;
			
		}

	}

}
catch(string PNo)
{
	cout<<PNo<<endl;
	setPContact(PNo);
}
		
		cout << "Have you paid the Fees?: [y/n]" << endl;
		cin >> chose;
		if ((chose == 'y') || (chose=='Y') ) {
			string Status = "Fee Given!";
			setFee(Status);

		}
		else {
			string Status = "Fee Not Given!";
			setFee(Status);
		}
		cin.ignore();
		//cout << "Enter the Blood Group of the Student: " << endl;
		//cin >> BloodGroup;
	try
	{
		cout << "Enter Blood group " << endl;
		getline(cin, BloodGroup);
		int length = BloodGroup.length();
		for (int i = 0; i < length-1; i++)
		{
			if (BloodGroup=="O+"|| BloodGroup=="O-"|| BloodGroup=="AB"|| BloodGroup=="B+"|| BloodGroup=="B-"|| BloodGroup=="A+"|| BloodGroup=="A-" || BloodGroup == "AB-" || BloodGroup == "AB+")
			{
				cout<<"valid"<<endl;
				throw BloodGroup;
			}
			else
			{
				cout << "Invalid" << endl;
				getline(cin, BloodGroup );
				continue;
			}
		}
		

	}
	catch (string BloodGroup)
	{
		cout << BloodGroup<< endl;
		setBlood(BloodGroup);
	}
	
		cout << "Enter the Address of the Student: " << endl;
		getline(cin, Address);
		setAddress(Address);
		setRollNo(Grade);	
		cout << "Register the student for Protal: \n";
		string username = RegisteringStudent();
		ifstream configWrite;
		int check;
		configWrite.open("Configuration.txt");
		configWrite >> check;
		if(check==1){
		ofstream write;
		write.open("student.txt");
		write << getFirstName() << "," << getLastName() << "," << getGrade() << "," << getRollNo() << "," << getRegDay() << "/" << getRegMonth() << "/" << getRegYear() << "," << getGender() << "," << getContact() << "," << getFatherName() << "," << getProfession() << "," << getPContact() << "," << getFee() << "," << getBlood() << "," << getAddress() << "," << username << endl;
		write.close();
		}
		else{
		ofstream write;
		write.open("student.txt", ios::app);
		write << getFirstName() << "," << getLastName() << "," << getGrade() << "," << getRollNo() << "," << getRegDay() << "/" << getRegMonth() << "/" << getRegYear() << "," << getGender() << "," << getContact() << "," << getFatherName() << "," << getProfession() << "," << getPContact() << "," << getFee() << "," << getBlood() << "," << getAddress() << "," << username << endl;
		write.close();
		}

		
		
	}
	int ConfigurationFile() {
		ofstream configure;
		ifstream read;
		static int x;
		read.open("Configuration.txt");
		read >> x;
		x++;
		read.close();
		configure.open("Configuration.txt", ios::trunc);
		configure << x;
		configure.close();
		return x;
	}
	void ViewAllStudents() {
		string line;
		int check = 0;
		int count = 1;
		string FirstName;
		string LastName;
		string Grade;
		string RollNo;
		string Reg;
		string Contact;
		string Gender;
		string FatherName;
		string Profession;
		string PContact;
		string FeeStatus;
		string BloodGroup;
		string Address;
		string username;
		char value = ',';
		ifstream file;
		file.open("student.txt");
		cout << "Student Number     \tName\t      Grade\tRollNo" << endl;
		while(getline(file,line)){
			stringstream ss(line);	
			getline(ss, FirstName,value);
			getline(ss, LastName, value);
			getline(ss, Grade, value);
			getline(ss, RollNo, value);
			getline(ss, Reg, value);
			getline(ss, Gender, value);
			getline(ss, Contact, value);
			getline(ss, FatherName, value);
			getline(ss, Profession,  value);
			getline(ss, PContact, value);
			getline(ss, FeeStatus, value);
			getline(ss, BloodGroup, value);
			getline(ss, Address, value);	
			getline(ss, username, value);
			cout << count << "\t       "<<FirstName << " " << LastName << "\t      " << Grade << "\t" << RollNo  << endl;
			check++;
			count++;
		}

	}
	void EditStudents() {
		StudentFiling obj;
		obj.FirstName = new string[obj.size];
		obj.LastName = new string[obj.size];
		obj.Grade = new string[obj.size];
		obj.RollNo = new string[obj.size];
		obj.Reg = new string[obj.size];
		obj.Contact = new string[obj.size];
		obj.Gender = new string[obj.size];
		obj.FatherName = new string[obj.size];
		obj.Profession = new string[obj.size];
		obj.PContact = new string[obj.size];
		obj.FeeStatus = new string[obj.size];
		obj.BloodGroup = new string[obj.size];
		obj.Address = new string[obj.size];
		obj.username = new string[obj.size];
		char value = ',';
		ifstream file;
		file.open("student.txt");
		cout << "Student Number\tName\t      Grade\tRollNo\tContact   FeeStatus\tAddress" << endl;
		while (getline(file, obj.line)) {
			stringstream ss(obj.line);
			getline(ss, obj.FirstName[obj.check], value);
			getline(ss, obj.LastName[obj.check], value);
			getline(ss, obj.Grade[obj.check], value);
			getline(ss, obj.RollNo[obj.check], value);
			getline(ss, obj.Reg[obj.check], value);
			getline(ss, obj.Gender[obj.check], value);
			getline(ss, obj.Contact[obj.check], value);
			getline(ss, obj.FatherName[obj.check], value);
			getline(ss, obj.Profession[obj.check], value);
			getline(ss, obj.PContact[obj.check], value);
			getline(ss, obj.FeeStatus[obj.check], value);
			getline(ss, obj.BloodGroup[obj.check], value);
			getline(ss, obj.Address[obj.check], value);
		    getline(ss, obj.username[obj.check], value);
			cout << obj.count << "\t" << obj.FirstName[obj.check] << " " << obj.LastName[obj.check] << "\t" << obj.Grade[obj.check] << "\t" << obj.RollNo[obj.check] <<"\t"  << obj.Contact[obj.check] << "\t"  << obj.FeeStatus[obj.check] << "\t" << obj.Address[obj.check] << endl;
			obj.FirstName = Resize(obj.FirstName, obj.size-1);
			obj.LastName = Resize(obj.LastName, obj.size-1);
			obj.Grade = Resize(obj.Grade, obj.size-1);
			obj.RollNo = Resize(obj.RollNo, obj.size-1);
			obj.Reg = Resize(obj.Reg, obj.size-1);
			obj.Contact = Resize(obj.Contact, obj.size-1);
			obj.Gender = Resize(obj.Gender, obj.size-1);
			obj.FatherName = Resize(obj.FatherName, obj.size-1);
			obj.Profession = Resize(obj.Profession, obj.size-1);
			obj.PContact = Resize(obj.PContact, obj.size-1);
			obj.FeeStatus = Resize(obj.FeeStatus, obj.size-1);
			obj.BloodGroup = Resize(obj.BloodGroup, obj.size-1);
			obj.Address = Resize(obj.Address, obj.size-1);
			obj.username = Resize(obj.username, obj.size - 1);
			obj.count++;
			obj.check++;
			obj.size++;
		}
		int edit;
		cout << "Enter the Student Number you want to edit" << endl;
		cin >> edit;
		int choice;
		do {
			    cout << "What do you want to Edit?\n1.FirstName\n2.LastName\n3.Contact\n4.Fee Status\n5.Address\n6.Exit Edit System" << endl;
				cin >> choice;
			
			if (choice == 1) {
				cin.ignore();
				cout << "Enter new First name of student: " << endl;
				getline(cin, obj.FirstName[edit - 1]);
			}
			if (choice == 2) {
				cin.ignore();
				cout << "Enter new Last name of student: " << endl;
				getline(cin, obj.LastName[edit - 1]);
			}
			if (choice == 3) {
				cout << "Enter the Fee Status of the Student.\nIf fee Given Enter 'Fee Given'\nIf fee not given Enter 'Not Given'" << endl;
				cin >> obj.FeeStatus[edit - 1];
			}
			if (choice == 4) {
				cout << "Enter the New Contact Number of Student: " << endl;
				cin >> obj.Contact[edit - 1];
			}
			if (choice == 5) {
				cin.ignore();
				cout << "Enter the New Address of the Student: " << endl;
				getline(cin, obj.Address[edit - 1]);
			}
			if (choice == 6) {
				break;
			}
		} while (1);
		file.close();

		ofstream write;
		write.open("student.txt", ios::trunc);
		for (int x = 0; x <= obj.count-2; x++) {
			write << obj.FirstName[x] << "," << obj.LastName[x] << "," << obj.Grade[x] << "," << obj.RollNo[x] << "," << obj.Reg[x] << "," << obj.Gender[x] << "," << obj.Contact[x] << "," << obj.FatherName[x] << "," << obj.Profession[x] << "," << obj.PContact[x] << "," << obj.FeeStatus[x] << "," << obj.BloodGroup[x] << "," << obj.Address[x] << "," << obj.username[x] << endl;
		}
		write.close();
		
	}

	void AssignStudentCourse(bool specefic,int checking) {
		
			StudentFiling obj;
			obj.FirstName = new string[obj.size];
			obj.LastName = new string[obj.size];
			obj.Grade = new string[obj.size];
			obj.RollNo = new string[obj.size];
			obj.Reg = new string[obj.size];
			obj.Contact = new string[obj.size];
			obj.Gender = new string[obj.size];
			obj.FatherName = new string[obj.size];
			obj.Profession = new string[obj.size];
			obj.PContact = new string[obj.size];
			obj.FeeStatus = new string[obj.size];
			obj.BloodGroup = new string[obj.size];
			obj.Address = new string[obj.size];
			obj.username = new string[obj.size];
			char value = ',';
			ifstream toRead;
			toRead.open("student.txt");
			cout << "Student Number\tName\t      Grade\tRollNo\tContact   FeeStatus\tAddress" << endl;
			while (getline(toRead, obj.line)) {
				stringstream ss(obj.line);
				getline(ss, obj.FirstName[obj.check], value);
				getline(ss, obj.LastName[obj.check], value);
				getline(ss, obj.Grade[obj.check], value);
				getline(ss, obj.RollNo[obj.check], value);
				getline(ss, obj.Reg[obj.check], value);
				getline(ss, obj.Gender[obj.check], value);
				getline(ss, obj.Contact[obj.check], value);
				getline(ss, obj.FatherName[obj.check], value);
				getline(ss, obj.Profession[obj.check], value);
				getline(ss, obj.PContact[obj.check], value);
				getline(ss, obj.FeeStatus[obj.check], value);
				getline(ss, obj.BloodGroup[obj.check], value);
				getline(ss, obj.Address[obj.check], value);
				getline(ss, obj.username[obj.check], value);
				cout << obj.count << "\t" << obj.FirstName[obj.check] << " " << obj.LastName[obj.check] << "\t" << obj.Grade[obj.check] << "\t" << obj.RollNo[obj.check] << "\t" << obj.Contact[obj.check] << "\t" << obj.FeeStatus[obj.check] << "\t" << obj.Address[obj.check] << endl;
				obj.FirstName = Resize(obj.FirstName, obj.size - 1);
				obj.LastName = Resize(obj.LastName, obj.size - 1);
				obj.Grade = Resize(obj.Grade, obj.size - 1);
				obj.RollNo = Resize(obj.RollNo, obj.size - 1);
				obj.Reg = Resize(obj.Reg, obj.size - 1);
				obj.Contact = Resize(obj.Contact, obj.size - 1);
				obj.Gender = Resize(obj.Gender, obj.size - 1);
				obj.FatherName = Resize(obj.FatherName, obj.size - 1);
				obj.Profession = Resize(obj.Profession, obj.size - 1);
				obj.PContact = Resize(obj.PContact, obj.size - 1);
				obj.FeeStatus = Resize(obj.FeeStatus, obj.size - 1);
				obj.BloodGroup = Resize(obj.BloodGroup, obj.size - 1);
				obj.Address = Resize(obj.Address, obj.size - 1);
				obj.username = Resize(obj.username, obj.size - 1);
				obj.count++;
				obj.check++;
				obj.size++;
			}
			toRead.close();
			CourseFiling file;
			file.CourseName = new string[file.size];
			file.Code = new string[file.size];
			file.Classes = new string[file.size];
			file.PCourse = new string[file.size];
			ifstream read;
			read.open("course.txt");
			while (getline(read, file.line)) {
				stringstream ss(file.line);
				getline(ss, file.CourseName[file.check], value);
				getline(ss, file.Code[file.check], value);
				getline(ss, file.Classes[file.check], value);
				getline(ss, file.PCourse[file.check], value);
				file.CourseName = Resize(file.CourseName, file.size - 1);
				file.Code = Resize(file.Code, file.size - 1);
				file.Classes = Resize(file.Classes, file.size - 1);
				file.PCourse = Resize(file.PCourse, file.size - 1);
				file.check++;
				file.size++;
				file.count++;
			}
			read.close();
			if ((specefic == false) && (checking == 0)) {
				ofstream write;

				int marks = 0;
				for (int x = obj.count-2; x <= obj.count - 2; x++) {
					for (int y = 0; y <= file.count - 2; y++) {
						if (obj.Grade[x] == file.Classes[y]) {
							write.open("StudentMarks.txt", ios::app);
							write << obj.FirstName[x] << "," << obj.LastName[x] << "," << obj.Grade[x] << "," << obj.RollNo[x] << "," << file.CourseName[y] << "," << marks << endl;
							write.close();
						}
					}
				}
			}
			if ((specefic == false) && (checking==1)) {
				ofstream write;

				int marks = 0;
				write.open("StudentMarks.txt", ios::trunc);
				for (int x = 0; x <= obj.count - 2; x++) {
					for (int y = 0; y <= file.count - 2; y++) {
						if (obj.Grade[x] == file.Classes[y]) {		
							write << obj.FirstName[x] << "," << obj.LastName[x] << "," << obj.Grade[x] << "," << obj.RollNo[x] << "," << file.CourseName[y] << "," << marks << endl;
							
						}
					}
				}
				write.close();
			}
			else if ((specefic == true) && (checking==0)) {
				int opt;
				cout << "\tName\tGrade\tRollNo\tCourseName\tMarks" << endl;
				CourseFiling toRead;
				ifstream Read;
				Read.open("StudentMarks.txt");
				toRead.FirstName = new string[toRead.size];
				toRead.LastName = new string[toRead.size];
				toRead.RollNo = new string[toRead.size];
				toRead.Grade = new string[toRead.size];
				toRead.CourseName = new string[toRead.size];
				toRead.Marks = new string[toRead.size];
				while (getline(Read, toRead.line)) {
					stringstream ss(toRead.line);
					getline(ss, toRead.FirstName[toRead.check], value);
					getline(ss, toRead.LastName[toRead.check], value);
					getline(ss, toRead.Grade[toRead.check], value);
					getline(ss, toRead.RollNo[toRead.check], value);
					getline(ss, toRead.CourseName[toRead.check], value);
					getline(ss, toRead.Marks[toRead.check], value);
					cout << toRead.count << "\t " << toRead.FirstName[toRead.check] << " " << toRead.LastName[toRead.check] << "\t" << toRead.Grade[toRead.check] << "\t" << toRead.RollNo[toRead.check] << "\t" << toRead.CourseName[toRead.check] << "\t" << toRead.Marks[toRead.check] << endl;
					toRead.FirstName = Resize(toRead.FirstName, toRead.size - 1);
					toRead.LastName = Resize(toRead.LastName, toRead.size - 1);
					toRead.Grade = Resize(toRead.Grade, toRead.size - 1);
					toRead.RollNo = Resize(toRead.RollNo, toRead.size - 1);
					toRead.CourseName = Resize(toRead.CourseName, toRead.size - 1);
					toRead.Marks = Resize(toRead.Marks, toRead.size - 1);
					toRead.size++;
					toRead.count++;
					toRead.check++;
				}
				Read.close();
				cout << "Enter the Adjacent Number of the Student that you want to Change marks: " << endl;
				cin >> opt;
				cout << "Enter the Marks of " << toRead.FirstName[opt - 1] << " " << toRead.LastName[opt - 1] << " in " << toRead.CourseName[opt - 1] << endl;
				cin >> toRead.Marks[opt - 1];
				ofstream OverWrite;
				OverWrite.open("StudentMarks.txt", ios::trunc);
				for (int x = 0; x <= toRead.count - 2; x++) {
					OverWrite <<  toRead.FirstName[x] << "," << toRead.LastName[x] << "," << toRead.Grade[x] << "," << toRead.RollNo[x] << "," << toRead.CourseName[x] << "," << toRead.Marks[x] << endl;
				}
				OverWrite.close();
			}
	}
	void ViewStudentMarks(string rollNo) {
		cout << "\tName\tGrade\tRollNo\tCourseName\tMarks" << endl;
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
			toRead.FirstName = Resize(toRead.FirstName, toRead.size - 1);
			toRead.LastName = Resize(toRead.LastName, toRead.size - 1);
			toRead.Grade = Resize(toRead.Grade, toRead.size - 1);
			toRead.RollNo = Resize(toRead.RollNo, toRead.size - 1);
			toRead.CourseName = Resize(toRead.CourseName, toRead.size - 1);
			toRead.Marks = Resize(toRead.Marks, toRead.size - 1);
			toRead.size++;
			toRead.count++;
			toRead.check++;
		}
		Read.close();
		for (int x = 0; x <= toRead.count - 2; x++) {
			if (rollNo == toRead.RollNo[x]) {
				cout << toRead.FirstName[x] << " " << toRead.LastName[x] << "\t" << toRead.Grade[x] << "\t" << toRead.RollNo[x] << "\t" << toRead.CourseName[x] << "\t  " << toRead.Marks[x] << endl;
			}
		}

	}
	void ViewFeeStatus(string rollNo) {
		StudentFiling obj;
		obj.FirstName = new string[obj.size];
		obj.LastName = new string[obj.size];
		obj.Grade = new string[obj.size];
		obj.RollNo = new string[obj.size];
		obj.Reg = new string[obj.size];
		obj.Contact = new string[obj.size];
		obj.Gender = new string[obj.size];
		obj.FatherName = new string[obj.size];
		obj.Profession = new string[obj.size];
		obj.PContact = new string[obj.size];
		obj.FeeStatus = new string[obj.size];
		obj.BloodGroup = new string[obj.size];
		obj.Address = new string[obj.size];
		obj.username = new string[obj.size];
		char value = ',';
		ifstream file;
		file.open("student.txt");
		cout << "Name\t      Grade\tRollNo\t  FeeStatus " << endl;
		while (getline(file, obj.line)) {
			stringstream ss(obj.line);
			getline(ss, obj.FirstName[obj.check], value);
			getline(ss, obj.LastName[obj.check], value);
			getline(ss, obj.Grade[obj.check], value);
			getline(ss, obj.RollNo[obj.check], value);
			getline(ss, obj.Reg[obj.check], value);
			getline(ss, obj.Gender[obj.check], value);
			getline(ss, obj.Contact[obj.check], value);
			getline(ss, obj.FatherName[obj.check], value);
			getline(ss, obj.Profession[obj.check], value);
			getline(ss, obj.PContact[obj.check], value);
			getline(ss, obj.FeeStatus[obj.check], value);
			getline(ss, obj.BloodGroup[obj.check], value);
			getline(ss, obj.Address[obj.check], value);
			getline(ss, obj.username[obj.check], value);
			obj.FirstName = Resize(obj.FirstName, obj.size - 1);
			obj.LastName = Resize(obj.LastName, obj.size - 1);
			obj.Grade = Resize(obj.Grade, obj.size - 1);
			obj.RollNo = Resize(obj.RollNo, obj.size - 1);
			obj.Reg = Resize(obj.Reg, obj.size - 1);
			obj.Contact = Resize(obj.Contact, obj.size - 1);
			obj.Gender = Resize(obj.Gender, obj.size - 1);
			obj.FatherName = Resize(obj.FatherName, obj.size - 1);
			obj.Profession = Resize(obj.Profession, obj.size - 1);
			obj.PContact = Resize(obj.PContact, obj.size - 1);
			obj.FeeStatus = Resize(obj.FeeStatus, obj.size - 1);
			obj.BloodGroup = Resize(obj.BloodGroup, obj.size - 1);
			obj.Address = Resize(obj.Address, obj.size - 1);
			obj.username = Resize(obj.username, obj.size - 1);
			obj.count++;
			obj.check++;
			obj.size++;
		}
		file.close();
		for (int x = 0; x <= obj.count - 2; x++) {
			if (rollNo == obj.RollNo[x]) {
				cout << obj.FirstName[x] << " " << obj.LastName[x] << "\t" << obj.Grade[x] << "\t" << obj.RollNo[x] << "\t" << obj.FeeStatus[x] << endl;
			}

		}
	}
	void GivingStudentAuthority() {
		string Uname = StudentLoginSystemFun();
		StudentFiling obj;
		obj.FirstName = new string[obj.size];
		obj.LastName = new string[obj.size];
		obj.Grade = new string[obj.size];
		obj.RollNo = new string[obj.size];
		obj.Reg = new string[obj.size];
		obj.Contact = new string[obj.size];
		obj.Gender = new string[obj.size];
		obj.FatherName = new string[obj.size];
		obj.Profession = new string[obj.size];
		obj.PContact = new string[obj.size];
		obj.FeeStatus = new string[obj.size];
		obj.BloodGroup = new string[obj.size];
		obj.Address = new string[obj.size];
		obj.username = new string[obj.size];
		char value = ',';
		ifstream file;
		file.open("student.txt");
		cout << "Student Number\tName\t      Grade\tRollNo\tContact   FeeStatus\tAddress" << endl;
		while (getline(file, obj.line)) {
			stringstream ss(obj.line);
			getline(ss, obj.FirstName[obj.check], value);
			getline(ss, obj.LastName[obj.check], value);
			getline(ss, obj.Grade[obj.check], value);
			getline(ss, obj.RollNo[obj.check], value);
			getline(ss, obj.Reg[obj.check], value);
			getline(ss, obj.Gender[obj.check], value);
			getline(ss, obj.Contact[obj.check], value);
			getline(ss, obj.FatherName[obj.check], value);
			getline(ss, obj.Profession[obj.check], value);
			getline(ss, obj.PContact[obj.check], value);
			getline(ss, obj.FeeStatus[obj.check], value);
			getline(ss, obj.BloodGroup[obj.check], value);
			getline(ss, obj.Address[obj.check], value);
			getline(ss, obj.username[obj.check], value);
			obj.FirstName = Resize(obj.FirstName, obj.size - 1);
			obj.LastName = Resize(obj.LastName, obj.size - 1);
			obj.Grade = Resize(obj.Grade, obj.size - 1);
			obj.RollNo = Resize(obj.RollNo, obj.size - 1);
			obj.Reg = Resize(obj.Reg, obj.size - 1);
			obj.Contact = Resize(obj.Contact, obj.size - 1);
			obj.Gender = Resize(obj.Gender, obj.size - 1);
			obj.FatherName = Resize(obj.FatherName, obj.size - 1);
			obj.Profession = Resize(obj.Profession, obj.size - 1);
			obj.PContact = Resize(obj.PContact, obj.size - 1);
			obj.FeeStatus = Resize(obj.FeeStatus, obj.size - 1);
			obj.BloodGroup = Resize(obj.BloodGroup, obj.size - 1);
			obj.Address = Resize(obj.Address, obj.size - 1);
			obj.username = Resize(obj.username, obj.size - 1);
			obj.count++;
			obj.check++;
			obj.size++;
		}
		
		int y;
		for (int x = 0; x <= obj.count - 2; x++) {
			if (Uname == obj.username[x]) {
				cout << obj.FirstName[x] << " " << obj.LastName[x] << "\t" << obj.Grade[x] << "\t" << obj.RollNo[x] << "\t" << obj.Contact[x] << "\t" << obj.FeeStatus[x] << "\t" << obj.Address[x] << endl;
				y = x;
				break;
			}
			
		}
		
		int opt;
		do {

			cout << "Select Following:\t\n1.View Exam Marks\t\n2.View Fee Status\t\n3.Exit" << endl;
			cin >> opt;
			if (opt == 2) {
				ViewFeeStatus(obj.RollNo[y]);
			}
			else if (opt == 1) {
				ViewStudentMarks(obj.RollNo[y]);
			}
			else if (opt == 3) {
				exit(1);
			}
		} while (1);
	}
		
	void PromoteStudents() {
		int merit;
		int checkingMarks;
		int totalMarks;
		cout << "Enter the Percentage of Marks to Pass the Student: " << endl;
		cin >> merit;
		cout << "What are the Total Marks of each subject: " << endl;
		cin >> totalMarks;
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
			toRead.FirstName = Resize(toRead.FirstName, toRead.size - 1);
			toRead.LastName = Resize(toRead.LastName, toRead.size - 1);
			toRead.Grade = Resize(toRead.Grade, toRead.size - 1);
			toRead.RollNo = Resize(toRead.RollNo, toRead.size - 1);
			toRead.CourseName = Resize(toRead.CourseName, toRead.size - 1);
			toRead.Marks = Resize(toRead.Marks, toRead.size - 1);
			toRead.size++;
			toRead.count++;
			toRead.check++;
		}
		Read.close();
		string P = "pass";
		string F = "fail";
		ofstream OverWrite;
		OverWrite.open("StudentMarks.txt", ios::trunc);
		for (int x = 0; x <= toRead.count - 2; x++) {
			stringstream geek(toRead.Marks[x]);
			geek >> checkingMarks;
			if (checkingMarks >= ((totalMarks * merit) / 100)) {
				OverWrite << toRead.FirstName[x] << "," << toRead.LastName[x] << "," << toRead.Grade[x] << "," << toRead.RollNo[x] << "," << toRead.CourseName[x] << "," << toRead.Marks[x] << ","  <<  P << endl;
					}
			else {								
						OverWrite << toRead.FirstName[x] << "," << toRead.LastName[x] << "," << toRead.Grade[x] << "," << toRead.RollNo[x] << "," << toRead.CourseName[x] << "," << toRead.Marks[x] << "," <<  F << endl;
					}
				}
		
				OverWrite.close();		
	}
	void PromoteAndWriting() {
		//Student MArks Checking Reading
		CourseFiling toRead;
		ifstream Read;
		Read.open("StudentMarks.txt");
		toRead.FirstName = new string[toRead.size];
		toRead.LastName = new string[toRead.size];
		toRead.RollNo = new string[toRead.size];
		toRead.Grade = new string[toRead.size];
		toRead.CourseName = new string[toRead.size];
		toRead.Marks = new string[toRead.size];
		toRead.Address = new string[toRead.size];
		char value = ',';
		while (getline(Read, toRead.line)) {
			stringstream ss(toRead.line);
			getline(ss, toRead.FirstName[toRead.check], value);
			getline(ss, toRead.LastName[toRead.check], value);
			getline(ss, toRead.Grade[toRead.check], value);
			getline(ss, toRead.RollNo[toRead.check], value);
			getline(ss, toRead.CourseName[toRead.check], value);
			getline(ss, toRead.Marks[toRead.check], value);
			getline(ss, toRead.Address[toRead.check], value);
			toRead.FirstName = Resize(toRead.FirstName, toRead.size - 1);
			toRead.LastName = Resize(toRead.LastName, toRead.size - 1);
			toRead.Grade = Resize(toRead.Grade, toRead.size - 1);
			toRead.RollNo = Resize(toRead.RollNo, toRead.size - 1);
			toRead.CourseName = Resize(toRead.CourseName, toRead.size - 1);
			toRead.Marks = Resize(toRead.Marks, toRead.size - 1);
			toRead.Address = Resize(toRead.Address, toRead.size - 1);
			toRead.size++;
			toRead.count++;
			toRead.check++;
		}
		Read.close();
		//Student Data Reading
		StudentFiling obj;
		obj.FirstName = new string[obj.size];
		obj.LastName = new string[obj.size];
		obj.Grade = new string[obj.size];
		obj.RollNo = new string[obj.size];
		obj.Reg = new string[obj.size];
		obj.Contact = new string[obj.size];
		obj.Gender = new string[obj.size];
		obj.FatherName = new string[obj.size];
		obj.Profession = new string[obj.size];
		obj.PContact = new string[obj.size];
		obj.FeeStatus = new string[obj.size];
		obj.BloodGroup = new string[obj.size];
		obj.Address = new string[obj.size];
		obj.username = new string[obj.size];
		ifstream file;
		file.open("student.txt");
		cout << "Name\t      Grade\tRollNo\t  FeeStatus " << endl;
		while (getline(file, obj.line)) {
			stringstream ss(obj.line);
			getline(ss, obj.FirstName[obj.check], value);
			getline(ss, obj.LastName[obj.check], value);
			getline(ss, obj.Grade[obj.check], value);
			getline(ss, obj.RollNo[obj.check], value);
			getline(ss, obj.Reg[obj.check], value);
			getline(ss, obj.Gender[obj.check], value);
			getline(ss, obj.Contact[obj.check], value);
			getline(ss, obj.FatherName[obj.check], value);
			getline(ss, obj.Profession[obj.check], value);
			getline(ss, obj.PContact[obj.check], value);
			getline(ss, obj.FeeStatus[obj.check], value);
			getline(ss, obj.BloodGroup[obj.check], value);
			getline(ss, obj.Address[obj.check], value);
			getline(ss, obj.username[obj.check], value);
			obj.FirstName = Resize(obj.FirstName, obj.size - 1);
			obj.LastName = Resize(obj.LastName, obj.size - 1);
			obj.Grade = Resize(obj.Grade, obj.size - 1);
			obj.RollNo = Resize(obj.RollNo, obj.size - 1);
			obj.Reg = Resize(obj.Reg, obj.size - 1);
			obj.Contact = Resize(obj.Contact, obj.size - 1);
			obj.Gender = Resize(obj.Gender, obj.size - 1);
			obj.FatherName = Resize(obj.FatherName, obj.size - 1);
			obj.Profession = Resize(obj.Profession, obj.size - 1);
			obj.PContact = Resize(obj.PContact, obj.size - 1);
			obj.FeeStatus = Resize(obj.FeeStatus, obj.size - 1);
			obj.BloodGroup = Resize(obj.BloodGroup, obj.size - 1);
			obj.Address = Resize(obj.Address, obj.size - 1);
			obj.username = Resize(obj.username, obj.size - 1);
			obj.count++;
			obj.check++;
			obj.size++;
		}
		string P = "pass";
		string F = "fail";
		StudentFiling toCheck;

		toCheck.RollNo = new string[toCheck.size];
		file.close();
		for (int x = 0; x <= obj.count - 2; x++) {
			for (int y = 0; y <= toRead.count - 2; y++) {
				if ((obj.RollNo[x] == toRead.RollNo[y]) && (toRead.Address[y] == F)) {
					toCheck.RollNo[toCheck.check] = obj.RollNo[x];
					toCheck.RollNo = Resize(toCheck.RollNo, toCheck.size - 1);
					toCheck.size++;
					toCheck.check++;
				}
			}
		}
		ofstream write;
		write.open("student.txt", ios::trunc);
		int CheckingRoll;
		int CheckingGrade;
		for (int x = 0; x <= obj.count - 2; x++) {
			stringstream geek(obj.RollNo[x]);
			geek >> CheckingRoll;
			CheckingGrade = stoi(obj.Grade[x]);
		    
			if ((toCheck.RollNo[x] != obj.RollNo[x]) && (obj.Grade[x] != "10") && (CheckingRoll < 100)) {
				write << obj.FirstName[x] << "," << obj.LastName[x] << "," << CheckingGrade + 1 << "," << CheckingRoll + 10 << "," << obj.Reg[x] << "," << obj.Gender[x] << "," << obj.Contact[x] << "," << obj.FatherName[x] << "," << obj.Profession[x] << "," << obj.PContact[x] << "," << obj.FeeStatus[x] << "," << obj.BloodGroup[x] << "," << obj.Address[x] << "," << obj.username[x] << endl;
			}
			if ((toCheck.RollNo[x] != obj.RollNo[x]) && (obj.Grade[x] != "10") && (CheckingRoll < 1000)) {
				write << obj.FirstName[x] << "," << obj.LastName[x] << "," << CheckingGrade + 1 << "," << CheckingRoll + 100 << "," << obj.Reg[x] << "," << obj.Gender[x] << "," << obj.Contact[x] << "," << obj.FatherName[x] << "," << obj.Profession[x] << "," << obj.PContact[x] << "," << obj.FeeStatus[x] << "," << obj.BloodGroup[x] << "," << obj.Address[x] << "," << obj.username[x] << endl;
			}
		}
		write.close();
		ofstream OverWrite;
		OverWrite.open("Previous.txt", ios::app);
		for (int x = 0; x <= toRead.count - 2; x++) {
			OverWrite << toRead.FirstName[x] << "," << toRead.LastName[x] << "," << toRead.Grade[x] << "," << toRead.RollNo[x] << "," << toRead.CourseName[x] << "," << toRead.Marks[x] << "," << toRead.Address[x] << endl;
		}
		bool specefic = false;
		int checking = 1;
		AssignStudentCourse(specefic, checking);

	}


	

	/*

	To get Data from File

	*/
	string* Resize(string *ptr, int size) {
		string *newptr;
		newptr = new string[size + 1];
		for (int i = 0; i < size; i++)
		{
			newptr[i] = ptr[i];
		}
		delete[] ptr;
		return newptr;
	}
	
//Login System And Registering System Functions Are In this Section
	/*
	
	Registration System Starts from here For Student,Teacher And Admin

	*/
	/*
	Admin Registration System starts From here
	
	*/
	void RegisteringAdmin(){
		ofstream Stu;
		string username;
		string password;
		Stu.open("AdminLogin.txt", ios::app);
		while (1) {
			cout << "Enter the your Admin's username for registration : " << endl;
			cin >> username;
			if (!checkAdminExistingUsername(username)) {
				continue;
			}
			cout << "Enter your Admin's Password for registration: " << endl;
			cin >> password;
			Stu << username << "," << password << endl;
			Stu.close();
			break;
		}
	}
	bool checkAdminExistingUsername(string name) { 
		ifstream admin;
		string user;
		string pwd;
		string line;
		char val = ',';
		admin.open("AdminLogin.txt");
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
	//Admin Login System
	void AdminLoginSystemFun() {
		string username;
		string password;
		while (1) {
			cout << "Enter the your Admin's username : " << endl;
			cin >> username;
			cout << "Enter your Admins's Password: " << endl;
			cin >> password;
			if (!CheckingAdminDetails(username, password)) {
				break;
			}
		}
	}
	bool CheckingAdminDetails(string name,string pass) {
		ifstream admin;
		string user;
		string pwd;
		string line;
		char val = ',';
		admin.open("AdminLogin.txt");
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
		
		Admin Login System Ends here
		
		*/
	/*
	 
	 Student Login Starts here
	
	*/
	/*

	Student Registration System Starts From here

	*/
	//This function Allow to Register a Student 
	string RegisteringStudent() {
		ofstream Stu;
		string username;
		string password;
		Stu.open("StudentLogin.txt", ios::app); //Student Usernames File	
		while (1) {
			cout << "Enter your Student's username : " << endl;
			cin >> username;
			if (!checkStudentExistingUsername(username)) {
				continue;
			}
			cout << "Enter your Student's Password: " << endl;
			cin >> password;
			Stu << username << "," << password << endl;
			Stu.close();
			break;
		}
		return username;
	}
	bool checkStudentExistingUsername(string name) {
		ifstream admin;
		string user;
		string pwd;
		string line;
		char val = ',';
		admin.open("StudentLogin.txt");
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
	string StudentLoginSystemFun() {
		string username;
		string password;
		while (1) {
			cout << "Enter the your Student username : " << endl;
			cin >> username;
			cout << "Enter your Student's account Password: " << endl;
			cin >> password;
			if (!CheckingStudentDetails(username, password)) {
				break;
			}
		}
		return username;
	}
	bool CheckingStudentDetails(string name,string pass) {
		ifstream admin;
		string user;
		string pwd;
		string line;
		char val = ',';
		admin.open("StudentLogin.txt");
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
	
	
