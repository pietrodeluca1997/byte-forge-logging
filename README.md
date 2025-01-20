# **ByteForge Logging**

`byte-forge-logging` is a **modular logging system** developed as part of the **ByteForge** game engine. The library is designed to provide an efficient solution for logging events, errors, and debug messages in **high-performance applications**, especially games.

## **Features**

- Support for different **log levels**: **Debug**, **Info**, **Warning**, **Error**, **Success**, **Fatal**, **Trace**.

## **Example Usage**

```c
#include "ByteForgeLogging.h"

int main() 
{
    int playerScore = 150;
    float playerHealth = 98.5f;
    const char* playerName = "John";

    // Logging with integer formatting
    LOG_DEBUG("Player %s has a score of %d.", playerName, playerScore);

    // Logging with floating-point formatting
    LOG_INFO("Player %s has %.2f%% health remaining.", playerName, playerHealth);

    // Logging an error with formatted integer
    if (playerHealth < 20.0f) 
    {
        LOG_ERROR("Warning: Player %s has only %.1f%% health left!", playerName, playerHealth);
    }

    // Logging success with formatted integer
    LOG_SUCCESS("Player %s has successfully completed the mission with a score of %d.", playerName, playerScore);

    // Logging a fatal error with formatted integer
    if (playerScore < 0) 
    {
        LOG_FATAL("Error: Player %s's score is negative! Score: %d", playerName, playerScore);
    }
    
    return 0;
}
```

## **License**

`byte-forge-logging` is released under the **MIT License**. See the [LICENSE](./LICENSE) file for more details.

## **Contributing**

We welcome contributions to improve the `byte-forge-logging` project! If you would like to contribute, please follow these steps:

1. **Fork the repository** to your own GitHub account.
2. **Clone the forked repository** to your local machine.
3. Create a new branch for your changes.
4. **Make your changes** and commit them with a meaningful message.
5. **Push your changes** to your forked repository.
6. **Create a pull request** to the main repository with a description of your changes.

Please ensure that your code follows the existing code style and includes any necessary tests or documentation.

Thank you for contributing!
