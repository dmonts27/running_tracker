#include "run.h"
#include <iostream>

// Constructor
Run::Run(const std::string& date, double distance, double duration)
    : date(date), distance(distance), duration(duration) {
    calculatePace();
}

// Calculate the pace (minutes per mile)
void Run::calculatePace() {
    pace = duration / distance;
}

// Display run details
void Run::displayRun() const {
    std::cout << "Date: " << date 
              << ", Distance: " << distance 
              << " miles, Duration: " << duration 
              << " min, Pace: " << pace 
              << " min/mile" << std::endl;
}