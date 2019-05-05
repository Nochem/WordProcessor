#ifndef Node_h
#define Node_h
#include <string>
#include <vector>

class Node{
private:
	struct Child {
		int uses;
		Node* node;
	} child;
	std::string value;
	std::vector<Child> children;
	unsigned int nbrChildren;
public:
	Node(std::string);
	std::string getvalue();
	void addchild(Node*);
	std::vector<Child> getchildren(); //Should probably return an iterator TODO, or atleast CONST
	unsigned int nbrOfChildren(){return nbrChildren;}
};

#endif
