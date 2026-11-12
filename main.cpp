#include <iostream>
#include <string>
#include <cmath>
#include "Pet.h"
#include "Animation.h"
using namespace std;

int main() {
	Pet kitten;
	cout << "Hi! It's your own digital pet:) It'll be a boy or a girl\n";
	cout << "Please choose who it is? If it's a girl - enter 'W', if it's a boy - 'M'. Print your choice: ";
	cin >> kitten.gender;
	kitten.setgender(kitten.gender);
	cout << "Ohh so cute! And now you can rename your pet, because its origin name is " << kitten.name << '\n';
	cout << "If you wanna rename it - print 'rename' else you can keep its origin name - print 'keep' ";
	cin >> kitten.choicingname;

	if (kitten.choicingname == "rename" || kitten.choicingname == "Rename") {
		cin >> kitten.newname;
		kitten.name = kitten.newname;
	}
	cout << "It's cool and you can start playing with your pet! Then I show you the menu \n";
	cout << "Options: 1 - feed, 2 - sleep, 3 - play, 4 - pet, 0 - end the game \n";
	cout << "Soo... Let's start our game \n";
	Animation anim;
	bool gameover = false;
	do {
		if (kitten.hungry <= 0 || kitten.happines <= 0 || kitten.energy <= 0) {
			gameover = true;
			cout << "Game over! \n";
			break;
		}
		else {
			gameover = false;
		}
		cout << "It's parameters of your " << kitten.name << " Hungry = " << kitten.hungry << " happines = " << kitten.happines << " energy = " << kitten.energy << '\n';
		cout << "Please print the number of your act: ";
		int act;
		cin >> act;
		if (kitten.hungry <= 2 || kitten.energy <= 2) {
			anim.lowEnergy();
		}
		switch (act) {
		case 1:
			kitten.feed();
			anim.hungryFace();
			break;
		case 2:
			kitten.sleep();
			anim.sleepyFace();
			break;
		case 3:
			kitten.play();
			anim.happyFace();
			break;
		case 4:
			kitten.petKitten();
			anim.happyFace();
			break;
		case 0:
			gameover = true;
			break;
		default:
			cout << "Invalid action. Please choose 0-4 \n";
			break;
		}
	}
	while (!gameover);
	cout << "Thank you for playing! \n";
	return 0;
}