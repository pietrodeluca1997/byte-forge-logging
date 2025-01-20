#include "LoggingTestFixture.h"

static const char* STDOUT_TEST_FILE = "stdout_file_test.log";
static const char* STDERR_TEST_FILE = "stderr_file_test.log";

void LoggingTestFixture_New(LoggingTestFixture** fixture)
{
    LoggingTestFixture* new_fixture = calloc(1, sizeof(LoggingTestFixture));

    assert(new_fixture != NULL);

    FILE* temp_stdout;
    FILE* temp_stderr;

    freopen_s(&temp_stdout, STDOUT_TEST_FILE, "w", stdout);

    assert(temp_stdout != NULL);

    freopen_s(&temp_stderr, STDERR_TEST_FILE, "w", stderr);

    assert(temp_stderr != NULL);

    fclose(temp_stdout);
    fclose(temp_stderr);

    freopen_s(&new_fixture->stdout_file, STDOUT_TEST_FILE, "r+", stdout);

    assert(new_fixture->stdout_file != NULL);

    freopen_s(&new_fixture->stderr_file, STDERR_TEST_FILE, "r+", stderr);

    assert(new_fixture->stderr_file != NULL);

    *fixture = new_fixture;
}

void LoggingTestFixture_Free(LoggingTestFixture** fixture)
{
    if (!fixture || !*fixture) return;
    
    LoggingTestFixture* fixture_deref = *fixture;
    
    if (fixture_deref->stdout_file) fclose(fixture_deref->stdout_file);
    if (fixture_deref->stderr_file) fclose(fixture_deref->stderr_file);
        
    free(fixture_deref);
    fixture_deref = NULL;
}
