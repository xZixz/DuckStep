/*
 * Utils.h
 *
 *  Created on: Mar 20, 2016
 *      Author: KienDu
 */

#ifndef UTILS_H_
#define UTILS_H_

namespace DUtils {
	std::string to_string(int num) {
		std::ostringstream convert;
		convert << num;
		return convert.str();
	}
}



#endif /* UTILS_H_ */
