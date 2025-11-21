#include<iostream>
using namespace std;

float add(int a , int b){
	
	float sum ;
	sum = a+b;
	return sum;
}
float sub(int a , int b){
	
	float sub ;
	sub = a-b;
	return sub;
}
float mul(int a , int b){
	
	float mul ;
	mul = a*b;
	return mul;
}
float divi(int a , int b){
	
	float divi ;
	divi = a/b;
	return divi;
}


int main(){
	
	float a , b;
	char choice;
	
	cout <<"Enter" << endl;
	cout << "+ For Addition"<< endl;
	cout << "- For Substraction"<< endl;
	cout << "* For Multiplication"<< endl;
	cout << "/ For Division"<< endl;
	cin >> choice;
	
	cout << "Enter Number 1"<< endl;
	cin >> a;
	cout << "Enter Number 2"<< endl;
	cin >> b;
	
	switch(choice){
		
		case '+' :
			
			cout << "Sum : "<<add(a,b);
			break; 
		case '-' :
			
			cout <<"Sub : " <<sub(a,b);
			break; 
		case '*' :
			
			cout <<"Mul : "<< mul(a,b);
			break; 
		case '/' :
			
			cout << "Div : "divi(a,b); 
		break;		
	}
}