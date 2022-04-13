#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include "Student.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

class StudentManager {
private:
	vector<Student> students;
	StudentManager();
	~StudentManager();

public:
	static StudentManager& getInstance();
	void addStudentToVector();
	void sortStudentListByID();
	void printStudentsList();
	void eraseStudentRecordByID();
};
#endif
