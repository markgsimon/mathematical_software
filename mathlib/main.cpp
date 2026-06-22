#include <iostream>
#include "mathlib.h"

int main(){

std::cout << "Math Library for all your computational needs!\n";

double res = MathLib::add(5,3); // first function call of my library

std::cout << "5 + 3 = " << res << "\n";
return 0;

}
