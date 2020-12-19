/*
 * main.cpp
 *
 *  Created on: Nov 29, 2020
 *      Author: clepz
 */

#include <iostream>
#include <vector>

#include "Item.h"
#include "Specification.h"
#include "Filter.h"

//Open-Closed Principle

int main(int argc, char **argv) {
	Item tree(Color::green, Size::large, "tree");
	Item apple(Color::green, Size::large, "apple");
	Item house(Color::yellow, Size::small, "house");

	std::vector<Item*> items {&tree,&apple,&house};

	ColorSpecification green(Color::green);
	SizeSpecification large (Size::large);
	auto spec = green && large;
	ItemFilter itf;

	std::vector<Item*> filtered;
	for(auto& i : itf.filter(items, spec)) {
		std::cout<<i->name << "satisfied." << std::endl;
	}



}

