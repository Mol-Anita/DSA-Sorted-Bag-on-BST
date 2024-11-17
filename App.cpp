#include "SortedBag.h"
#include "SortedBagIterator.h"
#include <iostream>
#include "ShortTest.h"
#include "ExtendedTest.h"

using namespace std;

//BST with linked representation with dynamic allocation

int main() {
	testAll();
	testAllExtended();
	testRange();
	cout << "Test over" << endl;
	system("pause");
}