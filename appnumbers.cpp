// Adding numbers and returning the sum
#include <iostream>

int add(int x, int y)
{
    std::cout << "Running calculator...\n";
    return (x+y);
    }
int main()
{
  std::cout << "What is 864 + 555939?\n";
  std::cout <<"The sum is" << add(864,555939) << "\n\n";
  std::cout <<"What is 777 + 345?\n";
  std::cout <<"The sum is" << add(777,345) << "\n";
  return 0;
}

