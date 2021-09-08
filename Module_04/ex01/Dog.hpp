/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:49:14 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/07 17:29:30 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal {

	public:

		Dog(void);
		Dog(Dog const & cpy);
		virtual ~Dog(void);

		Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;

		virtual void	setIdeas(std::string const idea, int i);
		virtual void	printIdeas(void) const;

	private:

		Brain *_brain;

};

#endif
