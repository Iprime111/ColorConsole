#include "ColorConsole.h"
#include <cstdio>


void printf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold, const char *format, ...) {

    va_list args;
    va_start (args, format);

    printf ("\033[%d;3%dm", bold, color);
    vfprintf (stdout, format, args);
    printf ("\033[0;39m");

    va_end (args);
}

void fprintf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold, FILE* stream, const char *format, ...) {

    va_list args;
    va_start (args, format);

    fprintf (stream, "\033[%d;3%dm", bold, color);
    vfprintf (stream, format, args);
    fprintf (stream, "\033[0;39m");

    va_end (args);
}

void vfprintf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold, FILE* stream, const char *format, va_list args) {

    fprintf (stream, "\033[%d;3%dm", bold, color);
    vfprintf (stream, format, args);
    fprintf (stream, "\033[0;39m");

}

void set_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold) {
    printf ("\033[%d;3%dm", bold, color);
}


