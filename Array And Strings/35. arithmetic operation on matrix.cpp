#include<iostream>
using namespace std;
int main(){
	
	int matrix_1 [4][4] , rows = 4 , cols = 4;
	int matrix_2 [4][4] ;
	int matrix_add [4][4] ;
	int matrix_sub [4][4] ;
	int matrix_mul [4][4] ;
	
	cout << "Enter Values for matrix 1 : " << endl;	
	for (int i = 0 ; i < rows ; i++){
		 for(int j = 0 ; j < cols; j++){
		 	
		 	cin >> matrix_1[i][j];
		 }
	
	}	
	cout << endl;
	cout << "Enter Values for matrix 2 : " << endl;
	
	for (int i = 0 ; i < rows; i++){
		 for(int j = 0 ; j < cols ; j++){
		 	
		 	cin >> matrix_2[i][j];
		 }
	}	
	cout << "Addition Of 2 Matrix is : " << endl;
	for(int i = 0 ; i < rows; i++){
		for(int j = 0 ; j < cols ; j++){
			
			matrix_add [i][j] = matrix_1[i][j]  + matrix_2[i][j];
			cout << matrix_add[i][j] <<" ";
		}
		cout << endl;
	}
	
	cout << "Differnce Of 2 Matrix is : " << endl;
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols; j++){
			
			matrix_sub [i][j] = matrix_1[i][j]  -  matrix_2[i][j];
			cout << matrix_sub[i][j] <<" ";
		}
		cout << endl;
	}
	
	cout << "Multiplication Of 2 Matrix is : " << endl;
	
	for (int i = 0; i < rows; i++) {
	    for (int j = 0; j < cols; j++) {
	
	        matrix_mul[i][j] = 0;   
	
	        for (int k = 0; k < cols; k++) {
	            matrix_mul[i][j] += matrix_1[i][k] * matrix_2[k][j];
	        }
	
	        cout << matrix_mul[i][j] << " ";
	    }
	    cout << endl;
}

	}

