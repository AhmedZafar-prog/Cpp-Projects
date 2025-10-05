#include<iostream>
using namespace std;
int main (){
	int rows;
	cout << "Enter Number of Rows ";
	cin >> rows ;
	
	for(int i = rows ; i !=0 ; i--){
		for(int j = 1 ; j <= i ; j++){
			cout << j ;
		}
		cout << "\n" ;
	}
	
}