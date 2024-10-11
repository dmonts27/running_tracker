#include "tracker.h"
#include <iostream>

int main() {
    RunningTracker tracker;
    int choice;
    std::string date;
    double distance, duration;

    tracker.loadFromFile("runs.txt");  // Load previous runs from file

    do {
        std::cout << "1. Add Run\n2. Display All Runs\n3. Display Stats\n4. Save Runs\n5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter date (YYYY-MM-DD): ";
            std::cin >> date;
            std::cout << "Enter distance (miles): ";  // Change to miles
            std::cin >> distance;
            std::cout << "Enter duration (minutes): ";
            std::cin >> duration;
            tracker.addRun(date, distance, duration);
            break;
        case 2:
            tracker.displayRuns();
            break;
        case 3:
            tracker.displayStats();
            break;
        case 4:
            tracker.saveToFile("runs.txt");
            break;
        case 5:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}