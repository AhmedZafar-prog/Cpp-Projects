#include<iostream>
#include<string>
#include<cstring>
using  namespace std;
int main(){
	
	string username_saved = "ComputerStudent" , password_saved = "12345";
	string username , password ; 
	cout << "Enter Username : " << endl;
	cin >> username ; 
	cout << "Enter Password : " ;
	cin >> password ;
	
	int result_name = strcmp(username.c_str() , username_saved.c_str());
	int result_pass = strcmp(password.c_str() , password_saved.c_str());
	
	if (result_name == 0 && result_pass == 0){
		
		cout << "Access Guranted  " ;
		
	}
	
	else {
		cout << "Username or Password is incorect" ; 
	}
	
	
	
}