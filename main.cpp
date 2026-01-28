#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  double area, perimeter;
  area = length*width;
  perimeter = (length*2) + (width*2);
  cout << "Rectangle Proterties:" << endl;
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;
}