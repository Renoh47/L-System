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
	constants.erase(remove_if(constants.begin(), constants.end(), isspace), constants.end());
	start.erase(remove_if(start.begin(), start.end(), isspace), start.end());
	for (int i = 0; i < constants.length(); i++){
		productions[constants[i]] = constants[i];
	}
	std::string reg = ".:([^;]*);"
	std::regex_match(productions, );
}

void LSystem::iterateSystem(){
	for (int i = value.length() - 1; i >= 0; i--){ //iterate backwards to avoid editing the characters that have already been replaced 
		value.insert(i, productions[value[i]]);
	}
}

std::string getItr(){
	return value;
}