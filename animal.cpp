#include "animal.h"

Animal::Animal():Zoo()
{
    this->eyeNo = eyeNo;
    this->footNo = footNo;
    this->type = type;
    this->climate = climate;
}
Animal::~Animal() = default;

void Animal::setEyeNo(const int eyeNo)
{
    this->eyeNo = eyeNo;
}

void Animal::setFootNo(const int footNo)
{
    this->footNo = footNo;
}

void Animal::setType(const std::string type){

    this->type = type;
}

void Animal::setClimate(const std::string clim)
{
    this->climate = clim;
}

int Animal::getEyeNo()
{   
    return this->eyeNo;
}

int Animal::getFootNo()
{
    return this->footNo;
}

std::string Animal::getType()
{
    return this->type;
}

std::string Animal::getClimate()
{
    return this->climate;
}

void Animal::showAnimal() {
    std::cout << "Animal with " << getId() << " ID no, has " << getEyeNo() << " eyes." << std::endl;
    std::cout << "Animal with " << getId() << " ID no, has " << getFootNo() << " feet." << std::endl;
    std::cout << "Animal with " << getId() << " ID no, is " << getType()  << std::endl;
    std::cout << "Animal with " << getId() << " ID no, lives in " << getClimate() << " places." << std::endl;
    std::cout << "Animal with " << getId() << " ID no, eats " << getFood() << std::endl;
    std::cout << "Animal with " << getId() << " ID no, placed in " << getLoc() << std::endl;
    std::cout << "Animal with " << getId() << " ID no, is a " << getAnimType() << std::endl;
}
