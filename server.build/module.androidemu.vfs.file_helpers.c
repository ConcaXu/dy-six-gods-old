/* Generated code for Python module 'androidemu.vfs.file_helpers'
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

/* The "module_androidemu$vfs$file_helpers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_androidemu$vfs$file_helpers;
PyDictObject *moduledict_androidemu$vfs$file_helpers;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[56];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("androidemu.vfs.file_helpers"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 56; i++) {
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
void checkModuleConstants_androidemu$vfs$file_helpers(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 56; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a73d2588d56ca38f41bbbd2f1521c655;
static PyCodeObject *codeobj_093e8c2739d18da2632a3b18597d4a84;
static PyCodeObject *codeobj_b401370962ea7aa17285f590c488b835;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[52]); CHECK_OBJECT(module_filename_obj);
    codeobj_a73d2588d56ca38f41bbbd2f1521c655 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[53], mod_consts[53], NULL, NULL, 0, 0, 0);
    codeobj_093e8c2739d18da2632a3b18597d4a84 = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[54], NULL, 5, 0, 0);
    codeobj_b401370962ea7aa17285f590c488b835 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[51], mod_consts[54], NULL, 5, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_androidemu$vfs$file_helpers$$$function__1_stat_to_memory2();


static PyObject *MAKE_FUNCTION_androidemu$vfs$file_helpers$$$function__2_stat_to_memory64();


// The module function definitions.
static PyObject *impl_androidemu$vfs$file_helpers$$$function__1_stat_to_memory2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uc = python_pars[0];
    PyObject *par_buf_ptr = python_pars[1];
    PyObject *par_stat = python_pars[2];
    PyObject *par_uid = python_pars[3];
    PyObject *par_st_mode = python_pars[4];
    PyObject *var_st_rdev = NULL;
    PyObject *var_st_blksize = NULL;
    PyObject *var_st_blocks = NULL;
    PyObject *var_stdev = NULL;
    PyObject *var_st_ino = NULL;
    struct Nuitka_FrameObject *frame_093e8c2739d18da2632a3b18597d4a84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_093e8c2739d18da2632a3b18597d4a84 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        assert(var_st_rdev == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_st_rdev = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_093e8c2739d18da2632a3b18597d4a84)) {
        Py_XDECREF(cache_frame_093e8c2739d18da2632a3b18597d4a84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_093e8c2739d18da2632a3b18597d4a84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_093e8c2739d18da2632a3b18597d4a84 = MAKE_FUNCTION_FRAME(codeobj_093e8c2739d18da2632a3b18597d4a84, module_androidemu$vfs$file_helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_093e8c2739d18da2632a3b18597d4a84->m_type_description == NULL);
    frame_093e8c2739d18da2632a3b18597d4a84 = cache_frame_093e8c2739d18da2632a3b18597d4a84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_093e8c2739d18da2632a3b18597d4a84);
    assert(Py_REFCNT(frame_093e8c2739d18da2632a3b18597d4a84) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_stat);
        tmp_expression_value_1 = par_stat;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_1, mod_consts[1]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_stat);
        tmp_expression_value_2 = par_stat;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_rdev;
            assert(old != NULL);
            var_st_rdev = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[0];
        assert(var_st_blksize == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_st_blksize = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_stat;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_3, mod_consts[3]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_stat;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_blksize;
            assert(old != NULL);
            var_st_blksize = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[0];
        assert(var_st_blocks == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_st_blocks = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_stat;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_5, mod_consts[4]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_6;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_stat;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_blocks;
            assert(old != NULL);
            var_st_blocks = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_7;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_stat;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[5]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stdev == NULL);
        var_stdev = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_stdev);
        tmp_cmp_expr_left_1 = var_stdev;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_stdev);
        tmp_mult_expr_left_1 = var_stdev;
        tmp_mult_expr_right_1 = mod_consts[6];
        tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_stdev;
            assert(old != NULL);
            var_stdev = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[0];
        assert(var_st_ino == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_st_ino = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_stat;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[8];
        tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_9;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_stat;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[7]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_ino;
            assert(old != NULL);
            var_st_ino = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_10 = par_uc;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_args_element_value_1 = par_buf_ptr;
        CHECK_OBJECT(var_stdev);
        tmp_int_arg_1 = var_stdev;
        tmp_expression_value_11 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[10]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 45;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_12 = par_uc;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_1 = par_buf_ptr;
        tmp_add_expr_right_1 = mod_consts[13];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = mod_consts[0];
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[10]);
        assert(!(tmp_called_value_4 == NULL));
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 46;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_14 = par_uc;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[9]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_2 = par_buf_ptr;
        tmp_add_expr_right_2 = mod_consts[15];
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_ino);
        tmp_int_arg_2 = var_st_ino;
        tmp_expression_value_15 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[10]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 47;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_int_arg_3;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_16 = par_uc;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[9]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_3 = par_buf_ptr;
        tmp_add_expr_right_3 = mod_consts[16];
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_st_mode);
        tmp_int_arg_3 = par_st_mode;
        tmp_expression_value_17 = PyNumber_Int(tmp_int_arg_3);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[10]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 48;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_18 = par_uc;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[9]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_4 = par_buf_ptr;
        tmp_add_expr_right_4 = mod_consts[17];
        tmp_args_element_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_stat;
        tmp_int_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[18]);
        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[10]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 49;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_int_arg_5;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_21 = par_uc;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[9]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_5 = par_buf_ptr;
        tmp_add_expr_right_5 = mod_consts[19];
        tmp_args_element_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uid);
        tmp_int_arg_5 = par_uid;
        tmp_expression_value_22 = PyNumber_Int(tmp_int_arg_5);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[10]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 50;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_int_arg_6;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_23 = par_uc;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[9]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_6 = par_buf_ptr;
        tmp_add_expr_right_6 = mod_consts[20];
        tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uid);
        tmp_int_arg_6 = par_uid;
        tmp_expression_value_24 = PyNumber_Int(tmp_int_arg_6);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[10]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 51;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_int_arg_7;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_25 = par_uc;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[9]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_7 = par_buf_ptr;
        tmp_add_expr_right_7 = mod_consts[21];
        tmp_args_element_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_rdev);
        tmp_int_arg_7 = var_st_rdev;
        tmp_expression_value_26 = PyNumber_Int(tmp_int_arg_7);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[10]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 52;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_27 = par_uc;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[9]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_8 = par_buf_ptr;
        tmp_add_expr_right_8 = mod_consts[22];
        tmp_args_element_value_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = mod_consts[0];
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[10]);
        assert(!(tmp_called_value_18 == NULL));
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 53;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_int_arg_8;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_29 = par_uc;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[9]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_9 = par_buf_ptr;
        tmp_add_expr_right_9 = mod_consts[23];
        tmp_args_element_value_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = par_stat;
        tmp_int_arg_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[24]);
        if (tmp_int_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = PyNumber_Int(tmp_int_arg_8);
        Py_DECREF(tmp_int_arg_8);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[10]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 54;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_int_arg_9;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_32 = par_uc;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[9]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_10 = par_buf_ptr;
        tmp_add_expr_right_10 = mod_consts[25];
        tmp_args_element_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_blksize);
        tmp_int_arg_9 = var_st_blksize;
        tmp_expression_value_33 = PyNumber_Int(tmp_int_arg_9);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[10]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 55;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_int_arg_10;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_34 = par_uc;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[9]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_11 = par_buf_ptr;
        tmp_add_expr_right_11 = mod_consts[26];
        tmp_args_element_value_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_blocks);
        tmp_int_arg_10 = var_st_blocks;
        tmp_expression_value_35 = PyNumber_Int(tmp_int_arg_10);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[10]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 56;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_int_arg_11;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_36 = par_uc;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[9]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_12 = par_buf_ptr;
        tmp_add_expr_right_12 = mod_consts[27];
        tmp_args_element_value_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_stat;
        tmp_int_arg_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[28]);
        if (tmp_int_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = PyNumber_Int(tmp_int_arg_11);
        Py_DECREF(tmp_int_arg_11);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[10]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 57;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_int_arg_12;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_39 = par_uc;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[9]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_13 = par_buf_ptr;
        tmp_add_expr_right_13 = mod_consts[29];
        tmp_args_element_value_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = par_stat;
        tmp_int_arg_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[30]);
        if (tmp_int_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = PyNumber_Int(tmp_int_arg_12);
        Py_DECREF(tmp_int_arg_12);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[10]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 58;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_int_arg_13;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_42 = par_uc;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[9]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_14 = par_buf_ptr;
        tmp_add_expr_right_14 = mod_consts[31];
        tmp_args_element_value_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = par_stat;
        tmp_int_arg_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[32]);
        if (tmp_int_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = PyNumber_Int(tmp_int_arg_13);
        Py_DECREF(tmp_int_arg_13);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[10]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 59;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_30);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_int_arg_14;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_45 = par_uc;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[9]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_15 = par_buf_ptr;
        tmp_add_expr_right_15 = mod_consts[33];
        tmp_args_element_value_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_15, tmp_add_expr_right_15);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_ino);
        tmp_int_arg_14 = var_st_ino;
        tmp_expression_value_46 = PyNumber_Int(tmp_int_arg_14);
        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[10]);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 60;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_32);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_093e8c2739d18da2632a3b18597d4a84->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_093e8c2739d18da2632a3b18597d4a84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_093e8c2739d18da2632a3b18597d4a84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_093e8c2739d18da2632a3b18597d4a84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_093e8c2739d18da2632a3b18597d4a84,
        type_description_1,
        par_uc,
        par_buf_ptr,
        par_stat,
        par_uid,
        par_st_mode,
        var_st_rdev,
        var_st_blksize,
        var_st_blocks,
        var_stdev,
        var_st_ino
    );


    // Release cached frame if used for exception.
    if (frame_093e8c2739d18da2632a3b18597d4a84 == cache_frame_093e8c2739d18da2632a3b18597d4a84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_093e8c2739d18da2632a3b18597d4a84);
        cache_frame_093e8c2739d18da2632a3b18597d4a84 = NULL;
    }

    assertFrameObject(frame_093e8c2739d18da2632a3b18597d4a84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_st_rdev);
    Py_DECREF(var_st_rdev);
    var_st_rdev = NULL;
    CHECK_OBJECT(var_st_blksize);
    Py_DECREF(var_st_blksize);
    var_st_blksize = NULL;
    CHECK_OBJECT(var_st_blocks);
    Py_DECREF(var_st_blocks);
    var_st_blocks = NULL;
    CHECK_OBJECT(var_stdev);
    Py_DECREF(var_stdev);
    var_stdev = NULL;
    CHECK_OBJECT(var_st_ino);
    Py_DECREF(var_st_ino);
    var_st_ino = NULL;
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

    Py_XDECREF(var_st_rdev);
    var_st_rdev = NULL;
    Py_XDECREF(var_st_blksize);
    var_st_blksize = NULL;
    Py_XDECREF(var_st_blocks);
    var_st_blocks = NULL;
    Py_XDECREF(var_stdev);
    var_stdev = NULL;
    Py_XDECREF(var_st_ino);
    var_st_ino = NULL;
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
    CHECK_OBJECT(par_uc);
    Py_DECREF(par_uc);
    CHECK_OBJECT(par_buf_ptr);
    Py_DECREF(par_buf_ptr);
    CHECK_OBJECT(par_stat);
    Py_DECREF(par_stat);
    CHECK_OBJECT(par_uid);
    Py_DECREF(par_uid);
    CHECK_OBJECT(par_st_mode);
    Py_DECREF(par_st_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uc);
    Py_DECREF(par_uc);
    CHECK_OBJECT(par_buf_ptr);
    Py_DECREF(par_buf_ptr);
    CHECK_OBJECT(par_stat);
    Py_DECREF(par_stat);
    CHECK_OBJECT(par_uid);
    Py_DECREF(par_uid);
    CHECK_OBJECT(par_st_mode);
    Py_DECREF(par_st_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$vfs$file_helpers$$$function__2_stat_to_memory64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uc = python_pars[0];
    PyObject *par_buf_ptr = python_pars[1];
    PyObject *par_stat = python_pars[2];
    PyObject *par_uid = python_pars[3];
    PyObject *par_st_mode = python_pars[4];
    PyObject *var_st_rdev = NULL;
    PyObject *var_st_blksize = NULL;
    PyObject *var_st_blocks = NULL;
    PyObject *var_stdev = NULL;
    PyObject *var_st_ino = NULL;
    struct Nuitka_FrameObject *frame_b401370962ea7aa17285f590c488b835;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b401370962ea7aa17285f590c488b835 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        assert(var_st_rdev == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_st_rdev = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b401370962ea7aa17285f590c488b835)) {
        Py_XDECREF(cache_frame_b401370962ea7aa17285f590c488b835);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b401370962ea7aa17285f590c488b835 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b401370962ea7aa17285f590c488b835 = MAKE_FUNCTION_FRAME(codeobj_b401370962ea7aa17285f590c488b835, module_androidemu$vfs$file_helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b401370962ea7aa17285f590c488b835->m_type_description == NULL);
    frame_b401370962ea7aa17285f590c488b835 = cache_frame_b401370962ea7aa17285f590c488b835;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b401370962ea7aa17285f590c488b835);
    assert(Py_REFCNT(frame_b401370962ea7aa17285f590c488b835) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_stat);
        tmp_expression_value_1 = par_stat;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_1, mod_consts[1]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_stat);
        tmp_expression_value_2 = par_stat;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_rdev;
            assert(old != NULL);
            var_st_rdev = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[0];
        assert(var_st_blksize == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_st_blksize = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_stat;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_3, mod_consts[3]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_stat;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_blksize;
            assert(old != NULL);
            var_st_blksize = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[0];
        assert(var_st_blocks == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_st_blocks = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_stat;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_5, mod_consts[4]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_6;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_stat;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_st_blocks;
            assert(old != NULL);
            var_st_blocks = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_7;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_stat;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[5]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stdev == NULL);
        var_stdev = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_stdev);
        tmp_cmp_expr_left_1 = var_stdev;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_stdev);
        tmp_mult_expr_left_1 = var_stdev;
        tmp_mult_expr_right_1 = mod_consts[6];
        tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_stdev;
            assert(old != NULL);
            var_stdev = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_8;
        if (par_stat == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_stat;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_st_ino == NULL);
        var_st_ino = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_9 = par_uc;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_args_element_value_1 = par_buf_ptr;
        CHECK_OBJECT(var_stdev);
        tmp_int_arg_1 = var_stdev;
        tmp_expression_value_10 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 84;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_11 = par_uc;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_1 = par_buf_ptr;
        tmp_add_expr_right_1 = mod_consts[13];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_ino);
        tmp_int_arg_2 = var_st_ino;
        tmp_expression_value_12 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[10]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 85;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_int_arg_3;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_13 = par_uc;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[9]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_2 = par_buf_ptr;
        tmp_add_expr_right_2 = mod_consts[16];
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_st_mode);
        tmp_int_arg_3 = par_st_mode;
        tmp_expression_value_14 = PyNumber_Int(tmp_int_arg_3);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[10]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 86;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_15 = par_uc;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[9]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_3 = par_buf_ptr;
        tmp_add_expr_right_3 = mod_consts[17];
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_stat;
        tmp_int_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[18]);
        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[10]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 87;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_int_arg_5;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_18 = par_uc;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[9]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_4 = par_buf_ptr;
        tmp_add_expr_right_4 = mod_consts[19];
        tmp_args_element_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 88;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uid);
        tmp_int_arg_5 = par_uid;
        tmp_expression_value_19 = PyNumber_Int(tmp_int_arg_5);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 88;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[10]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 88;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 88;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 88;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_int_arg_6;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_20 = par_uc;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[9]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_5 = par_buf_ptr;
        tmp_add_expr_right_5 = mod_consts[20];
        tmp_args_element_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 89;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uid);
        tmp_int_arg_6 = par_uid;
        tmp_expression_value_21 = PyNumber_Int(tmp_int_arg_6);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 89;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[10]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 89;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 89;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 89;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_int_arg_7;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_22 = par_uc;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[9]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_6 = par_buf_ptr;
        tmp_add_expr_right_6 = mod_consts[21];
        tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_rdev);
        tmp_int_arg_7 = var_st_rdev;
        tmp_expression_value_23 = PyNumber_Int(tmp_int_arg_7);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[10]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 90;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_24 = par_uc;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[9]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_7 = par_buf_ptr;
        tmp_add_expr_right_7 = mod_consts[22];
        tmp_args_element_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 91;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = mod_consts[0];
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[10]);
        assert(!(tmp_called_value_16 == NULL));
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 91;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 91;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_int_arg_8;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_26 = par_uc;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[9]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_8 = par_buf_ptr;
        tmp_add_expr_right_8 = mod_consts[23];
        tmp_args_element_value_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_stat;
        tmp_int_arg_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[24]);
        if (tmp_int_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = PyNumber_Int(tmp_int_arg_8);
        Py_DECREF(tmp_int_arg_8);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[10]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 92;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_int_arg_9;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_29 = par_uc;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[9]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_9 = par_buf_ptr;
        tmp_add_expr_right_9 = mod_consts[25];
        tmp_args_element_value_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 93;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_blksize);
        tmp_int_arg_9 = var_st_blksize;
        tmp_expression_value_30 = PyNumber_Int(tmp_int_arg_9);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 93;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[10]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 93;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 93;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 93;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_int_arg_10;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_31 = par_uc;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[9]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_10 = par_buf_ptr;
        tmp_add_expr_right_10 = mod_consts[26];
        tmp_args_element_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st_blocks);
        tmp_int_arg_10 = var_st_blocks;
        tmp_expression_value_32 = PyNumber_Int(tmp_int_arg_10);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[10]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 94;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_int_arg_11;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_33 = par_uc;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[9]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_11 = par_buf_ptr;
        tmp_add_expr_right_11 = mod_consts[27];
        tmp_args_element_value_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = par_stat;
        tmp_int_arg_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[28]);
        if (tmp_int_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = PyNumber_Int(tmp_int_arg_11);
        Py_DECREF(tmp_int_arg_11);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[10]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 95;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_int_arg_12;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_36 = par_uc;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[9]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_12 = par_buf_ptr;
        tmp_add_expr_right_12 = mod_consts[31];
        tmp_args_element_value_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_stat;
        tmp_int_arg_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[30]);
        if (tmp_int_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = PyNumber_Int(tmp_int_arg_12);
        Py_DECREF(tmp_int_arg_12);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[10]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 96;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_int_arg_13;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_39 = par_uc;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[9]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_13 = par_buf_ptr;
        tmp_add_expr_right_13 = mod_consts[36];
        tmp_args_element_value_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stat == NULL) {
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = par_stat;
        tmp_int_arg_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[32]);
        if (tmp_int_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = PyNumber_Int(tmp_int_arg_13);
        Py_DECREF(tmp_int_arg_13);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[10]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 97;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(par_uc);
        tmp_expression_value_42 = par_uc;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[9]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buf_ptr);
        tmp_add_expr_left_14 = par_buf_ptr;
        tmp_add_expr_right_14 = mod_consts[37];
        tmp_args_element_value_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 98;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = mod_consts[0];
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[10]);
        assert(!(tmp_called_value_30 == NULL));
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 98;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[11], 0), mod_consts[12]);
        Py_DECREF(tmp_called_value_30);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 98;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b401370962ea7aa17285f590c488b835->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b401370962ea7aa17285f590c488b835, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b401370962ea7aa17285f590c488b835->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b401370962ea7aa17285f590c488b835, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b401370962ea7aa17285f590c488b835,
        type_description_1,
        par_uc,
        par_buf_ptr,
        par_stat,
        par_uid,
        par_st_mode,
        var_st_rdev,
        var_st_blksize,
        var_st_blocks,
        var_stdev,
        var_st_ino
    );


    // Release cached frame if used for exception.
    if (frame_b401370962ea7aa17285f590c488b835 == cache_frame_b401370962ea7aa17285f590c488b835) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b401370962ea7aa17285f590c488b835);
        cache_frame_b401370962ea7aa17285f590c488b835 = NULL;
    }

    assertFrameObject(frame_b401370962ea7aa17285f590c488b835);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_st_rdev);
    Py_DECREF(var_st_rdev);
    var_st_rdev = NULL;
    CHECK_OBJECT(var_st_blksize);
    Py_DECREF(var_st_blksize);
    var_st_blksize = NULL;
    CHECK_OBJECT(var_st_blocks);
    Py_DECREF(var_st_blocks);
    var_st_blocks = NULL;
    CHECK_OBJECT(var_stdev);
    Py_DECREF(var_stdev);
    var_stdev = NULL;
    CHECK_OBJECT(var_st_ino);
    Py_DECREF(var_st_ino);
    var_st_ino = NULL;
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

    Py_XDECREF(var_st_rdev);
    var_st_rdev = NULL;
    Py_XDECREF(var_st_blksize);
    var_st_blksize = NULL;
    Py_XDECREF(var_st_blocks);
    var_st_blocks = NULL;
    Py_XDECREF(var_stdev);
    var_stdev = NULL;
    Py_XDECREF(var_st_ino);
    var_st_ino = NULL;
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
    CHECK_OBJECT(par_uc);
    Py_DECREF(par_uc);
    CHECK_OBJECT(par_buf_ptr);
    Py_DECREF(par_buf_ptr);
    CHECK_OBJECT(par_stat);
    Py_DECREF(par_stat);
    CHECK_OBJECT(par_uid);
    Py_DECREF(par_uid);
    CHECK_OBJECT(par_st_mode);
    Py_DECREF(par_st_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uc);
    Py_DECREF(par_uc);
    CHECK_OBJECT(par_buf_ptr);
    Py_DECREF(par_buf_ptr);
    CHECK_OBJECT(par_stat);
    Py_DECREF(par_stat);
    CHECK_OBJECT(par_uid);
    Py_DECREF(par_uid);
    CHECK_OBJECT(par_st_mode);
    Py_DECREF(par_st_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_androidemu$vfs$file_helpers$$$function__1_stat_to_memory2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$vfs$file_helpers$$$function__1_stat_to_memory2,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_093e8c2739d18da2632a3b18597d4a84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$vfs$file_helpers,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$vfs$file_helpers$$$function__2_stat_to_memory64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$vfs$file_helpers$$$function__2_stat_to_memory64,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b401370962ea7aa17285f590c488b835,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$vfs$file_helpers,
        NULL,
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

function_impl_code functable_androidemu$vfs$file_helpers[] = {
    impl_androidemu$vfs$file_helpers$$$function__1_stat_to_memory2,
    impl_androidemu$vfs$file_helpers$$$function__2_stat_to_memory64,
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

    function_impl_code *current = functable_androidemu$vfs$file_helpers;
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

    if (offset > sizeof(functable_androidemu$vfs$file_helpers) || offset < 0) {
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
        functable_androidemu$vfs$file_helpers[offset],
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
        module_androidemu$vfs$file_helpers,
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
PyObject *modulecode_androidemu$vfs$file_helpers(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("androidemu.vfs.file_helpers");

    // Store the module for future use.
    module_androidemu$vfs$file_helpers = module;

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
        PRINT_STRING("androidemu.vfs.file_helpers: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("androidemu.vfs.file_helpers: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initandroidemu$vfs$file_helpers\n");

    moduledict_androidemu$vfs$file_helpers = MODULE_DICT(module_androidemu$vfs$file_helpers);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_androidemu$vfs$file_helpers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_androidemu$vfs$file_helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[55]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_androidemu$vfs$file_helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_androidemu$vfs$file_helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_androidemu$vfs$file_helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_androidemu$vfs$file_helpers);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_androidemu$vfs$file_helpers);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a73d2588d56ca38f41bbbd2f1521c655;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    frame_a73d2588d56ca38f41bbbd2f1521c655 = MAKE_MODULE_FRAME(codeobj_a73d2588d56ca38f41bbbd2f1521c655, module_androidemu$vfs$file_helpers);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a73d2588d56ca38f41bbbd2f1521c655);
    assert(Py_REFCNT(frame_a73d2588d56ca38f41bbbd2f1521c655) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[44];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_androidemu$vfs$file_helpers;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[0];
        frame_a73d2588d56ca38f41bbbd2f1521c655->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_OS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_androidemu$vfs$file_helpers,
                mod_consts[46],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[46]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[47];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_androidemu$vfs$file_helpers;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[48];
        tmp_level_value_2 = mod_consts[0];
        frame_a73d2588d56ca38f41bbbd2f1521c655->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_androidemu$vfs$file_helpers,
                mod_consts[49],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_7);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a73d2588d56ca38f41bbbd2f1521c655, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a73d2588d56ca38f41bbbd2f1521c655->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a73d2588d56ca38f41bbbd2f1521c655, exception_lineno);
    }



    assertFrameObject(frame_a73d2588d56ca38f41bbbd2f1521c655);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_androidemu$vfs$file_helpers$$$function__1_stat_to_memory2();

        UPDATE_STRING_DICT1(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_androidemu$vfs$file_helpers$$$function__2_stat_to_memory64();

        UPDATE_STRING_DICT1(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_9);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("androidemu.vfs.file_helpers", false);

    Py_INCREF(module_androidemu$vfs$file_helpers);
    return module_androidemu$vfs$file_helpers;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$vfs$file_helpers, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("androidemu$vfs$file_helpers", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
