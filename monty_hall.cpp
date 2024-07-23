#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>      // std::setw

// Global Variables:
#define DISPLAY_ALL_GAMES 0     // 1 -> display info for all games . 0-> only display final results.

    int winsBySwitching = 0;
    int winsBySticking = 0;

    float winRateSwitching = 0;
    float winRateSticking = 0;

    int simulations=10000;

// Function:

void eachCase(int currentSimulation, int displayInfo=0) {

    int isStayWin=1;

    int carPosition = std::rand() % 3;
    int firstChoice = std::rand() % 3;

    int hostChoice;
    do {
        hostChoice = std::rand() % 3;
    } while (hostChoice == carPosition || hostChoice == firstChoice);

    // Determine the door to switch to
    int switchedChoice;
    for (int j = 0; j < 3; ++j) {
        if (j != firstChoice && j != hostChoice) {
            switchedChoice = j;
            break;
        }
    }

    // Check if switching wins
    if (switchedChoice == carPosition) {
        ++winsBySwitching;
        isStayWin=0;
    }
    // Check if sticking wins
    if (firstChoice == carPosition) {
        ++winsBySticking;
        isStayWin=1;
    }


    if (displayInfo) {

        std::cout << "Game: " << std::setw(10) << (currentSimulation+1) ;

        std::cout << " | Car: " << (carPosition+1) << " , 1st Choice: " << (firstChoice+1) << " , Host Reveal: " << (hostChoice+1) ;
        std::cout << " | Win: " << std::setw(9) << (isStayWin==1 ? "Sticking" : "Swtiching");

        winRateSwitching = ((winsBySwitching+0.0)*100/(currentSimulation+1.0));
        winRateSticking = ((winsBySticking+0.0)*100/(currentSimulation+1.0));

        std::cout << " | Win Rate: Stay- " << std::setw(7) << winRateSticking << "%" << " \t Swtich- " << std::setw(7) << winRateSwitching << "%";
        std::cout << std::endl;

    }

}

void simulateMontyHall() {

    std::srand(std::time(0)); // Seed for random number generation

    for (int i = 0; i < simulations; ++i) {
        eachCase(i, DISPLAY_ALL_GAMES);
    }

    winRateSwitching = ((winsBySwitching+0.0)*100/(simulations+0.0));
    winRateSticking = ((winsBySticking+0.0)*100/(simulations+0.0));

    std::cout << "\n\nAfter " << simulations << " simulations:" << std::endl;
    std::cout << "Wins by switching: " << std::setw(10) << winsBySwitching  << "\t | \t Win rate: " << std::setw(7) << winRateSwitching << " %" << std::endl;
    std::cout << "Wins by sticking:  " << std::setw(10) << winsBySticking   << "\t | \t Win rate: " << std::setw(7) << winRateSticking << " %" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <number_of_simulations>" << std::endl;
        return 1;
    }

    simulations = std::atoi(argv[1]);
    if (simulations <= 0) {
        std::cerr << "The number of simulations must be a positive integer." << std::endl;
        return 1;
    }

    simulateMontyHall();

    return 0;
}
