/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:16:41 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/08/28 16:50:14 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbrbase(int nb, char *base, int numbr)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbrbase(nb / numbr * -1, base, numbr);
			ft_putchar(base[nb % numbr * -1]);
			return ;
		}
		nb *= -1;
	}
	if (nb > numbr)
		ft_putnbrbase(nb / 10, base, numbr);
	ft_putchar(base[nb % numbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (ft_base(base) == 0)
		return ;
	i = ft_base(base);
	if (!i)
		return ;
	ft_putnbrbase(nbr, base, i);
}
