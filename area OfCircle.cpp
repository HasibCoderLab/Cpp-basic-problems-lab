// ================================================
//               Language: C++ / Cpp
//               Topic: Solving Problems
// ================================================

// ===== 👉👉  🔹🔹 Question  : Calculate the area of a Circle (Unprofessional style example) =====
#include <iostream>
using namespace std;

int main()
{
    float r = 5;
    float a = r * r;
    cout << "Area is: " << a * 3.1416;
    cout << endl;
    return 0;
}

// ===== 👉👉  🔹🔹 Question  : Calculate the area of a Circle (Professional style example 1) =====
#include <iostream>
using namespace std;

int main()
{
    float radius = 4.3;
    cout << "Area is: " << radius * radius * 3.1416;
    cout << endl;
    return 0;
}

// ===== 👉👉 🔹🔹 Question : Calculate the area of a Circle (Professional style example 2) =====
#include <iostream>
using namespace std;

int main()
{
    float r = 4.3;
    cout << "Area is: " << r * r * 3.1416;
    cout << endl;
    return 0;
}
