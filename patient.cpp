#include <iostream>
#include "patient.h"
using namespace std;
//  constructor initializes all patient values
Patient::Patient() {
    firstName = "";
    lastName = "";
    id = 0;
    assignedDoctor = -1;
    birthdate = "";
    bloodType = "";
    diagnosis = "";
    admissionDate = "";
    dischargeDate = "";
}

void Patient::setPatient(string firstName, string lastName, long id, long assignedDoctor,
                         string birthdate, string bloodType, string diagnosis,
                         string admissionDate, string dischargeDate) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = id;
    this->assignedDoctor = assignedDoctor;
    this->birthdate = birthdate;
    this->bloodType = bloodType;
    this->diagnosis = diagnosis;
    this->admissionDate = admissionDate;
    this->dischargeDate = dischargeDate;
}
// setter functions
void Patient::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Patient::setLastName(string lastName) {
    this->lastName = lastName;
}

void Patient::setID(long id) {
    this->id = id;
}

void Patient::setAssignedDoctor(long assignedDoctor) {
    this->assignedDoctor = assignedDoctor;
}

void Patient::setBirthdate(string birthdate) {
    this->birthdate = birthdate;
}

void Patient::setBloodType(string bloodType) {
    this->bloodType = bloodType;
}

void Patient::setDiagnosis(string diagnosis) {
    this->diagnosis = diagnosis;
}

void Patient::setAdmissionDate(string admissionDate) {
    this->admissionDate = admissionDate;
}

void Patient::setDischargeDate(string dischargeDate) {
    this->dischargeDate = dischargeDate;
}
// getter functions
string Patient::getFirstName() {
    return firstName;
}

string Patient::getLastName() {
    return lastName;
}

long Patient::getID() {
    return id;
}

long Patient::getAssignedDoctor() {
    return assignedDoctor;
}

string Patient::getBirthdate() {
    return birthdate;
}

string Patient::getBloodType() {
    return bloodType;
}

string Patient::getDiagnosis() {
    return diagnosis;
}

string Patient::getAdmissionDate() {
    return admissionDate;
}

string Patient::getDischargeDate() {
    return dischargeDate;
}
// determine patient condition from diagnosis
string Patient::patientStatus() {
    if (diagnosis.find("critical") != string::npos || diagnosis.find("Critical") != string::npos) {
        return "Critical";
    }
    else if (diagnosis.find("moderate") != string::npos || diagnosis.find("Moderate") != string::npos) {
        return "Moderate";
    }
    else {
        return "Stable";
    }
}
// display all patient information
void Patient::printPatientInfo() {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Patient ID: " << id << endl;
    if (assignedDoctor == -1)
        cout << "Assigned Doctor ID: None" << endl;
    else
        cout << "Assigned Doctor ID: " << assignedDoctor << endl;
    cout << "Date of Birth: " << birthdate << endl;
    cout << "Blood Type: " << bloodType << endl;
    cout << "Diagnosis: " << diagnosis << endl;
    cout << "Date of Admission: " << admissionDate << endl;

    // Patient discharge status
    if (dischargeDate == "")
        cout << "Discharge Date: Not discharged" << endl;
    else
        cout << "Discharge Date: " << dischargeDate << endl;

    cout << "Patient Status: " << patientStatus() << endl;
}
