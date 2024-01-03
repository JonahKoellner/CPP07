/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:20:54 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 14:31:05 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef> // size_t

template <typename T>
void iter(T *array, size_t length, void (*f)(T &)) {
	for (size_t i = 0; i < length; i++) {
		f(array[i]);
	}
}
