#include <unistd.h>

/**
 *AUTHOR: OGIDI-SUNDAY GODSPRAISE
 *PROGRAM: WinMingle Community C Training
 *Description: using another library to output text and return to standard error.
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, str, 59);
    return (1);
}
