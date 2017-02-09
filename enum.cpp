#include <iostream>

int main()
{
enum Direction { North, Northeast, East, Southeast, South, Southwest, West, Northwest };
Direction heading;
heading = Southeast;
std::cout <<"Moving to " << heading <<std::endl;
return 0;
}