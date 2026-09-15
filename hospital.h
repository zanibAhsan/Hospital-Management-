#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <vector>
#include "patient.h"
#include "doctor.h"
using namespace std;

class Hospital {
private:
    vector<Patient>* patients;
    vector<Doctor>* doctors;

public:
    Hospital();

    void findOldestPatient();
    void countCriticalPatients();
    void doctorsBySpecialty(string specialty);
    void showPatientByID(long id);
    void showDoctorByID(long id);
    void showAssignedDoctor(long patientID);
    void showAssignedPatients(long doctorID);
};

#endif
