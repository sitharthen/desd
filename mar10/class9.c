//Define an enum ShapeType with values CIRCLE, RECTANGLE, SQUARE and  TRIANGLE. Write a C program that uses a switch statement to print a description for each shape type. For example, "CIRCLE: A round shape", "RECTANGLE: A shape  with four right angles", etc

#include <stdio.h>

enum ShapeType {
    CIRCLE,
    RECTANGLE,
    SQUARE,
    TRIANGLE
};

void printShapeDescription(enum ShapeType shape) {
    switch (shape) {
        case CIRCLE:
            printf("CIRCLE: A round shape\n");
            break;
        case RECTANGLE:
            printf("RECTANGLE: A shape with four right angles\n");
            break;
        case SQUARE:
            printf("SQUARE: A rectangle with all sides of equal length\n");
            break;
        case TRIANGLE:
            printf("TRIANGLE: A shape with three sides\n");
            break;
        default:
            printf("Unknown shape\n");
            break;
    }
}

int main() {
    // Test each shape type
    enum ShapeType shape;

    shape = CIRCLE;
    printShapeDescription(shape);

    shape = RECTANGLE;
    printShapeDescription(shape);

    shape = SQUARE;
    printShapeDescription(shape);

    shape = TRIANGLE;
    printShapeDescription(shape);

    return 0;
}