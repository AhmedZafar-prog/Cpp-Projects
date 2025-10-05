#include<iostream>
using namespace std;
int main (){
	float r , area , circum , pi = 22/7;
	cout << "Enter Radius of circle : ";
	cin >> r;
	
	area = pi*(r*r);
	circum = 2*pi*r;
	
	cout << "The Area of Circle is : " << area << "\nThe Circumference of Circle is : " << circum;
	
}