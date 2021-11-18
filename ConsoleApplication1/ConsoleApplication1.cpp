#include <stdio.h>
int main()
{
	for (;;) {
		const int ch = getchar();
		// 改行 [Enter] … '\n'
		if (ch == '\n')
			break;
		else if ('0' <= ch && ch <= '9') //ch が '0'～'9' かどうか
			putchar('*');
		else
			putchar(ch);
	}
}
