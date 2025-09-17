#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x1, x2, x3, y1, y2, y3 = 0;
	double side1, side2, side3 = 0;
	cout << "Enter coordinates of P1(x1,y1):" ;
	cin >> x1 >> y1;
	cout << "Enter coordinates of P2(x2,y2):";
	cin >> x2 >> y2;
	cout << "Enter coordinates of P3(x3,y3):";
	cin >> x3 >> y3;
	int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
	if (area == 0) {
		cout << "Not a valid triangle \n" ;
		return 0;
	}
	side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	side2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	side3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side3 * side3 + side1 * side1 == side2 * side2) {
		cout << "Right-Angle Triangle";
	}
	else if (side1 == side2 && side2 == side3 ){
		cout << "Equilateral Triangle";
	}
	else if (side1 == side2 || side2 == side3 || side3 == side1) {
		cout << "Isosceles Triangle";
	}
	
	else {
		cout<<"Scalene Triangle";
	}
	return 0;
}