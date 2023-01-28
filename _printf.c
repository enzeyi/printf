#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            switch(format[i]) {
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    fputs(va_arg(args, char*), stdout);
                    count += strlen(va_arg(args, char*));
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    putchar(format[i]);
                    count++;
                    break;
            }
        } else {
            putchar(format[i]);
            count++;
        }
    }

    va_end(args);
    return count;
}
