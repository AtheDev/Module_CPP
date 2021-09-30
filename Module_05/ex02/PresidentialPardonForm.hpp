/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:42:06 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/28 11:42:09 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <string>
#include <iostream>
#include "Form.hpp"

class   PresidentialPardonForm : public Form {

    public:

        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(PresidentialPardonForm const & cpy);
        virtual ~PresidentialPardonForm(void);

        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

        virtual std::string     getTarget(void) const;

        virtual void            executeAction(std::string target) const;

    private:

        std::string     _target;

};

#endif