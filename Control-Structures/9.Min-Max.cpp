#include<iostream>
using namespace std;
int main(){
	int a,b,c,max,min;
	cout << "Enter 1st Number :" ;
	cin >> a;
	cout << "Enter 2nd Number : " ;
	cin >> b;
	cout << "Enter 3rd Number : " ;
	cin >> c;
	
	if(a>b && a>c){
		max=a;
	}
	if(b>a && b>c){
		max=b;
	}
	if(c>a && c>b){
		max=c;
	}
	
	if(a<b && a<c){
		min=a;
	}
	if(b<a && b<c){
		min=b;
	}
	if(c<a && c<b){
		min=c;
	}
	cout << "Maximum number amoung all is: " << max << "\n The minimum number amoung all is: " << min ;
}