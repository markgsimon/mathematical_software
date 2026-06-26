#include "cas/math/mathlib.h"
#include <stdexcept>
#include <string>
#include <iostream>

namespace cas::math {

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


   //======== Unit conversion functions ========

   // Length

   // Length Converter Function to take an initial value, and To/From units to process conversion
   // Let's make this take in a whole list of measurements, we can learn a little about parsing strings
   /* Takes in inches/feet/yards/miles or SI length units, 
   */
   double length_converter(std::string baseUnit, std::string unitDesired, double initialValue){
       if(baseUnit == "in" && unitDesired == "cm"){
           return initialValue *  2.54;
       } else if (baseUnit == "cm"  && unitDesired == "in"){
         return initialValue / 2.54;
       } else {
            std::cout << "Only in <-> cm conversions supported currently. Either " << 
            baseUnit << " or " << unitDesired << " are not a supported unit\n";
            throw std::runtime_error("Incorrect units error.");  
      }
   }
}
