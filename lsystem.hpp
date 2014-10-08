#ifndef __LSYSTEM_HPP__
#define __LSYSTEM_HPP__

#include <cmath>
#include <string>
#include <vector>
#include "turtlegraphics.hpp"


class LSystem {
public:
	LSystem();
	LSystem(std::string alpha, std::string constants, std::string start, std::string productions);
	void iterateSystem();
	std::string getItr(); //get the current iteration string
	int getItrNum(); //get the number of the current iteration
private:
	int iteration;
	std::string alphabet;
	std::string constants;
	std::string start;
	std::string productions;
};

