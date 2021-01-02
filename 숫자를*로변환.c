#include <stdio.h>
// 입력한 숫자를 *로 변환
int main()
{
	char ch;

	while ((ch = getchar()) != '\n') {
		if (ch >= '0' && ch <= '9')
			ch = '*';
		putchar(ch);
	}
}
