#include "animal.h"

int main(){

    Animal eagle;
    eagle.setId(12345);
    eagle.setEyeNo(2);
    eagle.setFootNo(2);
    eagle.setType("omnivore");
    eagle.setClimate("average");
    eagle.setFood("meat");
    eagle.setLoc("Mountain");
    eagle.setAnimType("Bald eagle");
    eagle.showAnimal();

}