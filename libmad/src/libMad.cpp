#include "libMad.h"

int libmad_create_options_dict(OptsDict** opts_ptr) { return 0; }

int libmad_set_int_option(OptsDict* opts_ptr, const char* name, int val) { return 0; }

int libmad_set_long_option(OptsDict* opts_ptr, const char* name, libmad_int val) { return 0; }

int libmad_set_float_option(OptsDict* opts_ptr, const char* name, float val) { return 0; }

int libmad_set_double_option(OptsDict* opts_ptr, const char* name, libmad_real val) { return 0; }

int libmad_set_bool_option(OptsDict* opts_ptr, const char* name, bool val) { return 0; }

int libmad_set_string_option(OptsDict* opts_ptr, const char* name, const char* val) { return 0; }

int libmad_delete_options_dict(OptsDict* stats_ptr) { return 0; }

int libmad_nlpmodel_create(CNLPModel** nlp_ptr_ptr,
                           const char* name,
                           libmad_int nvar, libmad_int ncon,
                           libmad_int nnzj, libmad_int nnzh,
                           NlpConstrJacStructure jac_struct, NlpLagHessStructure hess_struct,
                           NlpEvalObj eval_f, NlpEvalConstr eval_g,
                           NlpEvalObjGrad eval_grad_f, NlpEvalConstrJac eval_jac_g,
                           NlpEvalLagHess eval_h,
                           void* user_data) { return 0;}

int libmad_nlpmodel_set_numerics(CNLPModel* nlp_ptr,
 const libmad_real* x0, const libmad_real* y0,
 const libmad_real* lvar, const libmad_real* uvar,
 const libmad_real* lcon, const libmad_real* ucon
) { return 0; }

int madnlp_get_obj(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_solution(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_constraints(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_multipliers(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_multipliers_L(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_multipliers_U(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_bound_multipliers(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_success(MadNLPExecutionStats* stats_ptr, bool* out) { return 0; }

int madnlp_get_iters(MadNLPExecutionStats* stats_ptr, libmad_int* out) { return 0; }

int madnlp_get_primal_feas(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_dual_feas(MadNLPExecutionStats* stats_ptr, libmad_real* out) { return 0; }

int madnlp_get_status(MadNLPExecutionStats* stats_ptr, libmad_int* out) { return 0; }

int madnlp_delete_stats(MadNLPExecutionStats* stats_ptr) { return 0; }

int madnlp_create_solver(MadNLPSolver** solver_ptr_ptr, CNLPModel* nlp_ptr, OptsDict* opts_ptr) { return 0; }

int madnlp_delete_solver(MadNLPSolver* solver_ptr) { return 0; }

int madnlp_solve(MadNLPSolver* solver_ptr, OptsDict* opts_ptr, MadNLPExecutionStats** stats_ptr_ptr) { return 0; }
