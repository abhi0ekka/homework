/**
 * Name: WREAK
 * Time: 2024-09-23 02:51:38
 * File: grossSalary.cpp
 */

#include <bits/stdc++.h>
using namespace std;

class salary
{
private:
  float basic_salary;
  float da = 12;
  float hra = 20;

public:
  void setSalary(float basic_salary)
  {
    this->basic_salary = basic_salary;
  }

  void setDa(float da)
  {
    this->da = da;
  }

  void setHra(float hra)
  {
    this->hra = hra;
  }

  float grossSalary()
  {
    return basic_salary + (basic_salary * da / 100) + (basic_salary * hra / 100);
  }
};

int main()
{
  float sal;
  salary emp1;
  cout << "Enter the Basic Salary\n";
  cin >> sal;

  emp1.setSalary(sal);
  cout << "Gross Salary : " << emp1.grossSalary();

  return 0;
}