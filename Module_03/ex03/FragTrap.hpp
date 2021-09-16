/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:06:58 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/16 22:56:45 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class	FragTrap: virtual public ClapTrap {

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & cpy);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);

		unsigned int	getHitpointsSave(void) const;
		unsigned int	getAttackDamageSave(void) const;

		void	highFivesGuys(void) const;

	private:

		unsigned int	_hitpointSave;
		unsigned int	_attackDamageSave;

};

#endif
