#ifndef __CLIB_H__
#define __CLIB_H__

void access_arr_minus_index();
void access_ob_dynamic_size_local_arr();
void access_ob_fixed_local_arr();
void access_ob_global_arr();
void bof_rip();
void bof_str(char *input);
void bof_str_global_var(char *input);
void bounds_check();
void bounds_check_loop();
void divided_by_zero();
void double_free(char *input);
void dynamic_arr_not_gurd();
void heap_overflow(char *input);
void init_size_stdin_malloc();
void integer_overflow();
void integer_overflow_shift();
void memory_leak();
void null_ptr_der();
void uaf();
void use_uninit_dynamic_val();
void use_uninit_global_val();
void use_uninit_local_val();

#endif