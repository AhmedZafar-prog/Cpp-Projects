#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int k,a,b;
	
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	
	k = pow(a,3) + 3*(pow(a,2))*(b) +  3*(a)*(pow(b,2)) + pow(b,3) ;
	
	cout << "The output is : " << k ;
}