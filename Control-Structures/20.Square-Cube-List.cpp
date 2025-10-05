#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int sq , cu ;
	cout << "Squares ----> ";
	cout << "\n";
	for (int i=5 ; i <= 20 ; i++){
			cout << "\n"<< i << " ^ 2" << " = " << pow(i,2); 
	}
	cout << "\n\nCubes ----> ";
	cout << "\n";
	for (int i=5 ; i != 20 ; i++){
		cout << "\n" << i << " ^ 3" << " = " << pow(i,3);
	}
}