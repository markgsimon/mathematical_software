#include <iostream>
#include <string> 
#include <sstream>

#include "mathlib.h"

int main() {

   std::string line;

   std::cout << "========= My Math CAS CLI =======\n";
   std::cout << "Type 'help' for commands, or 'exit' to quit;\n\n";
   // std::cout << "Math Library for all your computational needs!\n";

   // Interactive shell while true loop
   while(true) {
  
      std::cout << "> ";

      std::getline(std::cin, line);

      if (line == "exit" || line == "quit") break;
   
      if(line == "help" ){
         std::cout << "Commands:\n"
         << "add 5 3 \n"
         << "subtract 7 3\n"
         << "multiply 5 4\n"
         << "divide 12 6\n" 
         << "pow 2 3 \n"
         << "abs -5\n"
         << "help / exit\n\n";
         
         continue;
      }
      
      std::istringstream iss(line);
      std::string cmd;
      iss >> cmd;

      if (cmd == "add") {
          double a, b;  iss >> a >> b;
          std::cout << MathLib::add(a,b) << "\n";
      } else if (cmd == "subtract") {
          double a, b; iss >> a >> b;
          std::cout << MathLib::subtract(a,b) << "\n";
      } else if (cmd == "divide") {
         double a,b; iss >> a >> b;
         std::cout << MathLib::divide(a,b) << "\n";
      } else if (cmd == "multiply") {
         double a,b; iss >> a >> b;
         std::cout << MathLib::multiply(a,b) << "\n";
      } else if (cmd == "pow") {
           double a,b; iss >> a >> b;
           std::cout << MathLib::pow(a,b) << "\n";
      } else if (cmd == "abs") {
           double x; iss >> x; 
           std::cout << MathLib::absolute_value(x) << "\n";
      } else { 
         std::cout << "This command is not supported yet\n";
      }

   } 

   return 0;

}
