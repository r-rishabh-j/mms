#pragma once

#include <string>
#include <vector>

#include <glut.h>
#include "units/Duration.h"

#include "Directions.h"

namespace sim {

class SimUtilities {

public:

    // Quits the simulation
    static void quit();

    // Prints a message to stdout
    static void print(const std::string& msg);

    // Returns a double in [0.0, 1.0]
    static double getRandom();

    // Sleeps the current thread for ms milliseconds
    static void sleep(const Duration& duration);

    // Like time() in <ctime> but higher resolution
    static double getHighResTime();

    // Returns the UTC date and time formatted as YY-MM-DD_HH:MM:SS
    static std::string getDateTime();

    // Returns the path the mms project directory
    static std::string getProjectDirectory();

    // Convert between types
    static bool isBool(const std::string& str);
    static bool isInt(const std::string& str);
    static bool isDouble(const std::string& str);
    static bool strToBool(const std::string& str);
    static int strToInt(const std::string& str);
    static double strToDouble(const std::string& str);

    // Tokenizes a string on whitespace
    static std::vector<std::string> tokenize(const std::string& str, bool respectQuotes);

    // Returns the string str with the leading and trailing spaces removed
    static std::string trim(const std::string& str);

    // True if path is a path to a file, false otherwise
    static bool isFile(const std::string& path);

    // Returns the index of the direction in DIRECTIONS
    static int getDirectionIndex(Direction direction);

private:

    // A private constructor to restrict creation of any GeometryUtilities objects
    SimUtilities();
};

} // namespace sim
