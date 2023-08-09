/* invert4.c -- 使用位操作显示二进制 */
#include <stdio.h>
#include <limits.h>
char* itobs(int, char*);
void show_bstr(const char*);
int invert_end(int num, int bits);

int main(void) {
	char bin_str[CHAR_BIT * sizeof(int) + 1];

	int number;

	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");
	while (scanf_s("%d", &number) == 1) {
		itobs(number, bin_str);
	}
}