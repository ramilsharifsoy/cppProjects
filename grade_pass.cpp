#include <iostream>

int main()
{
int grade;
std::cout << "Enter a grade (0-100):\n";
std::cin >> grade;
if (grade >= 70)
   {
    if (grade >= 90)
       std::cout << "You got an A. Great Job!\n";
    else
       {
       if (grade >=80)
          std::cout << "You got a B. Good Work!\n";
       else
          std::cout << "You got a C. Perfectly Adequate!\n";
       }
   }
else
        std::cout << "You got an F. I failed as parent!\n";
        
return 0;
}