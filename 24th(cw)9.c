#include <stdio.h>

// Define a structure for a point in 2D space
struct Point2D {
    int x;
    int y;
};

// Define a structure for a rectangle, which has two Point2D structures as its corners
struct Rectangle {
    struct Point2D topLeft;
    struct Point2D bottomRight;
};

int main() {
    // Declare a rectangle variable and initialize its fields
    struct Rectangle rect = {
        {0, 0}, // top left corner
        {10, 10} // bottom right corner
    };

    // Access the x coordinate of the top left corner of the rectangle
    printf("Top left corner x coordinate: %d\n", rect.topLeft.x);

    // Change the y coordinate of the bottom right corner of the rectangle
    rect.bottomRight.y = 20;

    // Print the new y coordinate of the bottom right corner
    printf("Bottom right corner y coordinate: %d\n", rect.bottomRight.y);

    return 0;
}
//output: Top left corner x coordinate: 0
Bottom right corner y coordinate: 20//