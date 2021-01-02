#include <string>

class Zoo
{
private:
    int id;
    std::string food;
    std::string location;
    std::string animalType;
public:
    Zoo();
    ~Zoo();

    //setters
    void setId(int id);
    void setFood(std::string food);
    void setLoc(std::string location);
    void setAnimType(std::string animalType);

    //getters
    int getId();
    std::string getFood();
    std::string getLoc();
    std::string getAnimType();
};


