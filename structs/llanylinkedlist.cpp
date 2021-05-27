/*
 * simplelist.h
 *
 *  Created on: Feb 8, 2021
 *      Author: llanyro
 */

#include "llanylinkedlist.h"

namespace Llanylibc {
namespace Structs {

template<class T>
llanyList<T>* newlist() {
	llanyList<T>* l = new llanyList<T>();
	l->length = 0;
	l->raiz = nullptr;
	return l;
}
template<class T>
llanyNode<T>* getNode(const llanyList<T>* l, const len_t& pos) {
	llanyNode<T>* n = nullptr;
	if (pos < l->length) {
		n = l->raiz;
		for (len_t i = 0; i < pos; i++)
			n = n->next;
	}
	return n;
}
template<class T>
T* getValue(const llanyList<T>* l, const len_t& pos) {
	T* result = nullptr;
	if (pos < l->length)
		result = &getNode(l, pos)->item_0;
	return result;
}
template<class T>
void add(llanyList<T>* l, const T& item) {
	llanyNode<T>* n = new llanyNode<T>();
	n->item_0 = item;

	if (l->length == 0)
		l->raiz = n;
	else {
		llanyNode<T>* anterior = getNode(l, l->length - 1);
		anterior->next = n;
	}
	l->length++;
}
template<class T>
ll_bool_t set(const llanyList<T>* l, const len_t& pos, const T& item) {
	ll_bool_t result = true;
	if(pos < l->len)
		getNode(l, pos)->item_0 = item;
	else result = false;
	return result;
}
template<class T>
ll_bool_t contains(const llanyList<T>* l, const T* item) {
	ll_bool_t result = false, continuar = true;
	llanyNode<T>* n = l->raiz;
	while (continuar) {
		if (n == nullptr) continuar = false;
		else if (n->item_0 == *item) {
			continuar = false;
			result = true;
		}
		else n = n->next;
	}
	return result;
}
template<class T>
void removenoderecursive(llanyNode<T>* n) {
	if (n->next != nullptr)
		removenoderecursive(n->next);
	delete n;
}
template<class T>
void removelist(llanyList<T>** l) {
	if ((*l)->raiz != nullptr) removenoderecursive((*l)->raiz);
	(*l)->length = 0;
	delete *l;
	l = nullptr;
}

} /* namespace Structs */
} /* namespace Llanylibc */
