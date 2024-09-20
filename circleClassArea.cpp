/**
 * Name: WREAK
 * Time: 2024-09-19 21:48:00
 * File: circleClassArea.cpp
 */

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

class circle 
{
  private:
    float radius;

  public:
  void setRadius(float radius)
  {
    this->radius=radius;
  }

  float area()
  {
    float pi=3.14;
    return pi*radius*radius;
  }
};

int main()
{
  float val;
  cout<<"Enter a radius to find the Area of the circle\n";
  cin>>val;

  circle r1;
  r1.setRadius(val);

  cout<<"Area : "<<r1.area();


  return 0;
}
