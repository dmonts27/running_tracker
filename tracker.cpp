#include "tracker.h"
#include <iostream>
#include <fstream>

// Add a new run
void RunningTracker::addRun(const std::string& date, double distance, double duration) {
    Run newRun(date, distance, duration);
    runs.push_back(newRun);
}

// Display all runs
void RunningTracker::displayRuns() const {
    for (const auto& run : runs) {
        run.displayRun();
    }
}

// Display statistics
void RunningTracker::displayStats() const {
    double totalDistance = 0;
    double totalTime = 0;

    for (const auto& run : runs) {
        totalDistance += run.distance;  // Distance in miles
        totalTime += run.duration;      // Time in minutes
    }

    std::cout << "Total Distance: " << totalDistance << " miles\n";  // Changed to miles
    std::cout << "Total Time: " << totalTime << " min\n";

    if (!runs.empty()) {
        std::cout << "Average Pace: " << (totalTime / totalDistance) << " min/mile\n";  // Changed to min/mile
    }
}

// Save runs to a file
void RunningTracker::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    for (const auto& run : runs) {
        outFile << run.date << " " << run.distance << " " << run.duration << "\n";
    }
    outFile.close();
}

// Load runs from a file
void RunningTracker::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string date;
    double distance, duration;

    while (inFile >> date >> distance >> duration) {
        addRun(date, distance, duration);
    }
    inFile.close();
}