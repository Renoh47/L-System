#ifndef __LSYSTEM_HPP__
#define __LSYSTEM_HPP__

#include <cmath>
#include <string>
#include <vector>
#include "turtlegraphics.hpp"
#include <map>
#include <regex>

class LSystem {
public:
	LSystem();
	LSystem(std::string vars, std::string constants, std::string start, std::string productions);
	void iterateSystem();
	std::string getItr(); //get the current iteration string
	int getItrNum(); //get the number of the current iteration
private:
	int iteration;
	std::map<char, std::string> productions; //list of characters and the sequences that they are replaced by when the system is iterated
	std::string variables; //the variables being used in the system
	std::string constants; //list of characters that are constants
	std::string start; //intial string that starts the fractal
	std::string value; //stores the current iteration's sequence
};

#endif