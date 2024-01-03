/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:09:22 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 17:40:42 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() {
			this->_array = new T[0];
			this->_size = 1;
		}
		Array( unsigned int n ) {
			this->_array = new T[n];
			this->_size = n;
		}
		Array( Array const &src ) {
			this->_array = new T[src._size];
			this->_size = src._size;
			for (unsigned int i = 0; i < src._size; i++) {
				this->_array[i] = src._array[i];
			}
		}
		Array &operator=(Array const &src) {
			if (this != &src) {
				delete [] this->_array;
				this->_array = new T[src._size];
				this->_size = src._size;
				for (unsigned int i = 0; i < src._size; i++) {
					this->_array[i] = src._array[i];
				}
			}
			return (*this);
		}
		T &operator[](unsigned int i) {
			if (i >= this->_size) {
				throw std::exception();
			}
			return (this->_array[i]);
		}
		unsigned int size() {
			return (this->_size);
		}
		~Array() {
			delete [] this->_array;
		}
};
