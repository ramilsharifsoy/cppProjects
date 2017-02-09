#include <iostream>
float convert(float);
int main()
{
	float fahrenheit;
	float celcius;

	std::cout << "Please enter the temprature in Fahrenheit: ";
	std::cin >> fahrenheit;
	celcius = convert (fahrenheit);
	std::cout << "\nHere's temprature in Celsius: ";
	std::cout << celcius << "\n";
	return 0;
}
//function to convert Fahrenheit to Celsius
float convert(float f)
{
float c;
c = ((f - 32) * 5) / 9;
return c;
}