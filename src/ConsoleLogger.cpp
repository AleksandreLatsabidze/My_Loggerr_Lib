#include "ConsoleLogger.h"

void ConsoleLogger::print(LoggingLevel level, std::string message)
{    /**
    If the message is empty, return another value.
    */
    if (message.empty())
    {
        throw std::invalid_argument("ცარიელი არ შეიძლება იყოს");
    }
    /**
    If the message is empty, return another value.
     */
    if (message == "null")
    {
        throw std::invalid_argument("არ შეიძლება იყოს 'null'");
    }


    /**
    Determine the logging level
    */
    std::string levelStr;
    switch (level)
    {
    case DEBUG:
        levelStr = "DEBUG";
        break;
    case INFO:
        levelStr = "INFO";
        break;
    case ERROR:
        levelStr = "ERROR";
        break;
    default:
        throw std::invalid_argument("Invalid logging level.");
    }

    std::cout << "[" << levelStr << "]: " << message << std::endl;
}