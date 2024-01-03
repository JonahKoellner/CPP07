/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:05:37 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 14:09:41 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min( T &a, T &b ) {
	return (a < b ? a : b);
}

template <typename T>
T max ( T &a, T &b ) {
	return (a > b ? a : b);
}
