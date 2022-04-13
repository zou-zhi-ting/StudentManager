#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;
class Student {
private:
	unsigned int newStudentTranscriptID;
	string newStudentFirstName,newStudentSurname;

public:
	Student();
	Student(unsigned int, string, string);
	~Student();
	unsigned int getStudentTranscriptID() const;
	string getStudentFirstName() const;
	string getStudentSurname() const;

};

#endif
