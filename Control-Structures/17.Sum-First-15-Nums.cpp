#include<iostream>
using namespace std;
int main (){
	
	int number , range , answer , diff;
	cout << "Enter Starting Number : ";
	cin >> number ; 
	cout << "Enter Ending Range : ";
	cin >> range ; 
	cout << "Enter Comman Difference Between Each Number : ";
	cin >> diff ; 
	
	answer = (range/2) * ( (2 * number) + (range - 1) * diff );

	cout << "The Sum of all numbers from " << number << " To " << range << " with comman difference of " << diff <<" is " << answer ;

}