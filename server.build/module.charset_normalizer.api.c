/* Generated code for Python module 'charset_normalizer.api'
 * created by Nuitka version 1.7.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_charset_normalizer$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_charset_normalizer$api;
PyDictObject *moduledict_charset_normalizer$api;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[179];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[179];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("charset_normalizer.api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 179; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_charset_normalizer$api(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 179; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9d10eda05098a59c7abc7d9aa9d2cea0;
static PyCodeObject *codeobj_c30778c2f1cbddb01fba6045f519cf79;
static PyCodeObject *codeobj_468e1ab8e2b8c328b854f48db6102f66;
static PyCodeObject *codeobj_99876afb1fa653a275b66d3af476655f;
static PyCodeObject *codeobj_feed5c0718f64209a535fd717900558d;
static PyCodeObject *codeobj_cdd8a192092107955eb9799562c7247c;
static PyCodeObject *codeobj_6d27057d24d4bd557946251652d42250;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[171]); CHECK_OBJECT(module_filename_obj);
    codeobj_9d10eda05098a59c7abc7d9aa9d2cea0 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_c30778c2f1cbddb01fba6045f519cf79 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[172], mod_consts[172], mod_consts[173], NULL, 1, 0, 0);
    codeobj_468e1ab8e2b8c328b854f48db6102f66 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_99876afb1fa653a275b66d3af476655f = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[119], mod_consts[119], mod_consts[175], NULL, 10, 0, 0);
    codeobj_feed5c0718f64209a535fd717900558d = MAKE_CODE_OBJECT(module_filename_obj, 502, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[125], mod_consts[125], mod_consts[176], NULL, 10, 0, 0);
    codeobj_cdd8a192092107955eb9799562c7247c = MAKE_CODE_OBJECT(module_filename_obj, 532, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[129], mod_consts[177], NULL, 10, 0, 0);
    codeobj_6d27057d24d4bd557946251652d42250 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[170], mod_consts[170], mod_consts[178], NULL, 10, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__1_from_bytes(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__2_from_fp(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__3_from_path(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__4_is_binary(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_charset_normalizer$api$$$function__1_from_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sequences = python_pars[0];
    PyObject *par_steps = python_pars[1];
    PyObject *par_chunk_size = python_pars[2];
    PyObject *par_threshold = python_pars[3];
    PyObject *par_cp_isolation = python_pars[4];
    PyObject *par_cp_exclusion = python_pars[5];
    PyObject *par_preemptive_behaviour = python_pars[6];
    PyObject *par_explain = python_pars[7];
    PyObject *par_language_threshold = python_pars[8];
    PyObject *par_enable_fallback = python_pars[9];
    PyObject *var_previous_logger_level = NULL;
    PyObject *var_length = NULL;
    PyObject *var_is_too_small_sequence = NULL;
    PyObject *var_is_too_large_sequence = NULL;
    PyObject *var_prioritized_encodings = NULL;
    PyObject *var_specified_encoding = NULL;
    PyObject *var_tested = NULL;
    PyObject *var_tested_but_hard_failure = NULL;
    PyObject *var_tested_but_soft_failure = NULL;
    PyObject *var_fallback_ascii = NULL;
    PyObject *var_fallback_u8 = NULL;
    PyObject *var_fallback_specified = NULL;
    PyObject *var_results = NULL;
    PyObject *var_decoded_payload = NULL;
    PyObject *var_bom_or_sig_available = NULL;
    PyObject *var_strip_sig_or_bom = NULL;
    PyObject *var_is_multi_byte_decoder = NULL;
    PyObject *var_similar_soft_failure_test = NULL;
    PyObject *var_multi_byte_bonus = NULL;
    PyObject *var_max_chunk_gave_up = NULL;
    PyObject *var_early_stop_count = NULL;
    PyObject *var_md_chunks = NULL;
    PyObject *var_mean_mess_ratio = NULL;
    PyObject *var_target_languages = NULL;
    PyObject *var_sig_encoding = NULL;
    PyObject *var_sig_payload = NULL;
    PyObject *var_encoding_iana = NULL;
    PyObject *var_e = NULL;
    PyObject *var_encoding_soft_failed = NULL;
    PyObject *var_r_ = NULL;
    PyObject *var_lazy_str_hard_failure = NULL;
    PyObject *var_md_ratios = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_fallback_entry = NULL;
    PyObject *var_cd_ratios = NULL;
    PyObject *var_chunk_languages = NULL;
    PyObject *var_cd_ratios_merged = NULL;
    PyObject *outline_0_var_cp = NULL;
    PyObject *outline_1_var_cp = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_99876afb1fa653a275b66d3af476655f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_9d10eda05098a59c7abc7d9aa9d2cea0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_c30778c2f1cbddb01fba6045f519cf79_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_c30778c2f1cbddb01fba6045f519cf79_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    static struct Nuitka_FrameObject *cache_frame_99876afb1fa653a275b66d3af476655f = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_99876afb1fa653a275b66d3af476655f)) {
        Py_XDECREF(cache_frame_99876afb1fa653a275b66d3af476655f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99876afb1fa653a275b66d3af476655f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99876afb1fa653a275b66d3af476655f = MAKE_FUNCTION_FRAME(codeobj_99876afb1fa653a275b66d3af476655f, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_99876afb1fa653a275b66d3af476655f->m_type_description == NULL);
    frame_99876afb1fa653a275b66d3af476655f = cache_frame_99876afb1fa653a275b66d3af476655f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_99876afb1fa653a275b66d3af476655f);
    assert(Py_REFCNT(frame_99876afb1fa653a275b66d3af476655f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_sequences);
        tmp_isinstance_inst_1 = par_sequences;
        tmp_isinstance_cls_1 = mod_consts[0];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_type_arg_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[1];
        CHECK_OBJECT(par_sequences);
        tmp_type_arg_1 = par_sequences;
        tmp_kw_call_arg_value_1_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_kw_call_arg_value_1_1 == NULL));
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 64;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 64;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_explain);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_explain);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_previous_logger_level == NULL);
        var_previous_logger_level = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 73;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_sequences);
        tmp_len_arg_1 = par_sequences;
        tmp_assign_source_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_left_1 = var_length;
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 78;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_explain);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_explain);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 80;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_previous_logger_level == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_left_value_1 = var_previous_logger_level;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_args_element_value_4 = tmp_or_left_value_1;
        or_end_1:;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 81;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sequences);
        tmp_args_element_value_6 = par_sequences;
        tmp_args_element_value_7 = mod_consts[16];
        tmp_args_element_value_8 = mod_consts[17];
        tmp_args_element_value_9 = Py_False;
        tmp_args_element_value_10 = MAKE_LIST_EMPTY(0);
        tmp_args_element_value_11 = mod_consts[18];
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_5, 0, tmp_list_element_1);
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 82;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_cp_isolation);
        tmp_cmp_expr_left_2 = par_cp_isolation;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[20];
        tmp_str_arg_value_1 = mod_consts[21];
        CHECK_OBJECT(par_cp_isolation);
        tmp_iterable_value_1 = par_cp_isolation;
        tmp_args_element_value_14 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_cp_isolation);
            tmp_iter_arg_1 = par_cp_isolation;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        if (isFrameUnusable(cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2)) {
            Py_XDECREF(cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2 = MAKE_FUNCTION_FRAME(codeobj_9d10eda05098a59c7abc7d9aa9d2cea0, module_charset_normalizer$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2->m_type_description == NULL);
        frame_9d10eda05098a59c7abc7d9aa9d2cea0_2 = cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9d10eda05098a59c7abc7d9aa9d2cea0_2);
        assert(Py_REFCNT(frame_9d10eda05098a59c7abc7d9aa9d2cea0_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 91;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_cp;
                outline_0_var_cp = tmp_assign_source_7;
                Py_INCREF(outline_0_var_cp);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_args_element_value_16;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_cp);
            tmp_args_element_value_15 = outline_0_var_cp;
            tmp_args_element_value_16 = Py_False;
            frame_9d10eda05098a59c7abc7d9aa9d2cea0_2->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
            }

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_3);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9d10eda05098a59c7abc7d9aa9d2cea0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9d10eda05098a59c7abc7d9aa9d2cea0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9d10eda05098a59c7abc7d9aa9d2cea0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9d10eda05098a59c7abc7d9aa9d2cea0_2,
            type_description_2,
            outline_0_var_cp
        );


        // Release cached frame if used for exception.
        if (frame_9d10eda05098a59c7abc7d9aa9d2cea0_2 == cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2);
            cache_frame_9d10eda05098a59c7abc7d9aa9d2cea0_2 = NULL;
        }

        assertFrameObject(frame_9d10eda05098a59c7abc7d9aa9d2cea0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_cp);
        outline_0_var_cp = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_cp);
        outline_0_var_cp = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 91;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_cp_isolation;
            assert(old != NULL);
            par_cp_isolation = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_cp_isolation;
            assert(old != NULL);
            par_cp_isolation = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_end_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_cmp_expr_left_3 = par_cp_exclusion;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[23];
        tmp_str_arg_value_2 = mod_consts[21];
        CHECK_OBJECT(par_cp_exclusion);
        tmp_iterable_value_2 = par_cp_exclusion;
        tmp_args_element_value_19 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_9;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_cp_exclusion);
            tmp_iter_arg_2 = par_cp_exclusion;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_11;
        }
        if (isFrameUnusable(cache_frame_c30778c2f1cbddb01fba6045f519cf79_3)) {
            Py_XDECREF(cache_frame_c30778c2f1cbddb01fba6045f519cf79_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c30778c2f1cbddb01fba6045f519cf79_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c30778c2f1cbddb01fba6045f519cf79_3 = MAKE_FUNCTION_FRAME(codeobj_c30778c2f1cbddb01fba6045f519cf79, module_charset_normalizer$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c30778c2f1cbddb01fba6045f519cf79_3->m_type_description == NULL);
        frame_c30778c2f1cbddb01fba6045f519cf79_3 = cache_frame_c30778c2f1cbddb01fba6045f519cf79_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c30778c2f1cbddb01fba6045f519cf79_3);
        assert(Py_REFCNT(frame_c30778c2f1cbddb01fba6045f519cf79_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 102;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_cp;
                outline_1_var_cp = tmp_assign_source_13;
                Py_INCREF(outline_1_var_cp);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_1_var_cp);
            tmp_args_element_value_20 = outline_1_var_cp;
            tmp_args_element_value_21 = Py_False;
            frame_c30778c2f1cbddb01fba6045f519cf79_3->m_frame.f_lineno = 102;
            {
                PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
            }

            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_9 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c30778c2f1cbddb01fba6045f519cf79_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c30778c2f1cbddb01fba6045f519cf79_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c30778c2f1cbddb01fba6045f519cf79_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c30778c2f1cbddb01fba6045f519cf79_3,
            type_description_2,
            outline_1_var_cp
        );


        // Release cached frame if used for exception.
        if (frame_c30778c2f1cbddb01fba6045f519cf79_3 == cache_frame_c30778c2f1cbddb01fba6045f519cf79_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c30778c2f1cbddb01fba6045f519cf79_3);
            cache_frame_c30778c2f1cbddb01fba6045f519cf79_3 = NULL;
        }

        assertFrameObject(frame_c30778c2f1cbddb01fba6045f519cf79_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_cp);
        outline_1_var_cp = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_cp);
        outline_1_var_cp = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 102;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = par_cp_exclusion;
            assert(old != NULL);
            par_cp_exclusion = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_cp_exclusion;
            assert(old != NULL);
            par_cp_exclusion = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_end_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_left_4 = var_length;
        CHECK_OBJECT(par_chunk_size);
        tmp_mult_expr_left_1 = par_chunk_size;
        CHECK_OBJECT(par_steps);
        tmp_mult_expr_right_1 = par_steps;
        tmp_cmp_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_LE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[19]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = mod_consts[24];
        CHECK_OBJECT(par_steps);
        tmp_args_element_value_24 = par_steps;
        CHECK_OBJECT(par_chunk_size);
        tmp_args_element_value_25 = par_chunk_size;
        CHECK_OBJECT(var_length);
        tmp_args_element_value_26 = var_length;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[25];
        {
            PyObject *old = par_steps;
            assert(old != NULL);
            par_steps = tmp_assign_source_15;
            Py_INCREF(par_steps);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(var_length);
        tmp_assign_source_16 = var_length;
        {
            PyObject *old = par_chunk_size;
            assert(old != NULL);
            par_chunk_size = tmp_assign_source_16;
            Py_INCREF(par_chunk_size);
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (par_steps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_5 = par_steps;
        tmp_cmp_expr_right_5 = mod_consts[25];
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_length == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_1 = var_length;
        if (par_steps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_1 = par_steps;
        tmp_cmp_expr_left_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_chunk_size == NULL) {
            Py_DECREF(tmp_cmp_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_6 = par_chunk_size;
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_8 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        if (var_length == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_2 = var_length;
        if (par_steps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_2 = par_steps;
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_chunk_size;
            par_chunk_size = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_sequences);
        tmp_len_arg_2 = par_sequences;
        tmp_cmp_expr_left_7 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_7);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_too_small_sequence == NULL);
        var_is_too_small_sequence = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(par_sequences);
        tmp_len_arg_3 = par_sequences;
        tmp_cmp_expr_left_8 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
            tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_8);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = RICH_COMPARE_GE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_too_large_sequence == NULL);
        var_is_too_large_sequence = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_is_too_small_sequence);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_is_too_small_sequence);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[31];
        if (var_length == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = var_length;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_is_too_large_sequence);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_is_too_large_sequence);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[19]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[32];
        if (var_length == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_3 = var_length;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_10:;
    branch_end_9:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
        assert(var_prioritized_encodings == NULL);
        var_prioritized_encodings = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_5;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(par_preemptive_behaviour);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_preemptive_behaviour);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sequences);
        tmp_args_element_value_31 = par_sequences;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 141;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_31);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_21 = Py_None;
        Py_INCREF(tmp_assign_source_21);
        condexpr_end_1:;
        assert(var_specified_encoding == NULL);
        var_specified_encoding = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_specified_encoding);
        tmp_cmp_expr_left_9 = var_specified_encoding;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_prioritized_encodings);
        tmp_list_arg_value_1 = var_prioritized_encodings;
        CHECK_OBJECT(var_specified_encoding);
        tmp_item_value_1 = var_specified_encoding;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[19]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = mod_consts[34];
        CHECK_OBJECT(var_specified_encoding);
        tmp_args_element_value_34 = var_specified_encoding;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PySet_New(NULL);
        assert(var_tested == NULL);
        var_tested = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_LIST_EMPTY(0);
        assert(var_tested_but_hard_failure == NULL);
        var_tested_but_hard_failure = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_LIST_EMPTY(0);
        assert(var_tested_but_soft_failure == NULL);
        var_tested_but_soft_failure = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = Py_None;
        assert(var_fallback_ascii == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_fallback_ascii = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_None;
        assert(var_fallback_u8 == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_fallback_u8 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = Py_None;
        assert(var_fallback_specified == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_fallback_specified = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 160;
        tmp_assign_source_28 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_results == NULL);
        var_results = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_sequences);
        tmp_args_element_value_35 = par_sequences;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 162;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_35);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_29 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 162;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 162;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 162;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 162;
            goto try_except_handler_7;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_1__element_1;
        assert(var_sig_encoding == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_sig_encoding = tmp_assign_source_32;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_1__element_2;
        assert(var_sig_payload == NULL);
        Py_INCREF(tmp_assign_source_33);
        var_sig_payload = tmp_assign_source_33;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_sig_encoding);
        tmp_cmp_expr_left_10 = var_sig_encoding;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        if (var_prioritized_encodings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_prioritized_encodings;
        CHECK_OBJECT(var_sig_encoding);
        tmp_item_value_2 = var_sig_encoding;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_args_element_value_39;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[38];
        CHECK_OBJECT(var_sig_payload);
        tmp_len_arg_4 = var_sig_payload;
        tmp_args_element_value_38 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sig_encoding);
        tmp_args_element_value_39 = var_sig_encoding;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_12:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_13;
        if (var_prioritized_encodings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_prioritized_encodings;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[39]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 173;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[40]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        tmp_cmp_expr_left_11 = mod_consts[16];
        if (var_prioritized_encodings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_11 = var_prioritized_encodings;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_14;
        if (var_prioritized_encodings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = var_prioritized_encodings;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[39]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 176;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[41]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (var_prioritized_encodings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_1 = var_prioritized_encodings;
        tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_add_expr_right_1 == NULL)) {
            tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_34;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_35 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 178;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_36 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_encoding_iana;
            var_encoding_iana = tmp_assign_source_36;
            Py_INCREF(var_encoding_iana);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_6;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        if (par_cp_isolation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_truth_name_6 = CHECK_IF_TRUE(par_cp_isolation);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_encoding_iana);
        tmp_cmp_expr_left_12 = var_encoding_iana;
        if (par_cp_isolation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_12 = par_cp_isolation;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_15 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_15 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    goto loop_start_3;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_7;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_cp_exclusion);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_encoding_iana);
        tmp_cmp_expr_left_13 = var_encoding_iana;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_cmp_expr_right_13 = par_cp_exclusion;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_13, tmp_cmp_expr_left_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_16 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_16 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    goto loop_start_3;
    branch_no_15:;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_encoding_iana);
        tmp_cmp_expr_left_14 = var_encoding_iana;
        if (var_tested == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_14 = var_tested;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_17 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    goto loop_start_3;
    branch_no_16:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_40;
        if (var_tested == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_2 = var_tested;
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_40 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 188;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[45], tmp_args_element_value_40);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = Py_None;
        {
            PyObject *old = var_decoded_payload;
            var_decoded_payload = tmp_assign_source_37;
            Py_INCREF(var_decoded_payload);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        if (var_sig_encoding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_15 = var_sig_encoding;
        CHECK_OBJECT(var_encoding_iana);
        tmp_cmp_expr_right_15 = var_encoding_iana;
        tmp_assign_source_38 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_bom_or_sig_available;
            var_bom_or_sig_available = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_41;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_and_left_value_4 = var_bom_or_sig_available;
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_41 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 192;
        tmp_and_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_41);
        if (tmp_and_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_39 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        Py_INCREF(tmp_and_left_value_4);
        tmp_assign_source_39 = tmp_and_left_value_4;
        and_end_4:;
        {
            PyObject *old = var_strip_sig_or_bom;
            var_strip_sig_or_bom = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_18;
        int tmp_and_left_truth_5;
        bool tmp_and_left_value_5;
        bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_encoding_iana);
        tmp_cmp_expr_left_16 = var_encoding_iana;
        tmp_cmp_expr_right_16 = PySet_New(mod_consts[48]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_16, tmp_cmp_expr_left_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_5 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_5 = tmp_and_left_value_5 != false ? 1 : 0;
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_operand_value_2 = var_bom_or_sig_available;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_5 = (tmp_res == 0) ? true : false;
        tmp_condition_result_18 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_18 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[19]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_43 = mod_consts[49];
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_44 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto loop_start_3;
    branch_no_17:;
    {
        bool tmp_condition_result_19;
        int tmp_and_left_truth_6;
        bool tmp_and_left_value_6;
        bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_encoding_iana);
        tmp_cmp_expr_left_17 = var_encoding_iana;
        tmp_cmp_expr_right_17 = PySet_New(mod_consts[50]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_17, tmp_cmp_expr_left_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_6 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_6 = tmp_and_left_value_6 != false ? 1 : 0;
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_operand_value_3 = var_bom_or_sig_available;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_6 = (tmp_res == 0) ? true : false;
        tmp_condition_result_19 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_19 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[19]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_46 = mod_consts[51];
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_47 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto loop_start_3;
    branch_no_18:;
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_48 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 212;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_48);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_is_multi_byte_decoder;
            var_is_multi_byte_decoder = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        tmp_cmp_expr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_18 = mod_consts[53];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[19]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_49 == NULL)) {
            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_value_50 = mod_consts[54];
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_51 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_18);
    }
    goto try_continue_handler_10;
    goto branch_end_19;
    branch_no_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 211;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_99876afb1fa653a275b66d3af476655f->m_frame) frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_19:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // try continue handler code:
    try_continue_handler_10:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto loop_start_3;
    // End of try:
    // End of try:
    try_end_3:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_21;
        int tmp_and_left_truth_7;
        nuitka_bool tmp_and_left_value_7;
        nuitka_bool tmp_and_right_value_7;
        int tmp_truth_name_8;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_is_too_large_sequence);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_is_too_large_sequence);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_and_left_value_7 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT(var_is_multi_byte_decoder);
        tmp_cmp_expr_left_19 = var_is_multi_byte_decoder;
        tmp_cmp_expr_right_19 = Py_False;
        tmp_and_right_value_7 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_21 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_21 = tmp_and_left_value_7;
        and_end_7:;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_unicode_arg_1;
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_unicode_encoding_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_strip_sig_or_bom);
        tmp_cmp_expr_left_20 = var_strip_sig_or_bom;
        tmp_cmp_expr_right_20 = Py_False;
        tmp_condition_result_22 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_19 = par_sequences;
        tmp_subscript_value_1 = mod_consts[56];
        tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_20 = par_sequences;
        if (var_sig_payload == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_len_arg_5 = var_sig_payload;
        tmp_start_value_1 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_start_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_stop_value_1 = mod_consts[58];
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_start_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        condexpr_end_2:;
        CHECK_OBJECT(var_encoding_iana);
        tmp_unicode_encoding_1 = var_encoding_iana;
        tmp_capi_result_1 = BUILTIN_UNICODE3(tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_capi_result_1);
    }
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unicode_arg_2;
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_2;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_unicode_encoding_2;
        CHECK_OBJECT(var_strip_sig_or_bom);
        tmp_cmp_expr_left_21 = var_strip_sig_or_bom;
        tmp_cmp_expr_right_21 = Py_False;
        tmp_condition_result_23 = (tmp_cmp_expr_left_21 == tmp_cmp_expr_right_21) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_unicode_arg_2 = par_sequences;
        Py_INCREF(tmp_unicode_arg_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_21 = par_sequences;
        if (var_sig_payload == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_len_arg_6 = var_sig_payload;
        tmp_start_value_2 = BUILTIN_LEN(tmp_len_arg_6);
        if (tmp_start_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_start_value_2);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_unicode_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        condexpr_end_3:;
        CHECK_OBJECT(var_encoding_iana);
        tmp_unicode_encoding_2 = var_encoding_iana;
        tmp_assign_source_41 = BUILTIN_UNICODE3(tmp_unicode_arg_2, tmp_unicode_encoding_2, NULL);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_decoded_payload;
            assert(old != NULL);
            var_decoded_payload = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    branch_end_20:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        tmp_cmp_expr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_22 = mod_consts[59];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_24 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_42;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_e);
        tmp_isinstance_inst_2 = var_e;
        tmp_isinstance_cls_2 = PyExc_LookupError;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_unicode_arg_3;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[19]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_52 == NULL)) {
            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_value_53 = mod_consts[60];
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_54 = var_encoding_iana;
        CHECK_OBJECT(var_e);
        tmp_unicode_arg_3 = var_e;
        tmp_args_element_value_55 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_no_22:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_56;
        if (var_tested_but_hard_failure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_expression_value_23 = var_tested_but_hard_failure;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[39]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(var_encoding_iana);
        tmp_args_element_value_56 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 244;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto try_continue_handler_13;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_12;
    // try continue handler code:
    try_continue_handler_13:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_continue_handler_12;
    // End of try:
    goto branch_end_21;
    branch_no_21:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 221;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_99876afb1fa653a275b66d3af476655f->m_frame) frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
    branch_end_21:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // try continue handler code:
    try_continue_handler_12:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto loop_start_3;
    // End of try:
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = Py_False;
        {
            PyObject *old = var_similar_soft_failure_test;
            var_similar_soft_failure_test = tmp_assign_source_43;
            Py_INCREF(var_similar_soft_failure_test);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_5;
        if (var_tested_but_soft_failure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_iter_arg_5 = var_tested_but_soft_failure;
        tmp_assign_source_44 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_45 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_45 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 249;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_46 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_encoding_soft_failed;
            var_encoding_soft_failed = tmp_assign_source_46;
            Py_INCREF(var_encoding_soft_failed);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        int tmp_truth_name_9;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_57 = var_encoding_iana;
        CHECK_OBJECT(var_encoding_soft_failed);
        tmp_args_element_value_58 = var_encoding_soft_failed;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_21);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_21);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_26 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_21);
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = Py_True;
        {
            PyObject *old = var_similar_soft_failure_test;
            assert(old != NULL);
            var_similar_soft_failure_test = tmp_assign_source_47;
            Py_INCREF(var_similar_soft_failure_test);
            Py_DECREF(old);
        }

    }
    goto loop_end_4;
    branch_no_23:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 249;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_27;
        CHECK_OBJECT(var_similar_soft_failure_test);
        tmp_condition_result_27 = CHECK_IF_TRUE(var_similar_soft_failure_test) == 1;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[19]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_59 == NULL)) {
            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_60 = mod_consts[65];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_61 = var_encoding_iana;
        if (var_encoding_soft_failed == NULL) {
            Py_DECREF(tmp_called_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_62 = var_encoding_soft_failed;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_22);
    }
    goto loop_start_3;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_xrange_low_1;
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_len_arg_7;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_xrange_step_1;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_operand_value_5 = var_bom_or_sig_available;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_xrange_low_1 = mod_consts[67];
        Py_INCREF(tmp_xrange_low_1);
        goto condexpr_end_4;
        condexpr_false_4:;
        if (var_sig_payload == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_len_arg_7 = var_sig_payload;
        tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_7);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        condexpr_end_4:;
        if (var_length == NULL) {
            Py_DECREF(tmp_xrange_low_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_xrange_high_1 = var_length;
        if (var_length == NULL) {
            Py_DECREF(tmp_xrange_low_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_truediv_expr_left_3 = var_length;
        if (par_steps == NULL) {
            Py_DECREF(tmp_xrange_low_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_truediv_expr_right_3 = par_steps;
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_xrange_step_1 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_xrange_step_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_48 = BUILTIN_XRANGE3(tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
        Py_DECREF(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_step_1);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_r_;
            var_r_ = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        int tmp_and_left_truth_8;
        PyObject *tmp_and_left_value_8;
        PyObject *tmp_and_right_value_8;
        int tmp_and_left_truth_9;
        PyObject *tmp_and_left_value_9;
        PyObject *tmp_and_right_value_9;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        PyObject *tmp_len_arg_8;
        CHECK_OBJECT(var_is_multi_byte_decoder);
        tmp_and_left_value_8 = var_is_multi_byte_decoder;
        tmp_and_left_truth_8 = CHECK_IF_TRUE(tmp_and_left_value_8);
        if (tmp_and_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        CHECK_OBJECT(var_decoded_payload);
        tmp_cmp_expr_left_23 = var_decoded_payload;
        tmp_cmp_expr_right_23 = Py_None;
        tmp_and_left_value_9 = (tmp_cmp_expr_left_23 != tmp_cmp_expr_right_23) ? Py_True : Py_False;
        tmp_and_left_truth_9 = CHECK_IF_TRUE(tmp_and_left_value_9);
        if (tmp_and_left_truth_9 == 1) {
            goto and_right_9;
        } else {
            goto and_left_9;
        }
        and_right_9:;
        CHECK_OBJECT(var_decoded_payload);
        tmp_len_arg_8 = var_decoded_payload;
        tmp_cmp_expr_left_24 = BUILTIN_LEN(tmp_len_arg_8);
        if (tmp_cmp_expr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_length == NULL) {
            Py_DECREF(tmp_cmp_expr_left_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_24 = var_length;
        tmp_and_right_value_9 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        Py_DECREF(tmp_cmp_expr_left_24);
        if (tmp_and_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_8 = tmp_and_right_value_9;
        goto and_end_9;
        and_left_9:;
        Py_INCREF(tmp_and_left_value_9);
        tmp_and_right_value_8 = tmp_and_left_value_9;
        and_end_9:;
        tmp_assign_source_49 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        Py_INCREF(tmp_and_left_value_8);
        tmp_assign_source_49 = tmp_and_left_value_8;
        and_end_8:;
        {
            PyObject *old = var_multi_byte_bonus;
            var_multi_byte_bonus = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_multi_byte_bonus);
        tmp_truth_name_10 = CHECK_IF_TRUE(var_multi_byte_bonus);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_29 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[19]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_63 == NULL)) {
            tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_64 = mod_consts[68];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_65 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_23);
    }
    branch_no_25:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_len_arg_9;
        CHECK_OBJECT(var_r_);
        tmp_len_arg_9 = var_r_;
        tmp_truediv_expr_left_4 = BUILTIN_LEN(tmp_len_arg_9);
        assert(!(tmp_truediv_expr_left_4 == NULL));
        tmp_truediv_expr_right_4 = mod_consts[69];
        tmp_int_arg_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_50 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_max_chunk_gave_up;
            var_max_chunk_gave_up = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[70]);
        assert(tmp_called_value_31 != NULL);
        CHECK_OBJECT(var_max_chunk_gave_up);
        tmp_args_element_value_66 = var_max_chunk_gave_up;
        tmp_args_element_value_67 = mod_consts[71];
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_max_chunk_gave_up;
            assert(old != NULL);
            var_max_chunk_gave_up = tmp_assign_source_51;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[67];
        {
            PyObject *old = var_early_stop_count;
            var_early_stop_count = tmp_assign_source_52;
            Py_INCREF(var_early_stop_count);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = Py_False;
        {
            PyObject *old = var_lazy_str_hard_failure;
            var_lazy_str_hard_failure = tmp_assign_source_53;
            Py_INCREF(var_lazy_str_hard_failure);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_md_chunks;
            var_md_chunks = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_md_ratios;
            var_md_ratios = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_args_element_value_68 = par_sequences;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_args_element_value_69 = var_encoding_iana;
        CHECK_OBJECT(var_r_);
        tmp_args_element_value_70 = var_r_;
        if (par_chunk_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_args_element_value_71 = par_chunk_size;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_args_element_value_72 = var_bom_or_sig_available;
        CHECK_OBJECT(var_strip_sig_or_bom);
        tmp_args_element_value_73 = var_strip_sig_or_bom;
        if (var_sig_payload == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_args_element_value_74 = var_sig_payload;
        CHECK_OBJECT(var_is_multi_byte_decoder);
        tmp_args_element_value_75 = var_is_multi_byte_decoder;
        if (var_decoded_payload == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_args_element_value_76 = var_decoded_payload;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_32, call_args);
        }

        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_56 = MAKE_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_5 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_57 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_57 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 293;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_58 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_58;
            Py_INCREF(var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_77;
        if (var_md_chunks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_26 = var_md_chunks;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[39]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_value_77 = var_chunk;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 304;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        int tmp_and_left_truth_10;
        PyObject *tmp_and_left_value_10;
        PyObject *tmp_and_right_value_10;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        if (var_md_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_27 = var_md_ratios;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[39]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_value_79 = var_chunk;
        if (par_threshold == NULL) {
            Py_DECREF(tmp_called_value_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_args_element_value_80 = par_threshold;
        CHECK_OBJECT(par_explain);
        tmp_cmp_expr_left_25 = par_explain;
        tmp_cmp_expr_right_25 = Py_True;
        tmp_and_left_value_10 = (tmp_cmp_expr_left_25 == tmp_cmp_expr_right_25) ? Py_True : Py_False;
        tmp_and_left_truth_10 = CHECK_IF_TRUE(tmp_and_left_value_10);
        if (tmp_and_left_truth_10 == 1) {
            goto and_right_10;
        } else {
            goto and_left_10;
        }
        and_right_10:;
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_len_arg_10;
            if (par_cp_isolation == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 310;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }

            tmp_len_arg_10 = par_cp_isolation;
            tmp_assign_source_59 = BUILTIN_LEN(tmp_len_arg_10);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_59;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_60;
            nuitka_digit tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            bool tmp_tmp_assign_source_60_cbool_1;
            tmp_cmp_expr_left_26 = 1;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_26 = tmp_comparison_chain_1__operand_2;
            tmp_tmp_assign_source_60_cbool_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_right_26, tmp_cmp_expr_left_26);
            tmp_assign_source_60 = (tmp_tmp_assign_source_60_cbool_1 != false) ? Py_True : Py_False;
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_60;
                Py_INCREF(tmp_comparison_chain_1__comparison_result);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_30;
            PyObject *tmp_operand_value_6;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_6 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_condition_result_30 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_30 != false) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_and_right_value_10 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_and_right_value_10);
        goto try_return_handler_17;
        branch_no_26:;
        {
            PyObject *tmp_cmp_expr_left_27;
            nuitka_digit tmp_cmp_expr_right_27;
            bool tmp_tmp_and_right_value_10_cbool_1;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_27 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_27 = 2;
            tmp_tmp_and_right_value_10_cbool_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
            tmp_and_right_value_10 = (tmp_tmp_and_right_value_10_cbool_1 != false) ? Py_True : Py_False;
            Py_INCREF(tmp_and_right_value_10);
            goto try_return_handler_17;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        tmp_args_element_value_81 = tmp_and_right_value_10;
        goto and_end_10;
        and_left_10:;
        Py_INCREF(tmp_and_left_value_10);
        tmp_args_element_value_81 = tmp_and_left_value_10;
        and_end_10:;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_args_element_value_78 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_35, call_args);
        }

        Py_DECREF(tmp_args_element_value_81);
        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 306;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_78);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_4;
        if (var_md_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_28 = var_md_ratios;
        tmp_subscript_value_4 = mod_consts[78];
        tmp_cmp_expr_left_28 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_4, -1);
        if (tmp_cmp_expr_left_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (par_threshold == NULL) {
            Py_DECREF(tmp_cmp_expr_left_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_cmp_expr_right_28 = par_threshold;
        tmp_condition_result_31 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        Py_DECREF(tmp_cmp_expr_left_28);
        if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_early_stop_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_iadd_expr_left_1 = var_early_stop_count;
        tmp_iadd_expr_right_1 = mod_consts[25];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_61 = tmp_iadd_expr_left_1;
        var_early_stop_count = tmp_assign_source_61;

    }
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_32;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        int tmp_and_left_truth_11;
        nuitka_bool tmp_and_left_value_11;
        nuitka_bool tmp_and_right_value_11;
        int tmp_truth_name_11;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        if (var_early_stop_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_cmp_expr_left_29 = var_early_stop_count;
        CHECK_OBJECT(var_max_chunk_gave_up);
        tmp_cmp_expr_right_29 = var_max_chunk_gave_up;
        tmp_or_left_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_truth_name_11 = CHECK_IF_TRUE(var_bom_or_sig_available);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_and_left_value_11 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_11 = tmp_and_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (tmp_and_left_truth_11 == 1) {
            goto and_right_11;
        } else {
            goto and_left_11;
        }
        and_right_11:;
        CHECK_OBJECT(var_strip_sig_or_bom);
        tmp_cmp_expr_left_30 = var_strip_sig_or_bom;
        tmp_cmp_expr_right_30 = Py_False;
        tmp_and_right_value_11 = (tmp_cmp_expr_left_30 == tmp_cmp_expr_right_30) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_2 = tmp_and_right_value_11;
        goto and_end_11;
        and_left_11:;
        tmp_or_right_value_2 = tmp_and_left_value_11;
        and_end_11:;
        tmp_condition_result_32 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_32 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    goto loop_end_5;
    branch_no_28:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 293;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_15 == NULL) {
        exception_keeper_tb_15 = MAKE_TRACEBACK(frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_15);
    } else if (exception_keeper_lineno_15 != 0) {
        exception_keeper_tb_15 = ADD_TRACEBACK(exception_keeper_tb_15, frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_15);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
    // Tried code:
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        tmp_cmp_expr_left_31 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_31 = PyExc_UnicodeDecodeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_62;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_unicode_arg_4;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[19]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_82 == NULL)) {
            tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_args_element_value_83 = mod_consts[80];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_84 = var_encoding_iana;
        CHECK_OBJECT(var_e);
        tmp_unicode_arg_4 = var_e;
        tmp_args_element_value_85 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_26);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_18;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(var_max_chunk_gave_up);
        tmp_assign_source_63 = var_max_chunk_gave_up;
        {
            PyObject *old = var_early_stop_count;
            var_early_stop_count = tmp_assign_source_63;
            Py_INCREF(var_early_stop_count);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = Py_True;
        {
            PyObject *old = var_lazy_str_hard_failure;
            assert(old != NULL);
            var_lazy_str_hard_failure = tmp_assign_source_64;
            Py_INCREF(var_lazy_str_hard_failure);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_29;
    branch_no_29:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 292;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_99876afb1fa653a275b66d3af476655f->m_frame) frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
    branch_end_29:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_34;
        int tmp_and_left_truth_12;
        nuitka_bool tmp_and_left_value_12;
        nuitka_bool tmp_and_right_value_12;
        PyObject *tmp_operand_value_7;
        int tmp_and_left_truth_13;
        nuitka_bool tmp_and_left_value_13;
        nuitka_bool tmp_and_right_value_13;
        int tmp_truth_name_12;
        PyObject *tmp_operand_value_8;
        CHECK_OBJECT(var_lazy_str_hard_failure);
        tmp_operand_value_7 = var_lazy_str_hard_failure;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_and_left_value_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_12 = tmp_and_left_value_12 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_12 == 1) {
            goto and_right_12;
        } else {
            goto and_left_12;
        }
        and_right_12:;
        CHECK_OBJECT(var_is_too_large_sequence);
        tmp_truth_name_12 = CHECK_IF_TRUE(var_is_too_large_sequence);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_13 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_13 = tmp_and_left_value_13 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_13 == 1) {
            goto and_right_13;
        } else {
            goto and_left_13;
        }
        and_right_13:;
        CHECK_OBJECT(var_is_multi_byte_decoder);
        tmp_operand_value_8 = var_is_multi_byte_decoder;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_13 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_12 = tmp_and_right_value_13;
        goto and_end_13;
        and_left_13:;
        tmp_and_right_value_12 = tmp_and_left_value_13;
        and_end_13:;
        tmp_condition_result_34 = tmp_and_right_value_12;
        goto and_end_12;
        and_left_12:;
        tmp_condition_result_34 = tmp_and_left_value_12;
        and_end_12:;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    // Tried code:
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_expression_value_31 = par_sequences;
        tmp_subscript_value_5 = mod_consts[81];
        tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_5);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[82]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_tuple_element_1 = var_encoding_iana;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[83]);
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 341;
        tmp_call_result_27 = CALL_FUNCTION(tmp_called_value_37, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_27);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_18 == NULL) {
        exception_keeper_tb_18 = MAKE_TRACEBACK(frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_18);
    } else if (exception_keeper_lineno_18 != 0) {
        exception_keeper_tb_18 = ADD_TRACEBACK(exception_keeper_tb_18, frame_99876afb1fa653a275b66d3af476655f, exception_keeper_lineno_18);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
    // Tried code:
    {
        bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        tmp_cmp_expr_left_32 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_32 = PyExc_UnicodeDecodeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_65;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_unicode_arg_5;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[19]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_86 == NULL)) {
            tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_args_element_value_87 = mod_consts[84];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_88 = var_encoding_iana;
        CHECK_OBJECT(var_e);
        tmp_unicode_arg_5 = var_e;
        tmp_args_element_value_89 = BUILTIN_UNICODE1(tmp_unicode_arg_5);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_90;
        if (var_tested_but_hard_failure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_expression_value_33 = var_tested_but_hard_failure;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[39]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_90 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 349;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_29);
    }
    goto try_continue_handler_22;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_21;
    // try continue handler code:
    try_continue_handler_22:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_continue_handler_21;
    // End of try:
    goto branch_end_31;
    branch_no_31:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 340;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_99876afb1fa653a275b66d3af476655f->m_frame) frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
    branch_end_31:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_8;
    // try continue handler code:
    try_continue_handler_21:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto loop_start_3;
    // End of try:
    // End of try:
    try_end_10:;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_66;
        nuitka_bool tmp_condition_result_36;
        int tmp_truth_name_13;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_len_arg_11;
        if (var_md_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_truth_name_13 = CHECK_IF_TRUE(var_md_ratios);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_36 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        if (var_md_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_sum_sequence_1 = var_md_ratios;
        tmp_truediv_expr_left_5 = BUILTIN_SUM1(tmp_sum_sequence_1);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_md_ratios == NULL) {
            Py_DECREF(tmp_truediv_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_len_arg_11 = var_md_ratios;
        tmp_truediv_expr_right_5 = BUILTIN_LEN(tmp_len_arg_11);
        if (tmp_truediv_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_5);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_66 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        Py_DECREF(tmp_truediv_expr_right_5);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_66 = mod_consts[17];
        Py_INCREF(tmp_assign_source_66);
        condexpr_end_5:;
        {
            PyObject *old = var_mean_mess_ratio;
            var_mean_mess_ratio = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_37;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        CHECK_OBJECT(var_mean_mess_ratio);
        tmp_cmp_expr_left_33 = var_mean_mess_ratio;
        if (par_threshold == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_33 = par_threshold;
        tmp_or_left_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (var_early_stop_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_34 = var_early_stop_count;
        if (var_max_chunk_gave_up == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_34 = var_max_chunk_gave_up;
        tmp_or_right_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_37 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_37 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_91;
        if (var_tested_but_soft_failure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_34 = var_tested_but_soft_failure;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[39]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_91 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 354;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[19]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_92 == NULL)) {
            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_93 = mod_consts[86];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_94 = var_encoding_iana;
        if (var_early_stop_count == NULL) {
            Py_DECREF(tmp_called_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_95 = var_early_stop_count;
        tmp_called_value_42 = LOOKUP_BUILTIN(mod_consts[87]);
        assert(tmp_called_value_42 != NULL);
        CHECK_OBJECT(var_mean_mess_ratio);
        tmp_mult_expr_left_2 = var_mean_mess_ratio;
        tmp_mult_expr_right_2 = mod_consts[88];
        tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[89]);
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 361;
        tmp_args_element_value_96 = CALL_FUNCTION(tmp_called_value_42, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        nuitka_bool tmp_condition_result_38;
        int tmp_and_left_truth_14;
        nuitka_bool tmp_and_left_value_14;
        nuitka_bool tmp_and_right_value_14;
        int tmp_truth_name_14;
        int tmp_and_left_truth_15;
        nuitka_bool tmp_and_left_value_15;
        nuitka_bool tmp_and_right_value_15;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        PyObject *tmp_list_element_2;
        PyObject *tmp_operand_value_9;
        CHECK_OBJECT(par_enable_fallback);
        tmp_truth_name_14 = CHECK_IF_TRUE(par_enable_fallback);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_14 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_14 = tmp_and_left_value_14 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_14 == 1) {
            goto and_right_14;
        } else {
            goto and_left_14;
        }
        and_right_14:;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_35 = var_encoding_iana;
        tmp_list_element_2 = mod_consts[90];
        tmp_cmp_expr_right_35 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_cmp_expr_right_35, 0, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[16];
        PyList_SET_ITEM0(tmp_cmp_expr_right_35, 1, tmp_list_element_2);
        if (var_specified_encoding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto list_build_exception_1;
        }

        tmp_list_element_2 = var_specified_encoding;
        PyList_SET_ITEM0(tmp_cmp_expr_right_35, 2, tmp_list_element_2);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_35);
        goto try_except_handler_8;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_35, tmp_cmp_expr_left_35);
        Py_DECREF(tmp_cmp_expr_right_35);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_15 = tmp_and_left_value_15 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_15 == 1) {
            goto and_right_15;
        } else {
            goto and_left_15;
        }
        and_right_15:;
        CHECK_OBJECT(var_lazy_str_hard_failure);
        tmp_operand_value_9 = var_lazy_str_hard_failure;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_and_right_value_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_14 = tmp_and_right_value_15;
        goto and_end_15;
        and_left_15:;
        tmp_and_right_value_14 = tmp_and_left_value_15;
        and_end_15:;
        tmp_condition_result_38 = tmp_and_right_value_14;
        goto and_end_14;
        and_left_14:;
        tmp_condition_result_38 = tmp_and_left_value_14;
        and_end_14:;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (par_sequences == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_97 = par_sequences;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_98 = var_encoding_iana;
        if (par_threshold == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_99 = par_threshold;
        tmp_args_element_value_100 = Py_False;
        tmp_args_element_value_101 = MAKE_LIST_EMPTY(0);
        if (var_decoded_payload == NULL) {
            Py_DECREF(tmp_args_element_value_101);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_102 = var_decoded_payload;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_args_element_value_101);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_fallback_entry;
            var_fallback_entry = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_36 = var_encoding_iana;
        if (var_specified_encoding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_36 = var_specified_encoding;
        tmp_condition_result_39 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        if (tmp_condition_result_39 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(var_fallback_entry);
        tmp_assign_source_68 = var_fallback_entry;
        {
            PyObject *old = var_fallback_specified;
            var_fallback_specified = tmp_assign_source_68;
            Py_INCREF(var_fallback_specified);
            Py_XDECREF(old);
        }

    }
    goto branch_end_34;
    branch_no_34:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_37 = var_encoding_iana;
        tmp_cmp_expr_right_37 = mod_consts[90];
        tmp_condition_result_40 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(var_fallback_entry);
        tmp_assign_source_69 = var_fallback_entry;
        {
            PyObject *old = var_fallback_ascii;
            var_fallback_ascii = tmp_assign_source_69;
            Py_INCREF(var_fallback_ascii);
            Py_XDECREF(old);
        }

    }
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(var_fallback_entry);
        tmp_assign_source_70 = var_fallback_entry;
        {
            PyObject *old = var_fallback_u8;
            var_fallback_u8 = tmp_assign_source_70;
            Py_INCREF(var_fallback_u8);
            Py_XDECREF(old);
        }

    }
    branch_end_35:;
    branch_end_34:;
    branch_no_33:;
    goto loop_start_3;
    branch_no_32:;
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[19]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_103 == NULL)) {
            tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_104 = mod_consts[92];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_105 = var_encoding_iana;
        tmp_called_value_45 = LOOKUP_BUILTIN(mod_consts[87]);
        assert(tmp_called_value_45 != NULL);
        CHECK_OBJECT(var_mean_mess_ratio);
        tmp_mult_expr_left_3 = var_mean_mess_ratio;
        tmp_mult_expr_right_3 = mod_consts[88];
        tmp_tuple_element_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[89]);
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 384;
        tmp_args_element_value_106 = CALL_FUNCTION(tmp_called_value_45, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_10;
        CHECK_OBJECT(var_is_multi_byte_decoder);
        tmp_operand_value_10 = var_is_multi_byte_decoder;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_107;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_107 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 388;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_107);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_target_languages;
            var_target_languages = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    goto branch_end_36;
    branch_no_36:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_108;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_108 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 390;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_108);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_target_languages;
            var_target_languages = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    branch_end_36:;
    {
        nuitka_bool tmp_condition_result_42;
        int tmp_truth_name_15;
        CHECK_OBJECT(var_target_languages);
        tmp_truth_name_15 = CHECK_IF_TRUE(var_target_languages);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_42 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_unicode_arg_6;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[19]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_109 == NULL)) {
            tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[95];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_kw_call_arg_value_1_4 = var_encoding_iana;
        CHECK_OBJECT(var_target_languages);
        tmp_unicode_arg_6 = var_target_languages;
        tmp_kw_call_arg_value_2_1 = BUILTIN_UNICODE1(tmp_unicode_arg_6);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_1};
            tmp_args_element_value_110 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110};
            tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_48, call_args);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_33);
    }
    branch_no_37:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_cd_ratios;
            var_cd_ratios = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_38 = var_encoding_iana;
        tmp_cmp_expr_right_38 = mod_consts[90];
        tmp_condition_result_43 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        if (tmp_condition_result_43 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_iter_arg_7;
        if (var_md_chunks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_iter_arg_7 = var_md_chunks;
        tmp_assign_source_74 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_6 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_75 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_75 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 405;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_76 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_76;
            Py_INCREF(var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_16;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_value_111 = var_chunk;
        if (par_language_threshold == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_112 = par_language_threshold;
        CHECK_OBJECT(var_target_languages);
        tmp_truth_name_16 = CHECK_IF_TRUE(var_target_languages);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_condition_result_44 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        tmp_str_arg_value_3 = mod_consts[98];
        CHECK_OBJECT(var_target_languages);
        tmp_iterable_value_3 = var_target_languages;
        tmp_args_element_value_113 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_args_element_value_113 = Py_None;
        Py_INCREF(tmp_args_element_value_113);
        condexpr_end_6:;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_49, call_args);
        }

        Py_DECREF(tmp_args_element_value_113);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_chunk_languages;
            var_chunk_languages = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_114;
        if (var_cd_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_38 = var_cd_ratios;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[39]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_chunk_languages);
        tmp_args_element_value_114 = var_chunk_languages;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 412;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_114);
        Py_DECREF(tmp_called_value_50);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_34);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 405;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_115;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_cd_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_115 = var_cd_ratios;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 414;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_115);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_cd_ratios_merged;
            var_cd_ratios_merged = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_17;
        CHECK_OBJECT(var_cd_ratios_merged);
        tmp_truth_name_17 = CHECK_IF_TRUE(var_cd_ratios_merged);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_45 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_2;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[19]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_116 == NULL)) {
            tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[101];
        CHECK_OBJECT(var_cd_ratios_merged);
        tmp_kw_call_arg_value_1_5 = var_cd_ratios_merged;
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_52);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_kw_call_arg_value_2_2 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_2};
            tmp_args_element_value_117 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_35);
    }
    branch_no_39:;
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_40 = var_results;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[39]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (par_sequences == NULL) {
            Py_DECREF(tmp_called_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_119 = par_sequences;
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_120 = var_encoding_iana;
        CHECK_OBJECT(var_mean_mess_ratio);
        tmp_args_element_value_121 = var_mean_mess_ratio;
        CHECK_OBJECT(var_bom_or_sig_available);
        tmp_args_element_value_122 = var_bom_or_sig_available;
        CHECK_OBJECT(var_cd_ratios_merged);
        tmp_args_element_value_123 = var_cd_ratios_merged;
        if (var_decoded_payload == NULL) {
            Py_DECREF(tmp_called_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_124 = var_decoded_payload;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_args_element_value_118 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_54, call_args);
        }

        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 424;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_118);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        nuitka_bool tmp_condition_result_46;
        int tmp_and_left_truth_16;
        nuitka_bool tmp_and_left_value_16;
        nuitka_bool tmp_and_right_value_16;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        PyObject *tmp_list_element_3;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_39 = var_encoding_iana;
        if (var_specified_encoding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_list_element_3 = var_specified_encoding;
        tmp_cmp_expr_right_39 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_cmp_expr_right_39, 0, tmp_list_element_3);
        tmp_list_element_3 = mod_consts[90];
        PyList_SET_ITEM0(tmp_cmp_expr_right_39, 1, tmp_list_element_3);
        tmp_list_element_3 = mod_consts[16];
        PyList_SET_ITEM0(tmp_cmp_expr_right_39, 2, tmp_list_element_3);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_39, tmp_cmp_expr_left_39);
        Py_DECREF(tmp_cmp_expr_right_39);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_left_value_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_16 = tmp_and_left_value_16 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_16 == 1) {
            goto and_right_16;
        } else {
            goto and_left_16;
        }
        and_right_16:;
        CHECK_OBJECT(var_mean_mess_ratio);
        tmp_cmp_expr_left_40 = var_mean_mess_ratio;
        tmp_cmp_expr_right_40 = mod_consts[103];
        tmp_and_right_value_16 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        if (tmp_and_right_value_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_46 = tmp_and_right_value_16;
        goto and_end_16;
        and_left_16:;
        tmp_condition_result_46 = tmp_and_left_value_16;
        and_end_16:;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[8]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_125 = mod_consts[104];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_55);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_126 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
        }

        Py_DECREF(tmp_called_value_55);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        nuitka_bool tmp_condition_result_47;
        int tmp_truth_name_18;
        CHECK_OBJECT(par_explain);
        tmp_truth_name_18 = CHECK_IF_TRUE(par_explain);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_47 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_127;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[10]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_127 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_127 == NULL)) {
            tmp_args_element_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 443;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_127);
        Py_DECREF(tmp_called_value_56);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_128;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[6]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_previous_logger_level == NULL) {
            Py_DECREF(tmp_called_value_57);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_128 = var_previous_logger_level;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 444;
        tmp_call_result_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_128);
        Py_DECREF(tmp_called_value_57);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_no_41:;
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_44 = var_results;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_subscript_value_6 = var_encoding_iana;
        tmp_list_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_6);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_129 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_129, 0, tmp_list_element_4);
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 445;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_129);
        Py_DECREF(tmp_args_element_value_129);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto try_return_handler_8;
    }
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_41 = var_encoding_iana;
        if (var_sig_encoding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_41 = var_sig_encoding;
        tmp_condition_result_48 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_args_element_value_131;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[8]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_130 = mod_consts[105];
        if (var_encoding_iana == NULL) {
            Py_DECREF(tmp_called_value_59);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_131 = var_encoding_iana;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = {tmp_args_element_value_130, tmp_args_element_value_131};
            tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_59, call_args);
        }

        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_19;
        CHECK_OBJECT(par_explain);
        tmp_truth_name_19 = CHECK_IF_TRUE(par_explain);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_49 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_132;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[10]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_132 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_132 == NULL)) {
            tmp_args_element_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 454;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_132);
        Py_DECREF(tmp_called_value_60);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_133;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[6]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_previous_logger_level == NULL) {
            Py_DECREF(tmp_called_value_61);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_133 = var_previous_logger_level;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 455;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_133);
        Py_DECREF(tmp_called_value_61);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_42);
    }
    branch_no_43:;
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_list_element_5;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_7;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_48 = var_results;
        if (var_encoding_iana == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_subscript_value_7 = var_encoding_iana;
        tmp_list_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_7);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_134 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_134, 0, tmp_list_element_5);
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 456;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_134);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto try_return_handler_8;
    }
    branch_no_42:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 178;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_50;
        PyObject *tmp_cmp_expr_left_42;
        nuitka_digit tmp_cmp_expr_right_42;
        PyObject *tmp_len_arg_12;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 458;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_12 = var_results;
        tmp_cmp_expr_left_42 = BUILTIN_LEN(tmp_len_arg_12);
        if (tmp_cmp_expr_left_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_42 = 0;
        tmp_condition_result_50 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        Py_DECREF(tmp_cmp_expr_left_42);
        if (tmp_condition_result_50 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        nuitka_bool tmp_condition_result_51;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        int tmp_truth_name_20;
        int tmp_or_left_truth_5;
        nuitka_bool tmp_or_left_value_5;
        nuitka_bool tmp_or_right_value_5;
        int tmp_truth_name_21;
        int tmp_truth_name_22;
        if (var_fallback_u8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_20 = CHECK_IF_TRUE(var_fallback_u8);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        if (var_fallback_ascii == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_21 = CHECK_IF_TRUE(var_fallback_ascii);
        if (tmp_truth_name_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_5 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        if (var_fallback_specified == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_22 = CHECK_IF_TRUE(var_fallback_specified);
        if (tmp_truth_name_22 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_5 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_right_value_4 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_or_right_value_4 = tmp_or_left_value_5;
        or_end_5:;
        tmp_condition_result_51 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_51 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_args_element_value_136;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[19]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_135 == NULL)) {
            tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = mod_consts[109];
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_63, call_args);
        }

        Py_DECREF(tmp_called_value_63);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    branch_no_45:;
    {
        nuitka_bool tmp_condition_result_52;
        int tmp_truth_name_23;
        if (var_fallback_specified == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_23 = CHECK_IF_TRUE(var_fallback_specified);
        if (tmp_truth_name_23 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[8]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_137 = mod_consts[110];
        if (var_fallback_specified == NULL) {
            Py_DECREF(tmp_called_value_64);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_51 = var_fallback_specified;
        tmp_args_element_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[111]);
        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_64, call_args);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_138);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_139;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = var_results;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[39]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_fallback_specified == NULL) {
            Py_DECREF(tmp_called_value_65);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_139 = var_fallback_specified;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 470;
        tmp_call_result_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_139);
        Py_DECREF(tmp_called_value_65);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    goto branch_end_46;
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_53;
        int tmp_or_left_truth_6;
        nuitka_bool tmp_or_left_value_6;
        nuitka_bool tmp_or_right_value_6;
        int tmp_and_left_truth_17;
        nuitka_bool tmp_and_left_value_17;
        nuitka_bool tmp_and_right_value_17;
        int tmp_truth_name_24;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        int tmp_or_left_truth_7;
        nuitka_bool tmp_or_left_value_7;
        nuitka_bool tmp_or_right_value_7;
        int tmp_and_left_truth_18;
        nuitka_bool tmp_and_left_value_18;
        nuitka_bool tmp_and_right_value_18;
        int tmp_truth_name_25;
        int tmp_and_left_truth_19;
        nuitka_bool tmp_and_left_value_19;
        nuitka_bool tmp_and_right_value_19;
        int tmp_truth_name_26;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        if (var_fallback_u8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_24 = CHECK_IF_TRUE(var_fallback_u8);
        if (tmp_truth_name_24 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_17 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_17 = tmp_and_left_value_17 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_17 == 1) {
            goto and_right_17;
        } else {
            goto and_left_17;
        }
        and_right_17:;
        if (var_fallback_ascii == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_43 = var_fallback_ascii;
        tmp_cmp_expr_right_43 = Py_None;
        tmp_and_right_value_17 = (tmp_cmp_expr_left_43 == tmp_cmp_expr_right_43) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_6 = tmp_and_right_value_17;
        goto and_end_17;
        and_left_17:;
        tmp_or_left_value_6 = tmp_and_left_value_17;
        and_end_17:;
        tmp_or_left_truth_6 = tmp_or_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        if (var_fallback_u8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_25 = CHECK_IF_TRUE(var_fallback_u8);
        if (tmp_truth_name_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_18 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_18 = tmp_and_left_value_18 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_18 == 1) {
            goto and_right_18;
        } else {
            goto and_left_18;
        }
        and_right_18:;
        if (var_fallback_ascii == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_26 = CHECK_IF_TRUE(var_fallback_ascii);
        if (tmp_truth_name_26 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_19 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_19 = tmp_and_left_value_19 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_19 == 1) {
            goto and_right_19;
        } else {
            goto and_left_19;
        }
        and_right_19:;
        if (var_fallback_u8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_53 = var_fallback_u8;
        tmp_cmp_expr_left_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[112]);
        if (tmp_cmp_expr_left_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_fallback_ascii == NULL) {
            Py_DECREF(tmp_cmp_expr_left_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_54 = var_fallback_ascii;
        tmp_cmp_expr_right_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[112]);
        if (tmp_cmp_expr_right_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_44);

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_19 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        Py_DECREF(tmp_cmp_expr_left_44);
        Py_DECREF(tmp_cmp_expr_right_44);
        if (tmp_and_right_value_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_18 = tmp_and_right_value_19;
        goto and_end_19;
        and_left_19:;
        tmp_and_right_value_18 = tmp_and_left_value_19;
        and_end_19:;
        tmp_or_left_value_7 = tmp_and_right_value_18;
        goto and_end_18;
        and_left_18:;
        tmp_or_left_value_7 = tmp_and_left_value_18;
        and_end_18:;
        tmp_or_left_truth_7 = tmp_or_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        if (var_fallback_u8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_45 = var_fallback_u8;
        tmp_cmp_expr_right_45 = Py_None;
        tmp_or_right_value_7 = (tmp_cmp_expr_left_45 != tmp_cmp_expr_right_45) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_6 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_or_right_value_6 = tmp_or_left_value_7;
        or_end_7:;
        tmp_condition_result_53 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_condition_result_53 = tmp_or_left_value_6;
        or_end_6:;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_46;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 480;
        tmp_call_result_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[113], 0)
        );

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_140;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_55 = var_results;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[39]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_fallback_u8 == NULL) {
            Py_DECREF(tmp_called_value_66);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_140 = var_fallback_u8;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 481;
        tmp_call_result_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_140);
        Py_DECREF(tmp_called_value_66);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    goto branch_end_47;
    branch_no_47:;
    {
        nuitka_bool tmp_condition_result_54;
        int tmp_truth_name_27;
        if (var_fallback_ascii == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_27 = CHECK_IF_TRUE(var_fallback_ascii);
        if (tmp_truth_name_27 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_54 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_48;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 483;
        tmp_call_result_48 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[114], 0)
        );

        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_141;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = var_results;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[39]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_fallback_ascii == NULL) {
            Py_DECREF(tmp_called_value_67);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_141 = var_fallback_ascii;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 484;
        tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_141);
        Py_DECREF(tmp_called_value_67);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    branch_no_48:;
    branch_end_47:;
    branch_end_46:;
    branch_no_44:;
    {
        nuitka_bool tmp_condition_result_55;
        int tmp_truth_name_28;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_28 = CHECK_IF_TRUE(var_results);
        if (tmp_truth_name_28 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_55 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_13;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[8]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = mod_consts[115];
        if (var_results == NULL) {
            Py_DECREF(tmp_called_value_68);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_results;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 489;
        tmp_expression_value_58 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[116]);
        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 489;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[111]);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 489;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_results == NULL) {
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_143);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_13 = var_results;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_13);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_143);

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = 1;
        tmp_args_element_value_144 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_args_element_value_144 == NULL));
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_68, call_args);
        }

        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_143);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_51;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 493;
        tmp_call_result_51 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[117], 0)
        );

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    branch_end_49:;
    {
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_29;
        CHECK_OBJECT(par_explain);
        tmp_truth_name_29 = CHECK_IF_TRUE(par_explain);
        if (tmp_truth_name_29 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_56 = tmp_truth_name_29 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_145;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[10]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_145 == NULL)) {
            tmp_args_element_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 496;
        tmp_call_result_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_145);
        Py_DECREF(tmp_called_value_69);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_146;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[6]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_previous_logger_level == NULL) {
            Py_DECREF(tmp_called_value_70);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_146 = var_previous_logger_level;
        frame_99876afb1fa653a275b66d3af476655f->m_frame.f_lineno = 497;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_146);
        Py_DECREF(tmp_called_value_70);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    branch_no_50:;
    if (var_results == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 499;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_results;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_99876afb1fa653a275b66d3af476655f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99876afb1fa653a275b66d3af476655f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99876afb1fa653a275b66d3af476655f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99876afb1fa653a275b66d3af476655f,
        type_description_1,
        par_sequences,
        par_steps,
        par_chunk_size,
        par_threshold,
        par_cp_isolation,
        par_cp_exclusion,
        par_preemptive_behaviour,
        par_explain,
        par_language_threshold,
        par_enable_fallback,
        var_previous_logger_level,
        var_length,
        var_is_too_small_sequence,
        var_is_too_large_sequence,
        var_prioritized_encodings,
        var_specified_encoding,
        var_tested,
        var_tested_but_hard_failure,
        var_tested_but_soft_failure,
        var_fallback_ascii,
        var_fallback_u8,
        var_fallback_specified,
        var_results,
        var_decoded_payload,
        var_bom_or_sig_available,
        var_strip_sig_or_bom,
        var_is_multi_byte_decoder,
        var_similar_soft_failure_test,
        var_multi_byte_bonus,
        var_max_chunk_gave_up,
        var_early_stop_count,
        var_md_chunks,
        var_mean_mess_ratio,
        var_target_languages,
        var_sig_encoding,
        var_sig_payload,
        var_encoding_iana,
        var_e,
        var_encoding_soft_failed,
        var_r_,
        var_lazy_str_hard_failure,
        var_md_ratios,
        var_chunk,
        var_fallback_entry,
        var_cd_ratios,
        var_chunk_languages,
        var_cd_ratios_merged
    );


    // Release cached frame if used for exception.
    if (frame_99876afb1fa653a275b66d3af476655f == cache_frame_99876afb1fa653a275b66d3af476655f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_99876afb1fa653a275b66d3af476655f);
        cache_frame_99876afb1fa653a275b66d3af476655f = NULL;
    }

    assertFrameObject(frame_99876afb1fa653a275b66d3af476655f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_steps);
    par_steps = NULL;
    Py_XDECREF(par_chunk_size);
    par_chunk_size = NULL;
    Py_XDECREF(par_cp_isolation);
    par_cp_isolation = NULL;
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    par_cp_exclusion = NULL;
    Py_XDECREF(var_previous_logger_level);
    var_previous_logger_level = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_is_too_small_sequence);
    var_is_too_small_sequence = NULL;
    Py_XDECREF(var_is_too_large_sequence);
    var_is_too_large_sequence = NULL;
    Py_XDECREF(var_prioritized_encodings);
    var_prioritized_encodings = NULL;
    Py_XDECREF(var_specified_encoding);
    var_specified_encoding = NULL;
    Py_XDECREF(var_tested);
    var_tested = NULL;
    Py_XDECREF(var_tested_but_hard_failure);
    var_tested_but_hard_failure = NULL;
    Py_XDECREF(var_tested_but_soft_failure);
    var_tested_but_soft_failure = NULL;
    Py_XDECREF(var_fallback_ascii);
    var_fallback_ascii = NULL;
    Py_XDECREF(var_fallback_u8);
    var_fallback_u8 = NULL;
    Py_XDECREF(var_fallback_specified);
    var_fallback_specified = NULL;
    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_decoded_payload);
    var_decoded_payload = NULL;
    Py_XDECREF(var_bom_or_sig_available);
    var_bom_or_sig_available = NULL;
    Py_XDECREF(var_strip_sig_or_bom);
    var_strip_sig_or_bom = NULL;
    Py_XDECREF(var_is_multi_byte_decoder);
    var_is_multi_byte_decoder = NULL;
    Py_XDECREF(var_similar_soft_failure_test);
    var_similar_soft_failure_test = NULL;
    Py_XDECREF(var_multi_byte_bonus);
    var_multi_byte_bonus = NULL;
    Py_XDECREF(var_max_chunk_gave_up);
    var_max_chunk_gave_up = NULL;
    Py_XDECREF(var_early_stop_count);
    var_early_stop_count = NULL;
    Py_XDECREF(var_md_chunks);
    var_md_chunks = NULL;
    Py_XDECREF(var_mean_mess_ratio);
    var_mean_mess_ratio = NULL;
    Py_XDECREF(var_target_languages);
    var_target_languages = NULL;
    Py_XDECREF(var_sig_encoding);
    var_sig_encoding = NULL;
    Py_XDECREF(var_sig_payload);
    var_sig_payload = NULL;
    Py_XDECREF(var_encoding_iana);
    var_encoding_iana = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_encoding_soft_failed);
    var_encoding_soft_failed = NULL;
    Py_XDECREF(var_r_);
    var_r_ = NULL;
    Py_XDECREF(var_lazy_str_hard_failure);
    var_lazy_str_hard_failure = NULL;
    Py_XDECREF(var_md_ratios);
    var_md_ratios = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_fallback_entry);
    var_fallback_entry = NULL;
    Py_XDECREF(var_cd_ratios);
    var_cd_ratios = NULL;
    Py_XDECREF(var_chunk_languages);
    var_chunk_languages = NULL;
    Py_XDECREF(var_cd_ratios_merged);
    var_cd_ratios_merged = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_steps);
    par_steps = NULL;
    Py_XDECREF(par_chunk_size);
    par_chunk_size = NULL;
    Py_XDECREF(par_cp_isolation);
    par_cp_isolation = NULL;
    Py_XDECREF(par_cp_exclusion);
    par_cp_exclusion = NULL;
    Py_XDECREF(var_previous_logger_level);
    var_previous_logger_level = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_is_too_small_sequence);
    var_is_too_small_sequence = NULL;
    Py_XDECREF(var_is_too_large_sequence);
    var_is_too_large_sequence = NULL;
    Py_XDECREF(var_prioritized_encodings);
    var_prioritized_encodings = NULL;
    Py_XDECREF(var_specified_encoding);
    var_specified_encoding = NULL;
    Py_XDECREF(var_tested);
    var_tested = NULL;
    Py_XDECREF(var_tested_but_hard_failure);
    var_tested_but_hard_failure = NULL;
    Py_XDECREF(var_tested_but_soft_failure);
    var_tested_but_soft_failure = NULL;
    Py_XDECREF(var_fallback_ascii);
    var_fallback_ascii = NULL;
    Py_XDECREF(var_fallback_u8);
    var_fallback_u8 = NULL;
    Py_XDECREF(var_fallback_specified);
    var_fallback_specified = NULL;
    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_decoded_payload);
    var_decoded_payload = NULL;
    Py_XDECREF(var_bom_or_sig_available);
    var_bom_or_sig_available = NULL;
    Py_XDECREF(var_strip_sig_or_bom);
    var_strip_sig_or_bom = NULL;
    Py_XDECREF(var_is_multi_byte_decoder);
    var_is_multi_byte_decoder = NULL;
    Py_XDECREF(var_similar_soft_failure_test);
    var_similar_soft_failure_test = NULL;
    Py_XDECREF(var_multi_byte_bonus);
    var_multi_byte_bonus = NULL;
    Py_XDECREF(var_max_chunk_gave_up);
    var_max_chunk_gave_up = NULL;
    Py_XDECREF(var_early_stop_count);
    var_early_stop_count = NULL;
    Py_XDECREF(var_md_chunks);
    var_md_chunks = NULL;
    Py_XDECREF(var_mean_mess_ratio);
    var_mean_mess_ratio = NULL;
    Py_XDECREF(var_target_languages);
    var_target_languages = NULL;
    Py_XDECREF(var_sig_encoding);
    var_sig_encoding = NULL;
    Py_XDECREF(var_sig_payload);
    var_sig_payload = NULL;
    Py_XDECREF(var_encoding_iana);
    var_encoding_iana = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_encoding_soft_failed);
    var_encoding_soft_failed = NULL;
    Py_XDECREF(var_r_);
    var_r_ = NULL;
    Py_XDECREF(var_lazy_str_hard_failure);
    var_lazy_str_hard_failure = NULL;
    Py_XDECREF(var_md_ratios);
    var_md_ratios = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_fallback_entry);
    var_fallback_entry = NULL;
    Py_XDECREF(var_cd_ratios);
    var_cd_ratios = NULL;
    Py_XDECREF(var_chunk_languages);
    var_chunk_languages = NULL;
    Py_XDECREF(var_cd_ratios_merged);
    var_cd_ratios_merged = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sequences);
    Py_DECREF(par_sequences);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sequences);
    Py_DECREF(par_sequences);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$api$$$function__2_from_fp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[0];
    PyObject *par_steps = python_pars[1];
    PyObject *par_chunk_size = python_pars[2];
    PyObject *par_threshold = python_pars[3];
    PyObject *par_cp_isolation = python_pars[4];
    PyObject *par_cp_exclusion = python_pars[5];
    PyObject *par_preemptive_behaviour = python_pars[6];
    PyObject *par_explain = python_pars[7];
    PyObject *par_language_threshold = python_pars[8];
    PyObject *par_enable_fallback = python_pars[9];
    struct Nuitka_FrameObject *frame_feed5c0718f64209a535fd717900558d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_feed5c0718f64209a535fd717900558d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_feed5c0718f64209a535fd717900558d)) {
        Py_XDECREF(cache_frame_feed5c0718f64209a535fd717900558d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_feed5c0718f64209a535fd717900558d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_feed5c0718f64209a535fd717900558d = MAKE_FUNCTION_FRAME(codeobj_feed5c0718f64209a535fd717900558d, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_feed5c0718f64209a535fd717900558d->m_type_description == NULL);
    frame_feed5c0718f64209a535fd717900558d = cache_frame_feed5c0718f64209a535fd717900558d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_feed5c0718f64209a535fd717900558d);
    assert(Py_REFCNT(frame_feed5c0718f64209a535fd717900558d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fp);
        tmp_called_instance_1 = par_fp;
        frame_feed5c0718f64209a535fd717900558d->m_frame.f_lineno = 519;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[120]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_steps);
        tmp_args_element_value_2 = par_steps;
        CHECK_OBJECT(par_chunk_size);
        tmp_args_element_value_3 = par_chunk_size;
        CHECK_OBJECT(par_threshold);
        tmp_args_element_value_4 = par_threshold;
        CHECK_OBJECT(par_cp_isolation);
        tmp_args_element_value_5 = par_cp_isolation;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_args_element_value_6 = par_cp_exclusion;
        CHECK_OBJECT(par_preemptive_behaviour);
        tmp_args_element_value_7 = par_preemptive_behaviour;
        CHECK_OBJECT(par_explain);
        tmp_args_element_value_8 = par_explain;
        CHECK_OBJECT(par_language_threshold);
        tmp_args_element_value_9 = par_language_threshold;
        CHECK_OBJECT(par_enable_fallback);
        tmp_args_element_value_10 = par_enable_fallback;
        frame_feed5c0718f64209a535fd717900558d->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_feed5c0718f64209a535fd717900558d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_feed5c0718f64209a535fd717900558d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_feed5c0718f64209a535fd717900558d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_feed5c0718f64209a535fd717900558d,
        type_description_1,
        par_fp,
        par_steps,
        par_chunk_size,
        par_threshold,
        par_cp_isolation,
        par_cp_exclusion,
        par_preemptive_behaviour,
        par_explain,
        par_language_threshold,
        par_enable_fallback
    );


    // Release cached frame if used for exception.
    if (frame_feed5c0718f64209a535fd717900558d == cache_frame_feed5c0718f64209a535fd717900558d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_feed5c0718f64209a535fd717900558d);
        cache_frame_feed5c0718f64209a535fd717900558d = NULL;
    }

    assertFrameObject(frame_feed5c0718f64209a535fd717900558d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fp);
    Py_DECREF(par_fp);
    CHECK_OBJECT(par_steps);
    Py_DECREF(par_steps);
    CHECK_OBJECT(par_chunk_size);
    Py_DECREF(par_chunk_size);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_cp_isolation);
    Py_DECREF(par_cp_isolation);
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fp);
    Py_DECREF(par_fp);
    CHECK_OBJECT(par_steps);
    Py_DECREF(par_steps);
    CHECK_OBJECT(par_chunk_size);
    Py_DECREF(par_chunk_size);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_cp_isolation);
    Py_DECREF(par_cp_isolation);
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$api$$$function__3_from_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_steps = python_pars[1];
    PyObject *par_chunk_size = python_pars[2];
    PyObject *par_threshold = python_pars[3];
    PyObject *par_cp_isolation = python_pars[4];
    PyObject *par_cp_exclusion = python_pars[5];
    PyObject *par_preemptive_behaviour = python_pars[6];
    PyObject *par_explain = python_pars[7];
    PyObject *par_language_threshold = python_pars[8];
    PyObject *par_enable_fallback = python_pars[9];
    PyObject *var_fp = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_cdd8a192092107955eb9799562c7247c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_cdd8a192092107955eb9799562c7247c = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cdd8a192092107955eb9799562c7247c)) {
        Py_XDECREF(cache_frame_cdd8a192092107955eb9799562c7247c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdd8a192092107955eb9799562c7247c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdd8a192092107955eb9799562c7247c = MAKE_FUNCTION_FRAME(codeobj_cdd8a192092107955eb9799562c7247c, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdd8a192092107955eb9799562c7247c->m_type_description == NULL);
    frame_cdd8a192092107955eb9799562c7247c = cache_frame_cdd8a192092107955eb9799562c7247c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cdd8a192092107955eb9799562c7247c);
    assert(Py_REFCNT(frame_cdd8a192092107955eb9799562c7247c) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_open_filename_1 = par_path;
        tmp_open_mode_1 = mod_consts[122];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[123]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = 548;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[124]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_fp == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_fp = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_fp);
        tmp_args_element_value_1 = var_fp;
        CHECK_OBJECT(par_steps);
        tmp_args_element_value_2 = par_steps;
        CHECK_OBJECT(par_chunk_size);
        tmp_args_element_value_3 = par_chunk_size;
        CHECK_OBJECT(par_threshold);
        tmp_args_element_value_4 = par_threshold;
        CHECK_OBJECT(par_cp_isolation);
        tmp_args_element_value_5 = par_cp_isolation;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_args_element_value_6 = par_cp_exclusion;
        CHECK_OBJECT(par_preemptive_behaviour);
        tmp_args_element_value_7 = par_preemptive_behaviour;
        CHECK_OBJECT(par_explain);
        tmp_args_element_value_8 = par_explain;
        CHECK_OBJECT(par_language_threshold);
        tmp_args_element_value_9 = par_language_threshold;
        CHECK_OBJECT(par_enable_fallback);
        tmp_args_element_value_10 = par_enable_fallback;
        frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = 549;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cdd8a192092107955eb9799562c7247c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cdd8a192092107955eb9799562c7247c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        tmp_args_element_value_11 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_12 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_13 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cdd8a192092107955eb9799562c7247c->m_frame) frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cdd8a192092107955eb9799562c7247c->m_frame) frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = 548;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[126]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = 548;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[126]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_cdd8a192092107955eb9799562c7247c->m_frame.f_lineno = 548;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[126]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cdd8a192092107955eb9799562c7247c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdd8a192092107955eb9799562c7247c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdd8a192092107955eb9799562c7247c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdd8a192092107955eb9799562c7247c,
        type_description_1,
        par_path,
        par_steps,
        par_chunk_size,
        par_threshold,
        par_cp_isolation,
        par_cp_exclusion,
        par_preemptive_behaviour,
        par_explain,
        par_language_threshold,
        par_enable_fallback,
        var_fp
    );


    // Release cached frame if used for exception.
    if (frame_cdd8a192092107955eb9799562c7247c == cache_frame_cdd8a192092107955eb9799562c7247c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdd8a192092107955eb9799562c7247c);
        cache_frame_cdd8a192092107955eb9799562c7247c = NULL;
    }

    assertFrameObject(frame_cdd8a192092107955eb9799562c7247c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fp);
    Py_DECREF(var_fp);
    var_fp = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fp);
    var_fp = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_steps);
    Py_DECREF(par_steps);
    CHECK_OBJECT(par_chunk_size);
    Py_DECREF(par_chunk_size);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_cp_isolation);
    Py_DECREF(par_cp_isolation);
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_steps);
    Py_DECREF(par_steps);
    CHECK_OBJECT(par_chunk_size);
    Py_DECREF(par_chunk_size);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_cp_isolation);
    Py_DECREF(par_cp_isolation);
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$api$$$function__4_is_binary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp_or_path_or_payload = python_pars[0];
    PyObject *par_steps = python_pars[1];
    PyObject *par_chunk_size = python_pars[2];
    PyObject *par_threshold = python_pars[3];
    PyObject *par_cp_isolation = python_pars[4];
    PyObject *par_cp_exclusion = python_pars[5];
    PyObject *par_preemptive_behaviour = python_pars[6];
    PyObject *par_explain = python_pars[7];
    PyObject *par_language_threshold = python_pars[8];
    PyObject *par_enable_fallback = python_pars[9];
    PyObject *var_guesses = NULL;
    struct Nuitka_FrameObject *frame_6d27057d24d4bd557946251652d42250;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d27057d24d4bd557946251652d42250 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6d27057d24d4bd557946251652d42250)) {
        Py_XDECREF(cache_frame_6d27057d24d4bd557946251652d42250);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d27057d24d4bd557946251652d42250 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d27057d24d4bd557946251652d42250 = MAKE_FUNCTION_FRAME(codeobj_6d27057d24d4bd557946251652d42250, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d27057d24d4bd557946251652d42250->m_type_description == NULL);
    frame_6d27057d24d4bd557946251652d42250 = cache_frame_6d27057d24d4bd557946251652d42250;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d27057d24d4bd557946251652d42250);
    assert(Py_REFCNT(frame_6d27057d24d4bd557946251652d42250) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_fp_or_path_or_payload);
        tmp_isinstance_inst_1 = par_fp_or_path_or_payload;
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fp_or_path_or_payload);
        tmp_kw_call_arg_value_0_1 = par_fp_or_path_or_payload;
        CHECK_OBJECT(par_steps);
        tmp_kw_call_dict_value_0_1 = par_steps;
        CHECK_OBJECT(par_chunk_size);
        tmp_kw_call_dict_value_1_1 = par_chunk_size;
        CHECK_OBJECT(par_threshold);
        tmp_kw_call_dict_value_2_1 = par_threshold;
        CHECK_OBJECT(par_cp_isolation);
        tmp_kw_call_dict_value_3_1 = par_cp_isolation;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_kw_call_dict_value_4_1 = par_cp_exclusion;
        CHECK_OBJECT(par_preemptive_behaviour);
        tmp_kw_call_dict_value_5_1 = par_preemptive_behaviour;
        CHECK_OBJECT(par_explain);
        tmp_kw_call_dict_value_6_1 = par_explain;
        CHECK_OBJECT(par_language_threshold);
        tmp_kw_call_dict_value_7_1 = par_language_threshold;
        CHECK_OBJECT(par_enable_fallback);
        tmp_kw_call_dict_value_8_1 = par_enable_fallback;
        frame_6d27057d24d4bd557946251652d42250->m_frame.f_lineno = 581;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[130]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_guesses == NULL);
        var_guesses = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_fp_or_path_or_payload);
        tmp_isinstance_inst_2 = par_fp_or_path_or_payload;
        tmp_isinstance_cls_2 = mod_consts[131];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_kw_call_dict_value_5_2;
        PyObject *tmp_kw_call_dict_value_6_2;
        PyObject *tmp_kw_call_dict_value_7_2;
        PyObject *tmp_kw_call_dict_value_8_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fp_or_path_or_payload);
        tmp_kw_call_arg_value_0_2 = par_fp_or_path_or_payload;
        CHECK_OBJECT(par_steps);
        tmp_kw_call_dict_value_0_2 = par_steps;
        CHECK_OBJECT(par_chunk_size);
        tmp_kw_call_dict_value_1_2 = par_chunk_size;
        CHECK_OBJECT(par_threshold);
        tmp_kw_call_dict_value_2_2 = par_threshold;
        CHECK_OBJECT(par_cp_isolation);
        tmp_kw_call_dict_value_3_2 = par_cp_isolation;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_kw_call_dict_value_4_2 = par_cp_exclusion;
        CHECK_OBJECT(par_preemptive_behaviour);
        tmp_kw_call_dict_value_5_2 = par_preemptive_behaviour;
        CHECK_OBJECT(par_explain);
        tmp_kw_call_dict_value_6_2 = par_explain;
        CHECK_OBJECT(par_language_threshold);
        tmp_kw_call_dict_value_7_2 = par_language_threshold;
        CHECK_OBJECT(par_enable_fallback);
        tmp_kw_call_dict_value_8_2 = par_enable_fallback;
        frame_6d27057d24d4bd557946251652d42250->m_frame.f_lineno = 600;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_2, tmp_kw_call_dict_value_6_2, tmp_kw_call_dict_value_7_2, tmp_kw_call_dict_value_8_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[130]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_guesses == NULL);
        var_guesses = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_3;
        PyObject *tmp_kw_call_dict_value_4_3;
        PyObject *tmp_kw_call_dict_value_5_3;
        PyObject *tmp_kw_call_dict_value_6_3;
        PyObject *tmp_kw_call_dict_value_7_3;
        PyObject *tmp_kw_call_dict_value_8_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fp_or_path_or_payload);
        tmp_kw_call_arg_value_0_3 = par_fp_or_path_or_payload;
        CHECK_OBJECT(par_steps);
        tmp_kw_call_dict_value_0_3 = par_steps;
        CHECK_OBJECT(par_chunk_size);
        tmp_kw_call_dict_value_1_3 = par_chunk_size;
        CHECK_OBJECT(par_threshold);
        tmp_kw_call_dict_value_2_3 = par_threshold;
        CHECK_OBJECT(par_cp_isolation);
        tmp_kw_call_dict_value_3_3 = par_cp_isolation;
        CHECK_OBJECT(par_cp_exclusion);
        tmp_kw_call_dict_value_4_3 = par_cp_exclusion;
        CHECK_OBJECT(par_preemptive_behaviour);
        tmp_kw_call_dict_value_5_3 = par_preemptive_behaviour;
        CHECK_OBJECT(par_explain);
        tmp_kw_call_dict_value_6_3 = par_explain;
        CHECK_OBJECT(par_language_threshold);
        tmp_kw_call_dict_value_7_3 = par_language_threshold;
        CHECK_OBJECT(par_enable_fallback);
        tmp_kw_call_dict_value_8_3 = par_enable_fallback;
        frame_6d27057d24d4bd557946251652d42250->m_frame.f_lineno = 613;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_3, tmp_kw_call_dict_value_5_3, tmp_kw_call_dict_value_6_3, tmp_kw_call_dict_value_7_3, tmp_kw_call_dict_value_8_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[130]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_guesses == NULL);
        var_guesses = tmp_assign_source_3;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_guesses);
        tmp_operand_value_1 = var_guesses;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d27057d24d4bd557946251652d42250, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d27057d24d4bd557946251652d42250->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d27057d24d4bd557946251652d42250, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d27057d24d4bd557946251652d42250,
        type_description_1,
        par_fp_or_path_or_payload,
        par_steps,
        par_chunk_size,
        par_threshold,
        par_cp_isolation,
        par_cp_exclusion,
        par_preemptive_behaviour,
        par_explain,
        par_language_threshold,
        par_enable_fallback,
        var_guesses
    );


    // Release cached frame if used for exception.
    if (frame_6d27057d24d4bd557946251652d42250 == cache_frame_6d27057d24d4bd557946251652d42250) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d27057d24d4bd557946251652d42250);
        cache_frame_6d27057d24d4bd557946251652d42250 = NULL;
    }

    assertFrameObject(frame_6d27057d24d4bd557946251652d42250);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_guesses);
    Py_DECREF(var_guesses);
    var_guesses = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_guesses);
    var_guesses = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fp_or_path_or_payload);
    Py_DECREF(par_fp_or_path_or_payload);
    CHECK_OBJECT(par_steps);
    Py_DECREF(par_steps);
    CHECK_OBJECT(par_chunk_size);
    Py_DECREF(par_chunk_size);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_cp_isolation);
    Py_DECREF(par_cp_isolation);
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fp_or_path_or_payload);
    Py_DECREF(par_fp_or_path_or_payload);
    CHECK_OBJECT(par_steps);
    Py_DECREF(par_steps);
    CHECK_OBJECT(par_chunk_size);
    Py_DECREF(par_chunk_size);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_cp_isolation);
    Py_DECREF(par_cp_isolation);
    CHECK_OBJECT(par_cp_exclusion);
    Py_DECREF(par_cp_exclusion);
    CHECK_OBJECT(par_preemptive_behaviour);
    Py_DECREF(par_preemptive_behaviour);
    CHECK_OBJECT(par_explain);
    Py_DECREF(par_explain);
    CHECK_OBJECT(par_language_threshold);
    Py_DECREF(par_language_threshold);
    CHECK_OBJECT(par_enable_fallback);
    Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__1_from_bytes(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__1_from_bytes,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_99876afb1fa653a275b66d3af476655f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__2_from_fp(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__2_from_fp,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_feed5c0718f64209a535fd717900558d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts[121],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__3_from_path(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__3_from_path,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdd8a192092107955eb9799562c7247c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__4_is_binary(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__4_is_binary,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d27057d24d4bd557946251652d42250,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_charset_normalizer$api[] = {
    impl_charset_normalizer$api$$$function__1_from_bytes,
    impl_charset_normalizer$api$$$function__2_from_fp,
    impl_charset_normalizer$api$$$function__3_from_path,
    impl_charset_normalizer$api$$$function__4_is_binary,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_charset_normalizer$api;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_charset_normalizer$api) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_charset_normalizer$api[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_charset_normalizer$api,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_charset_normalizer$api(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("charset_normalizer.api");

    // Store the module for future use.
    module_charset_normalizer$api = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer.api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("charset_normalizer.api: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcharset_normalizer$api\n");

    moduledict_charset_normalizer$api = MODULE_DICT(module_charset_normalizer$api);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_charset_normalizer$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[18]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_charset_normalizer$api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_charset_normalizer$api);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_468e1ab8e2b8c328b854f48db6102f66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_2);
    }
    frame_468e1ab8e2b8c328b854f48db6102f66 = MAKE_MODULE_FRAME(codeobj_468e1ab8e2b8c328b854f48db6102f66, module_charset_normalizer$api);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_468e1ab8e2b8c328b854f48db6102f66);
    assert(Py_REFCNT(frame_468e1ab8e2b8c328b854f48db6102f66) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[136], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[137], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_charset_normalizer$api;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[67];
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_OS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[128],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[128]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[139],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[139]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[140],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[140]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[141],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[141]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[142],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[142]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[143],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[143]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[144];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_charset_normalizer$api;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[145];
        tmp_level_value_2 = mod_consts[25];
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 5;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[96],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[96]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[93],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[93]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[94],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[94]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[100],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[100]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_16);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[146];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_charset_normalizer$api;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[147];
        tmp_level_value_3 = mod_consts[25];
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 11;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[42],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[42]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[30],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[30]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[29],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[29]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[7],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[7]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[148];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_charset_normalizer$api;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[149];
        tmp_level_value_4 = mod_consts[25];
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 12;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[76],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[150];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_charset_normalizer$api;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[151];
        tmp_level_value_5 = mod_consts[25];
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 13;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[15],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[15]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[14],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[14]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_25);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[152];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_charset_normalizer$api;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[153];
        tmp_level_value_6 = mod_consts[25];
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 14;
        tmp_assign_source_26 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[33],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[33]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[72],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[72]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[22],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[22]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_21 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[35],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[35]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_22 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[63],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[63]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_23 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[52],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[52]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_24 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_charset_normalizer$api,
                mod_consts[47],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[47]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_33);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 26;
        tmp_assign_source_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[154],
            PyTuple_GET_ITEM(mod_consts[155], 0)
        );

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 27;
        tmp_assign_source_35 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[156]);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_35);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[157]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 29;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[158],
            PyTuple_GET_ITEM(mod_consts[159], 0)
        );

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_468e1ab8e2b8c328b854f48db6102f66->m_frame.f_lineno = 28;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_defaults_1 = mod_consts[160];
        tmp_dict_key_1 = mod_consts[55];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[131];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[28];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[43];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[161];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_5);
            if (tmp_subscript_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[162];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[163];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[97];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[164];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[165];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_36 = MAKE_FUNCTION_charset_normalizer$api$$$function__1_from_bytes(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_defaults_2 = mod_consts[160];
        tmp_dict_key_2 = mod_consts[166];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_9;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[26];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[28];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[77];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[43];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;

                goto dict_build_exception_2;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_7);
            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[161];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto dict_build_exception_2;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_9);
            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_8);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[162];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[163];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[97];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[164];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[165];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_37 = MAKE_FUNCTION_charset_normalizer$api$$$function__2_from_fp(tmp_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_1;
        tmp_defaults_3 = mod_consts[160];
        tmp_dict_key_3 = mod_consts[167];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyBytes_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_14;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[26];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[28];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[77];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[43];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto dict_build_exception_3;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[161];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto dict_build_exception_3;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_14);
            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_13);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[162];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[163];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[97];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[164];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[165];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_38 = MAKE_FUNCTION_charset_normalizer$api$$$function__3_from_path(tmp_defaults_3, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_tuple_element_2;
        tmp_defaults_4 = mod_consts[168];
        tmp_dict_key_4 = mod_consts[169];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = (PyObject *)&PyBytes_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 3, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_19;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[26];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[28];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[77];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[43];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto dict_build_exception_4;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_17);
            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[161];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto dict_build_exception_4;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_19);
            if (tmp_subscript_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[162];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[163];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[97];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[164];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[165];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_39 = MAKE_FUNCTION_charset_normalizer$api$$$function__4_is_binary(tmp_defaults_4, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_39);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_468e1ab8e2b8c328b854f48db6102f66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_468e1ab8e2b8c328b854f48db6102f66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_468e1ab8e2b8c328b854f48db6102f66, exception_lineno);
    }



    assertFrameObject(frame_468e1ab8e2b8c328b854f48db6102f66);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("charset_normalizer.api", false);

    Py_INCREF(module_charset_normalizer$api);
    return module_charset_normalizer$api;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("charset_normalizer$api", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
