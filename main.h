#ifndef MAIN H
#define MAIN H
#include <stdarg.h>
/**
 * struct print structure for printing various
types
 * @t: type to print
 *@f: function to print
 */
typedef struct print
{
   char *t;
   int (*f) (va_list);
} print_t;
int putchar (char c);
int
int
int
int
printf(const char *format,
print_c(va_list c);
print_s(va_list s);
print_i(va_list i);
int print_d(va_list_ d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print _X (va_list X);
int print_p(va_list p);
int print_S (va_list S);
int print_r(va_list_r);
int print_R(va_list R);
#endif /* MAIN H */
