#include <iostream>
#include "doctor.h"
using namespace std;

//  constructor
Doctor::Doctor() {
    firstName = "";
    lastName = "";
    id = 0;
    specialty = "";
    yearsExperience = 0;
    baseSalary = 0;
    performanceBonus = 0;
}

void Doctor::setDoctor(string fName, string lName, long doctorID, string spec,
                       int years, double salary, double bonus) {
    firstName = fName;
    lastName = lName;
    id = doctorID;
    specialty = spec;
    yearsExperience = years;
    baseSalary = salary;
    performanceBonus = bonus;
}

void Doctor::setFirstName(string fName) { firstName = fName; }
void Doctor::setLastName(string lName) { lastName = lName; }
void Doctor::setID(long doctorID) { id = doctorID; }
void Doctor::setSpecialty(string spec) { specialty = spec; }
void Doctor::setYearsExperience(int years) { yearsExperience = years; }
void Doctor::setBaseSalary(double salary) { baseSalary = salary; }
void Doctor::setPerformanceBonus(double bonus) { performanceBonus = bonus; }

string Doctor::getFirstName() {
    return firstName;
}

string Doctor::getLastName() {
    return lastName;
}

long Doctor::getID() {
    return id;
}

string Doctor::getSpecialty() {
    return specialty;
}

int Doctor::getYearsExperience() {
    return yearsExperience;
}

double Doctor::getBaseSalary() {
    return baseSalary;
}

double Doctor::getPerformanceBonus() {
    return performanceBonus;
}

// base salary plus bonus percentage
double Doctor::calculateSalary() {
    return baseSalary + (baseSalary * performanceBonus);
}

//doctor details including  salary
void Doctor::printDoctorInfo() {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Doctor ID: " << id << endl;
    cout << "Specialty: " << specialty << endl;
    cout << "Years of Experience: " << yearsExperience << endl;
    cout << "Base Salary: " << baseSalary << endl;
    cout << "Performance Bonus: " << performanceBonus << endl;
    cout << "Total Salary: " << calculateSalary() << endl;
}
