#include "Stack.h"
#include "Stash.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
void printStash(Stash *s);

int main() {

	Stack stashStack;
    stashStack.initialize();

    Stack reverseStack;
    reverseStack.initialize();

	const int bufsize = 200;
	ifstream in("main.cpp");
	string line;
	int counter = 0;

	Stash *stashPtr = new Stash;
	stashPtr->initialize(sizeof(char) * bufsize);

	while(getline(in, line)) {
        stashPtr->add(line.c_str());
        counter++;

        if (counter % 5 == 0) {
            stashStack.push(stashPtr);
            stashPtr = new Stash;
            stashPtr->initialize(sizeof(char) * bufsize);
        }
	}

    // Adds remainig lines
    stashStack.push(stashPtr);

	Stash *sPointer = 0;

	while((sPointer = (Stash*)stashStack.pop()) != 0)
		reverseStack.push(sPointer);

	while((sPointer = (Stash*)reverseStack.pop()) != 0) {
		printStash(sPointer);
		delete sPointer;
	}

return 0;
}
—--------------------------------------------------------------------------------------------------------
void printStash(Stash *s) {
    int k = 0;
    char* cp;
    while((cp =(char*)s->fetch(k++)) != 0)
        cout << cp << endl;
}
void Stack::Link::initialize(void* dat, Link* nxt) {
	data = dat;
	next = nxt;
}

void Stack::initialize() { head = 0; }

void Stack::push(void* dat) {
	Link* newLink = new Link;
	newLink->initialize(dat, head);
	head = newLink;
}

void* Stack::peek() {
	return head->data;
}

void* Stack::pop() {
	if(head == 0) return 0;
	void* result = head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}

void Stack::cleanup() {}
—------------------------------------------------------------
const int increment = 100;

void Stash::initialize(int sz) {
	size = sz;
	quantity = 0;
	next = 0;
	storage.reserve(100);
}

void Stash::inflate(int increase) {
	assert(increase > 0);
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	storage.resize(newBytes);
}

int Stash::add(const void* element) {

	if(next >= quantity)
		inflate(increment);

	int startBytes = next * size;

	unsigned char* e = (unsigned char*)element;

	for(int i = 0; i < size; i++)
		storage[startBytes + i] = e[i];

	next++;
	return(next - 1);
}


void* Stash::fetch(int index) {

	assert(0 <= index);
	if(index >= next)
		return 0;

	return &(storage[index * size]);
}

int Stash::count() {
	return next;
}
