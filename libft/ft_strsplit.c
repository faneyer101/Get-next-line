/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 19:37:50 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/10 19:11:14 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

static char	**tab_malloc(const char *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return ((char**)malloc(sizeof(char *) * (count + 1)));
}

static char	*remplace_c(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	return (str);
}

static void	ft_ini(size_t *i, int *j)
{
	*i = 0;
	*j = 0;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strsplit;
	char	*strmodify;
	size_t	i;
	int		j;

	if (s == NULL)
		return (NULL);
	strmodify = ft_strdup(s);
	if (!(strsplit = tab_malloc(s, c)))
		return (NULL);
	strmodify = remplace_c(strmodify, c);
	ft_ini(&i, &j);
	while (i < ft_strlen(s))
	{
		if (strmodify[i] == '\0')
			i++;
		else
		{
			strsplit[j] = ft_strdup(&strmodify[i]);
			j++;
			i = i + ft_strlen(&strmodify[i]);
		}
	}
	strsplit[j] = NULL;
	return (strsplit);
}
