#include <iostream>
#include "Player.h"

Player::Player() {};
Player::Player(std::string name)
{
    this->name = name;
}

int Player::TakeTurn(int opponentsLastRoll)
{
    myFirstRoll = die1.Generate() + die2.Generate();
    myCurrentRoll = myFirstRoll;
    int turnScore = myFirstRoll;

    std::cout << "\n First Roll: " << die1.roll
              << " + " << die2.roll
              << " = " << myFirstRoll;

    UpdateData(opponentsLastRoll);

    for (;;)
    {
        if (StopRolling())
        {
            std::cout << "- Stopping \n"
                      << std::endl;
            break;
        }
        else
        {
            std::cout << "continuing ...";
            myCurrentRoll = die1.Generate() + die2.Generate();

            std::cout << "\n Next Roll:" << die1.roll
                      << " + " << die2.roll
                      << " = " << myCurrentRoll;

            if (myCurrentRoll != myFirstRoll)
            {
                turnScore = std::max(turnScore, myCurrentRoll);
            }
            else
            {
                std::cout << "Scored 0 \n"
                          << std::endl;
                turnScore = 0;
                break;
            }
        }
        RaiseScore(turnScore);

        return turnScore;
    }
}

std::string Player::GetName() const
{
    return this->name;
}
void Player::SetName(std::string name) {
    this->name = name;
}

int Player::GetScore() const
{
    return this->score;
}

void Player::RaiseScore(int howMuch)
{

    this->score += howMuch;
}

bool Player::StopRolling() const {}

void Player::UpdateData(int oppLastRoll)
{
    this->oppRoll = oppLastRoll;
    this->oppScore += oppLastRoll;
}

// PLAYER 1 Methods

Player1::Player1() {}
Player1::Player1(std::string name) : Player(name) {}

bool Player1::StopRolling() const
{

    if (myCurrentRoll < 7)
        return false;

    else if (myCurrentRoll < GetOppRoll())
        return false;
    else
        return true;
}

/// Player 2 Methods

Player2::Player2(){}
Player2::Player2(std::string name) : Player(name) {}

bool Player2::StopRolling() const
{

    if (myCurrentRoll < 7)
        return false;

    else
        return true;
}