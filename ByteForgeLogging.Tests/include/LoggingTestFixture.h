#pragma once

#include <ByteForgeLogging/LogMacros.h>

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef struct LoggingTestFixture
{
    FILE* stdout_file;
    FILE* stderr_file;    
} LoggingTestFixture;

void LoggingTestFixture_New(LoggingTestFixture** fixture);
void LoggingTestFixture_Free(LoggingTestFixture** fixture);