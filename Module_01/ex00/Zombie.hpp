/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:12:57 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/10 11:05:58 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class	Zombie {

	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;

	private:

		std::string		_name;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
