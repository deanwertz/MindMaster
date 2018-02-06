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
    vector<string> myVector();
    void guessPrompt();
    void instructions();
    void slotsDisplay();

    vector<string> guessVector;
    string guess;
    bool guessOrChoose;
    vector<string> answer;
    vector <string> slots;
    int guesses;
    int hints;
    string hint;
    string playAgain;

};





#endif //CS205MASTERMIND_GUESS_H
