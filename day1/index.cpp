#include <iostream>
#include <string>
std::string getGreeting() {
    return "Hello, World!";
}
int main() {
    std::cout << getGreeting() << std::endl;
    return 0;
}