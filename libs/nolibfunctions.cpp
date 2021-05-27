/*
 * nolibfunctions.cpp
 *
 *  Created on: Mar 10, 2021
 *      Author: llanyro
 */

#include "nolibfunctions.h"

#include "memlib.h"
#include "../structs/llanystring.h"

namespace Llanylibc {
namespace Libs {
namespace Nolib {

LLANY_STRING::llanystring* getCommandsMain(int argc, char** argv, const ll_bool_t& ignoreFirst) {
	/*len_t len = 0;
	// Obtenemos el comando a ejecutar...
	for (len_t i = 0 + ignoreFirst; i < argc; i++) {
		//printf("%s", argv[i]);
		len += strlen(argv[i]) + 1;
	}
	//printf("\nContaodr: %i", len);
	LLANY_STRING::llanystring* str = LLANY_STRING::newLlanyString(len);

	len_t puntero = 0, size = 0;
	for (int i = 0 + ignoreFirst; i < argc; i++) {
		size = strlen(argv[i]);
		MEM_LIB::copiarMemoria(str->str + puntero, argv[i], 0, size, sizeof(char));
		puntero += size + 1;
		str->str[puntero - 1] = ' ';
	}
	LLANY_STRING::fixLlanyString(str);

	return str;*/
	return nullptr;
}

} /* namespace Nolib */
} /* namespace Libs */
} /* namespace Llanylibc */
