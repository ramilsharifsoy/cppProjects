//greeting
#include <iostream>
using namespace std;

int main()
{
    char name[30];
    cout << "Enter your full name: ";
    cin.getline(name,29);
    cout << "Good Morning, dear " << name << ". Nice too meet you!";
    return 0;
}