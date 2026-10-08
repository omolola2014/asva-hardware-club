# include <iostream>
#include <string>
using namespace std;

int main(){ 
    //Name 
    string name, c4= "ohms";
    // Unit declaration
    char c1='v', c2= 'A', c3= 'W';
    int V; // the V reperesents voltage 
    float R; // the R represents resistance 
    double I ; //the I represents current 
    double P; // the P represents power 

    cout << "Type in your name: ";
    getline(cin,name);
    cout << "Input a voltage value : ";
    cin >> V; 
    cout << "Input a resistance value: ";
    cin >> R;
    I = V/R ;
    P = I * V;
    cout << "NAME = "<< name << "\n";
    cout << "VOLTAGE = "<< V << c1 << "\n";
    cout << "RESISTANCE = "<< R << c4 << "\n";
    cout << "CURRENT= " << I << c2 << "\n";
    cout << "POWER= " << P << c3 ;   

    return 0;

}