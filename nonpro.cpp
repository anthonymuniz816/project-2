#include <iostream>
#include <string>
#include "Employee.h"
#include "nonpro.h"
using namespace std;




int NonPro:: monthlySalary(int r, int h){
  return r*h;
}

int NonPro:: healthContribution(int r, int h){
  int healthcon = ((r*h)*0.10);
  return healthcon;
}

int NonPro:: vacation(int h){
  int vacay = h*0.2;
  return vacay;
}

void NonPro:: enter_values(){

  cout << "Please Enter Your Name: ";
  cin >> name;
  cout << "How many hours have you worked this week? ";
  cin >> weeklyHours;
  cout << endl<< endl;
}

void NonPro:: output_values(){

  cout << name << "!"<< endl<< "Your weekly salary is: $"<< monthlySalary(payRate, weeklyHours) << endl << "$"<< healthContribution(payRate, weeklyHours)<< " went towards your health contributions."<< endl<< "You earned " << vacation(weeklyHours) << " hours towards your vacation this year!" << endl;
}