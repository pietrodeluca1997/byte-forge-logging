#include "LoggingUnitTests.h"

void LogInfo_ShouldOutputToStdout(const LoggingTestFixture* fixture)
{
    const char* info_message = "Sample message for testing purpouses.";
    LOG_INFO(info_message);

    fflush(stdout);

    char buffer[256];

    fseek(fixture->stdout_file, 0, SEEK_SET);

    fgets(buffer, sizeof(buffer), fixture->stdout_file);    

    assert(strstr(buffer, "[INFO]") != NULL);
    assert(strstr(buffer, info_message) != NULL);
}
