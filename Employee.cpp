#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;


Employee::Employee(){

  name = "";
  yearsWorked = 0;
  weeklyHours = 0;
  payRate = 20;
  
}


  
void Employee:: setName(string n){
  name=n;
}
string Employee:: getName(){
  return name;
}

void Employee::setYearsWorked(int y){
  yearsWorked = y;
  if(yearsWorked < 0){
    yearsWorked = 0;
  }
}

int Employee:: getYearsWorked(){
  return yearsWorked;
}

void Employee:: setWeeklyHours(int h){
  weeklyHours = h;
}
int Employee:: getWeeklyHours(){
  return weeklyHours;
}

void Employee:: setPayRate(int r){
  payRate = r;
}

int Employee:: getPayRate(){
  return payRate;
}

int Employee:: monthlySalary(int r, int h){
  return r*h;
}

int Employee:: healthContribution(int r, int h){
  int healthcon = ((r*h)*0.10);
  return healthcon;
}

int Employee:: vacation(int h){
  int vacay = h/0.2;
  return vacay;
}

void Employee:: enter_values(){

  cout << "Please Enter Your Name: ";
  cin >> name;
  cout << "How many years have you worked at this company? ";
  cin >> yearsWorked;
  cout << "How many hours have you worked this week? ";
  cin >> weeklyHours;
  cout << endl<< endl;
}

void Employee:: output_values(){

  cout << name << "!"<< endl;
}