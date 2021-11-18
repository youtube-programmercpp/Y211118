#include <stdio.h>
#include <ctype.h>
int f(int ch)
{
	/**/ if (isupper((unsigned char)ch)) return _tolower(ch);
	else if (islower((unsigned char)ch)) return _toupper(ch);
	else if (isdigit((unsigned char)ch)) return '*'         ;
	else                                 return ch          ;
}
int main(void) {
	char s[256];
	for (int i = 0;; ++i) {
		if (i < sizeof s - 1) {
			const int ch = getchar();
			if (ch == '\n' || ch == EOF) {
				s[i] = '\0'; //Null•¶Žš
				break;
			}
			else
				s[i] = f(ch);
		}
		else {
			s[i] = '\0'; //Null•¶Žš
			break;
		}
	}
	printf("%s", s);
	return 0;

}
