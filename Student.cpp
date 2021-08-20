#include "Student.h"
#include <iostream>
#include<cstring>
// Assign studentId and name
void Student::assignDetails(int id , const char sname[]) {
 studentId = id;
 strcpy(name,sname)  
}

// Display StudentId and Name
void Student::display() {
    
     cout << "Student Id  " << studentId << endl;
     cout << "Student name" << name << endl;
}
