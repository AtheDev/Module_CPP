/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:06:58 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/15 14:27:08 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class	FragTrap: public ClapTrap {

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & cpy);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);

		void	highFivesGuys(void) const;

	private:

};

#endif
