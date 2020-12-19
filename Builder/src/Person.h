/*
 * Person.h
 *
 *  Created on: Dec 2, 2020
 *      Author: autodrive
 */

#ifndef SRC_PERSON_H_
#define SRC_PERSON_H_

#include <string>
#include <sstream>
#include "PersonBuilder.h"

using namespace std;

class Person {
private:
	friend class PersonBuilder;
	string name;
	string sname;
	int age;
	Person(){};

public:
	void setName(string name){
		this->name = name;
	}

	void setSname(string name){
		this->sname = name;
	}

	void setAge(int age){
		this->age = age;
	}

	static PersonBuilder builder(){
		return PersonBuilder();
	}

	string str() {
		ostringstream stra;
		stra<< name <<" " << sname << " - " << age << endl;
		return stra.str();
	}
};





#endif /* SRC_PERSON_H_ */
