#ifndef TM_CODE_H_
#define TM_CODE_H_

#include "common.h"
#include "types.h"

/* IR Instructions
 * Layout in memory:
 *   16    16    16    8    8
 * +-----+-----+-----+----+----+
 * |  A  |  B  |  C  | TY |CODE|
 * +-----+-----+-----+----+----+
 * 
 * A-C  - operands
 * TY   - type of dst
 * CODE - opcode
 */

typedef uint64_t tm_insn;
typedef uint16_t tm_op;

#define TM_INSN_CODE(INSN) ((tm_code)(INSN)&0xFF)
#define TM_INSN_TYPE(INSN) ((tm_code)(((INSN)>>8)&0xFF))
#define TM_INSN_A(INSN) ((tm_op)(((INSN)>>16)&0xFF))
#define TM_INSN_B(INSN) ((tm_op)(((INSN)>>32)&0xFF))
#define TM_INSN_C(INSN) ((tm_op)(((INSN)>>48)&0xFF))

#define TM_INSN(A, B, C, TY, OP) \
	(((tm_insn)(OP))    | \
	 ((tm_insn)(TY)<<8) | \
	 ((tm_insn)(A)<<16) | \
	 ((tm_insn)(B)<<32) | \
	 ((tm_insn)(C)<<48))

#define IRDEF(ENUM, NAME, FORMAT) CODE_##ENUM ,
typedef enum tm_code_def {
#include "ir.def"
} tm_code;
#undef IRDEF

extern const char *const tm_code_name[];
extern const char *const tm_code_format[];

#define TM_CODE_NAME(code) (tm_code_name[code])
#define TM_CODE_FORMAT(code) (tm_code_format[code])

#endif
