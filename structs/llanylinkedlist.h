/*
 * simplelist.h
 *
 *  Created on: Feb 8, 2021
 *      Author: llanyro
 */

#ifndef LLANYLIB_CORE_STRUCTS_SIMPLELIST_H_
#define LLANYLIB_CORE_STRUCTS_SIMPLELIST_H_

#include "basicstructs.h"

#define SIMPLE_LISTS Llanylibc::Structs

namespace Llanylibc {
namespace Structs {

template<class T>
struct llanyNode : llanyContainer<T> { llanyNode<T>* next = nullptr; };
template<class T>
struct llanyList : llanyLen { llanyNode<T>* raiz = nullptr; };

template<class T>
llanyList<T>* newlist();
template<class T>
llanyNode<T>* getNode(const llanyList<T>* l, const len_t& pos);
template<class T>
T* getValue(const llanyList<T>* l, const len_t& pos);
template<class T>
void add(llanyList<T>* l, const T& item);
template<class T>
ll_bool_t set(const llanyList<T>* l, const len_t& pos, const T& item);
template<class T>
ll_bool_t contains(const llanyList<T>* l, const T* item);
template<class T>
void removenoderecursive(llanyNode<T>* n);
template<class T>
void removelist(llanyList<T>** l);

} /* namespace Structs */
} /* namespace Llanylibc */

#endif /* LLANYLIB_CORE_STRUCTS_SIMPLELIST_H_ */
