#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails( int sID,char sname[]) {
  studentID=sID;
  strcpy(name,sname);
  
  
}

// Display StudentId and Name
void Student::display() {

  cout<<"StudentID: "<< studentID<<endl;
  cout<<"name: "<<name<<endl;
  
}
