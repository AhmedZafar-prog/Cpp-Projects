#include<iostream>
#include<cmath>

using namespace std;
int main(){
	char input[100];
	int cubic_sum = 0 , len=0 , orignal_number = 0;
	
	cout << "Enter a numeber : " ;
	cin >> input;
	
	while(input[len] != '\0'){
		len++;
	}
	
	int num[len] ;
	for(int i = 0 ; i != len ; i++){
		num[i] = input[i] - '0' ; 
		cubic_sum = cubic_sum + pow(num[i],len);
		
		orignal_number = orignal_number * 10 + num[i] ;
	}
	
	if (cubic_sum == orignal_number){
		cout << orignal_number << " : Is an Armstrong Number";
	}
	
	else{
		cout << orignal_number << " : Is not an Armstrong Number";
	}
	
}