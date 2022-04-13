#include "StudentManager.h"

int main() {
	auto& manager = StudentManager::getInstance();

	string choosenOption;
	char option;
	while (true) {
		cout << "MAIN MENU" << endl;
		cout << "-----------------" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. Sort Students by ID" << endl;
		cout << "3. Delete Student" << endl;
		cout << "4. Exit" << endl;
		fflush(stdin);
		manager.printStudentsList();
		cout << endl << "Select option: ";
		getline(cin, choosenOption);

		stringstream(choosenOption) >> option;

		switch (option) {
		case '1':
			manager.addStudentToVector();
			break;
		case '2':
			manager.sortStudentListByID();
			break;
		case '3':
			manager.eraseStudentRecordByID();
			break;
		case '4':
			exit(0);
		default:
			cout << "Enter value between 1 and 4!";
			getchar();
			break;
		}
		system("clear");
	}
	return 0;
}