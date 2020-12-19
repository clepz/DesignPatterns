/*
 * PersonBuilder.h
 *
 *  Created on: Dec 2, 2020
 *      Author: autodrive
 */

#ifndef SRC_PERSONBUILDER_H_
#define SRC_PERSONBUILDER_H_

#include <string>
#include <sstream>
#include "Person.h"


class PersonBuilder {
private:
	Person person;
public:
	PersonBuilder(){
		person = Person();
	}

	PersonBuilder& setName(string name){
		person.setName(name);
		return *this;
	}

	PersonBuilder& setSname(string name){
		person.setSname(name);
		return *this;
	}

	PersonBuilder& setAge(int age){
		person.setAge(age);
		return *this;
	}


	Person build(){
		return person;
	}

};

#endif /* SRC_PERSONBUILDER_H_ */
