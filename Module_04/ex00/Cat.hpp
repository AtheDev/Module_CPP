/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:48:48 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 12:36:00 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal {

	public:

		Cat(void);
		Cat(Cat const & cpy);
		virtual ~Cat(void);

		Cat &	operator=(Cat const & rhs);

		virtual void	makeSound(void) const;

	private:

};

#endif
