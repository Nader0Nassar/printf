#ifndef _MAIN__H_
#define _MAIN__H_

	#include <stdarg.h>
	#include <stdio.h>
	#include <unistd.h>

	#define LOCAL_BUFFER 1024
	#define minus_Flag 1
	#define plus_Flag 2
	#define zero_Flag 4
	#define hash_Flag 8
	#define space_Flag 16
	#define long_Size 2
	#define short_Size 1
	#define neglect(x) (void)(x)

/**
 * struct format_struct - object of structure.
 * @ft: format.
 * @fun: function.
 */
struct format_struct
{
	char ft;
	int (*fun)(va_list, char B[], int, int, int, int);
};

/**
 * typedef struct format_struct ft_type - object of structure
 * @format_struct: The format.
 * @fm_t: The function associated.
 */
typedef struct format_struct ft_type;

int _printf(const char *format, ...);
int set_type_print(const char *, int *, va_list, char B[], int, int, int, int);
void write_print_BUFF(char B[], int *);
int c_char(va_list, char B[], int, int, int, int);
int s_string(va_list, char B[], int, int, int, int);
int percentage_sign(va_list, char B[], int, int, int, int);
int id_integer(va_list, char B[], int, int, int, int);
int b_binary(va_list, char B[], int, int, int, int);
int u_unsigned(va_list, char B[], int, int, int, int);
int o_octal(va_list, char[], int, int, int, int);
int x_lower_hexadec(va_list, char B[], int, int, int, int);
int X_UPPER_HEXADEC(va_list, char B[], int, int, int, int);
int write_print_hexadec(va_list, char M[], char B[], int, char, int, int, int);
int S_nonprintable(va_list, char B[], int, int, int, int);
int p_pointer(va_list, char B[], int, int, int, int);
int receive_all_flags(const char *, int *);
int receive_width(const char *, int *, va_list);
int receive_precision(const char *, int *, va_list);
int receive_size(const char *, int *);
int r_reverse(va_list, char B[], int, int, int, int);
int R_rot13(va_list, char B[], int, int, int, int);
int write_print_char(char, char B[], int, int, int, int);
int write_print_number(int, int, char BUFF[], int, int, int, int);
int write_print_number_BUFF(int, char B[], int, int, int, int, char, char);
int write_print_pointer(char B[], int, int, int, int, char, char, int);
int write_print_unsgned(int, int, char B[], int, int, int, int);
int printable_checker(char);
int nonprintable_hexa(char, char B[], int);
int digit_checker(char);
long int cast_to_signed_size(long int, int);
long int cast_to_unsigned_size(unsigned long int, int);

#endif
