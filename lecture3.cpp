// ===============================================================================================
// {0} How to save in GitPod
// 1. ctrl + shift + p
// 2. search for "git commit"
// 3. then type a comment
// 4. ctrl + shift + p
// 5. then search "git push"

#include <iostream> // cout; cin
#include <string>   // strings
#include <string_view> // string_views

int main() {
        // ===============================================================================================
        // {1} strings instead of character arrays
        //         * easier to assign values
        //         * easier to concatenate (adding values)
        //         * have many more methods and functions available
        //                 * swap     
        //                 * find
        //                 * length
        //                 * substr
        //                 * ...

        // ===============================================================================================
        // {2} string operations via "cpp string documentation"
        //      * for example using the find operator                

        // ===============================================================================================
        // {3} using string_view
        // std::string str1 = "Message One"; // string 1
        // std::string str2 = "Message Two"; // string 2
        
        // std::string_view str_view = str2; // viewing string 1
        
        // std::cout << "str1: " << str1 << " length: " << str1.length() << std::endl;
        // std::cout << "str2: " << str2 << " length: " << str2.length() << std::endl;
        // std::cout << "str_v1: " << str_view << " length: " << str_view.length() << std::endl;

        // ===============================================================================================
        // {3} getting inputs from users
        // std::string first_name {}; // create two empty strings
        // std::string surname {};

        // std::cout << "\nPlease enter your first name: "; 
        // std::getline(std::cin,first_name); // input for first_name
        
        // std::cout << "\nPlease enter your surname: ";
        // std::getline(std::cin,surname);

        // std::cout << "your first name is: " << first_name << std::endl; // output tests
        // std::cout << "your surname is: " << surname << std::endl;

        // ===============================================================================================
        // {4} string of languages
        // std::string languages = "English, French, French Latin, Bengali, Turkish, Hindi, Farsi, Korean, Catonese, Spanish, Arabic, Urdu, Latin, German";
        // std::string language_of_interest = "Hindi"; // language we're searching for
        // std::size_t position = languages.find(language_of_interest); // position of the searched language        
        // std::size_t length_of_language = language_of_interest.length(); // print the searched language and the next language
        // std::cout << "\nThe first language is: " << languages.substr(position, length_of_language);

};