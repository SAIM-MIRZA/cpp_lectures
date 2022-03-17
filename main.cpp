#include <iostream> // cout; cin
#include <string>   // strings

int main() {
    // ===============================================================================================
    // {5} example 3 - dereferencing a pointer
    int year = 2022;			// (1)
    int* p_year = &year; 		// (2) reference year
    int age = *p_year - 1998;	// (3) dereference p_year
    std::cout << "Variable value:       " << year << std::endl;
    std::cout << "Referenced variable (address): " << &year << std::endl;
    std::cout << "Pointer value:        " << p_year << std::endl;
    std::cout << "Dereferenced Pointer: " << p_year << std::endl;


};