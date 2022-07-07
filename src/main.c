#include "lib.h"

int main(void) {
  access_arr_minus_index();
  access_ob_dynamic_size_local_arr();
  access_ob_fixed_local_arr();
  access_ob_global_arr();
  bof_rip();
  bof_str("hoge");
  bof_str_global_var("hoge");
  bounds_check();
  bounds_check_loop();
  divided_by_zero();
  double_free("hoge");
  dynamic_arr_not_gurd();
  heap_overflow("hoge");
  init_size_stdin_malloc();
  integer_overflow();
  integer_overflow_shift();
  memory_leak();
  null_ptr_der();
  uaf();
  use_uninit_dynamic_val();
  use_uninit_global_val();
  use_uninit_local_val();
  return 0;
}