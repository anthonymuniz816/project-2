#include <iostream>
#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;

class Employee{

protected:

string name;
int yearsWorked;
int weeklyHours;
int payRate;

public:

Employee();
void enter_values();
void output_values();
void setName(string n);
string getName();

void setYearsWorked(int y);
int getYearsWorked();

void setWeeklyHours(int h);
int getWeeklyHours();

void setPayRate(int r);
int getPayRate();

int monthlySalary(int r, int h);
int healthContribution(int r, int h);
int vacation(int y);



};
#endif