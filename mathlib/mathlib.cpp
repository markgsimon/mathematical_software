#include "mathlib.h"
#include <stdexcept>

namespace MathLib {

   // Easy functions first
   double add(double a, double b) { return a + b; }
   double subtract(double a, double b) { return a - b; }
   double divide(double a, double b) {
     if(b == 0) throw std::runtime_error("Division by zero");
     return a / b;
   }
   double multiply(double a, double b){ return a * b; }


   // Pow Function, just a wrapper for now. 
   double pow(double base, double exp){
     return std::pow(base, exp);   
   }

   double absolute_value(double x) {
      return (x < 0.0) ? -x : x;  
   }
}
