/**
 *This function fills the memory with a byte
 */
char *_memset(char *s, char b, unsigned int n);
/**
 *This functions copy a memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 *This function locates a character in string.
 */
char *_strchr(char *s, char c);
/**
 *This function gets the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept);
/**
 *This function locates the first occurence in the string s of any of the bytes in the string accept
 */
char *_strpbrk(char *s, char *accept);
/**
 *This function locates a substring
 */
char *_strstr(char *haystack, char *needle);
