#include "log.h"

void set_log_level(const uint8_t level) {
    log_level_current = level;
}

void log_verbose(const char *message)
{
    log_message(LOG_VERBOSE, message);
}

void log_debug(const char *message)
{
    log_message(LOG_DEBUG, message);
}

void log_error(const char *message)
{
    log_message(LOG_ERROR, message);
}

void log_exception(const char *message)
{
    log_message(LOG_EXCEPTION, message);
}

void log_message(const uint8_t level, const char *message)
{
    if (log_level_current > level) {
        return;
    }

    printf("[%s] %s\n", LEVELS[level], message);
}