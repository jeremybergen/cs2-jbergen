#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

struct Triangle
{
    float side1, side2, side3;
    float area;
};

void promptSides(Triangle *[], int, char);
void printSides(Triangle *[], int);
void calcArea(Triangle *[], int);

int main(int argc, char *argv[])
{
    int arrSize = 3;
    Triangle *triangles[arrSize];
    char promptOrFile;

    if (argc >= 2 && (string)argv[1] == "P")
    {
        promptOrFile = 'P';
    }
    else
    {
        promptOrFile = 'F';
    }

    promptSides(triangles, arrSize, promptOrFile);

    calcArea(triangles, arrSize);

    printSides(triangles, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        delete triangles[i];
    }
    return 0;
}

/// @brief Calculates the area for an array of Triangle*
/// @param triangles
/// @param arrSize
void calcArea(Triangle *triangles[], int arrSize)
{
    // Area = Square root of√s(s - a)(s - b)(s - c)
    // where s is half the perimeter, or (a + b + c)/2
    for (int i = 0; i < arrSize; i++)
    {
        float sperim = (triangles[i]->side1 + triangles[i]->side2 + triangles[i]->side3) / 2;
        triangles[i]->area = sqrt(sperim * (sperim - triangles[i]->side1) * (sperim - triangles[i]->side2) * (sperim - triangles[i]->side3));
    }
}

/// @brief This function takes in an array of pointers to Triangle and size and prints sides.
/// @param triangles
/// @param arrSize
void printSides(Triangle *triangles[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Triangle " << i + 1 << ": "
             << triangles[i]->side1 << ", "
             << triangles[i]->side2 << ", "
             << triangles[i]->side3
             << " has an area of: " << triangles[i]->area << endl;
    }
}

/// @brief Create instance of Triangle and store
///        address inside of triangles.
///        Ask users for sides and store with struct dereferencing the address in triangles
/// @param triangles
/// @param arrSize
void promptSides(Triangle *triangles[], int arrSize, char promptOrFile)
{


    if (promptOrFile == 'P')
    {
        for (int i = 0; i < arrSize; i++)
        {
            triangles[i] = new Triangle;
            cout << "Storing triangle " << i + 1 << endl;
            cout << "What is side1? ";
            cin >> triangles[i]->side1;
            cout << "What is side2? ";
            cin >> (*triangles[i]).side2;
            cout << "What is side3? ";
            cin >> triangles[i]->side3;
        }
    }
    else
    {
        ifstream fin;
        fin.open("input.txt");

        for (int i = 0; i < arrSize; i++)
        {
            triangles[i] = new Triangle;
            float side1, side2, side3;

            fin >> side1 >> side2 >> side3;

            triangles[i]->side1 = side1;
            triangles[i]->side2 = side2;
            triangles[i]->side3 = side3;
        }
        fin.close();
    }

    
}

// struct AnotherStruct
// {
//     int num1;
// };

// struct Rectangle
// {
//     float side1;
//     float side2;
//     float area;
//     float perimeter;
//     int number[10];
//     string fName;
//     char middleI;
//     AnotherStruct struct2;
// };

// void addThings(Rectangle*, Rectangle*);

// int main(int argc, char* argv[])
// {
//     int num1;
//     int* num1Ptr;

//     num1 = 42;
//     num1Ptr = &num1;

//     cout << *num1Ptr << endl;

//     Rectangle rect1;
//     Rectangle rect2;
//     Rectangle rectangles[10];
//     Rectangle* ptr1;
//     Rectangle* ptrRectangles[10];
//     Rectangle* heapRect = new Rectangle;
//     Rectangle* heapRect2;

//     ptr1 = &rect1;
//     ptrRectangles[0] = &rect1;
//     heapRect2 = new Rectangle;

//     rect1.side1 = 42;
//     rect1.side2 = 15;

//     rect1.area = rect1.side1 * rect1.side2;
//     rect1.perimeter = 2*rect1.side1 + 2*rect1.side2;

//     cout << "The rectangle with sides "
//          << rect1.side1 << " and " << rect1.side2
//          << " has an area of " << rect1.area
//          << " and a perimeter of " << rect1.perimeter << endl;

//     delete heapRect;
//     delete heapRect2;
//     return 0;
// }

// void addThings(Rectangle* ptr1, Rectangle* ptr2)
// {
//     cout << ptr1->area + (*ptr2).area << endl;
// }