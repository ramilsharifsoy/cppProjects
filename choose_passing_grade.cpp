#include <iostream>

int main()
{
int grade;
int passing;
std::cout << "Enter a grade (0-100):\n";
std::cin >> grade;
std::cout <<"Enter a passing grade:\n";
std::cin >>passing;
if (grade >= passing)
   {
       std::cout << "Good Job!";
    }
else
    {
       std::cout << "You failed!"; 
        
        }        
return 0;
}