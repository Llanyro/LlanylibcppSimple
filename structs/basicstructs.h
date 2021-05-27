/*
 * Basic.h
 *
 *  Created on: Jan 19, 2021
 *      Author: llanyro
 */

#ifndef LLANYLIB_CORE_STRUCTS_BASIC_H_
#define LLANYLIB_CORE_STRUCTS_BASIC_H_

#include "../libs/llanytypeslib.h"

#define BASE_STRUCTS Llanylib::Core::Structs

namespace Llanylibc {
namespace Structs {

// Struct para los objetos que sean contables
struct llanyLen { len_t length = 0; };

template<class T, const len_t numReturns>
struct llanyStaticVector { T vector[numReturns]; };

template<class T>
struct llanyContainer { T item_0 = T(); };

template<class T0, class T1>
struct llanyContainerDouble : llanyContainer<T0> { T1 item_1 = T1(); };

template<class T, class T1>
struct cachelist {
	T cache = T();
	T1 position = T1();
};

} /* namespace Structs */
} /* namespace Llanylib */

#endif /* LLANYLIB_CORE_STRUCTS_BASIC_H_ */
