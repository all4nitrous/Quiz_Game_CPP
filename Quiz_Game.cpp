#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{

    std::string question[] = {"1. What year was C++ created?: ",
                              "2. Who invented C++?: ",
                              "3. What is the predecessor of C++?: ",
                              "4. Is the Earth flat?"};
                              
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "John Carmack", "Mark Zuckerburg"},
                               {"A. C", "B. C+", "C--", "B++"},
                               {"A. Yes", "B. No", "Sometimes", "What's Earth?"}};

    return 0;
}