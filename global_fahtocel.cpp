#include <iostream>
void convert() ;

float fahrenheit;
float celcius;

int main()
{
	

	std::cout << "Please enter the temprature in Fahrenheit: ";
	std::cin >> fahrenheit;
	convert ();
	std::cout << "\nHere's temprature in Celsius: ";
	std::cout << celcius << "\n";
	return 0;
}
//function to convert Fahrenheit to Celsius
void convert()
{
celcius = ((fahrenheit - 32) * 5) / 9;
}