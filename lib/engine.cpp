#include "engine.h"

Engine::Engine(std::string serialNumber){
    set_capacity(capacity);
    set_serialNumber(serialNumber);
    set_numberOfCilinders(numberOfCilinders);
}
//getters
std::string Engine::get_serialNumber(){
    return serialNumber;
} 
unsigned int Engine::get_capacity(){
    return capacity;
}
unsigned int Engine::get_numberOfCilinders(){
    return numberOfCilinders;
}

// setters
void Engine::set_capacity(unsigned int capacity){
    this->capacity=capacity;
}
void Engine::set_numberOfCilinders(unsigned int numberOfCilinders){
    this->numberOfCilinders=numberOfCilinders;
}
void Engine::set_serialNumber(std::string serialNumber){
    this->serialNumber=serialNumber;
}
std::string Engine::to_string()
{
    return "The capacity: " + std::to_string(capacity) + ", "
    + "the number of cilinders: " + std::to_string(numberOfCilinders) 
    + ", serialnumber: " + serialNumber;
}