#ifndef Save_h
#define Save_h
#include <string>
#include <iostream>
#include "Container.h"

/*Intended to be save and load function. A bit redundant when you can just save the texts in .txt format....*/
class Save {
public:
	Save();
	void save(Container*);
	void load(std::string);
private:

};

#endif
