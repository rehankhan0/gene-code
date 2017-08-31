
#include <iostream>
using namespace std;
 
int main() {
 
	double length, breadth, perimeter, area;
	cout << "please enter length and breadth of the rectangle \n";
	cin >> length >> breadth;
 
	perimeter = 2 * (length + breadth);
	area = length * breadth;
 
	cout << "the perimeter of rectangle of length " << length << " and breadth " << breadth << " is " << perimeter << "\n";
	cout << "the area of rectangle of length " << length << " and breadth " << breadth << " is " << area << "\n";
 
	return 0;
}
