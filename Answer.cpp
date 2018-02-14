#include "Guess.h"
#include <cstdlib>
#include <ctime>
using namespace std;

void Game::answerPrompt() {
   srand((unsigned)time(0));
   int tempAnswer1;
   int tempAnswer2;
   tempAnswer1 = rand()%2+1;
   tempAnswer2 = rand()%2+1;
   vector <string> playerAnswer(4);
   vector <string> compAnswer(4);
   cout << "Please enter your answer: ";
   while(playerAnswerString.length() != 4){
       cin >> playerAnswerString ;
       playerAnswer[0] = playerAnswerString[0];
       playerAnswer[1] = playerAnswerString[1];
       playerAnswer[2] = playerAnswerString[2];
       playerAnswer[3] = playerAnswerString[3];
   }
   compGuesses = 0;

   while(compAnswer != playerAnswer && compGuesses < 10){
       if(tempAnswer1== 1){
           compAnswer[0] = playerAnswer[0];
           compAnswer[1] = to_string(rand()%7+0);
       }
       if(tempAnswer1== 2){
           compAnswer[0] = to_string(rand()%7+0);
           compAnswer[1] = playerAnswer[1];
       }



       if(tempAnswer2== 1){
           compAnswer[2] = playerAnswer[2];
           compAnswer[3] = to_string(rand()%7+0);
       }
       if(tempAnswer2== 2){
           compAnswer[2] = to_string(rand()%7+0);
           compAnswer[3] = playerAnswer[3];
       }


       compGuesses = compGuesses + 1;
       cout<< "Computer Guess ";
       cout << compGuesses;
       cout << ": ";
       cout << compAnswer[0];
       cout << compAnswer[1];
       cout << compAnswer[2];
       cout << compAnswer[3]<< endl;

   }

   if (compAnswer == playerAnswer){
     cout <<  "Sorry to say it, but you got beaten!" << endl;
   }
   if (compGuesses >= 10){
       cout << "You beat the computer player!" << endl;
   }

}

