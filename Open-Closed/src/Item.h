/*
 * Item.h
 *
 *  Created on: Nov 29, 2020
 *      Author: clepz
 */

#ifndef SRC_ITEM_H_
#define SRC_ITEM_H_

#include <iostream>
#include <vector>

enum class Color {
	red, green, yellow
};

enum class Size {
	small, medium, large
};

class Item {
public:
	Color color;
	Size size;
	std::string name;
public:
	Item(Color color, Size size, std::string name): color(color), size(size), name(name){};

};

#endif /* SRC_ITEM_H_ */
