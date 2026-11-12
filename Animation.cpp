#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include "Animation.h"
void Animation::happyFace() {
	std::cout << " /\\_/\\ \n";
	std::cout << " ( ^_^ ) \n";
	std::cout << "   >^<   \n";
	std::cout << "uwiiiii I'm happy\n";
}
void Animation::sleepyFace() {
    std::cout << " /\\_/\\ \n";
    std::cout << " ( -O- ) *yawn*\n";
    std::cout << "   >-<  \n";

    std::this_thread::sleep_for(std::chrono::milliseconds(600));

    std::cout << " /\\_/\\   zZz\n";
    std::cout << " ( -_- )zzZ\n"; 
    std::cout << "   >^<  \n";
    std::cout << "Good night...\n";
}
void Animation::hungryFace() {
    std::cout << " /\\_/\\ \n";
    std::cout << " ( ._. )  *tummy rumbles*\n";
    std::cout << "   >^<   \n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    std::cout << " /\\_/\\   PLEASE FEED ME! MEOW!!!\n";
    std::cout << " ( O.O )  \n";
    std::cout << "  > ^ <   [___]\n";
}
void Animation::lowEnergy() {
    std::cout << "   /\\___/\\\n";
    std::cout << "  (  x _ x )  *exhausted*\n";
    std::cout << "  /  u   u \\ \n";
    std::cout << " (_________)\n";
    std::cout << "Kitten collapsed from exhaustion!\n";
}