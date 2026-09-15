#include <iostream>
#include "hospital.h"
using namespace std;

int main() {
    // create hospital object
    Hospital hospital;

    int choice;
    long id;
    // repeat menu until user chooses exit
    do {
        cout << endl;
        cout << "1. Find oldest patient" << endl;
        cout << "2. Count critical patients" << endl;
        cout << "3. Show patient by ID" << endl;
        cout << "4. Show doctor by ID" << endl;
        cout << "5. Show assigned doctor" << endl;
        cout << "6. Show assigned patients" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hospital.findOldestPatient();
                break;

            case 2:
                hospital.countCriticalPatients();
                break;

            case 3:
                cout << "Enter Patient ID: ";
                cin >> id;
                hospital.showPatientByID(id);
                break;

            case 4:
                cout << "Enter Doctor ID: ";
                cin >> id;
                hospital.showDoctorByID(id);
                break;

            case 5:
                cout << "Enter Patient ID: ";
                cin >> id;
                hospital.showAssignedDoctor(id);
                break;

            case 6:
                cout << "Enter Doctor ID: ";
                cin >> id;
                hospital.showAssignedPatients(id);
                break;

            case 7:
                cout << "Program ended." << endl;
                break;

                // handle invalid input
            default:
                cout << "Invalid option." << endl;
        }

    } while (choice != 7);

    return 0;
}
