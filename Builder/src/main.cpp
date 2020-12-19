/*
 * main.cpp
 *
 *  Created on: Dec 2, 2020
 *      Author: autodrive
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <memory>

#include "Person.h"
#include "PersonBuilder.h"

using namespace std;



int main(int argc, char **argv) {

	Person insan = Person::builder().setAge(11).setName("tarik").setSname("umutlu").build();



}





