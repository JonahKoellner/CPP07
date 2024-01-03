/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:09:31 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 17:43:23 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
void printArray(Array<T> &a) {
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}
}

int main ( void ) {
	Array<int> * a = new Array<int>(5);
	Array<int> * b = new Array<int>(10);
	Array<int> * c = new Array<int>();
	printArray(*a);
	printArray(*b);
	printArray(*c);

	return (0);

}
