//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

// Define an enum for traffic light states
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Declare a variable of type TrafficLight and assign a value
    enum TrafficLight currentLight = RED; // Example: Set to RED initially

    // Use a switch statement to print the action based on the light's value
    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light state\n");
            break;
    }

    // You can change the light and test again
    currentLight = GREEN;
    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light state\n");
            break;
    }

    return 0;
}
