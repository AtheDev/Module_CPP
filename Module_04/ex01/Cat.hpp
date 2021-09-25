/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:48:48 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/17 11:35:27 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class	Cat: public Animal {

	public:

		Cat(void);
		Cat(Cat const & cpy);
		virtual ~Cat(void);

		Cat &	operator=(Cat const & rhs);

		virtual void	makeSound(void) const;

		virtual void	setIdeas(std::string const idea, int i);
		virtual void	printIdeas(void) const;

	private:

		Brain *_brain;

};

#endif
