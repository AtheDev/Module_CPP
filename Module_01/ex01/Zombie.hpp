/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:12:57 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/10 15:42:48 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class	Zombie {

	public:

		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);

	private:

		std::string		_name;

};

Zombie*	zombieHorde(int N, std::string name);

#endif
