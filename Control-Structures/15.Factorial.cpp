#include<iostream>
using namespace std;
int main (){

	int a,b = 1;
	
	cout << "Enter a number : " ;
	cin >> a;
	
	for (int i=a ; i!=0 ; i--){
		b = b * i;
	}
	cout << "Factorial of " << a <<" is " << b;
}