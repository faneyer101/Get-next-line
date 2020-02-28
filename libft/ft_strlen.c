/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 10:11:40 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/10 19:07:43 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	compteur;

	compteur = 0;
	while (s[compteur])
		compteur++;
	return (compteur);
}
