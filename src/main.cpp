#include <iostream>
#include <string>
#include "ConsoleLogger.h"
#include "LoggingLevel.h"

int main()
{  
    /**
    Creating a ConsoleLogger object
     */
    ConsoleLogger logger;
    try
    {       /**
        Logging different levels with messages
         */
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