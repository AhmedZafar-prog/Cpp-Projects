#include<iostream>
using namespace std;
int main(){
	 
	char ch;
	 
	cout << "Enter a Alphabet" ;
	cout << " >>> " ;
	cin >> ch;
	
	if(ch >= 'A' && ch<= 'Z'){
		cout << ch << " : Is Uppercase Letter";
	}	
	else if(ch>='a' && ch<= 'z'){
		cout << ch << " : Is Lowercase Letter";
	}	
	else{
		cout << "Enter a valid parameter";
	}
}