// Dynamic Memory Allocation
// dynamic.cpp

#include <iostream>		// Library for IO stream
#include <cstring>		// Library for c strings
using namespace std;	// Use std namespace to access library functions.

// CREATE "Student" STRUCT:
// ------------------------
struct Student {
	int no;				// An integer for student number.
	float grade[2];		// An array of floats called "grade" to hold the student's grades.
};


// MAIN PROGRAM:
// -------------
int main() {
	
	// SET VARS:
	// ---------

		int n;		// Int var for dynamic memory allocation for number of students.
		
		// Dynamic memory allocation for Student*:
		// ---------------------------------------
		// The nullptr keyword identifies the address pointed to as the null address.
		// This keyword is an implementation constant.
		// Initializaiton to nullptr ensures that student is not pointing to any valid dereferencable address.
		Student* student = nullptr;


	// USER INPUTS:
	// ------------

		// NUMBER OF STUDENTS:
		// -------------------
		// User is prompted for number of students:
		cout << "Enter the number of students : ";
		cin >> n;

		// DYNAMIC MEMORY ALLOCATION:
		// --------------------------
		// Dynamic memory allocation using 'n' for number of students:
		student = new Student[n];

		// INSERT STUDENT DATA INTO STRUCT:
		// --------------------------------
		for (int i = 0; i < n; i++) {
			// Ask user for student number:
			cout << "Student Number: ";
			cin >> student[i].no;
			
			// Ask user for student grade 1:
			cout << "Student Grade 1: ";
			cin >> student[i].grade[0];

			// Ask user for student grade 2:
			cout << "Student Grade 2: ";
			cin >> student[i].grade[1];
		}


	// DISPLAY STUDENT DATA:
	// ---------------------

		// Iterate through students using n as loop counter and display data to cout.
		for (int i =0; i < n; i++) {
			cout << student[i].no << ": " << student[i].grade[0] << ", " << student[i].grade[1] << endl;
		}


	// DYNAMIC DEALLOCATION:
	// ---------------------

		// Use keyword "delete" followed by [] and the address of a dynamically allocated region of memory.
		delete [] student;

		// OPTIONAL:
		// The nullptr assignment ensures that "student" now holds the null address.
		// This optional assignment eliminates the possibility of deleting the original address a second time, which is a serious run-time error.
		// Deleting the nullptr address has no effect.
		student = nullptr;
}