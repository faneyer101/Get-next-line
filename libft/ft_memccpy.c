/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 18:59:22 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/10 18:59:34 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*((unsigned char*)dest) = *((unsigned char*)src);
		if (*((unsigned char*)src) == ((unsigned char)c))
			return ((unsigned char*)dest + 1);
		*((unsigned char*)dest) = *((unsigned char*)src);
		dest++;
		src++;
		i++;
	}
	return (NULL);
}
