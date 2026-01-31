#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int choice;
	string filename,data;
	
	while(true){
	
		cout <<"1. Create File" << endl;
		cout <<"2. Edit File" << endl;
		cout <<"3. Read File" << endl;
		
		cin >> choice;
		
		if(choice == 1){
			cin.ignore();
			cout << "Enter File Name(.txt)";
			getline(cin, filename);
			ofstream file(filename);
			cout << "\n";
			cout << "File Created Sucessfully"<< endl;
			main();
		} 
		else if(choice == 2 ){
			cin.ignore();
			cout <<"Enter File Name : ";
			getline(cin , filename);
			
			ofstream file(filename);
		
			cout << "You May Write : ";
			
			getline(cin , data);
			file << data;
		}
			
		else if(choice == 3){
			cin.ignore();
			cout <<"Enter File Name : "<< endl;
			getline(cin , filename);
			
			ifstream file(filename);
			string line;
			while(getline(file , line)){
				cout <<"\n\n\n\n";
				cout << line << endl;
				cout <<"\n\n\n\n";
			}
			
		}
			
			
			
			
			
	}
}
	
	
	
	


