/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:52:20 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/17 00:17:16 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class	WrongCat: public WrongAnimal {

	public:

		WrongCat(void);
		WrongCat(WrongCat const & cpy);
		~WrongCat(void);

		WrongCat &	operator=(WrongCat const & rhs);

		void	makeSound(void) const;

	private:

};

#endif

