//weight loss milestones
#include <iostream>

int main()
{
float goal[] = {0.9,0.75,0.5,0.25};
float weight, target;
std::cout << "Enter current weight: " <<std::endl;
std::cin >> weight ;
std::cout << "Enter target weight: " <<std::endl;
std::cin >> target ;
std::cout << std::endl;

for (int i=0;i<4;i++)
{
    float loss = (weight - target) * goal[i];
    std::cout << "Goal " << i << ": ";
    std::cout << target + loss << std::endl;
}

return 0;
    
}

 