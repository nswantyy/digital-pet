# Digital Pet (Console Tamagotchi in C++)

A lightweight, interactive console application that simulates a virtual pet (Tamagotchi), built in C++ using Object-Oriented Programming (OOP) principles.

---

## Gameplay & Features
<img width="847" height="250" alt="image" src="https://github.com/user-attachments/assets/928c183a-bd2e-4485-aef7-a6089a2538e3" />


* **Pet Customization:** Choose your pet's gender (`W` for Girl — *Zefirka*, `M` for Boy — *Pryanyk*, or fallback to *Fluffy* for unknown input) and optionally rename it before starting the game.
* **Interactive Care Menu:** Take care of your kitten using a clean `switch-case` menu:
  * `1` — **Feed:** Restores hunger and slightly boosts energy and happiness.
  * `2` — **Sleep:** Fully restores energy and increases happiness, while slightly decreasing hunger.
  * `3` — **Play:** Boosts happiness at the cost of energy and hunger.
  * `4` — **Pet:** Gently increases happiness and energy.
  * `0` — **Exit:** Safely ends the game session.
* **Boundary & Edge Case Handling:** Prevents stat overflow by capping maximum values (`Hungry` up to `10`, `Energy` up to `10`, `Happiness` up to `14`) and triggers `Game Over` if any vital stat drops to `0`.
* **Dynamic ASCII Animations:** Visual feedback for different states (*happy*, *sleepy*, *hungry*, *exhausted*) with smooth frame transitions.

---

## Architecture & Technical Highlights

* **Multi-File OOP Structure:** Clean separation of concerns across dedicated header and source files:
  * `Pet.h` & `Pet.cpp` — Core pet attributes, state updates, and boundary checks.
  * `Animation.h` & `Animation.cpp` — Console ASCII art and timed animation frames.
  * `main.cpp` — Game loop (`do-while`) and user input handling.
* **Modern C++20:** Configured and compiled using the `C++20` language standard.
* **Time Delays:** Uses `<chrono>` and `<thread>` (`std::this_thread::sleep_for`) for realistic console pauses during animations.
* **Console I/O Optimization:** Uses `'\n'` instead of `std::endl` to avoid unnecessary stream buffer flushing.

---

## How to Run (Visual Studio)

1. **Clone the repository:**
   ```bash
   git clone https://github.com/nswwantyy/digital-pet.git
   Open the solution:
Open the project folder and double-click digital pet.slnx (or .sln) to launch it in Visual Studio 2022.

Check C++ Standard (if needed):
Ensure the project properties are set to ISO C++20 Standard.

**Build and Run:**
Press Ctrl + F5 (or click Local Windows Debugger) to compile and start playing.

 ## Future Improvements
* Implement full data encapsulation (private fields with getters/setters).
* Add a save/load progress feature using file I/O. 
* Introduce random events or mini-games during playtime.
