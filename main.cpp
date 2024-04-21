#include <iostream>
#include "GameLoop.h"
using namespace std;

int main()
{
    cout << "\nLet's play some ChanceIt!\n"
         << "\nHow many rounds (e.g., 100) ";
    int rounds;
    cin >> rounds;
    GameLoop aGame(rounds);
    aGame.Play();
    return 0;
}