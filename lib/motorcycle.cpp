#include "motorcycle.h"

// :: --> scope resolution operator
Motorcycle::Motorcycle(std::string brand, unsigned int maxSpeed, unsigned int manufacturingYear, std::string model)
                        :engine("empty")
{
    set_brand(brand);
    set_manufacturingYear(manufacturingYear);
    set_maxSpeed(maxSpeed);
    set_model(model);
}

// getters
std::string Motorcycle::get_brand(){
    return brand;
}

unsigned int Motorcycle::get_maxSpeed(){
    return maxSpeed;
}

unsigned int Motorcycle::get_manufacturingYear(){
    return manufacturingYear;
}

std::string Motorcycle::get_model(){
    return model;
}

// setters
void Motorcycle::set_brand(std::string brand){
    this->brand=brand;
}
void Motorcycle::set_manufacturingYear(unsigned int manufacturingYear){
    this->manufacturingYear=manufacturingYear;
} 
void Motorcycle::set_maxSpeed(unsigned int maxSpeed){
    this->maxSpeed=maxSpeed;
}
void Motorcycle::set_model(std::string model){
    this->model=model;
}

std::string Motorcycle::to_string()
{
    return "The brand: " + brand + " "
    + ", the maximum speed: "+ std::to_string(maxSpeed) + " km per hour "
    + ", the year of manufacturing: " + std::to_string(manufacturingYear)+ " "
    + ", the model " + model;
}
