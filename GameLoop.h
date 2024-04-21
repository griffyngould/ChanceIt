#include "Player.h"

class GameLoop
{
public:
    GameLoop(int numRounds = 100, std::string player1Name, std::string player2Name);
    // : player1(player1Name), player2(player2Name)
    int Play();
    
private:;
    Player1 player1;
    Player2 player2;
    int roundsPerGame;
};