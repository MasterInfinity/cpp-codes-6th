// strctptr.cpp -- function with pointer to structure arguments
#include <iostream>
#include <cmath>

using namespace std;

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main(void)
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two number (q to quit) : ";
    }

    cout << "Done." << endl;
    return 0;
}

void rect_to_polar(const rect *pxy, polar *pda)
{
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

void show_polar(const polar *pda)
{
    const double Rad_to_deg = 57.29577951;
    cout << "disance = " << pda->distance
         << ", angle = " << pda->angle * Rad_to_deg
         << " degrees" << endl;
}
