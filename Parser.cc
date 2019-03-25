#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Parser.h"

/*Parses a txt file and calls the Container with the parsed strings*/
/*Takes a filename as string input.*/
Parser::Parser(Container* container){
	containerPointer=container;
}

void Parser::readdoc(std::string str){
	std::ifstream infile(str);
	if (!infile.is_open()){
		std::cout << "Could not open file " << str << std::endl;
	} else {
		std::string line;
		std::string splitter = " ";
		std::string substring;
		while (getline(infile, line)){
			std::string::size_type blankspace = line.find(splitter); //Blankspace is the position of the first blankspace
			while (!line.empty()){
				if (blankspace != std::string::npos){
					substring = line.substr(0, blankspace);
					(*containerPointer).addword(substring);					
					line.erase(0, blankspace+1);
					blankspace = line.find(splitter);		
				} else {
					(*containerPointer).addword(line);
					line.erase(line.begin(), line.end());
				}
			} 
		}
	}
}
