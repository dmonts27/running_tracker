# 🏃 Running Tracker App

### A C++ application for logging and analyzing running activities, designed for simplicity and efficiency.

## 📋 Overview
The **Running Tracker App** is a streamlined C++ command-line application that enables users to track their running performance by logging runs with date, distance, and duration. It calculates key performance metrics such as pace (minutes per mile), total running time, and total distance. With file persistence, users can save their sessions and retrieve them later, ensuring that their running history is maintained.

## 🚀 Key Features
- **Run Logging**: Users can input their running session details (date, distance in miles, and time), and the app calculates their pace and stores the session data.
- **Statistics**: Provides total distance, total time, and average pace for all recorded sessions.
- **File Persistence**: Stores running sessions in a text file, allowing the data to be retained across multiple uses of the app.
- **Modular Code**: Built using object-oriented principles, making it easy to expand with new features.

## 🛠️ Technologies Used
- **Language**: C++
- **IDE**: Visual Studio Code
- **File Handling**: C++ file I/O for saving and loading runs.

## 📂 Project Structure
📁 running_tracker/
 ┣ 📜 main.cpp        # Main file with the user interface and logic.
 ┣ 📜 run.cpp         # Implementation of the Run class for individual run data.
 ┣ 📜 run.h           # Header file for the Run class.
 ┣ 📜 tracker.cpp     # Implementation of the RunningTracker class for managing multiple runs.
 ┣ 📜 tracker.h       # Header file for the RunningTracker class.
 ┣ 📜 runs.txt        # File where running data is stored.

 ## 📝 How to Use
### 1. Clone the Repository
```bash
git clone https://github.com/dmonts27/running_tracker.git
cd running_tracker

g++ main.cpp run.cpp tracker.cpp -o running_tracker

./running_tracker

