#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
using namespace std;

class Doctor {
private:
    string firstName;
    string lastName;
    long id;
    string specialty;
    int yearsExperience;
    double baseSalary;
    double performanceBonus;

public:
    Doctor();

    void setDoctor(string firstName, string lastName, long id, string specialty,
                   int yearsExperience, double baseSalary, double performanceBonus);
    // setter functions
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setID(long id);
    void setSpecialty(string specialty);
    void setYearsExperience(int yearsExperience);
    void setBaseSalary(double baseSalary);
    void setPerformanceBonus(double performanceBonus);

    // getter functions
    string getFirstName();
    string getLastName();
    long getID();
    string getSpecialty();
    int getYearsExperience();
    double getBaseSalary();
    double getPerformanceBonus();

    double calculateSalary();
    void printDoctorInfo();
};

#endif
