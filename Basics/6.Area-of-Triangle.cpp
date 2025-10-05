#include<iostream>
#include<math.h>
using namespace std;
int main (){
	float r , h , b , area , volume ;
	cout << "Enter the height of triangle : " ;
	cin >> h;
	cout << "Enter the widhth of triangle : " ;
	cin >> b;
	cout << "Enter the radius of sphere : " ;
	cin >> r;
	
	area = (1.0/2.0)*(h)*(b);
	volume = (4.0/3.0)*(22.0/7.0)*(pow(r,3));
	
	cout << "The area of triangle is : " << area << endl ;
	cout << "The volume of sphere is : " << volume ;
}