#include<iostream>
using namespace std;
int main (){
	
	int x = 10;
	int* ptr = &x;
	int** ptr2 = &ptr;
	
	cout << "The value of x : " << x << endl ; 
	cout << "Value stored of x : " << ptr << endl;
	cout << "Point the pointer : " << ptr2 << endl;
}