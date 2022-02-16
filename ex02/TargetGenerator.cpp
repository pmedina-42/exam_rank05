/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:47:24 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:28:04 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target) {
	_targets.insert(std::pair<std::string, ATarget*>(target->getType(), target));
}

void TargetGenerator::forgetTargetType(std::string const &tType) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(tType);
	if (it != _targets.end()) {
		delete it->second;
		_targets.erase(tType);
	}
	return ;
}

ATarget* TargetGenerator::createTarget(std::string const &tType) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(tType);
	if (it != _targets.end()) {
		if (!tType.compare("Dummy"))
			return new Dummy();
		if (!tType.compare("BrickWall"))
			return new BrickWall();
	}
	return NULL;
}
