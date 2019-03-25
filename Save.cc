#include "Save.h"

Save::Save(){}

void Save::save(Container* container){
	for (std::vector<Node*>::iterator it = (*container).start() ; it != (*container).end(); ++it){
		(*(*it)).getValue(); //write into the file TODO
		(*(*it)).getChildren(); //Iterate over these and insert.
		//Try to create a Json format.
	
	//std::ofstream outfile();
	//outfile << "lorem ipsum";
	//outfile.is_open();
	//TODO
	 
}

void Save::load(std::string str){

}
