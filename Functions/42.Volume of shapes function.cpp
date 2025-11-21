#include<iostream>
using namespace std;

float volume_cylinder(float r , float h){
    float volume = (22.0/7) * r * r * h;
    return volume;
}

float volume_sphere(float r){
    float volume = (4.0/3) * (22.0/7) * r * r * r;
    return volume;
}

float volume_cube(float a){
    float volume = a * a * a;
    return volume;
}

int main(){
    char choice;
    float r , h , a;
    
    cout << "Enter" << endl;
    cout << "1 . Volume of Cylinder" << endl;
    cout << "2 . Volume of Sphere" << endl;
    cout << "3 . Volume of Cube" << endl;
    
    cin >> choice;
    
    switch(choice){
        
        case '1':
            cout << "Enter Radius : ";
            cin >> r;
            cout << "Enter Height : ";
            cin >> h;
            cout << "Volume of Cylinder : " << volume_cylinder(r , h);
            break;
            
        case '2':
            cout << "Enter Radius : ";
            cin >> r;
            cout << "Volume of Sphere : " << volume_sphere(r);
            break;
            
        case '3':
            cout << "Enter Side : ";
            cin >> a;
            cout << "Volume of Cube : " << volume_cube(a);
            break;
            
        default:
            cout << "Invalid Choice!";
    }
}
