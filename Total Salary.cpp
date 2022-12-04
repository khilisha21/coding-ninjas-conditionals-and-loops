// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
// Round off the total salary and then print the integral part only.


#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int allow = 0;
    char grade = 0;
    double basic_salary = 0, totalSalary = 0;
    cin >> basic_salary >> grade;
    
    double hra = (20 * basic_salary)/100;
    double da = (50 * basic_salary)/100;
    if(grade == 'A')
        allow = 1700;
    else if(grade == 'B')
        allow = 1500;
    else
        allow = 1300;
    double pf = (11 * basic_salary)/100;
    
	totalSalary = basic_salary + hra + da + allow - pf;
	
    int salary = round(totalSalary);
    cout << salary << endl;
	
    
}
