//
// Created by Dean Wertz on 2/4/18.
//
#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
Game:: Game(){}


using namespace std;


vector<string> Game:: myVector(){
    vector<string> answer;
    srand((unsigned)time(0));
    for (int i=0;i<4;i++){
        answer.push_back(to_string(rand()%5+0));
    }

    return answer;
}

void Game:: slotsDisplay(){


    for (int i = 0; i < 10; i++){
        slots[i] = "_ _ _ _";
        cout << slots[i] << endl;
    }
}

void Game:: guessPrompt(){
   vector<string> guessingVector(4);
    //answer = {"1","2","3","4"};
    vector<string> answer = myVector();
    for (int q = 0; q < answer.size(); q ++){
        cout << answer[q] << endl;
    }
    guesses = 0;
    while (answer != guessingVector && guesses < 10){
        cout << "Please enter your guess: ";
        cin >> guess ;
        if (guess.length() == 4){

            guessingVector[0] = guess[0];
            guessingVector[1] = guess[1];
            guessingVector[2] = guess[2];
            guessingVector[3] = guess[3];
       // slots[guesses] = guessVector[0] + " " + guesVector [1] + " " + guessVector
            guesses = guesses + 1;
            cout << " Number of guesses used: " ;
            cout << guesses << endl;
    }
        else{
            cout << "Game had the incorrect number of pegs" << endl;
        }
    }




    if (answer == guessingVector ){
        cout << "You Win. Whoop Whoop" << endl;
    }
    if (guesses >= 10){
        cout << "You used too many guesses, You loose" << endl;
    }
    cout << "Would you like to play again (Y/N)? ";

}
