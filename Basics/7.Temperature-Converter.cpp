#include<iostream>
using namespace std;
int main (){ 
float c , f , k;
cout << "Enter Temperature in Celcius : ";
cin >> c;

	f = ((9.0/5.0)*c)+32;
	k = c + 273.0;
	
cout << "Temperature in Farenheit is : " << f << " \nTemperature in Kelvin is : "<< k ;

}