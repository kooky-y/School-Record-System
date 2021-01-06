#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include "student.h"
#include "course.h"
#include "Teacher.h"
using namespace std;
int main(void) {

	int menu;
	bool specefic;
	string rollNo;
	do {
		cout << "Choose from following:\n\t\t1.Enter as a Admin\n\t\t2.Enter as a Teacher\n\t\t3.Enter as a Student\n";
		while (!(cin >> menu) || (menu <= 0) || (menu > 3))
		{
			cin.clear();
			cin.ignore(123, '\n');

		}
		system("CLS");
		if (menu == 1) {
			int admChoose;
			cout << "Choose from the following:\n\t\t1.Register as Admin\n\t\t2.Login as Admin\n";
			while (!(cin >> admChoose) || (admChoose <= 0) || (admChoose > 2))
			{
				cin.clear();
				cin.ignore(123, '\n');

			}
			system("CLS");
			if (admChoose == 1) {
				RegisteringAdmin();
			}
			if (admChoose == 2) {
				int adminOption;
				AdminLoginSystemFun();
				do {
					cout << "Choose from following:\n\t\t1.Add a student\n\t\t2.Add a Teacher\n\t\t3.Add a Course\n\t\t4.Assign Course\n\t\t5.Edit Student Details\n\t\t6.Edit Teacher Details\n\t\t7.View All Students\n\t\t8.View All Teachers\n\t\t9.View All Courses\n\t\t10.Update Student Marks\n\t\t11.View Student Marks\n\t\t12.View Fee Status\n\t\t13.Promote Students\n\t\t14.Exit" << endl;
					while (!(cin >> adminOption) || (adminOption <= 0) || (adminOption > 14))
					{
						cin.clear();
						cin.ignore(123, '\n');

					}

					//Adding Student here.
					if (adminOption == 1) {
						system("CLS");						
						Student obj;
						obj.enterData();
						specefic = false;
						AssignStudentCourse(specefic,0);

					}
					else if (adminOption == 2) {
						system("CLS");
						Teacher obj;
						obj.Add();
					}
					else if (adminOption == 3) {
						system("CLS");
						Course F;
						F.AddCourse();
					}
					else if (adminOption == 4) {
						system("CLS");
						AssignCourse();
					}
					else if (adminOption == 5) {
						system("CLS");
						EditStudents();
					}
					else if (adminOption == 6) {
						system("CLS");
						EditTeacher();
					}
					else if (adminOption == 7) {
						system("CLS");
						ViewAllStudents();
					}
					else if (adminOption == 8){
						system("CLS");
						DisplayTeacher();
						}
					else if (adminOption == 9) {
						system("CLS");
						DisplayCourses();
					}
					else if (adminOption == 10) {
						system("CLS");
						specefic = true;
							AssignStudentCourse(specefic,0);

					}
					else if (adminOption == 11) {
						system("CLS");
						cout << "Enter the Roll Number of the Student you want to see the Number: " << endl;
						cin >> rollNo;
						ViewStudentMarks(rollNo);
					}
					else if (adminOption == 12) {
						system("CLS");
						cout << "Enter the Roll Number of the Student you want to see the Fee Status of: " << endl;
						cin >> rollNo;
						ViewFeeStatus(rollNo);
					}
					else if (adminOption == 13) {
						system("CLS");
						PromoteStudents();
						PromoteAndWriting();
					}
					else if (adminOption == 14) {
						exit(1);
					}

				} while (1);
			}
		}
		else if (menu == 3) {
			system("CLS");
			GivingStudentAuthority();
		}
		else if (menu == 2) {
			system("CLS");
			GivingTeacherAuthority();
		}
	} while (1);



}


