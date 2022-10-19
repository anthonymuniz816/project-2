#include <iostream>
#include <string>
#include "Employee.h"
#ifndef PRO_H
#define PRO_H
using namespace std;

class Pro:Employee{


public:
void enter_values();
void output_values();

int monthlySalary(int y);
int healthContribution(int x);
int vacation(int y);


};
#endif
