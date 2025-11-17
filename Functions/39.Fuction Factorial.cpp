#include<iostream>
using namespace std;
	
int fact(int num){
	int result = 1;
	for(int i = num ; i > 0 ; i--){
		result = result* i  ;
	}
	return result;
}
	
int main(){
		
	int num;
	 
	 cout << "Enter a number : " ;
	 cin >> num ;
	 
	 cout << " Factorial of "<< num <<" is : " << fact(num);	
		
	}
	
	
