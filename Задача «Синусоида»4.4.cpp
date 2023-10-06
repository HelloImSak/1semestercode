#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Define the range of x values (e.g., from -2π to 2π)
    double startX = -2 * 3.14;
    double endX = 2 * 3.14;
    double stepSize = 0.1; // Adjust this for smoother or coarser graph

    // Iterate through the x values and print the corresponding sine values
    for (double x = startX; x <= endX; x += stepSize) {
        double y = sin(x);

        // Scale the sine value to fit the screen
        int screenHeight = 20; // Adjust for desired screen height
        int yScaled = static_cast<int>((y + 1.0) * 0.5 * screenHeight);

        // Print spaces before the graph to align it
        for (int i = 0; i < yScaled; ++i) {
            cout << ' ';
        }
    
        // Print the graph character (e.g., '*')
        cout << '*';

        // Move to the next line
        cout << endl;
    }
}
