/*
 * Patient.cpp
 *
 * Implementation for Patient class
 * 
 * COMP15
 * Spring 2018
 * Lab 4
 */

#include <iostream>
#include "Patient.h"
using namespace std;

// Default constructor
Patient::Patient()
{
    fname = "Jane";
    lname = "Doe";
    chest_pain = false;
    head_wound = false;
    temp = 98.6;
    pulse = 0;
    priority = FIVE;
}

// Parameterized constructor
Patient::Patient(string f, string l)
{
    fname = f;
    lname = l;
}

// Overloading comparison operators
bool operator < (const Patient &p1, const Patient &p2)
{
    if (p1.priority < p2.priority)
        return true;
    else if((p1.priority == p2.priority) && (p1.time_in < p2.time_in))
        return true;
    else
        return false;
}

bool operator > (const Patient &p1, const Patient &p2)
{
    if (p1.priority > p2.priority)
        return true;
    else if((p1.priority == p2.priority) && (p1.time_in > p2.time_in))
        return true;
    else 
        return false;    
}

// Print the patient
ostream & operator << (ostream &out, const Patient &p)
{
    out << p.fname << " " << p.lname << endl;
    out << ((p.head_wound) ? "Head wound\n" : "");
    out << ((p.chest_pain) ? "Chest pain\n" : "");
    out << "Pulse: " << p.pulse << endl;
    out << "Temp: " << p.temp << endl;
    out << "PRIORITY " << p.priority << endl;
    return out;
}

// Function calculate_priority
// Inputs: bool chest pain, bool head wound, double temperature
//      unsigned pulse, bool priority type, int time checked in
// Outputs: void
// Does: Calculates the patients priority based on their condition
//      and the symptoms they are experiencing.
//      Also calculates based on type of hospital.
void Patient::calculate_priority(bool c_pain, bool h_wound, 
            double temperature, unsigned pulse_input, 
            bool hospital_priority_type, int time_checked_in)
{
    chest_pain = c_pain;
    head_wound = h_wound;
    temp = temperature;
    pulse = pulse_input;
    time_in = time_checked_in;
    priority_type = hospital_priority_type;
    int temp_priority = 0;
    if((head_wound && chest_pain) || (head_wound && pulse < 90) 
        || (chest_pain && pulse < 90))
    {
        temp_priority = 5;
    }
    else if(head_wound || chest_pain)
    {
        temp_priority = 4;
    }
    else if(pulse < 90 && temp > 100)
    {
        temp_priority = 3;
    }
    else if(temp > 100 || pulse < 90)
    {
        temp_priority = 2;
    }
    else
    {
        temp_priority = 1;
    }
    
    if(temp_priority == 1)
    {
        if(!hospital_priority_type)
            priority = ONE;
        else
            priority = FIVE;
    }
    else if(temp_priority == 2)
    {
        if(!hospital_priority_type)
            priority = TWO;
        else
            priority = FOUR;
    }
    else if(temp_priority == 3)
    {
        if(!hospital_priority_type)
            priority = THREE;
        else
            priority = THREE;
    }
    else if(temp_priority == 4)
    {
        if(!hospital_priority_type)
            priority = FOUR;
        else
            priority = TWO;
    }
    else if(temp_priority == 5)
    {
        if(!hospital_priority_type)
            priority = FIVE;
        else
            priority = ONE;
    }
}