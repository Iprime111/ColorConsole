#ifndef COLOR_CONSOLE
#define COLOR_CONSOLE

#include <stdio.h>
#include <stdarg.h>


/// @brief Enum for picking text color in console
enum CONSOLE_COLOR{
    CONSOLE_BLACK   = 0, ///< Black color
    CONSOLE_RED     = 1, ///< Red color
    CONSOLE_GREEN   = 2, ///< Green color
    CONSOLE_YELLOW  = 3, ///< Yellow color
    CONSOLE_BLUE    = 4, ///< Blue color
    CONSOLE_PURPLE  = 5, ///< Purple color
    CONSOLE_CYAN    = 6, ///< Cyan color
    CONSOLE_WHITE   = 7, ///< White color
    CONSOLE_DEFAULT = 9  ///< Default color
};

/// @brief Enum for picking bold or normal text
enum CONSOLE_BOLD{
    CONSOLE_NORMAL  = 0, ///< Normal text
    CONSOLE_BOLD    = 1  ///< Bold text
};

#define BLACK_COLOR   "\033[0;30m"
#define RED_COLOR     "\033[0;31m"
#define GREEN_COLOR   "\033[0;32m"
#define YELLOW_COLOR  "\033[0;33m"
#define BLUE_COLOR    "\033[0;34m"
#define PURPLE_COLOR  "\033[0;35m"
#define CYAN_COLOR    "\033[0;36m"
#define WHITE_COLOR   "\033[0;37m"
#define DEFAULT_COLOR "\033[0;39m"

#define BOLD_BLACK_COLOR   "\033[1;30m"
#define BOLD_RED_COLOR     "\033[1;31m"
#define BOLD_GREEN_COLOR   "\033[1;32m"
#define BOLD_YELLOW_COLOR  "\033[1;33m"
#define BOLD_BLUE_COLOR    "\033[1;34m"
#define BOLD_PURPLE_COLOR  "\033[1;35m"
#define BOLD_CYAN_COLOR    "\033[1;36m"
#define BOLD_WHITE_COLOR   "\033[1;37m"
#define BOLD_DEFAULT_COLOR "\033[1;39m"

/*!
    @brief Prints text with given color, bold and arguments
    @param[in] color  Text color
    @param[in] bold   Text bold
    @param[in] format Printf format string
*/
void printf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold, const char *format, ...);

/*!
    @brief Prints text in given stream with given color, bold and arguments
    @param[in] color  Text color
    @param[in] bold   Text bold
    @param[in] format Printf format string
*/
void fprintf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold, FILE* stream, const char *format, ...);

/*!
    @brief Prints text in given stream with given color, bold and arguments
    @param[in] color  Text color
    @param[in] bold   Text bold
    @param[in] format Printf format string
    @param[in] args   Variadic arguments for vfprintf
*/
void vfprintf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold, FILE* stream, const char *format, va_list args);

/*!
    @brief Changes console color to given
    @param[in] color Text color
    @param[in] bold  Text bold
*/
void set_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold);

#endif
