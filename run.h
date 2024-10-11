#ifndef RUN_H
#define RUN_H

#include <string>

class Run {
public:
    std::string date;
    double distance;  // Distance in miles
    double duration;  // Duration in minutes
    double pace;      // Pace (minutes per mile)

    // Constructor
    Run(const std::string& date, double distance, double duration);

    // Method to calculate pace
    void calculatePace();

    // Method to display run information
    void displayRun() const;
};

#endif