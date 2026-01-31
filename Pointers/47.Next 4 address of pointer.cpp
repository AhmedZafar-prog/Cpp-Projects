#include<iostream>
using namespace std;
int main (){
	
	int x = 10;
	int* ptr = &x ;
	
	cout << "Value of var : " << x << endl ; 
	cout << "Memory address of var : " << ptr << endl;
	
	for (int i  = 1 ; i <= 4 ; i++){
		
		cout << "The address of var + " << i <<" : "<< (ptr + i) << endl;
		
	}
}