#include <iostream>
int sum(int first, int second){
    return first + second;
}
int multiply(int first, int second){
    return first * second;
}
int main(){
    int first_number {3}; // Statement
    int second_number {7};
    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    std::cout << "Sum: " << sum(first_number,second_number) << std::endl;
    std::cout << "Product: " << multiply(first_number,second_number) << std::endl;

    
    

}