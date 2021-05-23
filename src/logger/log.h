#ifndef _LOGGER_H
#define _LOGGER_H

#include <stdio.h>
#include <stdint.h>

enum {
    LOG_VERBOSE = 0,
    LOG_DEBUG,
    LOG_ERROR,
    LOG_EXCEPTION,
    LOG_QUIET
};

static const uint8_t *LEVELS[] = {"VERBOSE", "DEBUG", "ERROR", "EXCEPTION"};

static uint8_t log_level_current;

void set_log_level(const uint8_t level);

void log_verbose(const char *message);
void log_debug(const char *message);
void log_error(const char *message);
void log_exception(const char *message);
#endif