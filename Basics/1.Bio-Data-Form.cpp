#include<iostream>
#include<string>
using namespace std;
int main (){
	string fullname,house;
	int GrNo,Class;
	cout << "Enter Your Name: ";
	cin >> fullname;
	cout << "Enter Your House: ";
	cin >> house;
	cout << "Enter Your GrNo: ";
	cin >> GrNo;
	cout << "Enter Your Class: ";
	cin >> Class;
	cout << "Name  |  Class   |    House   |   GrNo" << endl;
	cout << fullname  <<"   |   "<<  Class   <<"   |   "    <<house   <<"   |   "   <<GrNo<<  endl;
}