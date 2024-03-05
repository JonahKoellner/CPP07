/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:23:58 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/05 16:22:50 by jonahkollne      ###   ########.fr       */
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
	iter(a, 5, print);
	iter(a, 5, inc);
	std::cout << std::endl;
	iter(a, 5, print);
	return 0;
}
