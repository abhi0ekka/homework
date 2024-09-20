/**
 * Name: WREAK
 * Time: 2024-09-19 21:29:26
 * File: greatestOfThree.cpp
 */

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;


int main()
{
  int num1,num2,num3;
  cout<<"Enter first number\n";
  cin>>num1;
  cout<<"Enter second number\n";
  cin>>num2;
  cout<<"Enter third number\n";
  cin>>num3;

  if(num1>num2)
  {
    if(num1>num3)
      cout<<num1<<" is the greatest\n";
    else
      cout<<num3<<" is the greatest\n";
  }
  else {
    if(num2>num3)
      cout<<num2<<" is the greatest\n";
    else
      cout<<num3<<" is the greatest\n";
  }
  
  return 0;
}
