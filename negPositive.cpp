/**
 * Name: WREAK
 * Time: 2024-09-19 21:25:19
 * File: negPositive.cpp
 */

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;


int main()
{
  int num;
  cout<<"Enter a number to check wheather its positive or negative\n";
  cin>>num;

  if(num>0)
    cout<<"The number : "<<num<<" is positive\n";
  else
    cout<<"The number : "<<num<<" is negative\n";

  return 0;
}
