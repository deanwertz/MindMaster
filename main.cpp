#include <iostream>
#include <vector>
#include "Guess.h"
using namespace std;
int main() {
    Game game;

    vector<int> banana;
    string number = "1234";
    bool choice;

    cout << "Do you want to guess or choose" << endl;
    cout << "Press '1' for Guess/ '0' for Choose" << endl;

    cin >> choice;


    if ((choice)) {

        game.instructions();
        game.guessPrompt();

    }
    bool again;

    cout << "Do you want to play again 1 for Yes and 0 for No" << endl;

    cin>>again;

    if (again){
        main();
    }

    return 0;
}