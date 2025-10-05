#include<iostream>
using namespace std;
int main (){
	int rows ;
	cout << "Enter Number of Rows ";
	cin >> rows ;
	
	for (int i = 0 ; i <= rows ; i++){
		for(int j = 0 ; j <= (rows-i) ; j++){
			cout << " " ;
		}
		for(int k = 1 ; k <= ((2*i)+1) ; k++){
			cout << "*" ;
		}
		cout << "\n" ;
	}
	
	return 0;	
}