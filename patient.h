 #ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;
// Patient class stores all patient information
class Patient {
private:
    string firstName;
    string lastName;
    long id;
    long assignedDoctor;
    string birthdate;
    string bloodType;
    string diagnosis;
    string admissionDate;
    string dischargeDate;

public:
    // default constructor

    Patient();

    void setPatient(string firstName, string lastName, long id, long assignedDoctor,
                    string birthdate, string bloodType, string diagnosis,
                    string admissionDate, string dischargeDate);
    // setter functions
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setID(long id);
    void setAssignedDoctor(long assignedDoctor);
    void setBirthdate(string birthdate);
    void setBloodType(string bloodType);
    void setDiagnosis(string diagnosis);
    void setAdmissionDate(string admissionDate);
    void setDischargeDate(string dischargeDate);

    // getter functions
    string getFirstName();
    string getLastName();
    long getID();
    long getAssignedDoctor();
    string getBirthdate();
    string getBloodType();
    string getDiagnosis();
    string getAdmissionDate();
    string getDischargeDate();

    string patientStatus();
    void printPatientInfo();
};

#endif
