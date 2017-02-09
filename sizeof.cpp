// Data Type size show
#include <iostream>

int main()
{
std::cout << "The size of an integer:\t\t";
std::cout << sizeof(int) << " bytes\n";
std::cout << "The size of an unsigned integer:\t\t";
std::cout << sizeof(unsigned int) << " bytes\n";
std::cout << "The size of a short integer:\t";
std::cout << sizeof(short) << " bytes\n";
std::cout << "The size of unsigned short integer:\t";
std::cout << sizeof(unsigned short) << " bytes\n";
std::cout << "The size of a long integer:\t";
std::cout << sizeof(long) << " bytes\n";
std::cout << "The size of unsigned long integer:\t";
std::cout << sizeof(unsigned long) << " bytes\n";
std::cout << "The size of a character:\t";
std::cout << sizeof(char) << " bytes\n";
std::cout << "The size of a boolean integer:\t";
std::cout << sizeof(bool) << " bytes\n";
std::cout << "The size of a float:\t\t";
std::cout << sizeof(float) << " bytes\n";
std::cout << "The size of a double float:\t";
std::cout << sizeof(double) << " bytes\n";
std::cout << "The size of a long long integer:";
std::cout << sizeof(long long int) << " bytes\n";

return 0;
}