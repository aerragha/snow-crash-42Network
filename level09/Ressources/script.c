/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:55:38 by aerragha          #+#    #+#             */
/*   Updated: 2021/01/07 15:02:39 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char **argv) {
	int i = 0;
	while (argv[1] && argv[1][i]) {
		printf("%c", argv[1][i] - i);
		i++;
	}
	return 0;
}
