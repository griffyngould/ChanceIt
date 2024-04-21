#include <iostream>
#include "RandomInt.h"

class Player
{
public:
    Player();
    int TakeTurn();
    int Score() const;
    virtual std::string Name() const = 0;
    int myFirstRoll, myCurrentRoll;
protected:
    void RaiseScore(int howMuch);
    // virtual void UpdateData(int oppLastRoll) = 0;
    virtual bool StopRolling() const = 0;
private:
    RandomInt die1, die2;
};

class Player2 : public Player
{
public:
    Player2();
    std::string Name() const;

protected:
    // void UpdateData(int oppLastRoll);
    bool StopRolling() const;
};
class Player1 : public Player
{
public:
    Player1();
    std::string Name() const;

protected:
    // void UpdateData(int oppLastRoll);
    bool StopRolling() const;
}