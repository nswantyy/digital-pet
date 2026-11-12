#pragma once
#include <string>
class Pet {
public:
	Pet();
	std::string name;
	std::string newname;
	char gender;
	std::string choicingname;
	std::string Gender;
	double happines;
	double hungry;
	double energy;
	void setgender(char gender);
	void feed();
	void sleep();
	void play();
	void petKitten();
};