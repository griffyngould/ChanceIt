#include <iostream>
#include "GameLoop.h"

GameLoop::GameLoop(int numRounds, std::string player1Name, std::string player2Name): player1(player1Name), player2(player2Name)
{
    roundsPerGame = numRounds;
}

int GameLoop::Play()
{
    int score1, score2, lastRoll1, lastRoll2 = 0;

    for (int rnd = 0; rnd < roundsPerGame; rnd++)
    {
        // the first player's turn
        std::cout << "\n***" << player1.GetName() << ", round " << rnd << std::endl;
        lastRoll1 = player1.TakeTurn(lastRoll2);
        score1 += lastRoll1;
        // the second player's turn
        std::cout << "\n *** " << player2.GetName() << ", round " << rnd << std::endl;
        lastRoll2 = player2.TakeTurn(lastRoll1);
        score2 += lastRoll2;
        // Summary of the round
        std::cout << "\n ****************************\n"
                  << "Round " << rnd << " - "
                  << player1.GetName() << ":"
                  << score1 << "; "
                  << player2.GetName() << ":" << score2
                  << "\n ****************************\n"
                  << std::endl;
    }
    // announce winner of game
    if (score1 > score2)
    {
        std::cout << "\n\n"
                  << player1.GetName()
                  << " wins the game" << std::endl;
        return 1;
    }
    else if (score2 > score1)
    {
        std::cout << "\n\n" << player2.GetName()
                  << " wins the game" << std::endl;
        return 2;
    }
    else
    {
        std::cout << "\n\n"
                  << "We have a tie!" << std::endl;
        return 0;
    }
}