/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:50:58 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/07 16:05:31 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# define NB_IDEAS 100
# define SIZE_TAB_IDEAS 10
# include <string>

class	Brain {

	public:

		Brain(void);
		Brain(Brain const & cpy);
		~Brain(void);

		Brain &	operator=(Brain const & rhs);

		std::string	getIdeas(int i) const;
		void		setIdeas(std::string const idea, int i);

	private:

		std::string	_ideas[NB_IDEAS];

};

#endif
