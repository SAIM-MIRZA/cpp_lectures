#include <iostream> // cout; cin
#include <string>   // strings

int main() {
    // {1} testing GitPod
    // std::cout << "Test message" << std::endl;

    // {2} example 1
    int year {2022}; // declaring a variable
    std::cout << "Variable value: " << year << std::endl;
    std::cout << "Variable address: " << &year << std::endl;

    // {3} exercise 1
    std::string message {"Hello World!"};
    std::cout << "Value:   " << message << std::endl;
    std::cout << "Address: " << &message << std::endl;

    // {4} example 2
    int year2 {2022}; // declaring a variable
    int year3 {2025};
    int* bitna {&year3}; // p_year is a pointer with a value of &year
    int* b {&year2}; // p_year is a pointer with a value of &year
    year2 = 2028;
    std::cout << "Year 2:    " << year2 << std::endl;
    std::cout << "Year 3:    " << year3 << std::endl;
    std::cout << "Address 2: " << &year2 << std::endl;
    std::cout << "Address 3: " << &year3 << std::endl;
    std::cout << "Pointer:   " << bitna << std::endl;
    std::cout << "Pointer:   " << b << std::endl;


};

