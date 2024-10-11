#ifndef TRACKER_H
#define TRACKER_H

#include "run.h"
#include <vector>

class RunningTracker {
private:
    std::vector<Run> runs;  // Vector to store runs

public:
    // Method to add a new run (distance in miles)
    void addRun(const std::string& date, double distance, double duration);

    // Method to display all runs (in miles)
    void displayRuns() const;

    // Method to display statistics (in miles)
    void displayStats() const;

    // Method to save runs to a file
    void saveToFile(const std::string& filename) const;

    // Method to load runs from a file
    void loadFromFile(const std::string& filename);
};

#endif