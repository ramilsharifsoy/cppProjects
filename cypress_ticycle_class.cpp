#include <iostream>
class Tricycle
{
public:
	int getSpeed();
	void setSpeed(int speed);
	void pedal();
	void brake();
private:
	int speed;



};
//get the trike's speed
int Tricycle::getSpeed()
{
return speed;
}
//set trike's speed
void Tricycle::setSpeed(int newSpeed)
{
	if (newSpeed >= 0)
	{
		speed = newSpeed;
	}
}
//pedal the trike
void Tricycle::pedal()
{
	setSpeed(speed + 1);
	std::cout << "\nPedaling; tricycle speed " << speed << " mph\n";
}

//apply the brake on the trike
void Tricycle::brake()
{
setSpeed(speed - 1);
std::cout << "\nBraking; tricycle speed " << speed << "mph\n";
}
//create a trike and ride it
int main()
{
	Tricycle cypress;
	cypress.setSpeed(0);
	cypress.pedal();
	cypress.pedal();
	cypress.brake();
	cypress.brake();
	cypress.brake();
	return 0;
}

