
#include <iostream>
using namespace std;
int main() {
	
	float radius, diameter, circumference, area;
	cout << "please enter the radius of the circle \n";
	cin >> radius;
	
	diameter = 2 * radius;
	circumference = 3.14 * diameter;
	area = radius * radius * 3.14;
	
	cout << "the diameter of circle with radius " << radius << " is " << diameter << "\n";
	cout << "the circumference of circle with radius " << radius << " is " << circumference << "\n";
	cout << "the area of circle with radius " << radius << " is " << area << "\n";
	
	return 0;
}
