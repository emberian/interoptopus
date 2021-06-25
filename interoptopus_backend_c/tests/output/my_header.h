// Automatically generated by Interoptopus.

#ifndef interoptopus_generated
#define interoptopus_generated

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>



const uint8_t MY_LIBRARY_U8 = 255;
const float MY_LIBRARY_F32_MIN_POSITIVE = 0.000000000000000000000000000000000000011754944;
const int32_t MY_LIBRARY_COMPUTED_I32 = -2147483647;

typedef enum my_library_enumdocumented
    {
    MY_LIBRARY_A = 0,
    MY_LIBRARY_B = 1,
    } my_library_enumdocumented;

typedef struct my_library_context my_library_context;
typedef struct my_library_opaque my_library_opaque;
typedef struct my_library_simpleservice my_library_simpleservice;
typedef struct my_library_empty my_library_empty;

typedef enum my_library_ffierror
    {
    MY_LIBRARY_OK = 0,
    MY_LIBRARY_NULL = 100,
    MY_LIBRARY_FAIL = 200,
    } my_library_ffierror;

typedef struct my_library_inner
    {
    float x;
    } my_library_inner;

typedef struct my_library_phantomu8
    {
    uint32_t x;
    } my_library_phantomu8;

typedef struct my_library_someforeigntype
    {
    uint32_t x;
    } my_library_someforeigntype;

typedef struct my_library_structdocumented
    {
    float x;
    } my_library_structdocumented;

typedef struct my_library_tupled
    {
    uint8_t x0;
    } my_library_tupled;

typedef struct my_library_useasciistringpattern
    {
    uint8_t* ascii_string;
    } my_library_useasciistringpattern;

typedef struct my_library_vec
    {
    double x;
    double z;
    } my_library_vec;

typedef struct my_library_vec1
    {
    float x;
    float y;
    } my_library_vec1;

typedef struct my_library_vec2
    {
    double x;
    double z;
    } my_library_vec2;

typedef struct my_library_vec3f32
    {
    float x;
    float y;
    float z;
    } my_library_vec3f32;

typedef uint8_t (*my_library_fptr_fn_u8_rval_u8)(uint8_t x0);

typedef struct my_library_genericu32
    {
    uint32_t* x;
    } my_library_genericu32;

typedef struct my_library_genericu8
    {
    uint8_t* x;
    } my_library_genericu8;

typedef struct my_library_ffisliceu32
    {
    uint32_t* data;
    uint64_t len;
    } my_library_ffisliceu32;

typedef struct my_library_ffisliceu8
    {
    uint8_t* data;
    uint64_t len;
    } my_library_ffisliceu8;

typedef struct my_library_ffioptioninner
    {
    my_library_inner t;
    uint8_t is_some;
    } my_library_ffioptioninner;

typedef uint8_t (*my_library_fptr_fn_FFISliceu8_rval_u8)(my_library_ffisliceu8 x0);

typedef struct my_library_ffislicevec3f32
    {
    my_library_vec3f32* data;
    uint64_t len;
    } my_library_ffislicevec3f32;


void primitive_void();
void primitive_void2();
bool primitive_bool(bool x);
uint8_t primitive_u8(uint8_t x);
uint16_t primitive_u16(uint16_t x);
uint32_t primitive_u32(uint32_t x);
uint64_t primitive_u64(uint64_t x);
int8_t primitive_i8(int8_t x);
int16_t primitive_i16(int16_t x);
int32_t primitive_i32(int32_t x);
int64_t primitive_i64(int64_t x);
int64_t* ptr(int64_t* x);
int64_t* ptr_mut(int64_t* x);
int64_t** ptr_ptr(int64_t** x);
int64_t* ref_simple(int64_t* x);
int64_t* ref_mut_simple(int64_t* x);
bool ref_option(int64_t* x);
bool ref_mut_option(int64_t* x);
my_library_tupled tupled(my_library_tupled x);
my_library_ffierror complex_args_1(my_library_vec3f32 _a, my_library_empty* _b);
my_library_opaque* complex_args_2(my_library_someforeigntype _cmplx);
uint8_t callback(my_library_fptr_fn_u8_rval_u8 callback, uint8_t value);
uint32_t generic_1(my_library_genericu32 x, my_library_phantomu8 _y);
uint8_t generic_2(my_library_genericu8 x, my_library_phantomu8 _y);
my_library_enumdocumented documented(my_library_structdocumented _x);
my_library_vec1 ambiguous_1(my_library_vec1 x);
my_library_vec2 ambiguous_2(my_library_vec2 x);
bool ambiguous_3(my_library_vec1 x, my_library_vec2 y);
my_library_vec namespaced_type(my_library_vec x);
uint32_t pattern_ascii_pointer_1(uint8_t* x);
uint32_t pattern_ascii_pointer_len(uint8_t* x, my_library_useasciistringpattern y);
uint32_t pattern_ffi_slice_1(my_library_ffisliceu32 ffi_slice);
my_library_vec3f32 pattern_ffi_slice_2(my_library_ffislicevec3f32 ffi_slice, int32_t i);
uint8_t pattern_ffi_slice_delegate(my_library_fptr_fn_FFISliceu8_rval_u8 callback);
my_library_ffioptioninner pattern_ffi_option_1(my_library_ffioptioninner ffi_slice);
my_library_inner pattern_ffi_option_2(my_library_ffioptioninner ffi_slice);
my_library_ffierror pattern_service_create(my_library_context** context_ptr, uint32_t value);
my_library_ffierror pattern_service_destroy(my_library_context** context_ptr);
uint32_t pattern_service_method(my_library_context* context);
my_library_ffierror pattern_service_method_success_enum_ok(my_library_context* _context);
my_library_ffierror pattern_service_method_success_enum_fail(my_library_context* _context);
my_library_ffierror simple_service_create(my_library_simpleservice** context_ptr, uint32_t x);
my_library_ffierror simple_service_destroy(my_library_simpleservice** context_ptr);
my_library_ffierror simple_service_result(my_library_simpleservice* context_ptr, uint32_t x);
uint32_t simple_service_value(my_library_simpleservice* context_ptr, uint32_t x);
uint32_t simple_service_mut_self(my_library_simpleservice* context_ptr, uint32_t x);
void simple_service_void(my_library_simpleservice* context_ptr);
uint32_t simple_service_extra_method(my_library_simpleservice* _context);

#ifdef __cplusplus
}
#endif

#endif /* interoptopus_generated */
