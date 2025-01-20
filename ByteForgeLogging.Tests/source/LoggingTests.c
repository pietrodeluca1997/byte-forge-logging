#include "LoggingTestFixture.h"
#include "LoggingUnitTests.h"

int main()
{
	LoggingTestFixture* fixture = { 0 };
	LoggingTestFixture_New(&fixture);

	LogInfo_ShouldOutputToStdout(fixture);

	LoggingTestFixture_Free(&fixture);

	return 0;
}