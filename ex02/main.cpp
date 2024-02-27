/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:09:31 by jkollner          #+#    #+#             */
/*   Updated: 2024/02/27 17:16:01 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
void printArray(Array<T> &a) {
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}
	std::cout << "end of the a list" << std::endl;
}

int main ( void ) {
	Array<int> * a = new Array<int>(4);
	Array<int> * b = new Array<int>(3);
	Array<int> * c = new Array<int>();
	printArray(*a);
	(*b)[2] = 3;
	printArray(*b);
	try{
		(*b)[7] = 3;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	printArray(*b);
	(*a)[1] = 6;
	printArray(*a);
	*a = *b;
	printArray(*a);
	(*a)[2] = 4;
	printArray(*b);
	printArray(*a);
	printArray(*c);

	return (0);

}
