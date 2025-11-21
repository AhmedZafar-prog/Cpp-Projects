#include<iostream>
using namespace std;

float area_circle(int r){
	
	float area = (22.0/7.0)*(r)*(r);
	return area;
}
float area_triangle(int b , int h){
	
	float area = (1.0/2.0)*(b)*(h);
	return area;
}
float area_parallelogram(int b , int h){
	
	float area = b * h;
	return area;
}

int main(){
	char choice;
	int r, b, h;
	cout << "Enter"<<endl;
	cout<< "1 . Area of Circle"<<endl; 
	cout<< "2 . Area of Triangle"<<endl; 
	cout<< "3 . Area of Parallelogram"<<endl; 
	
	cin >> choice;
	
	switch(choice){
		
	case '1':
	cout << "Enter the radius : ";
	cin >> r;	
	cout << "Area of circle : " << area_circle(r);
	
	break;
	case '2':
	cout << "Enter the Base : ";
	cin >> b;
	cout << "Enter the Height : ";
	cin >> h;
	cout << "Area of Triangle : " << area_triangle(b,h);
	
	break;
	case '3':
	cout << "Enter the Base : ";
	cin >> b;
	cout << "Enter the Height : ";
	cin >> h;
	cout << "Area of Parallelogram : " << area_parallelogram(b,h);
	}
}