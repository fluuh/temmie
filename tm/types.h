#ifndef TM_TYPES_H_
#define TM_TYPES_H_

typedef enum tm_type_def {
	tm_void,
	tm_i8,
	tm_i16,
	tm_i32,
	tm_i64,
	tm_f32,
	tm_f64,
	tm_ptr,
} tm_type;

const char *tm_type_name(tm_type ty);

#endif
