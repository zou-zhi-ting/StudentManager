#include "Student.h"

Student::Student() :newStudentTranscriptID(0), 
					newStudentFirstName(" "), 
					newStudentSurname(" ") {}

Student::Student(unsigned int ID, string fn, string sn):newStudentTranscriptID(ID),
														newStudentFirstName(fn),
														newStudentSurname(sn){}

Student::~Student() {}

unsigned int Student::getStudentTranscriptID()const {
	return newStudentTranscriptID;
}

string Student::getStudentFirstName()const {
	return newStudentFirstName;
}

string Student::getStudentSurname() const {
	return newStudentSurname;
}