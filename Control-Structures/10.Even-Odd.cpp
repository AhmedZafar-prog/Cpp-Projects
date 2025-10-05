#include<iostream>
using namespace std;
int main(){
	
	int a;
	cout << "Enter a integer : " ;	
	cin >> a;
	if (a % 2 == 0){
		cout << a << ": Even Number";
	}
	if (a % 2 != 0){
		cout << a << ": Odd Number";
	}
	else{
		cout << "Enter Valid Parameters";
	}
}