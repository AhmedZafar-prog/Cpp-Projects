#include<iostream>
using namespace std;
int main(){

float comp , math , phy , avg;

cout << "Enter the marks of subjects | Computer | Maths | Physics |\n";
cin >> comp >> math >> phy;
	
	if((comp < 0 || comp > 100) || (math < 0 || math > 100) || (phy < 0 || phy > 100)){
		cout << "Enter Valid Marks";
		exit(0);
	}
	else{
		avg = (comp + math + phy)/3;
	}
	if(avg >= 80 && avg <= 100){
		cout << "Remarks : Excellent ";
	}
	else if(avg >= 60 && avg <= 79){
		cout << "Remarks : Good ";
	}
	if(avg >= 50 && avg <= 59){
		cout << "Remarks : Satisfactory ";
	}
	if(avg >= 0 && avg <= 49){
		cout << "Remarks : Needs Improvement ";
	}
}