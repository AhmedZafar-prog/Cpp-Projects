#include<iostream>
using namespace std;
int main(){
	
	int a ,reverse_num = 0;
	
	cout << "Enter a number : " ;
	cin >> a;
	
	int temp = a;
	while(temp > 0){
		reverse_num = reverse_num * 10 + (temp % 10);
		temp = temp / 10;
	}
	
	cout << "The Reverse Number of : " << a << " is : " << reverse_num;
	
	
	
	
	
}