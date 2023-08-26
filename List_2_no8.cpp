#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    float kmToCm = 100000.0;
    float kmToMeter = 1000.0;
    float kmToInch = 39370.1;
    float kmToFeet = 3280.84;
    
    float kilometers;

    cout<<"220130318016"<<endl;
	  cout<<"Vasu sapariya"<<endl;
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;
    
    float centimeters = kilometers * kmToCm;
    float meters = kilometers * kmToMeter;
    float inches = kilometers * kmToInch;
    float feet = kilometers * kmToFeet;
    
    cout << fixed << setprecision(2);
    
    cout << "Distance in different units:" << endl;
    cout << "Centimeters: " << setw(10) << centimeters << endl;
    cout << "Meters:      " << setw(10) << meters << endl;
    cout << "Inches:      " << setw(10) << inches << endl;
    cout << "Feet:        " << setw(10) << feet << endl;
    
    return 0;
}
