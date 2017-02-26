#include <iostream>
using namespace std;
int main(){

char name[50];
char quest[80];
char velocity[80];

cout << "\nWhat is your name? ";
cin.getline(name,49);

cout << "\nWhat is your quest? ";
cin.getline(quest,79);

cout << "\nWhat is the velocity? ";
cin.getline(velocity,79);
//output:
cout << "\nName: " << name << "\n";
cout << "\nQuest: " << quest << "\n";
cout << "\nVelocity: " << velocity << "\n";
}