#pragma once
//DO NOT INCLUDE SORTEDBAGITERATOR

//DO NOT CHANGE THIS PART
typedef int TComp;
typedef TComp TElem;
typedef bool(*Relation)(TComp, TComp);
#define NULL_TCOMP -11111;

struct BSTNode;

struct BSTNode {
	TComp info;
	int frequency;
	BSTNode* leftChild;
	BSTNode* rightChild;
};

class SortedBagIterator;

class SortedBag {
	friend class SortedBagIterator;

private:
	BSTNode* root;
	Relation relation;

	//initializes a new BST node
	BSTNode* initNode(TComp e);
	void inOrderTraversal(BSTNode* node, int& count) const;

	void deleteTree(BSTNode * node);
	void removeNode(BSTNode* node, BSTNode* parent);


public:
	//constructor
	SortedBag(Relation r);

	//adds an element to the sorted bag
	void add(TComp e);

	//removes one occurrence of an element from a sorted bag
	//returns true if an element was removed, false otherwise (if e was not part of the sorted bag)
	bool remove(TComp e);

	//checks if an element appears is the sorted bag
	bool search(TComp e) const;

	//returns the number of occurrences for an element in the sorted bag
	int nrOccurrences(TComp e) const;

	//returns the number of elements from the sorted bag
	int size() const;

	//returns an iterator for this sorted bag
	SortedBagIterator iterator() const;

	//checks if the sorted bag is empty
	bool isEmpty() const;

	//destructor
	~SortedBag();

	//return the difference between the max and min element 
	int getRange() const;
};