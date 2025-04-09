#ifndef H_CONSOLE_LOGGER
#define H_CONSOLE_LOGGER

#include <iostream>
#include <string>
#include <stdexcept>

#include "LoggingLevel.h"


/**
 * this is a class for outputting to the console
 */
class ConsoleLogger
{
public:
    /**
     * this is a printout LoggingLevel line
     */
    void print(LoggingLevel level, std::string message);
};

#endif 