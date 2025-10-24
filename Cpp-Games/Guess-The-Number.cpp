// Codded By AhmedZafar
#include<iostream> 
#include<cstdlib> // For Random Functions
#include<ctime> // For Time
#include<string.h>

using namespace std;
int main(){
	int number , guess , attempts , attempt=0 , upper_limit , lower_limit  ;
	char choice;
	string difficulty; 	
	// primary start window
	cout << "Welcome to the Number Guessing game "<< endl;
	cout << "Rules:"<< endl;
	cout << ">>> Computer will guess the number in the range of difficulty ";
	cout << "\n\n>> Easy : Range 1-10 | Attempts  : 3";
	cout << "\n>> Medium : Range 1-30 | Attempts  : 10";
	cout << "\n>> Hard : Range 1-50 | Attempts  : 15"<< endl;
	cout << "\nThen you will guess the number with amount of tries \nTries finish you loose !"<< endl;
	cout << "LETS BEGIN !!!";
	cout << "\nEnter Difficulty level : ";
	
	cin >> difficulty;
	// taking difficulty level by user
	if(difficulty == "easy" || difficulty == "Easy" ){
		upper_limit = 10;
		lower_limit = 1;
		attempts = 3; 
	}
	else if(difficulty == "medium" || difficulty == "Medium" ){
		upper_limit = 30;
		lower_limit = 1;
		attempts= 10; 
	}
	else if(difficulty == "hard" || difficulty == "Hard" ){
		upper_limit = 50;
		lower_limit = 1;
		attempts= 15; 
	}
	else{
		cout << "Please Enter Correct Difficulty Level";
		main();
	}
	// generating random number in the desired range
	srand(time(0)); // time(0) will give time in secound
    number = rand() % (upper_limit - lower_limit + 1) + lower_limit; 
	
	cout << "\nI've chosen a number between "<< lower_limit << " --------> " << upper_limit << ". Can you guess it?" << endl;
	do {
	
		cout << "\nEnter Your Number : ";
		cin >> guess;
		attempt++;
		if (guess < number ){
			cout <<"Oh! " << guess << " is smaller then my number"<<endl ;
			cout << attempts - attempt  << " Tries Left";
		}
		else if (guess > number ){
			cout <<"Oh! " << guess << " is greater then my number"<<endl ;
			cout << attempts - attempt  << " Tries Left";
		}
		else if (guess == number ){
			cout <<"Oh! You guessed my number right"<< endl ;
			cout << "in " << attempt  << " Tries" << "\nGreat Job! " << endl;
			return 0;
		}
		
	}
	while(attempt != attempts);
	cout << "/nOhh You Lost HE HE....My Number Was "<<number<<"Better Luck Next Time"<< endl;
	cout << "Wanna Play Again ? (Y/N) : ";
	cin >> choice;
     
	//wanna play again ?	
	if (choice == 'y' || choice == 'Y'){
		main();
	}
	else if (choice == 'n' || choice == 'N'){
		return 0;
	}
	return 0;
}
// Codded By AhmedZafar