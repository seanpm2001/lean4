// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Congr
// Imports: Init Lean.Meta.Tactic.Simp.Main Lean.Elab.Tactic.Conv.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__1;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__23;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__17;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__4;
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__3;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__1;
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs_match__1(lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__3;
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__21;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__8;
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__2;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__16;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__1___closed__1;
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalCongr(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___closed__1;
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_Conv_evalArg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__1(lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__5;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__15;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__14;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__6;
lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__15;
extern lean_object* l_Lean_numLitKind;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__10;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18;
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__3;
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__2(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__11;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__22;
lean_object* l_Lean_Meta_Simp_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__1;
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__7;
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___closed__4;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__24;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5;
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___boxed(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__1;
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___closed__1;
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__2;
static lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__2;
lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__2___rarg(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__12;
lean_object* l_Lean_Elab_Tactic_Conv_evalRhs(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Meta_withMVarContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTacticAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__16;
extern lean_object* l_Lean_Meta_instInhabitedParamInfo;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__2;
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs(lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2;
lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___boxed(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__20;
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__10;
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_Conv_evalArg___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__9;
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___closed__1;
lean_object* l_Lean_Meta_Simp_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__4;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__1;
static lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2;
static lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__12;
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__13;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__5;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__11;
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_withIncRecDepth___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalArg_match__1(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__4;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__14;
lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__19;
static lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__8;
static lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__1;
lean_object* l_Lean_Elab_Tactic_Conv_getLhsRhsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__4;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___boxed(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__9;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congr_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_congr_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congr_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___closed__1;
if (x_5 == 0)
{
lean_object* x_12; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_12 = l_Lean_Meta_Simp_mkCongrFun(x_3, x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = lean_apply_9(x_11, x_2, x_13, x_4, x_15, x_6, x_7, x_8, x_9, x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_Expr_mvarId_x21(x_25);
x_27 = lean_array_push(x_2, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_28);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_30 = l_Lean_Meta_Simp_mkCongr(x_3, x_29, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_box(0);
x_34 = lean_apply_9(x_11, x_27, x_31, x_4, x_33, x_6, x_7, x_8, x_9, x_32);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_30);
if (x_35 == 0)
{
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_21);
if (x_39 == 0)
{
return x_21;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_21, 0);
x_41 = lean_ctor_get(x_21, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_21);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_6);
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = lean_infer_type(x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l_Lean_Meta_whnfD(x_16, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Expr_isArrow(x_19);
lean_dec(x_19);
x_22 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2(x_1, x_3, x_4, x_5, x_21, x_7, x_8, x_9, x_10, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_15);
if (x_27 == 0)
{
return x_15;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = l_Lean_Meta_instInhabitedParamInfo;
x_32 = lean_array_get(x_31, x_2, x_5);
lean_dec(x_2);
x_33 = lean_ctor_get_uint8(x_32, sizeof(void*)*1 + 1);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; lean_object* x_35; 
x_34 = 1;
x_35 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2(x_1, x_3, x_4, x_5, x_34, x_7, x_8, x_9, x_10, x_11);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_37 = lean_infer_type(x_36, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_40 = l_Lean_Meta_whnfD(x_38, x_7, x_8, x_9, x_10, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Expr_isArrow(x_41);
lean_dec(x_41);
x_44 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2(x_1, x_3, x_4, x_5, x_43, x_7, x_8, x_9, x_10, x_42);
return x_44;
}
else
{
uint8_t x_45; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_40);
if (x_45 == 0)
{
return x_40;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_40, 0);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_40);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_37);
if (x_49 == 0)
{
return x_37;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_37, 0);
x_51 = lean_ctor_get(x_37, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_37);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Debug");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Meta");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__2;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__4;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__6;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("app [");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("] ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" hasFwdDeps: ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__17;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("false");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__19;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__20;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("true");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__22;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__23;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_4 < x_3;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_13 = lean_array_uget(x_2, x_4);
x_23 = lean_ctor_get(x_5, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_dec(x_5);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__8;
x_88 = lean_st_ref_get(x_9, x_10);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_89, 3);
lean_inc(x_90);
lean_dec(x_89);
x_91 = lean_ctor_get_uint8(x_90, sizeof(void*)*1);
lean_dec(x_90);
if (x_91 == 0)
{
lean_object* x_92; uint8_t x_93; 
x_92 = lean_ctor_get(x_88, 1);
lean_inc(x_92);
lean_dec(x_88);
x_93 = 0;
x_28 = x_93;
x_29 = x_92;
goto block_87;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_88, 1);
lean_inc(x_94);
lean_dec(x_88);
x_95 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_27, x_6, x_7, x_8, x_9, x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_unbox(x_96);
lean_dec(x_96);
x_28 = x_98;
x_29 = x_97;
goto block_87;
}
block_22:
{
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; size_t x_19; size_t x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = 1;
x_20 = x_4 + x_19;
x_4 = x_20;
x_5 = x_18;
x_10 = x_15;
goto _start;
}
}
block_87:
{
if (x_28 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_31 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__3(x_13, x_1, x_23, x_25, x_26, x_30, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_14 = x_32;
x_15 = x_33;
goto block_22;
}
else
{
uint8_t x_34; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
lean_inc(x_26);
x_38 = l_Nat_repr(x_26);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__10;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__12;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_array_get_size(x_1);
x_46 = l_Nat_repr(x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__14;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
lean_inc(x_13);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_13);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__16;
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_Meta_instInhabitedParamInfo;
x_57 = lean_array_get(x_56, x_1, x_26);
x_58 = lean_ctor_get_uint8(x_57, sizeof(void*)*1 + 1);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_59 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__21;
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18;
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_27, x_62, x_6, x_7, x_8, x_9, x_29);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_66 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__3(x_13, x_1, x_23, x_25, x_26, x_64, x_6, x_7, x_8, x_9, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_14 = x_67;
x_15 = x_68;
goto block_22;
}
else
{
uint8_t x_69; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_66);
if (x_69 == 0)
{
return x_66;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_66, 0);
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_66);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__24;
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_55);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18;
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_27, x_76, x_6, x_7, x_8, x_9, x_29);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_80 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__3(x_13, x_1, x_23, x_25, x_26, x_78, x_6, x_7, x_8, x_9, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_14 = x_81;
x_15 = x_82;
goto block_22;
}
else
{
uint8_t x_83; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_80);
if (x_83 == 0)
{
return x_80;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_80, 0);
x_85 = lean_ctor_get(x_80, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_80);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_array_set(x_4, x_5, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_5, x_14);
lean_dec(x_5);
x_3 = x_11;
x_4 = x_13;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
x_17 = lean_array_get_size(x_4);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
lean_inc(x_3);
x_18 = l_Lean_Meta_getFunInfoNArgs(x_3, x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_3);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___closed__1;
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_29 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_30 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1(x_21, x_4, x_28, x_29, x_27, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_4);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_35);
x_36 = l_Lean_Meta_Simp_Result_getProof(x_35, x_6, x_7, x_8, x_9, x_33);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Expr_mvarId_x21(x_2);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = l_Lean_Meta_assignExprMVar(x_39, x_40, x_6, x_7, x_8, x_9, x_38);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_Meta_assignExprMVar(x_1, x_37, x_6, x_7, x_8, x_9, x_42);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
x_46 = lean_array_to_list(lean_box(0), x_34);
lean_ctor_set(x_43, 0, x_46);
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
x_48 = lean_array_to_list(lean_box(0), x_34);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_36);
if (x_50 == 0)
{
return x_36;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_36, 0);
x_52 = lean_ctor_get(x_36, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_36);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_30);
if (x_54 == 0)
{
return x_30;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_30, 0);
x_56 = lean_ctor_get(x_30, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_30);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_18);
if (x_58 == 0)
{
return x_18;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_18, 0);
x_60 = lean_ctor_get(x_18, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_18);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congr___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_mkSort(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Expr_getAppNumArgsAux(x_1, x_10);
x_12 = l_Lean_Elab_Tactic_Conv_congr___lambda__1___closed__1;
lean_inc(x_11);
x_13 = lean_mk_array(x_11, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_11, x_14);
lean_dec(x_11);
x_16 = l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2(x_2, x_3, x_1, x_13, x_15, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_16;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'congr' conv tactic, application expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_congr___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Elab_Tactic_Conv_getLhsRhsCore(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = l_Lean_Expr_isApp(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_11);
lean_dec(x_1);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_10);
x_14 = l_Lean_indentD(x_13);
x_15 = l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__2;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_withIncRecDepth___spec__1(x_18, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l_Lean_Elab_Tactic_Conv_congr___lambda__1(x_10, x_1, x_11, x_24, x_2, x_3, x_4, x_5, x_9);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_7);
if (x_26 == 0)
{
return x_7;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_7, 0);
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_7);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_Conv_congr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congr___lambda__2), 6, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_Meta_withMVarContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__1___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Elab_Tactic_Conv_congr(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Tactic_replaceMainGoal(x_14, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalCongr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalCongr___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_Conv_evalCongr(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__4;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Conv");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__5;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("congr");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Elab");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__11;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__12;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalCongr");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalCongr___boxed), 1, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__9;
x_4 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__15;
x_5 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__16;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_apply_2(x_2, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLhs_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'lhs' conv tactic, binary application expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("refl failed");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Elab_Tactic_Conv_congr(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2;
x_17 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_16, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_14);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_dec(x_13);
x_20 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2;
x_21 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_20, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_dec(x_13);
x_24 = lean_ctor_get(x_14, 0);
lean_inc(x_24);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_dec(x_27);
x_28 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_29 = l_Lean_Meta_applyRefl(x_26, x_28, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_box(0);
lean_ctor_set(x_18, 1, x_31);
lean_ctor_set(x_18, 0, x_24);
x_32 = l_Lean_Elab_Tactic_replaceMainGoal(x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
return x_32;
}
else
{
uint8_t x_33; 
lean_free_object(x_18);
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_29);
if (x_33 == 0)
{
return x_29;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_29, 0);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
lean_inc(x_37);
lean_dec(x_18);
x_38 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_39 = l_Lean_Meta_applyRefl(x_37, x_38, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_24);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Elab_Tactic_replaceMainGoal(x_42, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_ctor_get(x_39, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_46 = x_39;
} else {
 lean_dec_ref(x_39);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_14);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_dec(x_13);
x_49 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2;
x_50 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_49, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_50;
}
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_13);
if (x_51 == 0)
{
return x_13;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_13, 0);
x_53 = lean_ctor_get(x_13, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_13);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_10);
if (x_55 == 0)
{
return x_10;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_10, 0);
x_57 = lean_ctor_get(x_10, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_10);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLhs___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_Conv_evalLhs(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("lhs");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalLhs");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLhs___boxed), 1, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'rhs' conv tactic, binary application expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Elab_Tactic_Conv_congr(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2;
x_17 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_16, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_14);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_dec(x_13);
x_20 = l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2;
x_21 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_20, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_dec(x_13);
x_24 = lean_ctor_get(x_14, 0);
lean_inc(x_24);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_dec(x_27);
x_28 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_29 = l_Lean_Meta_applyRefl(x_24, x_28, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_box(0);
lean_ctor_set(x_18, 1, x_31);
x_32 = l_Lean_Elab_Tactic_replaceMainGoal(x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
return x_32;
}
else
{
uint8_t x_33; 
lean_free_object(x_18);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_29);
if (x_33 == 0)
{
return x_29;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_29, 0);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
lean_inc(x_37);
lean_dec(x_18);
x_38 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_39 = l_Lean_Meta_applyRefl(x_24, x_38, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Elab_Tactic_replaceMainGoal(x_42, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_37);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_ctor_get(x_39, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_46 = x_39;
} else {
 lean_dec_ref(x_39);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_14);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_dec(x_13);
x_49 = l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2;
x_50 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_49, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_50;
}
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_13);
if (x_51 == 0)
{
return x_13;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_13, 0);
x_53 = lean_ctor_get(x_13, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_13);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_10);
if (x_55 == 0)
{
return x_10;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_10, 0);
x_57 = lean_ctor_get(x_10, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_10);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalRhs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalRhs___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_Conv_evalRhs(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rhs");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalRhs");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalRhs___boxed), 1, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_Conv_evalArg___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 2);
lean_inc(x_18);
x_19 = lean_nat_dec_lt(x_16, x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_12);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_3);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_3, 2);
lean_dec(x_22);
x_23 = lean_ctor_get(x_3, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_3, 0);
lean_dec(x_24);
x_25 = lean_nat_add(x_16, x_18);
lean_ctor_set(x_3, 0, x_25);
x_26 = lean_nat_dec_eq(x_1, x_16);
lean_dec(x_16);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_28 = l_Lean_Meta_applyRefl(x_14, x_27, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_2 = x_15;
x_12 = x_29;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_3);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_dec(x_14);
x_2 = x_15;
goto _start;
}
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_3);
x_36 = lean_nat_add(x_16, x_18);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_17);
lean_ctor_set(x_37, 2, x_18);
x_38 = lean_nat_dec_eq(x_1, x_16);
lean_dec(x_16);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_40 = l_Lean_Meta_applyRefl(x_14, x_39, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_2 = x_15;
x_3 = x_37;
x_12 = x_41;
goto _start;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_43 = lean_ctor_get(x_40, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_45 = x_40;
} else {
 lean_dec_ref(x_40);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_dec(x_14);
x_2 = x_15;
x_3 = x_37;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'arg' conv tactic, application has only ");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" (nondependent) arguments");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_1, x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_Elab_Tactic_getMainGoal(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_17 = l_Lean_Elab_Tactic_Conv_congr(x_15, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_List_lengthTRAux___rarg(x_18, x_20);
x_22 = lean_nat_dec_lt(x_13, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_18);
lean_dec(x_13);
x_23 = l_Nat_repr(x_21);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__2;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__4;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_20);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_18);
x_32 = l_List_forIn_loop___at_Lean_Elab_Tactic_Conv_evalArg___spec__1(x_13, x_18, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = l_List_get___rarg(x_18, x_13, lean_box(0));
lean_dec(x_18);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Elab_Tactic_replaceMainGoal(x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_33);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_32);
if (x_38 == 0)
{
return x_32;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_17);
if (x_42 == 0)
{
return x_17;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_14);
if (x_46 == 0)
{
return x_14;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_14, 0);
x_48 = lean_ctor_get(x_14, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_14);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'arg' conv tactic, index must be greater than 0");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_Conv_evalArg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arg");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7;
x_2 = l_Lean_Elab_Tactic_Conv_evalArg___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_Elab_Tactic_Conv_evalArg___closed__4;
lean_inc(x_1);
x_24 = l_Lean_Syntax_isOfKind(x_1, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = l_Lean_Syntax_getArg(x_1, x_26);
lean_dec(x_1);
x_28 = l_Lean_numLitKind;
x_29 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_28, x_27);
lean_dec(x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = lean_unsigned_to_nat(0u);
x_11 = x_30;
goto block_22;
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_11 = x_31;
goto block_22;
}
}
block_22:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Elab_Tactic_Conv_evalArg___lambda__1(x_11, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_11);
x_16 = l_Lean_Elab_Tactic_Conv_evalArg___closed__2;
x_17 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTacticAux___spec__2(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_Conv_evalArg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_loop___at_Lean_Elab_Tactic_Conv_evalArg___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_Conv_evalArg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalArg");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13;
x_2 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalArg), 10, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l_Lean_Elab_Tactic_Conv_evalArg___closed__4;
x_4 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Tactic_Conv_Congr(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___lambda__2___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__7 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__7);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__8 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__8);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__9 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__9();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__9);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__10 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__10();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__10);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__11 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__11();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__11);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__12 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__12();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__12);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__13 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__13();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__13);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__14 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__14();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__14);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__15 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__15();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__15);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__16 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__16();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__16);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__17 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__17();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__17);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__18);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__19 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__19();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__19);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__20 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__20();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__20);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__21 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__21();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__21);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__22 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__22();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__22);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__23 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__23();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__23);
l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__24 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__24();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_Conv_congr___spec__1___closed__24);
l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___closed__1 = _init_l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___closed__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at_Lean_Elab_Tactic_Conv_congr___spec__2___closed__1);
l_Lean_Elab_Tactic_Conv_congr___lambda__1___closed__1 = _init_l_Lean_Elab_Tactic_Conv_congr___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_congr___lambda__1___closed__1);
l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__1 = _init_l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__1);
l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__2 = _init_l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_congr___lambda__2___closed__2);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__1);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__2);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__3);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__4 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__4);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__5 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__5);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__6);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__7);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__8 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__8();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__8);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__9 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__9();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__9);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__10 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__10();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__10);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__11 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__11();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__11);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__12 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__12();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__12);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__13);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__14 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__14();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__14);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__15 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__15();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__15);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__16 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__16();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr___closed__16);
res = l___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__1 = _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__1);
l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2 = _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__2);
l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__3 = _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__3);
l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__4 = _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__4);
l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5 = _init_l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalLhs___rarg___closed__5);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__1);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__2);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__3);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__4 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__4);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__5 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs___closed__5);
res = l___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__1 = _init_l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__1);
l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2 = _init_l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalRhs___rarg___closed__2);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__1);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__2);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__3);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__4 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__4);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__5 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs___closed__5);
res = l___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__1 = _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__1);
l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__2 = _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__2);
l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__3 = _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__3);
l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__4 = _init_l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___lambda__1___closed__4);
l_Lean_Elab_Tactic_Conv_evalArg___closed__1 = _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___closed__1);
l_Lean_Elab_Tactic_Conv_evalArg___closed__2 = _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___closed__2);
l_Lean_Elab_Tactic_Conv_evalArg___closed__3 = _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___closed__3);
l_Lean_Elab_Tactic_Conv_evalArg___closed__4 = _init_l_Lean_Elab_Tactic_Conv_evalArg___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalArg___closed__4);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__1);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__2);
l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg___closed__3);
res = l___regBuiltin_Lean_Elab_Tactic_Conv_evalArg(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif