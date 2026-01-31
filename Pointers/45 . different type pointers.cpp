#include<iostream>
using namespace std;
int main (){
	
	int age = 17;
	char alphabet = 'A';
	double num = 15;
	float num2 = 16; 
	int*age1 = &age;
	char*alphabet1 = &alphabet;
	double*num1 = &num;
	float*num21 = &num2;
	cout << "Types : " << "\t" << "int" << "\t" << "char" << "\t" << "Double "<< "\t" << "Float " << endl; 
	cout << "Values : " << "\t" << age << "\t" << alphabet << "\t" <<num<< "\t" <<num2 << endl;
	cout << "Memory Address :" << "\t" << &age << "\t" << &alphabet << "\t" << &num<< "\t" << &num2;
	
}