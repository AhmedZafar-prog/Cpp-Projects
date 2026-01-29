#include<iostream>
#include<string>
using namespace std;
int main(){
	
	char s_1[50] , s_2[50] ; 
	
	cout << "Enter 1st String : ";
	cin >> s_1;
	cout << "Enter 2nd String : ";
	cin >> s_2;
	
	strcpy(s_1 , s_2);
	
	cout << "String 1 : " << s_1 << endl ;
	cout << "String 2 : " << s_2 << endl ;
	
}