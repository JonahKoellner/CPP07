/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:23:58 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 14:31:37 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void print(int &i) {
	std::cout << i << std::endl;
}

void inc(int &i) {
	i++;
}

int main( void ) {
	int a[] = {1, 2, 3, 4, 5};
	::iter(a, 5, print);
	::iter(a, 5, inc);
	std::cout << std::endl;
	::iter(a, 5, print);
	return 0;
}
