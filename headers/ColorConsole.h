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
enum CONSOLE_BOLDNESS{
    CONSOLE_NORMAL  = 0, ///< Normal text
    CONSOLE_BOLD    = 1  ///< Bold text
};

#define COLOR(boldness, color) "\033[" #boldness ";3" #color "m"

#define BLACK_COLOR        COLOR (0, 0)
#define RED_COLOR          COLOR (0, 1)
#define GREEN_COLOR        COLOR (0, 2)
#define YELLOW_COLOR       COLOR (0, 3)
#define BLUE_COLOR         COLOR (0, 4)
#define PURPLE_COLOR       COLOR (0, 5)
#define CYAN_COLOR         COLOR (0, 6)
#define WHITE_COLOR        COLOR (0, 7)
#define DEFAULT_COLOR      COLOR (0, 9)

#define BOLD_BLACK_COLOR   COLOR (1, 0)
#define BOLD_RED_COLOR     COLOR (1, 1)
#define BOLD_GREEN_COLOR   COLOR (1, 2)
#define BOLD_YELLOW_COLOR  COLOR (1, 3)
#define BOLD_BLUE_COLOR    COLOR (1, 4)
#define BOLD_PURPLE_COLOR  COLOR (1, 5)
#define BOLD_CYAN_COLOR    COLOR (1, 6)
#define BOLD_WHITE_COLOR   COLOR (1, 7)
#define BOLD_DEFAULT_COLOR COLOR (1, 9)

#define MOVE_CURSOR(number, code) "\033[" #number code

#define MOVE_CURSOR_UP(lines)         MOVE_CURSOR (lines,   "A")
#define MOVE_CURSOR_DOWN(lines)       MOVE_CURSOR (lines,   "B")
#define MOVE_CURSOR_FORWARD(columns)  MOVE_CURSOR (columns, "C")
#define MOVE_CURSOR_BACKWARD(columns) MOVE_CURSOR (columns, "D")

#define SAVE_CURSOR_POSITION()    "\033[s"
#define RESTORE_CURSOR_POSITION() "\033[u"

#define CLEAR_SCREEN()            "\033[2J"
#define ERASE_TO_LINE_END()       "\033[K"

/*!
    @brief Prints text with given color, bold and arguments
    @param[in] color  Text color
    @param[in] bold   Text bold
    @param[in] format Printf format string
*/
void printf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLDNESS bold, const char *format, ...);

/*!
    @brief Prints text in given stream with given color, bold and arguments
    @param[in] color  Text color
    @param[in] bold   Text bold
    @param[in] format Printf format string
*/
void fprintf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLDNESS bold, FILE* stream, const char *format, ...);

/*!
    @brief Prints text in given stream with given color, bold and arguments
    @param[in] color  Text color
    @param[in] bold   Text bold
    @param[in] format Printf format string
    @param[in] args   Variadic arguments for vfprintf
*/
void vfprintf_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLDNESS bold, FILE* stream, const char *format, va_list args);

/*!
    @brief Changes console color to given
    @param[in] color Text color
    @param[in] bold  Text bold
*/
void set_color (enum CONSOLE_COLOR color, enum CONSOLE_BOLDNESS bold);

#endif
