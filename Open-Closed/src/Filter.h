/*
 * Filter.h
 *
 *  Created on: Nov 29, 2020
 *      Author: clepz
 */

#ifndef SRC_FILTER_H_
#define SRC_FILTER_H_

#include <vector>
#include "Specification.h"
#include "Item.h"


template <typename T>
class Filter {
public:
	virtual std::vector<T*> filter(std::vector<T*> items, Specification<T> &spec) = 0;
	virtual ~Filter(){};
};

template <typename T> AndSpecification<T> operator&& (Specification<T>& first, Specification<T>& second){
	return AndSpecification<T>(first, second);
}

class ItemFilter : public Filter<Item> {
public:
	std::vector<Item*> filter(std::vector<Item*> items, Specification<Item> &spec) override {
		std::vector<Item*> result;
		for(auto& i : items)
			if (spec.is_satisfied(i))
				result.push_back(i);
		return result;
	}

};


#endif /* SRC_FILTER_H_ */
