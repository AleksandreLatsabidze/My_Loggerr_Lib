#ifndef H_CONSOLE_LOGGER
#define H_CONSOLE_LOGGER

#include <iostream>
#include <string>
#include <stdexcept>

#include "LoggingLevel.h"


/**
 * generic logger class,which will print something to the console
 @author AleksandreLatsabidze
 */
class ConsoleLogger
{
public:
    /**
    @param printLoggingLevel
     *This is a printout LoggingLevel line which will prints a message to the console.
     */
    void print(LoggingLevel level, std::string message);
};

#endif 