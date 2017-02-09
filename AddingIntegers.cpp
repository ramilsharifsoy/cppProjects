#include <iostream>
int add(int x, int y) //functions calculating sum
{
return(x+y);
}
int main()
{
	

	int add1; //first addend
	int add2; //second addend
	std::cout << "Enter first addend: ";
	std::cin >> add1;
	std::cout << "\nEnter second addend: ";
	std::cin >> add2;
	std::cout << "Sum of two addends is: " << add(add1,add2) << "\n";
    std::cout << "That's it!\n";
	return 0;
}
