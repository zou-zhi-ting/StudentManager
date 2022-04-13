#include "StudentManager.h"

StudentManager::StudentManager() {}

StudentManager::~StudentManager() {}

StudentManager& StudentManager::getInstance() {
	static StudentManager instance;
	return instance;
}

void StudentManager::addStudentToVector() {

	unsigned int studentTranscriptIDFromUser;
	string studentFirstNameFromUser, studentSurnameFromUser;

	cout << "Enter the student first name: ";
	cin >> studentFirstNameFromUser;
	cout << "Enter the student surname: ";
	cin >> studentSurnameFromUser;
	cout << "Enter the student transcript ID: ";
	cin >> studentTranscriptIDFromUser;
	Student newStudent(studentTranscriptIDFromUser, studentFirstNameFromUser, studentSurnameFromUser);
	students.push_back(newStudent);
	cout << "Student saved. Press enter to continue.";
	cin.ignore();
	getchar();
}

void StudentManager::printStudentsList() {
	cout << "STUDENT LIST:" << endl;
	if (students.size() == 0) {
		cout << "--No results--" << endl;
	}
	else {
		for (size_t i = 0; i < students.size(); ++i) {
			cout << "First name:" << students[i].getStudentFirstName();
			cout << ",Surname:" << students[i].getStudentSurname();
			cout << ",TranscriptID:" << students[i].getStudentTranscriptID() << endl;
		}
	}
}

void StudentManager::eraseStudentRecordByID() {
	unsigned int resultToErase{ 0 };
	cout << "Enter TranscriptID of student record to erease: ";
	cin >> resultToErase;

	for (size_t i = 0; i < students.size(); i++)
	{
		if (students[i].getStudentTranscriptID() == resultToErase)
		{
			students.erase(students.begin() + i);
			cout << "Record erased. Press enter to continue.";
			cin.ignore();
			getchar();
			break;
		}
	}
}

void StudentManager::sortStudentListByID()
{
	sort(students.begin(), students.end(),
		[](const Student& x, const Student& y)
	{
		return x.getStudentTranscriptID() < y.getStudentTranscriptID();
	});
}

