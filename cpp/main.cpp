#include <iostream>
#include <string>
#include "header/ConsoleLogger.h"
#include "header/LoggingLevel.h"

int main()
{
    ConsoleLogger logger;
    try
    {
        logger.print(DEBUG, "Application started");
        logger.print(INFO, "Application finished");
        logger.print(ERROR, "Application error");
        logger.print(DEBUG, ""); 
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}