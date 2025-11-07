#ifndef _LIBMAD_H
#define _LIBMAD_H

#ifdef __cplusplus
extern "C" {
#endif


#include <stdbool.h>
#include <stdint.h>

#define libmad_int int64_t
#define libmad_real double

typedef struct OptsDict OptsDict;
typedef struct CNLPModel CNLPModel;
typedef struct MadNLPExecutionStats MadNLPExecutionStats;
typedef struct MadNLPSolver MadNLPSolver;

int libmad_create_options_dict(OptsDict** opts_ptr);

int libmad_set_int_option(OptsDict* opts_ptr, const char* name, int val);

int libmad_set_long_option(OptsDict* opts_ptr, const char* name, libmad_int val);

int libmad_set_float_option(OptsDict* opts_ptr, const char* name, float val);

int libmad_set_double_option(OptsDict* opts_ptr, const char* name, libmad_real val);

int libmad_set_bool_option(OptsDict* opts_ptr, const char* name, bool val);

int libmad_set_string_option(OptsDict* opts_ptr, const char* name, char* val);

int libmad_delete_options_dict(OptsDict* stats_ptr);

int libmad_nlpmodel_create(CNLPModel** nlp_ptr_ptr,
const char* name,
libmad_int nvar, libmad_int ncon,
libmad_int nnzj, libmad_int nnzh,
void* jac_struct, void* hess_struct,
void* eval_f, void* eval_g,
void* eval_grad_f, void* eval_jac_g,
void* eval_h,
void* user_data);

int libmad_nlpmodel_set_numerics(CNLPModel* nlp_ptr,
 libmad_real* x0, libmad_real* y0,
 libmad_real* lvar, libmad_real* uvar,
 libmad_real* lcon, libmad_real* ucon
);

int madnlp_get_obj(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_solution(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_constraints(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_multipliers(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_multipliers_L(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_multipliers_U(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_bound_multipliers(MadNLPExecutionStats* stats_ptr, libmad_real* out);

int madnlp_get_success(MadNLPExecutionStats* stats_ptr, bool* out);

int madnlp_get_iters(MadNLPExecutionStats* stats_ptr, libmad_int* out);

int madnlp_get_primal_feas(MadNLPExecutionStats* stats_ptr, libmad_int* out);

int madnlp_get_dual_feas(MadNLPExecutionStats* stats_ptr, libmad_int* out);

int madnlp_get_status(MadNLPExecutionStats* stats_ptr, libmad_int* out);

int madnlp_delete_stats(MadNLPExecutionStats* stats_ptr);

int madnlp_create_solver(MadNLPSolver** solver_ptr_ptr, CNLPModel* nlp_ptr, OptsDict* opts_ptr);

int madnlp_delete_solver(MadNLPSolver* solver_ptr);

int madnlp_solve(MadNLPSolver* solver_ptr, OptsDict* opts_ptr, MadNLPExecutionStats** stats_ptr_ptr);

#ifdef __cplusplus
}
#endif

#endif // _LIBMAD_H

