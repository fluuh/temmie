#include "code.h"

/* used for eventual dumps */
#define IRDEF(ENUM, NAME, FORMAT) NAME ,
const char *const tm_code_name[] = {
#include "ir.def"
};
#undef IRDEF

/* the types of operands
 * "d" - destination register
 * "r" - register
 * "i" - immediate
 * "c" - constant id
 * "f" - function id
 * examples:
 * ADD - "drr"
 * LDI - "di"
 * LDC - "dc"
 */
#define IRDEF(ENUM, NAME, FORMAT) FORMAT ,
const char *const tm_code_format[] = {
#include "ir.def"
};
#undef IRDEF
