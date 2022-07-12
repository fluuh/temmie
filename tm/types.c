#include "types.h"

const char *tm_type_name(tm_type ty)
{
	switch(ty) {
	case(tm_void): return "void";
	case(tm_i8): return "i8";
	case(tm_i16): return "i16";
	case(tm_i32): return "i32";
	case(tm_i64): return "i64";
	default: return "INVALID";
	}
}
