//
// Created by Dean Wertz on 2/4/18.
//

#include <vector>
#include <string>
#include <iostream>

//#ifndef CS205MASTERMIND_GUESS_H
//#define CS205MASTERMIND_GUESS_H
#ifndef GUESS_H_INCLUDED
#define GUESS_H_INCLUDED

using namespace std;

class Game {
public:

    Game();
    vector<string> myVector();
    void guessPrompt();
    void instructions();
    void slotsDisplay();
    void hints();
    vector<string> answer;
    vector<string> guessVector;
    vector<string> slots;
    string guess;
    string hint;
    string playAgain;
    int guesses;
    int hints;
    bool guessOrChoose;

};

class Pin {
public:

    Pin(string);
    void flipBlackPinFlag();
    void flipWhitePinFlag();

    string pinColor;
    bool blackPinFlag;
    bool whitePinFlag;

};

//#endif //CS205MASTERMIND_GUESS_H
#endif //GUESS_H_INCLUDED
