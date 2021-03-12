// Foodmenu.cpp by Eastland Crane

#include <iostream>

int main()
{
    // Menu Items
    double water = 1.00; // 1
    double small_soda = 1.50; // 2
    double medium_soda = 2.00; // 3
    double large_soda = 3.00; // 4
    double hot_dog = 2.25; // 5
    double burger = 7.15; // 6
    double popcorn = 5.50; // 7
    double candybar = 10.00; // 8

    // User Variables
    int user_input = 0;
    double order = 0;

    std::cout << "--- Eastland's Food & Drink Menu ---" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Drinks: " << std::endl;
    std::cout << "Water: $1.00   Small Soda: $1.50  Medium Soda: $2.00  Large Soda: $3.00" << std::endl;
    std::cout << "Water ( 1 )   Small Soda ( 2 )    Medium Soda ( 3 )   Large Soda ( 4 )" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Food: " << std::endl;
    std::cout << "Hot dog: $2.25    Burger: $7.15   Popcorn: $5.50  Candy Bar: $10.00" << std::endl;
    std::cout << "Hot dog ( 5 )     Burger ( 6 )    Popcorn ( 7 )   Candy Bar ( 8 )" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter: 100   When you are done." << std::endl;


    while (user_input != 100) {
        std::cout << "Selection Input > ";
          
        // Takes Input and checks if it is valid
        while (!(std::cin >> user_input)) {
            std::cout << "INVALID INPUT" << std::endl;
            std::cout << "Please enter the number 1 to return to Selection input." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
            
            if (user_input == 1) {
                order = order + water;
            }
            if (user_input == 2) {
                order = order + small_soda;
            }
            if (user_input == 3) {
                order = order + medium_soda;
            }
            if (user_input == 4) {
                order = order + large_soda;
            }
            if (user_input == 5) {
                order = order + hot_dog;
            }
            if (user_input == 6) {
                order = order + burger;
            }
            if (user_input == 7) {
                order = order + popcorn;
            }
            if (user_input == 8) {
                order = order + candybar;
            }
        }
        std::cout << "Your total is: $" << order << std::endl;
    }
