#include<iostream>
using namespace std;
int main (){
	int bill , meter_rent = 2000 , previous_charges , current_units;
	float amount_per_unit ;
	cout << "Enter Current Units >>> " ;
	cin >> current_units ;
	cout << "Enter Previous Balance (If Any) >>> " ;
	cin >> previous_charges ;
	
	if(current_units < 50){
		amount_per_unit = 10.5 ;  
	}	
	else if(current_units >= 50 || current_units <= 200){
		amount_per_unit = 12.5;
	}
	else if(current_units > 200 ){
		amount_per_unit = 15;
	}
		bill = meter_rent + previous_charges + (amount_per_unit * current_units);
		
		cout << "This Month Your Bill Amount is : " << bill << " Rs";
}
