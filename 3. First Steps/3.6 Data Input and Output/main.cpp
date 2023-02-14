#include <iostream>

int main(){
    
    std::cerr << "std::cerr output : Something went wrong" << std::endl;
    std::clog << "std::clog output : This is a log message" << std::endl;
    int age;
    std::string name;
    std::cout << "Please enter a name" << std::endl; 
    // std::cin >> name >>age;// Problem reading spaces
    // So use std::getline
    std::getline(std::cin,name); //Capture entire line
    std::cout << "Please enter your age" << std::endl; 
    std::cin >> age;// Problem reading spaces so will only gain first object
    std::cout << "Hello!" << name << "You are " << age << std::endl;
}