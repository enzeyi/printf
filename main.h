#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
/**
 * struct modifiers - struct modifiers
 * @mod: modifier
 * @fun: respective function
 */
typedef struct modifiers
{
	char mod;
	void (*fun)(unsigned int *, ...);
} mod_fun;
void (*get_mod_fun(char c))(unsigned int *n, ...);
int get_type(char c);
void print_char(unsigned int *, ...);
void print_str(unsigned int *, ...);
void print_int(unsigned int *, ...);
void print_bin(unsigned int *, ...);
void print_uint(unsigned int *n, ...);
void print_oct(unsigned int *n, ...);
void print_hex(unsigned int *n, ...);
void print_hex_caps(unsigned int *n, ...);
void print_adr(unsigned int *n, ...);
void print_str_hex(unsigned int *n, ...);
void print_rev(unsigned int *n, ...);
void print_rot13(unsigned int *n, ...);

#endif
