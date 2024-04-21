#include <iostream>
#include <cstdlib> // For srand() and rand()
#include <ctime>   // For time()

class RandomInt
{
public:
    RandomInt();
    int roll; 
    int Generate(int min = 1, int max = 6);
};