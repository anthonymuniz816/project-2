#include <iostream>
#include <string>
#include "Employee.h"
#include "pro.h"
#include "nonpro.h"
using namespace std;


int main(){

Pro employ0;
NonPro employ1;

int x;
  cout << "\nHello user!" << "\nAre you a Professional or NonProfessional Employee?" << "\nIf Pro, Enter 0, if Non-Pro, Enter 1: ";
  cin >> x;
  cout << endl << endl;
  if(x == 1){
    employ1.enter_values();
    employ1.output_values();
  }
  else if(x== 0){
    employ0.enter_values();
    employ0.output_values();
  }







  
  return 0;
}

