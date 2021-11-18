#include <stdio.h>

int main(void) {
	char s[5];
	for (int i = 0;; ++i) {
		if (i < sizeof s - 1) {
			const int ch = getchar();
			if (ch == '\n' || ch == EOF) {
				s[i] = '\0'; //Null•¶Žš
				break;
			}
			else if ('a' <= ch && ch <= 'z') s[i] = ch - ('a' - 'A');
			else if ('A' <= ch && ch <= 'Z') s[i] = ch + ('a' - 'A');
			else if ('0' <= ch && ch <= '9') s[i] = '*';
			else
				s[i] = ch;
		} else {
			s[i] = '\0'; //Null•¶Žš
			break;
		}
	}
	printf("%s", s);
	return 0;

}
