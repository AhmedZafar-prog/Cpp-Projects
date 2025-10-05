#include<iostream>
using namespace std;
int main (){
	
	cout << "Even Numbers ----> ";
	cout << "\n";
	for (int i=1 ; i != 20 ; i++){
		if(i % 2 == 0){
			cout << "\n" <<i ;
		}
	}
	cout << " \n Odd Numbers ----> ";
	cout << "\n";
	for (int i=1 ; i != 20 ; i++){
		if(i % 2 != 0){
			cout << "\n" << i ;
		}
	}
}