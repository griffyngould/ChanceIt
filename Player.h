#include <iostream>
#include "RandomInt.h"

class Player
{
public:
    Player();
    Player(std::string name);
    int TakeTurn(int opponentsLastRoll);
    int GetScore() const;
    virtual std::string GetName() const;
    void SetName(std::string name);
    int GetOppRoll() const;
    int myFirstRoll, myCurrentRoll;
protected:
    void RaiseScore(int howMuch);
    virtual void UpdateData(int oppLastRoll);
    virtual bool StopRolling() const = 0;

private:
    RandomInt die1, die2;
    int score, oppScore, oppRoll;
    std::string name;
};

class Player1 : public Player
{

    public:
    Player1();
    Player1(std::string name);
    bool StopRolling() const;
    
};

class Player2 : public Player
{
    public:

    Player2();
    Player2(std::string name);
    bool StopRolling() const;

};