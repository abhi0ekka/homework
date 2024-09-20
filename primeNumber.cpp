/**
 * Name: WREAK
 * Time: 2024-09-19 21:37:29
 * File: primeNumber.cpp
 */

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

bool primeOrNot(int);

int main()
{
  int num;
  cout<<"Enter a number to check wheather it is prime or not\n";
  cin>>num;

  if(primeOrNot(num))
    cout<<"Prime";
  else 
    cout<<"NOT";
}

bool primeOrNot(int n)
{
  if(n==1)
    return false;
  if(n==2 || n==3)
    return true;
  if(n%2==0 || n%3==0)
    return false;
  for(int i=5;i*i<=n;i++)
  {
    if(n%i==0 || n%(i+2)==0)
      return false;
  }
  return true;
}
