/*
 * Patient.h
 *
 * COMP15
 * Spring 2018
 *
 * Interface for a Patient
 * 
 */

#include <string>
using namespace std;

enum Priority {ONE=1, TWO=2, THREE=3, FOUR=4, FIVE=5};

#ifndef PATIENT_H_
#define PATIENT_H_

class Patient
{
public:
    Patient();
    Patient(string, string);

    friend bool operator < (const Patient &, const Patient &);
    friend bool operator > (const Patient &, const Patient &);
    friend ostream & operator << (ostream &, const Patient &);

    void calculate_priority(bool, bool, double, unsigned, bool, int);

private:
    string fname, lname;
    bool head_wound;
    bool chest_pain;
    double temp;
    unsigned pulse;

    int time_in;
    bool priority_type;

    Priority priority;
};

#endif
