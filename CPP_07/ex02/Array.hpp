/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:06:33 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/13 15:34:15 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class	Array
{
	public:
		Array(void) : _array(new T[0]), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(const Array &src) { *this = &src; }
		~Array(void) { delete[] this->_array; }

		Array			&operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				if (this->_array)
					delete[] this->_array;
				this->_array = new T[rhs._size];
				for (int i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];
				this->_size = rhs._size;
			}
			return (*this);
		}

		unsigned int	size(void) const { return (this->_size); }

		class	IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Exception: array index out of bounds");
				}
		};

		T				&operator[](unsigned int idx) const
		{
			if (idx >= this->_size)
				throw IndexOutOfBoundsException();
			return (this->_array[idx]);
		}

	private:
		T					*_array;
		unsigned int		_size;
};

#endif
