#include "RandomInt.h"
RandomInt::RandomInt()
{
    srand(time(nullptr));
}
int RandomInt::Generate(int min = 1, int max = 6)
{

    int range = max - min + 1;
    roll = min + (rand() % range);

    return roll;
}
