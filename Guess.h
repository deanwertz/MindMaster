//
// Created by Dean Wertz on 2/4/18.
//

#include <vector>
#include <string>
#include <iostream>

//#ifndef CS205MASTERMIND_GUESS_H   //Default ifndef statement
//#define CS205MASTERMIND_GUESS_H
#ifndef GUESS_H_INCLUDED            //ifndef statement for Peter's laptop
#define GUESS_H_INCLUDED

using namespace std;

class Game {
public:

    Game();
    vector<string> myVector();
    bool checkValidInput(string inputString);
    void guessPrompt();
    void instructions();
    void slotsDisplay();

    vector<string> answer;
    vector<string> guessVector;
    vector<string> slots;
    string guess;
    string hintChar;
    string hintString;
    int guesses;
    int hintInt;
    int hintsUsed;

};

//#endif //CS205MASTERMIND_GUESS_H
#endif //GUESS_H_INCLUDED
