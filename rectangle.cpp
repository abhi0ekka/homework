/**
 * Name: WREAK
 * Time: 2024-09-19 22:00:54
 * File: rectangle.cpp
 */

#include <bits/stdc++.h>
using namespace std;

class rectangle
{
  private:
    float length;
    float width;

  public:
    void setLength(float length)
    {
      this->length=length;
    }

    void setWidth(float width)
    {
      this->width=width;
    }

    float perimeter()
    {
      return 2*(length+width);
    }

    float area()
    {
      return length*width;
    }
};

int main()
{
  float length,width;
  cout<<"Enter length of the rectangle\n";
  cin>>length;
  cout<<"Enter width of the rectangle\n";
  cin>>width;

  rectangle rec1;

  rec1.setLength(length);
  rec1.setWidth(width);

  cout<<"The perimeter is : "<<rec1.perimeter()<<endl;
  cout<<"The Area is : "<<rec1.area();

  return 0;
}
