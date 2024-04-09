// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH = 25;

    char array_str1[LENGTH] = "Hey guys! ";
    char array_str2[] = "What's Up?";
    
    std::string std_str1 = "Hi Everybody! ";
    std::string std_str2 = "How's the going? ";

    strncat(array_str1, array_str2, LENGTH);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
