#include <iostream>
#include <string>
#include "ConsoleLogger.h"
#include "LoggingLevel.h"

int main()
{
    ConsoleLogger logger;
    try
    {
        logger.print(DEBUG, "Application started");
        logger.print(INFO, "Application finished");
        logger.print(ERROR, "Application error");
        logger.print(WARNING, "Appilaciotn Warning");
        logger.print(DEBUG, ""); 
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}