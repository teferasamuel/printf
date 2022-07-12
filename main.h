#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 *struct vtype - struct vtype
 *@tp: tp
 *@f: function
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
void format_h(va_list valist, char *buffer, int *index);
void format_ch(va_list valist, char *buffer, int *index);
void format_o(va_list valist, char *buffer, int *index);
void format_b(va_list valist, char *buffer, int *index);
void format_r(va_list valist, char *buffer, int *index);
void format_R(va_list valist, char *buffer, int *index);
void reset_buffer(char buffer[]);
void format_i(va_list valist, char *buffer, int *index);
void format_u(va_list valist, char *buffer, int *index);
void format_perc(va_list valist, char *buffer, int *index);
void format_p(va_list valist, char *buffer, int *index);
void format_lx(va_list valist, char *buffer, int *index);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
void _write_buffer(char *buffer, int *index);
#endif
