#include <string>
#include "zoo.h"
#include <iostream>

class Animal: public Zoo
{
private:

    std::string type;
    std::string climate;
    int eyeNo;
    int footNo;

public:
    Animal();
    ~Animal();

    //setters
    void setFootNo(int footNo);
    void setEyeNo(int eyeNo);
    void setClimate(std::string);
    void setType(std::string);


    //getters
    std::string getClimate();
    int getFootNo();
    int getEyeNo();
    std::string getType();

    // print all information
    void showAnimal();
};
