#include<iostream>
using namespace std;

float percentage(int s1, int s2, int s3, int s4, int s5){
    
    float total = s1 + s2 + s3 + s4 + s5;
    float percent = (total / 500) * 100;
    
    return percent;
}

int main(){
    
    int s1, s2, s3, s4, s5;
    
    cout << "Enter Marks of 5 Subjects :" << endl;
    
    cout << "Subject 1 : ";
    cin >> s1;
    
    cout << "Subject 2 : ";
    cin >> s2;
    
    cout << "Subject 3 : ";
    cin >> s3;
    
    cout << "Subject 4 : ";
    cin >> s4;
    
    cout << "Subject 5 : ";
    cin >> s5;
    
    cout << "Percentage : " << percentage(s1, s2, s3, s4, s5) << "%";
}
