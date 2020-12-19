/*
 * Specification.h
 *
 *  Created on: Nov 29, 2020
 *      Author: clepz
 */

#ifndef SRC_SPECIFICATION_H_
#define SRC_SPECIFICATION_H_

#include "Item.h"

template<typename T>
class Specification {
public:
	virtual bool is_satisfied(T* item) = 0;
	virtual ~Specification() {};
};

class ColorSpecification: public Specification<Item> {
public:
	Color color;

	ColorSpecification(Color color): color(color){};

	bool is_satisfied(Item* item) override {
		return item->color == color;
	};
};

class SizeSpecification: public Specification<Item> {
public:
	Size size;

	SizeSpecification(Size size): size(size){};

	bool is_satisfied(Item* item) override {
		return item->size == size;
	};
};

template <typename T>
class AndSpecification: public Specification<T> {
public:
	Specification<T>& first;
	Specification<T>& second;
	AndSpecification(Specification<T>& first, Specification<T>& second): first(first), second(second) {}
	bool is_satisfied(T* item) override {
		return first.is_satisfied(item) && second.is_satisfied(item);
	}
};



#endif /* SRC_SPECIFICATION_H_ */
