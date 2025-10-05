#include<iostream>
using namespace std;
int main (){
	
	cout << "ASCII--------33 to 127";
	cout << "\n";
	
	for(int i = 33 ; i <= 127 ; i++){
		cout << i << ". ASCII value : "<<  (char) i << "\n" ;
	}
	
}