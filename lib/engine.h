#pragma once
#include <string>

    class Engine{

    private:
    unsigned int capacity;
    std::string serialNumber;
    unsigned int numberOfCilinders;

    public:
    Engine(std::string serialNumber);
// getters
    public:
    std::string get_serialNumber();
    unsigned int get_numberOfCilinders();
    unsigned int get_capacity();
// setters
    public:
    void set_serialNumber(std::string serialNumber);
    void set_numberOfCilinders(unsigned int numberOfCilinders);
    void set_capacity(unsigned int capacity);

    public:
        std::string to_string();
    };
