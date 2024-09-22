/**
 * Name: WREAK
 * Time: 2024-09-19 21:29:26
 * File: greatestOfThree.cpp
 */

#include <bits/stdc++.h>
using namespace std;

class GOT {
 public:
  int a, b, c;

  void greatestOfThree() {
    if (a > b) {
      if (a > c)
        cout << a << " is the greatest\n";
      else
        cout << c << " is the greatest\n";
    } else {
      if (b > c)
        cout << b << " is the greates\n";
      else
        cout << c << " is the greatest\n";
    }
  }
};

int main() {
  GOT *case1 = new GOT();
  cout << "Enter first number\n";
  cin >> case1->a;
  cout << "Enter second number\n";
  cin >> case1->b;
  cout << "Enter three number\n";
  cin >> case1->c;

  case1->greatestOfThree();

  return 0;
}