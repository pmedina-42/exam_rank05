/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 21:20:01 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_H
# define ATARGET_H

#include <string>
#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget {
	private:
		std::string _type;
	
	public:
		ATarget(std::string);
		virtual ~ATarget();
		std::string const& getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(ASpell const&) const;
};

#endif
