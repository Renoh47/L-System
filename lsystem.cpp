#include "lsystem.hpp"

LSystem::LSystem(){
	iteration = 0;
	alphabet = "";
	constants = "";
	start = "";
	productions = "";
}

LSystem::LSystem(std::string vars, std::string constants, std::string start, std::string productions);{
	iteration = 0;
	this->variables = vars;
	this->constants = constants;
	this->start = start;
	this->productions = productions;
}

void LSystem::iterateSystem(){
	
}

std::string getItr(){
	return value;
}