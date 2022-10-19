#include <iostream>
#include <string>
#include "Employee.h"
#ifndef NONPRO_H
#define NONPRO_H
using namespace std;

class NonPro:Employee{
public:
void enter_values();
void output_values();

int monthlySalary(int r, int h);
int healthContribution(int r, int h);
int vacation(int h);

};
#endif
