
#include "libft.h"
#define S_QUOTE '\''
#define D_QUOTE '\"'

// "\"\"\'\'\'Hi\' fsd "
static char	*verify_word(char *str, char delimiter, char quote, int *count)
{
	while (*str == delimiter)
		str++;
	if (*str == quote)
	{
		str++;
		if (*str == quote)
		{
			str++;
			if (*str == '\0' || *str == delimiter)
				*count += 1;
		}
		else
		{
			while (*str != quote && *str != '\0')
				str++;
			if (*str != '\0')
			{
				str++;
				if (*str == delimiter)
				{
					*count += 1;
					while (*str == delimiter)
						str++;
				}
				else if (*str == '\0')
					*count += 1;
			}
			else
				*count += 1;
		}
	}
	return (str);
}

//  ""''aa
static int	ft_countwords(char *str, char delimiter)
{
	char	**word;
	int		i;
	int		count;

	count = 0;
	while (*str)
	{
		str = verify_word(str, delimiter, S_QUOTE, &count);
		str = verify_word(str, delimiter, D_QUOTE, &count);
		while (*str != S_QUOTE && *str != D_QUOTE && *str && *str != delimiter)
		{
			str++;
			if (*str == '\0' || *str == delimiter)
				count++;
		}
	}
	return (count);
}

char	**ft_split_quote(char *str, char delimiter)
{
	ft_printf("words: %d", ft_countwords(str, delimiter));
}

int	main(void)
{
	char *str = "\'  \' fds \'\'    \'\"ds\'";
	ft_split_quote(str, ' ');
}