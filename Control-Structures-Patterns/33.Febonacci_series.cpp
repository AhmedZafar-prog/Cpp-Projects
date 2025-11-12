#include<iostream>
using namespace std;
int main(){
	
	int a = 0 , b = 1 , c = 0 , range;
	
	cout << "Enter Range : " ;
	cin >> range;
	cout << endl;
	cout << "---------Febonacci Series---------"<< endl ;
	cout << endl;
	cout << a << ", " << b ;
	
	for(int i = 0 ; i != range-2 ; i++){
		c = a + b;  
 			cout <<", "<< c;
		
		a = b;
		b = c;
	}
	
}