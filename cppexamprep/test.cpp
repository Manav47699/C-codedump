#include <iostream>
using namespace std;

class edistance; // Forward declaration of edistance

class mdistance
{
    int m, cm;

public:
    mdistance(int a, int b)
    {
        m = a;
        cm = b;
    }

    // Friend function declaration
    friend mdistance add(mdistance, edistance);
};

class edistance
{
    int feet, inches;

public:
    edistance(int c, int d)
    {
        feet = c;
        inches = d;
    }

    // Friend function declaration
    friend mdistance add(mdistance, edistance);
};

// Friend function definition
mdistance add(mdistance x, edistance y)
{
    // Convert both distances to centimeters for easy addition
    int total_cm = (x.m * 100 + x.cm) + ((y.feet * 12 + y.inches) * 2.54);
    
    // Convert back to meters and centimeters
    int meters = total_cm / 100; // Get meters
    int centimeters = total_cm % 100; // Get remaining centimeters

    return mdistance(meters, centimeters);
}

int main(int argc, char const *argv[])
{
    mdistance m1(1, 50); // 1 meter 50 cm
    edistance e1(5, 10); // 5 feet 10 inches

    mdistance result = add(m1, e1); // Add the two distances

    // Displaying result
    cout << "Result: " << result.m << " meters and " << result.cm << " centimeters" << endl;

    return 0;
}
