#ifdef LISTS_H
#define LISTS_H

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t listNumber(const list_t *h);

#endif