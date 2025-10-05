#include<iostream>
using namespace std;
	void input(int &a, int &b){
		cout << "Enter 2 numbers : " ;
		cin >> a >> b ;
	}
int main (){
	int a , b;
	char choice;
	float add , sub , mul , div ;
	
	cout << "Enter \n";
	cout << "   +   To add 2 numbers \n";
	cout << "   -   To subtract 2 numbers \n";
	cout << "   /   To divide 2 numbers \n";
	cout << "   *   To multiply 2 numbers \n";
	
	cin >> choice ;
	
	switch (choice) {
	
	case '+' :
		input(a ,b) ;
		add = a + b;
		cout << add;	
		break;
	case '-' :
		input(a,b) ;
		if(a > b){
		sub = a - b;	
		}
		else if (b > a ) {
		sub = b - a;		
		}
		cout << sub;
		break;
		
	case  '*' :
		input(a,b) ;
		mul = a * b;
		cout << mul;	
		break;
	case '/' :
		input(a,b) ;
		div = a / b;
		cout << div;	
		break;
	default:
		cout << "Enter Valid Value ! ";
		break;
	}
}