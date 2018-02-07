//
// Created by Dean Wertz on 2/4/18.
//
#include <vector>
#include <string>
#include <iostream>
#ifndef CS205MASTERMIND_GUESS_H
#define CS205MASTERMIND_GUESS_H
using namespace std;

class Game {
public:

    Game();

    void guessPrompt();
    void slotsDisplay();
    void choosePrompt();


    vector<string> myVector();
    vector<string> guessVector;
    string guess;
    bool guessOrChoose;
    vector<string> answer;
    vector <string> slots;
    int guesses;
    int hints;
    string hint;
    string playAgain;
    vector<string> chooseVector;

};


class Choose{


    vector<string> chooseVector;


};


#endif //CS205MASTERMIND_GUESS_H
