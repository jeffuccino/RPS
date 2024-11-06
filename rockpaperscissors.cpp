#include <iostream>
#include <cstdlib>

int main () {
    std::string playerhand;
    std::string computerhand;
    int computerchoice;
    std::cout << "\n";
    std::cout << "Lets play Rock, Paper & Scissors!\n";

    while (true) {
        std::cout << "\n";
        std::cout << "Type in Rock, Paper or Scissors to play!\n";
        std::cout << "\n";
        std::cout << "Input here: ";
        std::cin >> playerhand;

        if (playerhand == "exit") {
            std::cout << "\n";
            std::cout << "Exiting the game....\n";
            std::cout << "....\n";
            std::cout << "....\n";
            break;
        }

        if (playerhand == "rock" || playerhand == "paper" || playerhand == "scissors") {
            
            srand(time(NULL));
            computerchoice = std::rand() % 3;

            switch (computerchoice) {
                case 0:
                computerhand = "rock";
                break;
                case 1:
                computerhand = "paper";
                break;
                case 2:
                computerhand = "scissors";
                break;
            }
            

            if (playerhand == computerhand) {
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "You threw " << playerhand << " and your opponent threw " << computerhand << ". Its a tie!\n";
                std::cout << "\n";
                std::cout << "\n";
            }
            else if (playerhand == "rock" && computerhand == "paper") {
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "You threw " << playerhand << " and your opponent threw " << computerhand << ". You lose!\n";
                std::cout << "\n";
                std::cout << "\n";
            }
            else if (playerhand == "paper" && computerhand == "scissors") {
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "You threw " << playerhand << " and your opponent threw " << computerhand << ". You lose!\n";
                std::cout << "\n";
                std::cout << "\n";
            }
            else if (playerhand == "scissors" && computerhand == "rock") {
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "You threw " << playerhand << " and your opponent threw " << computerhand << ". You lose!\n";
                std::cout << "\n";
                std::cout << "\n";
            }
            else {
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "You threw " << playerhand << " and your opponent threw " << computerhand << ". YOU WON!\n";
                std::cout << "\n";
                std::cout << "\n";
            }
        }
        else {
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "Please type in rock, paper or scissors to play\n";
            std::cout << "\n";
            std::cout << "\n";
        }
    }
    return 0;
}