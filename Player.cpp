#include <iostream>
#include "Player.h"

Player::Player()
{
}

int Player::TakeTurn()
{
    myFirstRoll = die1.Generate() + die2.Generate();
    myCurrentRoll = myFirstRoll;
    int turnScore = myFirstRoll;

    std::cout << "\n First Roll: " << die1.roll
         << " + " << die2.roll
         << " = " << myFirstRoll;
    
    // UpdateData(opponentsLastRoll);

    for(;;){
        if()
    }
}

