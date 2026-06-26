#ifndef MATHLIB_H
#define MATHLIB_H

#include <cmath>
#include <string>

namespace cas::math {

// Basic Arithmetic
double add(double a, double b);
double subtract(double a, double b);
double divide(double a, double b);
double multiply(double a, double b);

// Some other elementary functions

double absolute_value(double x);

// Advanced functions

double pow(double base, double exp);
//double nth_root(double radix, double radicand);
//double factorial(double a);
//int gcf(int a, int b);


//double sine(double x);
//double cosine(double x);



// Scientific Functions

// Simple function to take cm or in and a value and convert length
double length_converter(std::string a, std::string b, double initialValue);


}


#endif
