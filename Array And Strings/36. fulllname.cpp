#include<iostream>
#include<string>
using namespace std;
int main (){
	
	string firstname , lastname , fullname ;

	do{
	
		cout << "Enter Your First Name : " << endl ;
		cin >> firstname;
		cout << "Enter Your Last Name : " << endl ;
		cin >> lastname ;
	}
		while( firstname.length() + lastname.length()  > 15); 
		
	fullname = firstname + lastname;
	
	cout << "Full name : " << fullname;
}