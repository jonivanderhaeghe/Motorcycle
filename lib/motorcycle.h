#pragma once
#include <string>
#include "engine.h"

class Motorcycle
{
    private:
    std::string brand;
    unsigned int maxSpeed;
    unsigned int manufacturingYear;
    std::string model;
    Engine engine; 

    public:
    Motorcycle(std::string brand, unsigned int maxSpeed, unsigned int manufacturingYear, std::string model);

// getters
    public:
        std::string get_brand();
        unsigned int get_maxSpeed();
        unsigned int get_manufacturingYear();
        std::string get_model();

    public:
        std::string to_string();

// setters
    public:
        void set_brand(std::string brand);
        void set_maxSpeed(unsigned int maxSpeed);
        void set_manufacturingYear(unsigned int manufacturingYear);
        void set_model(std::string model);

};