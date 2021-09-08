/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:25:36 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/07 16:20:54 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class	Animal {

	public:

		Animal(void);
		Animal(Animal const & cpy);
		virtual ~Animal(void);

		Animal &	operator=(Animal const & rhs);

		std::string	getType(void) const;

		virtual void	makeSound(void) const;
		virtual void	setIdeas(std::string const idea, int i);
		virtual void	printIdeas(void) const;

	protected:

		std::string	type;

	private:

};

#endif
