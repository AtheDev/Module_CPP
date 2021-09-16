/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:52:47 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/17 00:23:15 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class	WrongAnimal {

	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & cpy);
		~WrongAnimal(void);

		WrongAnimal &	operator=(WrongAnimal const & rhs);

		std::string	getType(void) const;

		void	makeSound(void) const;

	protected:

		std::string	type;

	private:

};

#endif

