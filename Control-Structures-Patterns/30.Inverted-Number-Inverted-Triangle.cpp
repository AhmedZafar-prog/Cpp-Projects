#include<iostream>
using namespace std;
int main (){
	int rows;
	cout << "Enter Number of Rows ";
	cin >> rows ;
	
	for(int i = rows ; i !=0 ; i--){
		for(int j = i ; j != 0 ; j--){
			cout << j;
			
		}
		cout << "\n" ;
	}
	
}