#include "iter.hpp"

#include <cassert>
#include <iostream>
#include <string>

template <typename T>
void printElement(const T& element)
{
    std::cout << element << ' ';
}

void increment(int& value)
{
    ++value;
}

void addExclamation(std::string& value)
{
    value += '!';
}

int main()
{
    std::cout << "--------Test 1: Increase value--------\n" << std::endl;
    int values[] = {1, 2, 3, 4};
    std::cout << "Before increment:" << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;
    std::cout << values[3] << std::endl;
    std::cout << values[4] << std::endl;
    iter(values, 4, increment);
    assert(values[0] == 2);
    assert(values[1] == 3);
    assert(values[2] == 4);
    assert(values[3] == 5);
    std::cout << "\nAfter increment:" << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;
    std::cout << values[3] << std::endl;
    std::cout << values[4] << std::endl << std::endl;

    std::cout << "--------Test 2: print constant values--------" << std::endl;
    const int constantValues[] = {10, 20, 30};
    iter(constantValues, 3, printElement<int>);
    std::cout << "\n\n";

    std::cout << "--------Test 3: add exclamation--------" << std::endl;
    std::string words[] = {"hello", "cpp"};
    iter(words, 2, addExclamation);
    assert(words[0] == "hello!");
    assert(words[1] == "cpp!");

    iter(words, 2, printElement<std::string>);
    std::cout << '\n';
    return 0;
}