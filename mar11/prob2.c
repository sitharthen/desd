//Write a function that takes a Color and returns a string representing the color. Print the color in main based on the favoriteColor value


#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE
} Color;

const char* getColorString(Color c) {
    switch (c) {
        case RED:
            return "Red";
        case GREEN:
            return "Green";
        case BLUE:
            return "Blue";
        case YELLOW:
            return "Yellow";
        case ORANGE:
            return "Orange";
        case PURPLE:
            return "Purple";
        default:
            return "Unknown Color";
    }
}

int main() {
    Color favoriteColor = ORANGE;
    printf("My favorite color is %s.\n", getColorString(favoriteColor));
    return 0;
}
