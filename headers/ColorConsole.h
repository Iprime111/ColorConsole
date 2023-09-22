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
    @brief Changes console color to given
    @param[in] color Text color
    @param[in] bold  Text bold
*/
void set_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLD bold);

#endif
