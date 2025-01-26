#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber), playerGuess(-1), numOfGuesses(0) {
    srand(static_cast<unsigned>(time(0)));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game(){
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play() {
    cout << "Anna luku 1-" << maxNumber << endl;
    do {
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess < randomNumber) {
            cout << "Luku on suurempi" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Luku on pienempi" << endl;
        }
    }
    while(randomNumber != playerGuess);
    cout << "Oikea vastaus: " << randomNumber << "!" << endl;
}

void Game::printGameResult() const {
    cout << "Arvasit oikein luvun " << randomNumber << " ja kaytit siihen " << numOfGuesses << " arvausta." << endl;
}
