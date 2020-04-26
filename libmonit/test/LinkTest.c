#include "Config.h"

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#include "Bootstrap.h"
#include "Str.h"
#include "system/Time.h"
#include "Thread.h"
#include "system/Link.h"
#include "File.h"

/**
 * Link unit tests.
 */


int main(__attribute__ ((unused)) int argc, __attribute__ ((unused)) char **argv) {

        Bootstrap(); // Need to initialize library

        printf("============> Start Link Tests\n\n");


        printf("============> Link Tests: OK\n\n");

        return 0;
}

