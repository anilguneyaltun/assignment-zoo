#include "zoo.h"


Zoo::Zoo(){
    this->id = id;
    this->food = food;
    this->location = location;
    this->animalType = animalType;
}
Zoo::~Zoo()= default;

void Zoo::setId(int id){
    
    this->id = id;
}

void Zoo::setFood(std::string food){

    this->food = food;
}

void Zoo::setAnimType(std::string animType){

    this->animalType = animType;
}

void Zoo::setLoc(std::string loc){

    this->location = loc;
}

int Zoo::getId(){
    return id;
}
std::string Zoo::getAnimType(){
    return animalType;
}
std::string Zoo::getFood(){
    return food;
}
std::string Zoo::getLoc(){
    return location;
}


