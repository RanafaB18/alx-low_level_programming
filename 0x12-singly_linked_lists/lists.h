#ifndef LISTS_H
#define LISTS_H
struct list_t {
	char *str;
	int len;
	struct list_t *next;
};
typedef struct list_t list_t;
size_t print_list(const list_t *h);
int _putchar(char c);
#endif
