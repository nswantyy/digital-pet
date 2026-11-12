#include <iostream>
#include <string>
#include <cmath>
#include "Pet.h"

Pet::Pet() {
	hungry = 10;
	energy = 10;
	happines = 14;
}

void Pet::setgender(char gender)
{
	if (gender == 'W' || gender == 'w') {
		Gender = "Girl";
		name = "Zefirka";
	}
	else if (gender == 'M' || gender == 'm') {
		Gender = "Boy";
		name = "Pryanyk";
	}
	else {
		Gender = "Unknown";
		name = "Fluffy";
	}
}
void Pet::feed() {
	hungry = hungry + 0.5;
	energy = energy + 2;
	happines = happines + 2;
	if (hungry >= 10) {
		hungry = 10;
		std::cout << "Meooow! I'm really satiety, thanks!\n";
	}
	if (energy >= 10) {
		energy = 10;
		std::cout << "I'm fullllll of energyy!\n";
	}
	if (happines >= 14) {
		happines = 14;
		std::cout << "Ohhhhh I'm sooo happy, you're the best, meooooow!\n";
	}
}
// function about sleeping
void Pet::sleep() {
	hungry = hungry - 2;
	energy = 10;
	happines = happines + 2;
	if (hungry <= 0) {
		hungry = 0;
		std::cout << "My tummy is rumbling... I'm starving!\n";
	}
	if (energy >= 10) {
		energy = 10;
		std::cout << "I'm fullllll of energyy!\n";
	} 
	if (happines >= 14) {
		happines = 14;
		std::cout << "Ohhhhh I'm sooo happy, you're the best, meooooow!\n";
	}

}
//functions about petting and happines
void Pet::play() {
	hungry = hungry - 1;
	energy = energy - 1;
	happines = happines + 1.5;
	if (hungry <= 0) {
		hungry = 0;
		std::cout << "My tummy is rumbling... I'm starving!\n";
	}
	if (energy <= 0) {
		energy = 0;
		std::cout << "I'm too exhausted... I can't move anymore... Zzzzzzz!\n";
	}
	if (happines >= 14) {
		happines = 14;
		std::cout << "Ohhhhh I'm sooo happy, you're the best, meooooow!\n";
	}
}

void Pet::petKitten() {
	hungry = hungry - 0.5;
	energy = energy + 0.5;
	happines = happines + 1;
	if (hungry <= 0) {
		hungry = 0;
		std::cout << "My tummy is rumbling... I'm starving!\n";
	}
	if (energy >= 10) {
		energy = 10;
		std::cout << "I'm fullllll of energyy!\n";
	} 
	if (happines >= 14) {
		happines = 14;
		std::cout << "Ohhhhh I'm sooo happy, you're the best, meooooow!\n";
	}
}
