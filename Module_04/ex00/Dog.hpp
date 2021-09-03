/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:49:14 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 12:39:21 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog: public Animal {

	public:

		Dog(void);
		Dog(Dog const & cpy);
		virtual ~Dog(void);

		Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;

	private:

};

#endif
