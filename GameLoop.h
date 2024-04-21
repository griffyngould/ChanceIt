#include "Player.h"

class GameLoop
{
public:
    GameLoop(int numRounds = 100);
    void Play();
    
private:
    Player1 player1;
    Player2 player2;
    int roundsPerGame;
};