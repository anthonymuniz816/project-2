#include <iostream>
#include <string>
#include "Employee.h"
#include "pro.h"
using namespace std;





int Pro:: monthlySalary(int y){
  int salary =6000;
  if(y<=0){
    salary = 6000;
  }
  else if(y<10){
    salary = (y*100) + 6000;
  }
  else if(y>=10){
    salary = 7000;
  }
  return salary;
}

int Pro:: healthContribution(int x){
  int healthcon = (x*0.15);
  return healthcon;
}

int Pro:: vacation(int y){
  int vacay;

  if(y ==0){
    vacay = 1;
  }
  else if(y<4){
    vacay = y;
  }
  else if(y<=4){
    vacay = 4;
  }
  return vacay;
}


void Pro:: enter_values(){

  cout << "Please Enter Your Name: ";
  cin >> name;
  cout << "How many years have you worked at this company? ";
  cin >> yearsWorked;
  cout << endl<< endl;
}

void Pro:: output_values(){

  cout << name << "!"<< endl<< "Your monthly salary is: $"<< monthlySalary(yearsWorked) << endl << "$"<< healthContribution(monthlySalary(yearsWorked)) << " went towards your health contributions."<< endl<< "You have " << vacation(yearsWorked) << " weeks of vacation this year!" << endl;
}