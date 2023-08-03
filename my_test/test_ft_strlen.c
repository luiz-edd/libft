#include "../libft.h"
#include <assert.h>

static	test01(void)
{
	assert(ft_strlen("Hello World!") == 12);
}

void	test_ft_strlen(void)
{
	test01();
}