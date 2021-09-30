/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:41:02 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/28 11:41:04 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class   ShrubberyCreationForm : public Form {

    public:

        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string const & target);
        ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

        virtual std::string     getTarget(void) const;

        virtual void            executeAction(std::string target) const;

    private:

        std::string     _target;

};

#endif