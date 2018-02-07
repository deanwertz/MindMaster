#include <iostream>
#include <vector>
#include "Guess.h"

using namespace std;

int main() {

    //vector<int> intVector;
    //string genericNumberString = "1234";
    Game gameInstance;
    int gameChoiceInt;
    int playAgainInt;

    cout << endl << "--------------Welcome to Mastermind!------------------" << endl;
    cout << "Would you like to break a code or set a code to break?" << endl;
    cout << "Enter '1' to break a code or '0' to set a code." << endl;

    cin >> gameChoiceInt;
    while (gameChoiceInt != 0 && gameChoiceInt != 1) {
        cout << "Invalid input. Please enter '1' or '0.'" << endl;
        cin >> gameChoiceInt;
    }
    if (gameChoiceInt == 1) {
        gameInstance.instructions();
        gameInstance.guessPrompt();
    }
    else {
        cout << endl << "It's all there, black and white, clear as crystal!" << endl;
        cout << "You get nothing! You lose! Good day sir!" << endl;
    }

    cout << "Enter '1' to play again or '0' to exit." << endl;

    cin>>playAgainInt;
    while (playAgainInt != 0 && playAgainInt != 1) {
        cout << "Invalid input. Please enter '1' or '0.'" << endl;
        cin >> playAgainInt;
    }
    if (playAgainInt == 1) {
        main();
    }

    return 0;
}
