#include <iostream>
#include <random>

using namespace std;

namespace rectangle
{
    float calcArea(float s1, float s2)
    {
        // calculate rectangle
        return s1 * s2;
    }
}

namespace rTriangle
{
    float calcArea(float base, float height)
    {
        // right triangle calc
        return .5 * base * height;
    }
}

int main(int argc, char* argv[])
{
    srand(time(0));
    cout << time(0) << endl;
    // for(int i = 0; i < 10; i++) 
    //     cout << random() << endl;
    // float n1, n2;

    // std::cout << "Enter two numbers: ";
    // std::cin >> n1 >> n2;

    // std::cout << "The area of the rectangle is: " 
    //           << rectangle::calcArea(n1, n2) << std::endl;
    // std::cout << "The area of the right triangle is: " 
    //           << rTriangle::calcArea(n1, n2) << std::endl;
    // std::string fullName;
    // // cout << "Hello World" << endl;
    // std::cout << "Enter your full name: ";
    // getline(std::cin, fullName);

    // std::cout << "Hello " << fullName << std::endl;

    return 0;
}