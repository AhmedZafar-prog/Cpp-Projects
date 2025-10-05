#include<iostream>
using namespace std;
int main (){
	int rows;
	cout << "Enter Number of Rows ";
	cin >> rows ;
	
	int a = 1;
	
	for(int i = 0 ; i <= rows ; i++){
		for(int j = 0 ; j <= i ; j++){
			cout << " " << a ;
			a++ ; 
		}
		cout << "\n" ;
	}
	
	
}