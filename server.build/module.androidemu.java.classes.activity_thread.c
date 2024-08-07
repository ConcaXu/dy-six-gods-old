/* Generated code for Python module 'androidemu.java.classes.activity_thread'
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

/* The "module_androidemu$java$classes$activity_thread" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_androidemu$java$classes$activity_thread;
PyDictObject *moduledict_androidemu$java$classes$activity_thread;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[187];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[187];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("androidemu.java.classes.activity_thread"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 187; i++) {
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
void checkModuleConstants_androidemu$java$classes$activity_thread(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 187; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_73c92d3b87962c512beb0c13f31e4805;
static PyCodeObject *codeobj_64264a41d8594e6e4a7cb480eec59396;
static PyCodeObject *codeobj_a0057b4beb0163984e112cff7170f192;
static PyCodeObject *codeobj_f0d29730396ec8a3593b072dce8fe9bc;
static PyCodeObject *codeobj_2c4789c9a89bec52db875da7981eeb39;
static PyCodeObject *codeobj_a02618a6337685aec1926d46c3807cce;
static PyCodeObject *codeobj_c8b93fff2b1ddf64b57d44e90712cfb4;
static PyCodeObject *codeobj_6667d72e47d2919afccb615dbd7326bc;
static PyCodeObject *codeobj_8e8af810a09183e8fc564ded04b387b6;
static PyCodeObject *codeobj_c97ce38914c7580dbff296c8f1cc455b;
static PyCodeObject *codeobj_17e98f5db00991d2ea22da7c444e0d28;
static PyCodeObject *codeobj_4f1ed6d80fed963a5ecccd2cb7c630f7;
static PyCodeObject *codeobj_da094a5da1baca90065440da5620bbef;
static PyCodeObject *codeobj_3d05457eed668c48d1a4206ae3b34d8f;
static PyCodeObject *codeobj_0a5349cd21bea20cdab70fa27ddfdb6b;
static PyCodeObject *codeobj_05b2063a63f24dbfe17a348416b16224;
static PyCodeObject *codeobj_70f6fae73f1e8ac59c39de0789f5132a;
static PyCodeObject *codeobj_a6c187be49274cbb82f878e5f45670d9;
static PyCodeObject *codeobj_e09d64b3762605d6415739052c8d739b;
static PyCodeObject *codeobj_7b277bc4688f25028d4bc7ec3e0d2153;
static PyCodeObject *codeobj_2f346aba5218cc052036bd06c16f56ff;
static PyCodeObject *codeobj_8e4f912ff7312649cdb466d755883013;
static PyCodeObject *codeobj_ba7af6a6da5dfa0da26bcb315158817a;
static PyCodeObject *codeobj_c51e382a40b69af1aa65b51e63f33c3f;
static PyCodeObject *codeobj_f48ce9b9e43ddd5707085663a69ea7fe;
static PyCodeObject *codeobj_72d3183e7329d30f58fb06e088383c56;
static PyCodeObject *codeobj_a234119e77435c8596f787c29a4c8033;
static PyCodeObject *codeobj_18bbfd96212e4f865dc458c5d3225637;
static PyCodeObject *codeobj_764accfe6a5a4ab058a5415b2dc2020a;
static PyCodeObject *codeobj_e328746b16be312914171db3b0df139a;
static PyCodeObject *codeobj_8e8c0974a10a7582b8fe71f1c2d14fe0;
static PyCodeObject *codeobj_9dc4cd094970eb8dc4f1d9355a0b8fa3;
static PyCodeObject *codeobj_4119793e72ecf97cd96fd899fb94afeb;
static PyCodeObject *codeobj_1e0dbababcdfe7a0191f40eb6220db53;
static PyCodeObject *codeobj_2a1f63961f8c9737b0ea2b92d2f7f58f;
static PyCodeObject *codeobj_62fbc953330634f0bb6fc96d76c4983f;
static PyCodeObject *codeobj_d6f2eebcfa4e51b7d52117d0af5b180b;
static PyCodeObject *codeobj_200a4305d4d9dce6e09ebd77b81d6e0a;
static PyCodeObject *codeobj_92e38d8cfcf2723c1f0dda82cc81ef5c;
static PyCodeObject *codeobj_d30ed53658340c921d4ce7a2403bf539;
static PyCodeObject *codeobj_bf273a016d1af67fdff67b033a52148e;
static PyCodeObject *codeobj_974b7e86d5faefc06b0a92241b59ef8d;
static PyCodeObject *codeobj_889f9dd1dcaf64e6a90373c7177e48af;
static PyCodeObject *codeobj_68a389446b1aa1c8fc8c3255162dd913;
static PyCodeObject *codeobj_9ae28872a763d9b41bb73ed544041755;
static PyCodeObject *codeobj_83ffa7bb3f6af5dfc14b8aea1ee1a9c3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[173]); CHECK_OBJECT(module_filename_obj);
    codeobj_73c92d3b87962c512beb0c13f31e4805 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_64264a41d8594e6e4a7cb480eec59396 = MAKE_CODE_OBJECT(module_filename_obj, 19, 0, mod_consts[3], mod_consts[3], mod_consts[175], NULL, 0, 0, 0);
    codeobj_a0057b4beb0163984e112cff7170f192 = MAKE_CODE_OBJECT(module_filename_obj, 8, 0, mod_consts[70], mod_consts[70], mod_consts[175], NULL, 0, 0, 0);
    codeobj_f0d29730396ec8a3593b072dce8fe9bc = MAKE_CODE_OBJECT(module_filename_obj, 70, 0, mod_consts[12], mod_consts[12], mod_consts[175], NULL, 0, 0, 0);
    codeobj_2c4789c9a89bec52db875da7981eeb39 = MAKE_CODE_OBJECT(module_filename_obj, 89, 0, mod_consts[24], mod_consts[24], mod_consts[175], NULL, 0, 0, 0);
    codeobj_a02618a6337685aec1926d46c3807cce = MAKE_CODE_OBJECT(module_filename_obj, 116, 0, mod_consts[127], mod_consts[127], mod_consts[175], NULL, 0, 0, 0);
    codeobj_c8b93fff2b1ddf64b57d44e90712cfb4 = MAKE_CODE_OBJECT(module_filename_obj, 145, 0, mod_consts[141], mod_consts[141], mod_consts[175], NULL, 0, 0, 0);
    codeobj_6667d72e47d2919afccb615dbd7326bc = MAKE_CODE_OBJECT(module_filename_obj, 188, 0, mod_consts[31], mod_consts[31], mod_consts[175], NULL, 0, 0, 0);
    codeobj_8e8af810a09183e8fc564ded04b387b6 = MAKE_CODE_OBJECT(module_filename_obj, 100, 0, mod_consts[23], mod_consts[23], mod_consts[175], NULL, 0, 0, 0);
    codeobj_c97ce38914c7580dbff296c8f1cc455b = MAKE_CODE_OBJECT(module_filename_obj, 47, 0, mod_consts[6], mod_consts[6], mod_consts[175], NULL, 0, 0, 0);
    codeobj_17e98f5db00991d2ea22da7c444e0d28 = MAKE_CODE_OBJECT(module_filename_obj, 130, 0, mod_consts[17], mod_consts[17], mod_consts[175], NULL, 0, 0, 0);
    codeobj_4f1ed6d80fed963a5ecccd2cb7c630f7 = MAKE_CODE_OBJECT(module_filename_obj, 174, 0, mod_consts[152], mod_consts[152], mod_consts[175], NULL, 0, 0, 0);
    codeobj_da094a5da1baca90065440da5620bbef = MAKE_CODE_OBJECT(module_filename_obj, 180, 0, mod_consts[156], mod_consts[156], mod_consts[175], NULL, 0, 0, 0);
    codeobj_3d05457eed668c48d1a4206ae3b34d8f = MAKE_CODE_OBJECT(module_filename_obj, 160, 0, mod_consts[26], mod_consts[26], mod_consts[175], NULL, 0, 0, 0);
    codeobj_0a5349cd21bea20cdab70fa27ddfdb6b = MAKE_CODE_OBJECT(module_filename_obj, 60, 0, mod_consts[1], mod_consts[1], mod_consts[175], NULL, 0, 0, 0);
    codeobj_05b2063a63f24dbfe17a348416b16224 = MAKE_CODE_OBJECT(module_filename_obj, 36, 0, mod_consts[7], mod_consts[7], mod_consts[175], NULL, 0, 0, 0);
    codeobj_70f6fae73f1e8ac59c39de0789f5132a = MAKE_CODE_OBJECT(module_filename_obj, 25, 0, mod_consts[9], mod_consts[9], mod_consts[175], NULL, 0, 0, 0);
    codeobj_a6c187be49274cbb82f878e5f45670d9 = MAKE_CODE_OBJECT(module_filename_obj, 9, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_e09d64b3762605d6415739052c8d739b = MAKE_CODE_OBJECT(module_filename_obj, 20, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_7b277bc4688f25028d4bc7ec3e0d2153 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_2f346aba5218cc052036bd06c16f56ff = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_8e4f912ff7312649cdb466d755883013 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_ba7af6a6da5dfa0da26bcb315158817a = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_c51e382a40b69af1aa65b51e63f33c3f = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_f48ce9b9e43ddd5707085663a69ea7fe = MAKE_CODE_OBJECT(module_filename_obj, 118, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_72d3183e7329d30f58fb06e088383c56 = MAKE_CODE_OBJECT(module_filename_obj, 132, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_a234119e77435c8596f787c29a4c8033 = MAKE_CODE_OBJECT(module_filename_obj, 147, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_18bbfd96212e4f865dc458c5d3225637 = MAKE_CODE_OBJECT(module_filename_obj, 162, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_764accfe6a5a4ab058a5415b2dc2020a = MAKE_CODE_OBJECT(module_filename_obj, 175, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_e328746b16be312914171db3b0df139a = MAKE_CODE_OBJECT(module_filename_obj, 181, 0, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 1, 0, 0);
    codeobj_8e8c0974a10a7582b8fe71f1c2d14fe0 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[177], NULL, 2, 0, 0);
    codeobj_9dc4cd094970eb8dc4f1d9355a0b8fa3 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[178], NULL, 2, 0, 0);
    codeobj_4119793e72ecf97cd96fd899fb94afeb = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[179], NULL, 2, 0, 0);
    codeobj_1e0dbababcdfe7a0191f40eb6220db53 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[34], mod_consts[180], NULL, 1, 0, 0);
    codeobj_2a1f63961f8c9737b0ea2b92d2f7f58f = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], mod_consts[181], NULL, 1, 0, 0);
    codeobj_62fbc953330634f0bb6fc96d76c4983f = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], mod_consts[182], NULL, 2, 0, 0);
    codeobj_d6f2eebcfa4e51b7d52117d0af5b180b = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], mod_consts[182], NULL, 2, 0, 0);
    codeobj_200a4305d4d9dce6e09ebd77b81d6e0a = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[87], mod_consts[87], mod_consts[182], NULL, 2, 0, 0);
    codeobj_92e38d8cfcf2723c1f0dda82cc81ef5c = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], mod_consts[183], NULL, 1, 0, 0);
    codeobj_d30ed53658340c921d4ce7a2403bf539 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[76], mod_consts[76], mod_consts[184], NULL, 3, 0, 0);
    codeobj_bf273a016d1af67fdff67b033a52148e = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[171], mod_consts[171], mod_consts[182], NULL, 2, 0, 0);
    codeobj_974b7e86d5faefc06b0a92241b59ef8d = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], mod_consts[182], NULL, 2, 0, 0);
    codeobj_889f9dd1dcaf64e6a90373c7177e48af = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[106], mod_consts[182], NULL, 2, 0, 0);
    codeobj_68a389446b1aa1c8fc8c3255162dd913 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[131], mod_consts[131], mod_consts[183], NULL, 1, 0, 0);
    codeobj_9ae28872a763d9b41bb73ed544041755 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[120], mod_consts[120], mod_consts[182], NULL, 2, 0, 0);
    codeobj_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[123], mod_consts[123], mod_consts[185], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__10_getWindow();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__11_getSystemService();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__12___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__13___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__14_size();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__15_valueAt();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__16___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__17_isUserAMonkey();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__18___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__19_getClass();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__1___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__20___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__21_getDefault();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__22___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__23_getClass();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__24___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__25___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__26___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__27_currentActivityThread();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__28_currentApplication();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__29_getSystemContext();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__2_getEnabledAccessibilityServiceList();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__3___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__4___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__5_getDecorView();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__6___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__7___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__8___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__9___init__();


// The module function definitions.
static PyObject *impl_androidemu$java$classes$activity_thread$$$function__2_getEnabledAccessibilityServiceList(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_i = python_pars[2];
    struct Nuitka_FrameObject *frame_d30ed53658340c921d4ce7a2403bf539;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d30ed53658340c921d4ce7a2403bf539 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d30ed53658340c921d4ce7a2403bf539)) {
        Py_XDECREF(cache_frame_d30ed53658340c921d4ce7a2403bf539);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d30ed53658340c921d4ce7a2403bf539 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d30ed53658340c921d4ce7a2403bf539 = MAKE_FUNCTION_FRAME(codeobj_d30ed53658340c921d4ce7a2403bf539, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d30ed53658340c921d4ce7a2403bf539->m_type_description == NULL);
    frame_d30ed53658340c921d4ce7a2403bf539 = cache_frame_d30ed53658340c921d4ce7a2403bf539;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d30ed53658340c921d4ce7a2403bf539);
    assert(Py_REFCNT(frame_d30ed53658340c921d4ce7a2403bf539) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d30ed53658340c921d4ce7a2403bf539->m_frame.f_lineno = 15;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 15;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d30ed53658340c921d4ce7a2403bf539, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d30ed53658340c921d4ce7a2403bf539->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d30ed53658340c921d4ce7a2403bf539, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d30ed53658340c921d4ce7a2403bf539,
        type_description_1,
        par_self,
        par_emu,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_d30ed53658340c921d4ce7a2403bf539 == cache_frame_d30ed53658340c921d4ce7a2403bf539) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d30ed53658340c921d4ce7a2403bf539);
        cache_frame_d30ed53658340c921d4ce7a2403bf539 = NULL;
    }

    assertFrameObject(frame_d30ed53658340c921d4ce7a2403bf539);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7b277bc4688f25028d4bc7ec3e0d2153;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7b277bc4688f25028d4bc7ec3e0d2153 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7b277bc4688f25028d4bc7ec3e0d2153)) {
        Py_XDECREF(cache_frame_7b277bc4688f25028d4bc7ec3e0d2153);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7b277bc4688f25028d4bc7ec3e0d2153 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7b277bc4688f25028d4bc7ec3e0d2153 = MAKE_FUNCTION_FRAME(codeobj_7b277bc4688f25028d4bc7ec3e0d2153, module_androidemu$java$classes$activity_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7b277bc4688f25028d4bc7ec3e0d2153->m_type_description == NULL);
    frame_7b277bc4688f25028d4bc7ec3e0d2153 = cache_frame_7b277bc4688f25028d4bc7ec3e0d2153;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7b277bc4688f25028d4bc7ec3e0d2153);
    assert(Py_REFCNT(frame_7b277bc4688f25028d4bc7ec3e0d2153) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7b277bc4688f25028d4bc7ec3e0d2153->m_frame.f_lineno = 27;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7b277bc4688f25028d4bc7ec3e0d2153, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b277bc4688f25028d4bc7ec3e0d2153->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b277bc4688f25028d4bc7ec3e0d2153, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7b277bc4688f25028d4bc7ec3e0d2153,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7b277bc4688f25028d4bc7ec3e0d2153 == cache_frame_7b277bc4688f25028d4bc7ec3e0d2153) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7b277bc4688f25028d4bc7ec3e0d2153);
        cache_frame_7b277bc4688f25028d4bc7ec3e0d2153 = NULL;
    }

    assertFrameObject(frame_7b277bc4688f25028d4bc7ec3e0d2153);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__5_getDecorView(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_200a4305d4d9dce6e09ebd77b81d6e0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a)) {
        Py_XDECREF(cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a = MAKE_FUNCTION_FRAME(codeobj_200a4305d4d9dce6e09ebd77b81d6e0a, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a->m_type_description == NULL);
    frame_200a4305d4d9dce6e09ebd77b81d6e0a = cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_200a4305d4d9dce6e09ebd77b81d6e0a);
    assert(Py_REFCNT(frame_200a4305d4d9dce6e09ebd77b81d6e0a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_200a4305d4d9dce6e09ebd77b81d6e0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_200a4305d4d9dce6e09ebd77b81d6e0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_200a4305d4d9dce6e09ebd77b81d6e0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_200a4305d4d9dce6e09ebd77b81d6e0a,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_200a4305d4d9dce6e09ebd77b81d6e0a == cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a);
        cache_frame_200a4305d4d9dce6e09ebd77b81d6e0a = NULL;
    }

    assertFrameObject(frame_200a4305d4d9dce6e09ebd77b81d6e0a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2f346aba5218cc052036bd06c16f56ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2f346aba5218cc052036bd06c16f56ff = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f346aba5218cc052036bd06c16f56ff)) {
        Py_XDECREF(cache_frame_2f346aba5218cc052036bd06c16f56ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f346aba5218cc052036bd06c16f56ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f346aba5218cc052036bd06c16f56ff = MAKE_FUNCTION_FRAME(codeobj_2f346aba5218cc052036bd06c16f56ff, module_androidemu$java$classes$activity_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f346aba5218cc052036bd06c16f56ff->m_type_description == NULL);
    frame_2f346aba5218cc052036bd06c16f56ff = cache_frame_2f346aba5218cc052036bd06c16f56ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f346aba5218cc052036bd06c16f56ff);
    assert(Py_REFCNT(frame_2f346aba5218cc052036bd06c16f56ff) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2f346aba5218cc052036bd06c16f56ff->m_frame.f_lineno = 43;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f346aba5218cc052036bd06c16f56ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f346aba5218cc052036bd06c16f56ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f346aba5218cc052036bd06c16f56ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f346aba5218cc052036bd06c16f56ff,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2f346aba5218cc052036bd06c16f56ff == cache_frame_2f346aba5218cc052036bd06c16f56ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f346aba5218cc052036bd06c16f56ff);
        cache_frame_2f346aba5218cc052036bd06c16f56ff = NULL;
    }

    assertFrameObject(frame_2f346aba5218cc052036bd06c16f56ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_view_root_impl = python_pars[1];
    struct Nuitka_FrameObject *frame_4119793e72ecf97cd96fd899fb94afeb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4119793e72ecf97cd96fd899fb94afeb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4119793e72ecf97cd96fd899fb94afeb)) {
        Py_XDECREF(cache_frame_4119793e72ecf97cd96fd899fb94afeb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4119793e72ecf97cd96fd899fb94afeb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4119793e72ecf97cd96fd899fb94afeb = MAKE_FUNCTION_FRAME(codeobj_4119793e72ecf97cd96fd899fb94afeb, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4119793e72ecf97cd96fd899fb94afeb->m_type_description == NULL);
    frame_4119793e72ecf97cd96fd899fb94afeb = cache_frame_4119793e72ecf97cd96fd899fb94afeb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4119793e72ecf97cd96fd899fb94afeb);
    assert(Py_REFCNT(frame_4119793e72ecf97cd96fd899fb94afeb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_view_root_impl);
        tmp_assattr_value_1 = par_view_root_impl;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4119793e72ecf97cd96fd899fb94afeb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4119793e72ecf97cd96fd899fb94afeb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4119793e72ecf97cd96fd899fb94afeb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4119793e72ecf97cd96fd899fb94afeb,
        type_description_1,
        par_self,
        par_view_root_impl
    );


    // Release cached frame if used for exception.
    if (frame_4119793e72ecf97cd96fd899fb94afeb == cache_frame_4119793e72ecf97cd96fd899fb94afeb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4119793e72ecf97cd96fd899fb94afeb);
        cache_frame_4119793e72ecf97cd96fd899fb94afeb = NULL;
    }

    assertFrameObject(frame_4119793e72ecf97cd96fd899fb94afeb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_view_root_impl);
    Py_DECREF(par_view_root_impl);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_view_root_impl);
    Py_DECREF(par_view_root_impl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8e4f912ff7312649cdb466d755883013;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8e4f912ff7312649cdb466d755883013 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8e4f912ff7312649cdb466d755883013)) {
        Py_XDECREF(cache_frame_8e4f912ff7312649cdb466d755883013);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e4f912ff7312649cdb466d755883013 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e4f912ff7312649cdb466d755883013 = MAKE_FUNCTION_FRAME(codeobj_8e4f912ff7312649cdb466d755883013, module_androidemu$java$classes$activity_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e4f912ff7312649cdb466d755883013->m_type_description == NULL);
    frame_8e4f912ff7312649cdb466d755883013 = cache_frame_8e4f912ff7312649cdb466d755883013;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e4f912ff7312649cdb466d755883013);
    assert(Py_REFCNT(frame_8e4f912ff7312649cdb466d755883013) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8e4f912ff7312649cdb466d755883013->m_frame.f_lineno = 66;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8e4f912ff7312649cdb466d755883013->m_frame.f_lineno = 66;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e4f912ff7312649cdb466d755883013, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e4f912ff7312649cdb466d755883013->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e4f912ff7312649cdb466d755883013, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e4f912ff7312649cdb466d755883013,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8e4f912ff7312649cdb466d755883013 == cache_frame_8e4f912ff7312649cdb466d755883013) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e4f912ff7312649cdb466d755883013);
        cache_frame_8e4f912ff7312649cdb466d755883013 = NULL;
    }

    assertFrameObject(frame_8e4f912ff7312649cdb466d755883013);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ba7af6a6da5dfa0da26bcb315158817a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ba7af6a6da5dfa0da26bcb315158817a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba7af6a6da5dfa0da26bcb315158817a)) {
        Py_XDECREF(cache_frame_ba7af6a6da5dfa0da26bcb315158817a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba7af6a6da5dfa0da26bcb315158817a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba7af6a6da5dfa0da26bcb315158817a = MAKE_FUNCTION_FRAME(codeobj_ba7af6a6da5dfa0da26bcb315158817a, module_androidemu$java$classes$activity_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba7af6a6da5dfa0da26bcb315158817a->m_type_description == NULL);
    frame_ba7af6a6da5dfa0da26bcb315158817a = cache_frame_ba7af6a6da5dfa0da26bcb315158817a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba7af6a6da5dfa0da26bcb315158817a);
    assert(Py_REFCNT(frame_ba7af6a6da5dfa0da26bcb315158817a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ba7af6a6da5dfa0da26bcb315158817a->m_frame.f_lineno = 72;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba7af6a6da5dfa0da26bcb315158817a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba7af6a6da5dfa0da26bcb315158817a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba7af6a6da5dfa0da26bcb315158817a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba7af6a6da5dfa0da26bcb315158817a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ba7af6a6da5dfa0da26bcb315158817a == cache_frame_ba7af6a6da5dfa0da26bcb315158817a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba7af6a6da5dfa0da26bcb315158817a);
        cache_frame_ba7af6a6da5dfa0da26bcb315158817a = NULL;
    }

    assertFrameObject(frame_ba7af6a6da5dfa0da26bcb315158817a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__10_getWindow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_889f9dd1dcaf64e6a90373c7177e48af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_889f9dd1dcaf64e6a90373c7177e48af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_889f9dd1dcaf64e6a90373c7177e48af)) {
        Py_XDECREF(cache_frame_889f9dd1dcaf64e6a90373c7177e48af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_889f9dd1dcaf64e6a90373c7177e48af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_889f9dd1dcaf64e6a90373c7177e48af = MAKE_FUNCTION_FRAME(codeobj_889f9dd1dcaf64e6a90373c7177e48af, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_889f9dd1dcaf64e6a90373c7177e48af->m_type_description == NULL);
    frame_889f9dd1dcaf64e6a90373c7177e48af = cache_frame_889f9dd1dcaf64e6a90373c7177e48af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_889f9dd1dcaf64e6a90373c7177e48af);
    assert(Py_REFCNT(frame_889f9dd1dcaf64e6a90373c7177e48af) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_889f9dd1dcaf64e6a90373c7177e48af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_889f9dd1dcaf64e6a90373c7177e48af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_889f9dd1dcaf64e6a90373c7177e48af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_889f9dd1dcaf64e6a90373c7177e48af,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_889f9dd1dcaf64e6a90373c7177e48af == cache_frame_889f9dd1dcaf64e6a90373c7177e48af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_889f9dd1dcaf64e6a90373c7177e48af);
        cache_frame_889f9dd1dcaf64e6a90373c7177e48af = NULL;
    }

    assertFrameObject(frame_889f9dd1dcaf64e6a90373c7177e48af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__11_getSystemService(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_974b7e86d5faefc06b0a92241b59ef8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_974b7e86d5faefc06b0a92241b59ef8d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_974b7e86d5faefc06b0a92241b59ef8d)) {
        Py_XDECREF(cache_frame_974b7e86d5faefc06b0a92241b59ef8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_974b7e86d5faefc06b0a92241b59ef8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_974b7e86d5faefc06b0a92241b59ef8d = MAKE_FUNCTION_FRAME(codeobj_974b7e86d5faefc06b0a92241b59ef8d, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_974b7e86d5faefc06b0a92241b59ef8d->m_type_description == NULL);
    frame_974b7e86d5faefc06b0a92241b59ef8d = cache_frame_974b7e86d5faefc06b0a92241b59ef8d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_974b7e86d5faefc06b0a92241b59ef8d);
    assert(Py_REFCNT(frame_974b7e86d5faefc06b0a92241b59ef8d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_974b7e86d5faefc06b0a92241b59ef8d->m_frame.f_lineno = 84;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 84;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_974b7e86d5faefc06b0a92241b59ef8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_974b7e86d5faefc06b0a92241b59ef8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_974b7e86d5faefc06b0a92241b59ef8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_974b7e86d5faefc06b0a92241b59ef8d,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_974b7e86d5faefc06b0a92241b59ef8d == cache_frame_974b7e86d5faefc06b0a92241b59ef8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_974b7e86d5faefc06b0a92241b59ef8d);
        cache_frame_974b7e86d5faefc06b0a92241b59ef8d = NULL;
    }

    assertFrameObject(frame_974b7e86d5faefc06b0a92241b59ef8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c51e382a40b69af1aa65b51e63f33c3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c51e382a40b69af1aa65b51e63f33c3f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c51e382a40b69af1aa65b51e63f33c3f)) {
        Py_XDECREF(cache_frame_c51e382a40b69af1aa65b51e63f33c3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c51e382a40b69af1aa65b51e63f33c3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c51e382a40b69af1aa65b51e63f33c3f = MAKE_FUNCTION_FRAME(codeobj_c51e382a40b69af1aa65b51e63f33c3f, module_androidemu$java$classes$activity_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c51e382a40b69af1aa65b51e63f33c3f->m_type_description == NULL);
    frame_c51e382a40b69af1aa65b51e63f33c3f = cache_frame_c51e382a40b69af1aa65b51e63f33c3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c51e382a40b69af1aa65b51e63f33c3f);
    assert(Py_REFCNT(frame_c51e382a40b69af1aa65b51e63f33c3f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c51e382a40b69af1aa65b51e63f33c3f->m_frame.f_lineno = 96;
        tmp_assattr_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c51e382a40b69af1aa65b51e63f33c3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c51e382a40b69af1aa65b51e63f33c3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c51e382a40b69af1aa65b51e63f33c3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c51e382a40b69af1aa65b51e63f33c3f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c51e382a40b69af1aa65b51e63f33c3f == cache_frame_c51e382a40b69af1aa65b51e63f33c3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c51e382a40b69af1aa65b51e63f33c3f);
        cache_frame_c51e382a40b69af1aa65b51e63f33c3f = NULL;
    }

    assertFrameObject(frame_c51e382a40b69af1aa65b51e63f33c3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_arr = python_pars[1];
    struct Nuitka_FrameObject *frame_8e8c0974a10a7582b8fe71f1c2d14fe0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0)) {
        Py_XDECREF(cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0 = MAKE_FUNCTION_FRAME(codeobj_8e8c0974a10a7582b8fe71f1c2d14fe0, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0->m_type_description == NULL);
    frame_8e8c0974a10a7582b8fe71f1c2d14fe0 = cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e8c0974a10a7582b8fe71f1c2d14fe0);
    assert(Py_REFCNT(frame_8e8c0974a10a7582b8fe71f1c2d14fe0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_arr);
        tmp_assattr_value_1 = par_arr;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e8c0974a10a7582b8fe71f1c2d14fe0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e8c0974a10a7582b8fe71f1c2d14fe0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e8c0974a10a7582b8fe71f1c2d14fe0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e8c0974a10a7582b8fe71f1c2d14fe0,
        type_description_1,
        par_self,
        par_arr
    );


    // Release cached frame if used for exception.
    if (frame_8e8c0974a10a7582b8fe71f1c2d14fe0 == cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0);
        cache_frame_8e8c0974a10a7582b8fe71f1c2d14fe0 = NULL;
    }

    assertFrameObject(frame_8e8c0974a10a7582b8fe71f1c2d14fe0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_arr);
    Py_DECREF(par_arr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_arr);
    Py_DECREF(par_arr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__14_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_9ae28872a763d9b41bb73ed544041755;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ae28872a763d9b41bb73ed544041755 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ae28872a763d9b41bb73ed544041755)) {
        Py_XDECREF(cache_frame_9ae28872a763d9b41bb73ed544041755);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ae28872a763d9b41bb73ed544041755 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ae28872a763d9b41bb73ed544041755 = MAKE_FUNCTION_FRAME(codeobj_9ae28872a763d9b41bb73ed544041755, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ae28872a763d9b41bb73ed544041755->m_type_description == NULL);
    frame_9ae28872a763d9b41bb73ed544041755 = cache_frame_9ae28872a763d9b41bb73ed544041755;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ae28872a763d9b41bb73ed544041755);
    assert(Py_REFCNT(frame_9ae28872a763d9b41bb73ed544041755) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9ae28872a763d9b41bb73ed544041755->m_frame.f_lineno = 107;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_9ae28872a763d9b41bb73ed544041755, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ae28872a763d9b41bb73ed544041755->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ae28872a763d9b41bb73ed544041755, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ae28872a763d9b41bb73ed544041755,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_9ae28872a763d9b41bb73ed544041755 == cache_frame_9ae28872a763d9b41bb73ed544041755) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ae28872a763d9b41bb73ed544041755);
        cache_frame_9ae28872a763d9b41bb73ed544041755 = NULL;
    }

    assertFrameObject(frame_9ae28872a763d9b41bb73ed544041755);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__15_valueAt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_id = python_pars[2];
    struct Nuitka_FrameObject *frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3)) {
        Py_XDECREF(cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 = MAKE_FUNCTION_FRAME(codeobj_83ffa7bb3f6af5dfc14b8aea1ee1a9c3, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3->m_type_description == NULL);
    frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 = cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3);
    assert(Py_REFCNT(frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_id);
        tmp_subscript_value_1 = par_id;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3,
        type_description_1,
        par_self,
        par_emu,
        par_id
    );


    // Release cached frame if used for exception.
    if (frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 == cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3);
        cache_frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3 = NULL;
    }

    assertFrameObject(frame_83ffa7bb3f6af5dfc14b8aea1ee1a9c3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__19_getClass(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_62fbc953330634f0bb6fc96d76c4983f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62fbc953330634f0bb6fc96d76c4983f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62fbc953330634f0bb6fc96d76c4983f)) {
        Py_XDECREF(cache_frame_62fbc953330634f0bb6fc96d76c4983f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62fbc953330634f0bb6fc96d76c4983f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62fbc953330634f0bb6fc96d76c4983f = MAKE_FUNCTION_FRAME(codeobj_62fbc953330634f0bb6fc96d76c4983f, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62fbc953330634f0bb6fc96d76c4983f->m_type_description == NULL);
    frame_62fbc953330634f0bb6fc96d76c4983f = cache_frame_62fbc953330634f0bb6fc96d76c4983f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62fbc953330634f0bb6fc96d76c4983f);
    assert(Py_REFCNT(frame_62fbc953330634f0bb6fc96d76c4983f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_62fbc953330634f0bb6fc96d76c4983f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62fbc953330634f0bb6fc96d76c4983f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62fbc953330634f0bb6fc96d76c4983f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62fbc953330634f0bb6fc96d76c4983f,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_62fbc953330634f0bb6fc96d76c4983f == cache_frame_62fbc953330634f0bb6fc96d76c4983f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62fbc953330634f0bb6fc96d76c4983f);
        cache_frame_62fbc953330634f0bb6fc96d76c4983f = NULL;
    }

    assertFrameObject(frame_62fbc953330634f0bb6fc96d76c4983f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__21_getDefault(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_emu = python_pars[0];
    struct Nuitka_FrameObject *frame_92e38d8cfcf2723c1f0dda82cc81ef5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c)) {
        Py_XDECREF(cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c = MAKE_FUNCTION_FRAME(codeobj_92e38d8cfcf2723c1f0dda82cc81ef5c, module_androidemu$java$classes$activity_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c->m_type_description == NULL);
    frame_92e38d8cfcf2723c1f0dda82cc81ef5c = cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_92e38d8cfcf2723c1f0dda82cc81ef5c);
    assert(Py_REFCNT(frame_92e38d8cfcf2723c1f0dda82cc81ef5c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92e38d8cfcf2723c1f0dda82cc81ef5c->m_frame.f_lineno = 155;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_92e38d8cfcf2723c1f0dda82cc81ef5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92e38d8cfcf2723c1f0dda82cc81ef5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92e38d8cfcf2723c1f0dda82cc81ef5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92e38d8cfcf2723c1f0dda82cc81ef5c,
        type_description_1,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_92e38d8cfcf2723c1f0dda82cc81ef5c == cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c);
        cache_frame_92e38d8cfcf2723c1f0dda82cc81ef5c = NULL;
    }

    assertFrameObject(frame_92e38d8cfcf2723c1f0dda82cc81ef5c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__23_getClass(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_d6f2eebcfa4e51b7d52117d0af5b180b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b)) {
        Py_XDECREF(cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b = MAKE_FUNCTION_FRAME(codeobj_d6f2eebcfa4e51b7d52117d0af5b180b, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b->m_type_description == NULL);
    frame_d6f2eebcfa4e51b7d52117d0af5b180b = cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6f2eebcfa4e51b7d52117d0af5b180b);
    assert(Py_REFCNT(frame_d6f2eebcfa4e51b7d52117d0af5b180b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_d6f2eebcfa4e51b7d52117d0af5b180b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6f2eebcfa4e51b7d52117d0af5b180b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6f2eebcfa4e51b7d52117d0af5b180b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6f2eebcfa4e51b7d52117d0af5b180b,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_d6f2eebcfa4e51b7d52117d0af5b180b == cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b);
        cache_frame_d6f2eebcfa4e51b7d52117d0af5b180b = NULL;
    }

    assertFrameObject(frame_d6f2eebcfa4e51b7d52117d0af5b180b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__26___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pyPkgName = python_pars[1];
    struct Nuitka_FrameObject *frame_9dc4cd094970eb8dc4f1d9355a0b8fa3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3)) {
        Py_XDECREF(cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3 = MAKE_FUNCTION_FRAME(codeobj_9dc4cd094970eb8dc4f1d9355a0b8fa3, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_type_description == NULL);
    frame_9dc4cd094970eb8dc4f1d9355a0b8fa3 = cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9dc4cd094970eb8dc4f1d9355a0b8fa3);
    assert(Py_REFCNT(frame_9dc4cd094970eb8dc4f1d9355a0b8fa3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pyPkgName);
        tmp_args_element_value_1 = par_pyPkgName;
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame.f_lineno = 197;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame.f_lineno = 198;
        tmp_assattr_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame.f_lineno = 199;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame.f_lineno = 200;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_1);
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame.f_lineno = 200;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[25], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame.f_lineno = 201;
        tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[27], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9dc4cd094970eb8dc4f1d9355a0b8fa3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9dc4cd094970eb8dc4f1d9355a0b8fa3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9dc4cd094970eb8dc4f1d9355a0b8fa3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9dc4cd094970eb8dc4f1d9355a0b8fa3,
        type_description_1,
        par_self,
        par_pyPkgName
    );


    // Release cached frame if used for exception.
    if (frame_9dc4cd094970eb8dc4f1d9355a0b8fa3 == cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3);
        cache_frame_9dc4cd094970eb8dc4f1d9355a0b8fa3 = NULL;
    }

    assertFrameObject(frame_9dc4cd094970eb8dc4f1d9355a0b8fa3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pyPkgName);
    Py_DECREF(par_pyPkgName);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pyPkgName);
    Py_DECREF(par_pyPkgName);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__27_currentActivityThread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_emu = python_pars[0];
    PyObject *var_pyPkgName = NULL;
    struct Nuitka_FrameObject *frame_1e0dbababcdfe7a0191f40eb6220db53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e0dbababcdfe7a0191f40eb6220db53 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e0dbababcdfe7a0191f40eb6220db53)) {
        Py_XDECREF(cache_frame_1e0dbababcdfe7a0191f40eb6220db53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e0dbababcdfe7a0191f40eb6220db53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e0dbababcdfe7a0191f40eb6220db53 = MAKE_FUNCTION_FRAME(codeobj_1e0dbababcdfe7a0191f40eb6220db53, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e0dbababcdfe7a0191f40eb6220db53->m_type_description == NULL);
    frame_1e0dbababcdfe7a0191f40eb6220db53 = cache_frame_1e0dbababcdfe7a0191f40eb6220db53;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e0dbababcdfe7a0191f40eb6220db53);
    assert(Py_REFCNT(frame_1e0dbababcdfe7a0191f40eb6220db53) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_emu);
        tmp_expression_value_2 = par_emu;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1e0dbababcdfe7a0191f40eb6220db53->m_frame.f_lineno = 208;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[30]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_pyPkgName == NULL);
        var_pyPkgName = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_pyPkgName);
        tmp_cmp_expr_left_1 = var_pyPkgName;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pyPkgName);
        tmp_args_element_value_1 = var_pyPkgName;
        frame_1e0dbababcdfe7a0191f40eb6220db53->m_frame.f_lineno = 210;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pyPkgName);
        tmp_ass_subscript_1 = var_pyPkgName;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (var_pyPkgName == NULL) {
            Py_DECREF(tmp_expression_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = var_pyPkgName;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e0dbababcdfe7a0191f40eb6220db53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e0dbababcdfe7a0191f40eb6220db53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e0dbababcdfe7a0191f40eb6220db53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e0dbababcdfe7a0191f40eb6220db53,
        type_description_1,
        par_emu,
        var_pyPkgName
    );


    // Release cached frame if used for exception.
    if (frame_1e0dbababcdfe7a0191f40eb6220db53 == cache_frame_1e0dbababcdfe7a0191f40eb6220db53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e0dbababcdfe7a0191f40eb6220db53);
        cache_frame_1e0dbababcdfe7a0191f40eb6220db53 = NULL;
    }

    assertFrameObject(frame_1e0dbababcdfe7a0191f40eb6220db53);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pyPkgName);
    var_pyPkgName = NULL;
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

    Py_XDECREF(var_pyPkgName);
    var_pyPkgName = NULL;
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
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__28_currentApplication(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_emu = python_pars[0];
    PyObject *var_am = NULL;
    struct Nuitka_FrameObject *frame_2a1f63961f8c9737b0ea2b92d2f7f58f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f)) {
        Py_XDECREF(cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f = MAKE_FUNCTION_FRAME(codeobj_2a1f63961f8c9737b0ea2b92d2f7f58f, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f->m_type_description == NULL);
    frame_2a1f63961f8c9737b0ea2b92d2f7f58f = cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2a1f63961f8c9737b0ea2b92d2f7f58f);
    assert(Py_REFCNT(frame_2a1f63961f8c9737b0ea2b92d2f7f58f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_2a1f63961f8c9737b0ea2b92d2f7f58f->m_frame.f_lineno = 218;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_am == NULL);
        var_am = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_am);
        tmp_expression_value_1 = var_am;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a1f63961f8c9737b0ea2b92d2f7f58f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a1f63961f8c9737b0ea2b92d2f7f58f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a1f63961f8c9737b0ea2b92d2f7f58f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a1f63961f8c9737b0ea2b92d2f7f58f,
        type_description_1,
        par_emu,
        var_am
    );


    // Release cached frame if used for exception.
    if (frame_2a1f63961f8c9737b0ea2b92d2f7f58f == cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f);
        cache_frame_2a1f63961f8c9737b0ea2b92d2f7f58f = NULL;
    }

    assertFrameObject(frame_2a1f63961f8c9737b0ea2b92d2f7f58f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_am);
    Py_DECREF(var_am);
    var_am = NULL;
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

    Py_XDECREF(var_am);
    var_am = NULL;
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
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$activity_thread$$$function__29_getSystemContext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_bf273a016d1af67fdff67b033a52148e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf273a016d1af67fdff67b033a52148e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf273a016d1af67fdff67b033a52148e)) {
        Py_XDECREF(cache_frame_bf273a016d1af67fdff67b033a52148e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf273a016d1af67fdff67b033a52148e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf273a016d1af67fdff67b033a52148e = MAKE_FUNCTION_FRAME(codeobj_bf273a016d1af67fdff67b033a52148e, module_androidemu$java$classes$activity_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf273a016d1af67fdff67b033a52148e->m_type_description == NULL);
    frame_bf273a016d1af67fdff67b033a52148e = cache_frame_bf273a016d1af67fdff67b033a52148e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf273a016d1af67fdff67b033a52148e);
    assert(Py_REFCNT(frame_bf273a016d1af67fdff67b033a52148e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_bf273a016d1af67fdff67b033a52148e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf273a016d1af67fdff67b033a52148e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf273a016d1af67fdff67b033a52148e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf273a016d1af67fdff67b033a52148e,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_bf273a016d1af67fdff67b033a52148e == cache_frame_bf273a016d1af67fdff67b033a52148e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf273a016d1af67fdff67b033a52148e);
        cache_frame_bf273a016d1af67fdff67b033a52148e = NULL;
    }

    assertFrameObject(frame_bf273a016d1af67fdff67b033a52148e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__10_getWindow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__10_getWindow,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_889f9dd1dcaf64e6a90373c7177e48af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__11_getSystemService() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__11_getSystemService,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_974b7e86d5faefc06b0a92241b59ef8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__12___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__12___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_c51e382a40b69af1aa65b51e63f33c3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__13___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__13___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_8e8c0974a10a7582b8fe71f1c2d14fe0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__14_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__14_size,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_9ae28872a763d9b41bb73ed544041755,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__15_valueAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__15_valueAt,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_83ffa7bb3f6af5dfc14b8aea1ee1a9c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__16___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_f48ce9b9e43ddd5707085663a69ea7fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__17_isUserAMonkey() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_68a389446b1aa1c8fc8c3255162dd913,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__18___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_72d3183e7329d30f58fb06e088383c56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__19_getClass() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__19_getClass,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_62fbc953330634f0bb6fc96d76c4983f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_a6c187be49274cbb82f878e5f45670d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__20___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_a234119e77435c8596f787c29a4c8033,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__21_getDefault() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__21_getDefault,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_92e38d8cfcf2723c1f0dda82cc81ef5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__22___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_18bbfd96212e4f865dc458c5d3225637,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__23_getClass() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__23_getClass,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_d6f2eebcfa4e51b7d52117d0af5b180b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__24___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_764accfe6a5a4ab058a5415b2dc2020a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__25___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_e328746b16be312914171db3b0df139a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__26___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__26___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_9dc4cd094970eb8dc4f1d9355a0b8fa3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__27_currentActivityThread() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__27_currentActivityThread,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_1e0dbababcdfe7a0191f40eb6220db53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__28_currentApplication() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__28_currentApplication,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_2a1f63961f8c9737b0ea2b92d2f7f58f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__29_getSystemContext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__29_getSystemContext,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_bf273a016d1af67fdff67b033a52148e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__2_getEnabledAccessibilityServiceList() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__2_getEnabledAccessibilityServiceList,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_d30ed53658340c921d4ce7a2403bf539,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_e09d64b3762605d6415739052c8d739b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__4___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_7b277bc4688f25028d4bc7ec3e0d2153,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__5_getDecorView() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__5_getDecorView,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_200a4305d4d9dce6e09ebd77b81d6e0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__6___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_2f346aba5218cc052036bd06c16f56ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__7___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__7___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_4119793e72ecf97cd96fd899fb94afeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__8___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_8e4f912ff7312649cdb466d755883013,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__9___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$activity_thread$$$function__9___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_ba7af6a6da5dfa0da26bcb315158817a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$activity_thread,
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

function_impl_code functable_androidemu$java$classes$activity_thread[] = {
    NULL,
    impl_androidemu$java$classes$activity_thread$$$function__2_getEnabledAccessibilityServiceList,
    NULL,
    impl_androidemu$java$classes$activity_thread$$$function__4___init__,
    impl_androidemu$java$classes$activity_thread$$$function__5_getDecorView,
    impl_androidemu$java$classes$activity_thread$$$function__6___init__,
    impl_androidemu$java$classes$activity_thread$$$function__7___init__,
    impl_androidemu$java$classes$activity_thread$$$function__8___init__,
    impl_androidemu$java$classes$activity_thread$$$function__9___init__,
    impl_androidemu$java$classes$activity_thread$$$function__10_getWindow,
    impl_androidemu$java$classes$activity_thread$$$function__11_getSystemService,
    impl_androidemu$java$classes$activity_thread$$$function__12___init__,
    impl_androidemu$java$classes$activity_thread$$$function__13___init__,
    impl_androidemu$java$classes$activity_thread$$$function__14_size,
    impl_androidemu$java$classes$activity_thread$$$function__15_valueAt,
    NULL,
    NULL,
    NULL,
    impl_androidemu$java$classes$activity_thread$$$function__19_getClass,
    NULL,
    impl_androidemu$java$classes$activity_thread$$$function__21_getDefault,
    NULL,
    impl_androidemu$java$classes$activity_thread$$$function__23_getClass,
    NULL,
    NULL,
    impl_androidemu$java$classes$activity_thread$$$function__26___init__,
    impl_androidemu$java$classes$activity_thread$$$function__27_currentActivityThread,
    impl_androidemu$java$classes$activity_thread$$$function__28_currentApplication,
    impl_androidemu$java$classes$activity_thread$$$function__29_getSystemContext,
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

    function_impl_code *current = functable_androidemu$java$classes$activity_thread;
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

    if (offset > sizeof(functable_androidemu$java$classes$activity_thread) || offset < 0) {
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
        functable_androidemu$java$classes$activity_thread[offset],
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
        module_androidemu$java$classes$activity_thread,
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
PyObject *modulecode_androidemu$java$classes$activity_thread(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("androidemu.java.classes.activity_thread");

    // Store the module for future use.
    module_androidemu$java$classes$activity_thread = module;

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
        PRINT_STRING("androidemu.java.classes.activity_thread: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("androidemu.java.classes.activity_thread: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initandroidemu$java$classes$activity_thread\n");

    moduledict_androidemu$java$classes$activity_thread = MODULE_DICT(module_androidemu$java$classes$activity_thread);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_androidemu$java$classes$activity_thread,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_androidemu$java$classes$activity_thread,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[186]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_androidemu$java$classes$activity_thread,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_androidemu$java$classes$activity_thread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_androidemu$java$classes$activity_thread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_androidemu$java$classes$activity_thread);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_androidemu$java$classes$activity_thread);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_73c92d3b87962c512beb0c13f31e4805;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a0057b4beb0163984e112cff7170f192_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19 = NULL;
    struct Nuitka_FrameObject *frame_64264a41d8594e6e4a7cb480eec59396_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__3_Window_25 = NULL;
    struct Nuitka_FrameObject *frame_70f6fae73f1e8ac59c39de0789f5132a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36 = NULL;
    struct Nuitka_FrameObject *frame_05b2063a63f24dbfe17a348416b16224_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47 = NULL;
    struct Nuitka_FrameObject *frame_c97ce38914c7580dbff296c8f1cc455b_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__6_View_60 = NULL;
    struct Nuitka_FrameObject *frame_0a5349cd21bea20cdab70fa27ddfdb6b_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70 = NULL;
    struct Nuitka_FrameObject *frame_f0d29730396ec8a3593b072dce8fe9bc_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89 = NULL;
    struct Nuitka_FrameObject *frame_2c4789c9a89bec52db875da7981eeb39_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100 = NULL;
    struct Nuitka_FrameObject *frame_8e8af810a09183e8fc564ded04b387b6_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116 = NULL;
    struct Nuitka_FrameObject *frame_a02618a6337685aec1926d46c3807cce_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130 = NULL;
    struct Nuitka_FrameObject *frame_17e98f5db00991d2ea22da7c444e0d28_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145 = NULL;
    struct Nuitka_FrameObject *frame_c8b93fff2b1ddf64b57d44e90712cfb4_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160 = NULL;
    struct Nuitka_FrameObject *frame_3d05457eed668c48d1a4206ae3b34d8f_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174 = NULL;
    struct Nuitka_FrameObject *frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180 = NULL;
    struct Nuitka_FrameObject *frame_da094a5da1baca90065440da5620bbef_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188 = NULL;
    struct Nuitka_FrameObject *frame_6667d72e47d2919afccb615dbd7326bc_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_2);
    }
    frame_73c92d3b87962c512beb0c13f31e4805 = MAKE_MODULE_FRAME(codeobj_73c92d3b87962c512beb0c13f31e4805, module_androidemu$java$classes$activity_thread);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_73c92d3b87962c512beb0c13f31e4805);
    assert(Py_REFCNT(frame_73c92d3b87962c512beb0c13f31e4805) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[41];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[42];
        tmp_level_value_1 = mod_consts[43];
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_androidemu$java$classes$activity_thread,
                mod_consts[44],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[46];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[47];
        tmp_level_value_2 = mod_consts[43];
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_androidemu$java$classes$activity_thread,
                mod_consts[48],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[49];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[50];
        tmp_level_value_3 = mod_consts[43];
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_androidemu$java$classes$activity_thread,
                mod_consts[49],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[49]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_androidemu$java$classes$activity_thread,
                mod_consts[51],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[51]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[52];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[53];
        tmp_level_value_4 = mod_consts[43];
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 4;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_androidemu$java$classes$activity_thread,
                mod_consts[18],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[54];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_locals_arg_value_5 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_fromlist_value_5 = mod_consts[55];
        tmp_level_value_5 = mod_consts[43];
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_androidemu$java$classes$activity_thread, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[56];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_androidemu$java$classes$activity_thread;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[57];
        tmp_level_value_6 = mod_consts[58];
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_androidemu$java$classes$activity_thread,
                mod_consts[20],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[59];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_assign_source_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[60];
        tmp_dict_value_1 = mod_consts[61];
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[59];
        tmp_assign_source_12 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_12 == NULL) {
            tmp_assign_source_12 = Py_None;
        }
        assert(!(tmp_assign_source_12 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_12 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_12);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_1, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_args_value_1 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 8;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_3, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_name_value_7 = mod_consts[66];
        tmp_default_value_1 = mod_consts[67];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_expression_value_4, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 8;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        frame_a0057b4beb0163984e112cff7170f192_2 = MAKE_CLASS_FRAME(codeobj_a0057b4beb0163984e112cff7170f192, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a0057b4beb0163984e112cff7170f192_2);
        assert(Py_REFCNT(frame_a0057b4beb0163984e112cff7170f192_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_call_args_kwsplit_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_3 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8, mod_consts[49]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 13;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[74], "ilii");
            frame_a0057b4beb0163984e112cff7170f192_2->m_frame.f_lineno = 13;
            tmp_called_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[75]);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_call_args_kwsplit_1);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__2_getEnabledAccessibilityServiceList();

            frame_a0057b4beb0163984e112cff7170f192_2->m_frame.f_lineno = 13;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0057b4beb0163984e112cff7170f192_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0057b4beb0163984e112cff7170f192_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0057b4beb0163984e112cff7170f192_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0057b4beb0163984e112cff7170f192_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_a0057b4beb0163984e112cff7170f192_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[70];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 8;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8);
        locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8);
        locals_androidemu$java$classes$activity_thread$$$class__1_AccessibilityManager_8 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 8;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_15);
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[59];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_assign_source_17 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[60];
        tmp_dict_value_2 = mod_consts[79];
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        tmp_key_value_4 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[59];
        tmp_assign_source_18 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_assign_source_18 == NULL) {
            tmp_assign_source_18 = Py_None;
        }
        assert(!(tmp_assign_source_18 == NULL));
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_18 = (PyObject *)&PyType_Type;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        Py_INCREF(tmp_assign_source_18);
        tmp_class_creation_2__metaclass = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 19;

        goto try_except_handler_5;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_6 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_6, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_args_value_3 = mod_consts[80];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 19;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_8 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_8, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_name_value_8 = mod_consts[66];
        tmp_default_value_2 = mod_consts[67];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_expression_value_9, tmp_name_value_8, tmp_default_value_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[66]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_20;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[3];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_7;
        }
        frame_64264a41d8594e6e4a7cb480eec59396_3 = MAKE_CLASS_FRAME(codeobj_64264a41d8594e6e4a7cb480eec59396, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_64264a41d8594e6e4a7cb480eec59396_3);
        assert(Py_REFCNT(frame_64264a41d8594e6e4a7cb480eec59396_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_64264a41d8594e6e4a7cb480eec59396_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_64264a41d8594e6e4a7cb480eec59396_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_64264a41d8594e6e4a7cb480eec59396_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_64264a41d8594e6e4a7cb480eec59396_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_64264a41d8594e6e4a7cb480eec59396_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[3];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 19;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_21 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19);
        locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19);
        locals_androidemu$java$classes$activity_thread$$$class__2_AccessibilityInteractionController_19 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 19;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[59];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        tmp_assign_source_23 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[60];
        tmp_dict_value_3 = mod_consts[82];
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        tmp_key_value_7 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[59];
        tmp_assign_source_24 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_24 == NULL) {
            tmp_assign_source_24 = Py_None;
        }
        assert(!(tmp_assign_source_24 == NULL));
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_24 = (PyObject *)&PyType_Type;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        Py_INCREF(tmp_assign_source_24);
        tmp_class_creation_3__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 25;

        goto try_except_handler_8;
    }
    branch_no_7:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_11 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_11, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_5;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[62]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        tmp_args_value_5 = mod_consts[83];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 25;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_13 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_13, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_name_value_9 = mod_consts[66];
        tmp_default_value_3 = mod_consts[67];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_expression_value_14, tmp_name_value_9, tmp_default_value_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_3 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[66]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 25;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__3_Window_25 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_10;
        }
        frame_70f6fae73f1e8ac59c39de0789f5132a_4 = MAKE_CLASS_FRAME(codeobj_70f6fae73f1e8ac59c39de0789f5132a, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_70f6fae73f1e8ac59c39de0789f5132a_4);
        assert(Py_REFCNT(frame_70f6fae73f1e8ac59c39de0789f5132a_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__4___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_9 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25, mod_consts[49]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_70f6fae73f1e8ac59c39de0789f5132a_4->m_frame.f_lineno = 30;
            tmp_called_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[85], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_9);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__5_getDecorView();

            frame_70f6fae73f1e8ac59c39de0789f5132a_4->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70f6fae73f1e8ac59c39de0789f5132a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70f6fae73f1e8ac59c39de0789f5132a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70f6fae73f1e8ac59c39de0789f5132a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70f6fae73f1e8ac59c39de0789f5132a_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_70f6fae73f1e8ac59c39de0789f5132a_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[9];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_androidemu$java$classes$activity_thread$$$class__3_Window_25;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 25;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_27 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25);
        locals_androidemu$java$classes$activity_thread$$$class__3_Window_25 = NULL;
        goto try_return_handler_9;
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

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__3_Window_25);
        locals_androidemu$java$classes$activity_thread$$$class__3_Window_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 25;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[59];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        tmp_assign_source_29 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_11;
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[60];
            tmp_dict_value_4 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[90];
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 38;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_11, mod_consts[91]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_dict_value_4 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_1);
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_29);
        goto try_except_handler_11;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        tmp_key_value_10 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[59];
        tmp_assign_source_30 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_assign_source_30 == NULL) {
            tmp_assign_source_30 = Py_None;
        }
        assert(!(tmp_assign_source_30 == NULL));
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_30 = (PyObject *)&PyType_Type;
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        Py_INCREF(tmp_assign_source_30);
        tmp_class_creation_4__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 36;

        goto try_except_handler_11;
    }
    branch_no_10:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_16 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_16, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_7;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[62]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        tmp_args_value_7 = mod_consts[92];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 36;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_18 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_18, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_19 = tmp_class_creation_4__metaclass;
        tmp_name_value_10 = mod_consts[66];
        tmp_default_value_4 = mod_consts[67];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_expression_value_19, tmp_name_value_10, tmp_default_value_4);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[66]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 36;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_32;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[7];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_13;
        }
        frame_05b2063a63f24dbfe17a348416b16224_5 = MAKE_CLASS_FRAME(codeobj_05b2063a63f24dbfe17a348416b16224, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_05b2063a63f24dbfe17a348416b16224_5);
        assert(Py_REFCNT(frame_05b2063a63f24dbfe17a348416b16224_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__6___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_05b2063a63f24dbfe17a348416b16224_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_05b2063a63f24dbfe17a348416b16224_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_05b2063a63f24dbfe17a348416b16224_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_05b2063a63f24dbfe17a348416b16224_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_05b2063a63f24dbfe17a348416b16224_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_13 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = mod_consts[7];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 36;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_33 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36);
        locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36);
        locals_androidemu$java$classes$activity_thread$$$class__4_ViewRootImpl_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 36;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_33);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[59];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_assign_source_35 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_value_14;
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[60];
            tmp_dict_value_5 = mod_consts[94];
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[90];
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 49;
            tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_14, mod_consts[95]);

            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            tmp_dict_value_5 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_2);
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_35);
        goto try_except_handler_14;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        bool tmp_condition_result_17;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        tmp_key_value_13 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[59];
        tmp_assign_source_36 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_assign_source_36 == NULL) {
            tmp_assign_source_36 = Py_None;
        }
        assert(!(tmp_assign_source_36 == NULL));
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_36 = (PyObject *)&PyType_Type;
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        Py_INCREF(tmp_assign_source_36);
        tmp_class_creation_5__metaclass = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;

        goto try_except_handler_14;
    }
    branch_no_13:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_21 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_21, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_9;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[62]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_args_value_9 = mod_consts[96];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 47;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_15);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_23 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_23, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_24 = tmp_class_creation_5__metaclass;
        tmp_name_value_11 = mod_consts[66];
        tmp_default_value_5 = mod_consts[67];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_expression_value_24, tmp_name_value_11, tmp_default_value_5);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_5 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[66]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 47;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_38;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_16;
        }
        frame_c97ce38914c7580dbff296c8f1cc455b_6 = MAKE_CLASS_FRAME(codeobj_c97ce38914c7580dbff296c8f1cc455b, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c97ce38914c7580dbff296c8f1cc455b_6);
        assert(Py_REFCNT(frame_c97ce38914c7580dbff296c8f1cc455b_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__7___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c97ce38914c7580dbff296c8f1cc455b_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c97ce38914c7580dbff296c8f1cc455b_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c97ce38914c7580dbff296c8f1cc455b_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c97ce38914c7580dbff296c8f1cc455b_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_c97ce38914c7580dbff296c8f1cc455b_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_16 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_10 = mod_consts[6];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 47;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_39 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47);
        locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47 = NULL;
        goto try_return_handler_15;
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

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47);
        locals_androidemu$java$classes$activity_thread$$$class__5_AttachInfo_47 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 47;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_39);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[59];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        tmp_assign_source_41 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_17;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[60];
            tmp_dict_value_6 = mod_consts[98];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[90];
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_3;
            }
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 62;
            tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_17, mod_consts[99]);

            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_3;
            }
            tmp_dict_value_6 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_6, 0, tmp_list_element_3);
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_41);
        goto try_except_handler_17;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        tmp_key_value_16 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[59];
        tmp_assign_source_42 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_assign_source_42 == NULL) {
            tmp_assign_source_42 = Py_None;
        }
        assert(!(tmp_assign_source_42 == NULL));
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_assign_source_42 = (PyObject *)&PyType_Type;
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        Py_INCREF(tmp_assign_source_42);
        tmp_class_creation_6__metaclass = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 60;

        goto try_except_handler_17;
    }
    branch_no_16:;
    {
        bool tmp_condition_result_23;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_26 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_26, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_11;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_27 = tmp_class_creation_6__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[62]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        tmp_args_value_11 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 60;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_28 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_28, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_29 = tmp_class_creation_6__metaclass;
        tmp_name_value_12 = mod_consts[66];
        tmp_default_value_6 = mod_consts[67];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_expression_value_29, tmp_name_value_12, tmp_default_value_6);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_6 = tmp_class_creation_6__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[66]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 60;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_44;
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__6_View_60 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__6_View_60, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__6_View_60, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_19;
        }
        frame_0a5349cd21bea20cdab70fa27ddfdb6b_7 = MAKE_CLASS_FRAME(codeobj_0a5349cd21bea20cdab70fa27ddfdb6b, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0a5349cd21bea20cdab70fa27ddfdb6b_7);
        assert(Py_REFCNT(frame_0a5349cd21bea20cdab70fa27ddfdb6b_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__8___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__6_View_60, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0a5349cd21bea20cdab70fa27ddfdb6b_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0a5349cd21bea20cdab70fa27ddfdb6b_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0a5349cd21bea20cdab70fa27ddfdb6b_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0a5349cd21bea20cdab70fa27ddfdb6b_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_0a5349cd21bea20cdab70fa27ddfdb6b_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_19 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_12 = mod_consts[1];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_androidemu$java$classes$activity_thread$$$class__6_View_60;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 60;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_45 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__6_View_60);
        locals_androidemu$java$classes$activity_thread$$$class__6_View_60 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__6_View_60);
        locals_androidemu$java$classes$activity_thread$$$class__6_View_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 60;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_45);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[59];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        tmp_assign_source_47 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[60];
        tmp_dict_value_7 = mod_consts[102];
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        bool tmp_condition_result_25;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        tmp_key_value_19 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[59];
        tmp_assign_source_48 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_assign_source_48 == NULL) {
            tmp_assign_source_48 = Py_None;
        }
        assert(!(tmp_assign_source_48 == NULL));
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_48 = (PyObject *)&PyType_Type;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        Py_INCREF(tmp_assign_source_48);
        tmp_class_creation_7__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;

        goto try_except_handler_20;
    }
    branch_no_19:;
    {
        bool tmp_condition_result_27;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_31 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_31, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_value_13;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_32 = tmp_class_creation_7__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[62]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        tmp_args_value_13 = mod_consts[103];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 70;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_33 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_33, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_34 = tmp_class_creation_7__metaclass;
        tmp_name_value_13 = mod_consts[66];
        tmp_default_value_7 = mod_consts[67];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_expression_value_34, tmp_name_value_13, tmp_default_value_7);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_7 = tmp_class_creation_7__prepared;
            tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_value_35 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[66]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 70;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_21:;
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_50;
    }
    branch_end_20:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[12];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_22;
        }
        frame_f0d29730396ec8a3593b072dce8fe9bc_8 = MAKE_CLASS_FRAME(codeobj_f0d29730396ec8a3593b072dce8fe9bc, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f0d29730396ec8a3593b072dce8fe9bc_8);
        assert(Py_REFCNT(frame_f0d29730396ec8a3593b072dce8fe9bc_8) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__9___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_22 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[49]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_f0d29730396ec8a3593b072dce8fe9bc_8->m_frame.f_lineno = 76;
            tmp_called_value_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[105], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_22);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__10_getWindow();

            frame_f0d29730396ec8a3593b072dce8fe9bc_8->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_24 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[49]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_f0d29730396ec8a3593b072dce8fe9bc_8->m_frame.f_lineno = 82;
            tmp_called_value_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[108], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_24);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__11_getSystemService();

            frame_f0d29730396ec8a3593b072dce8fe9bc_8->m_frame.f_lineno = 82;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f0d29730396ec8a3593b072dce8fe9bc_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f0d29730396ec8a3593b072dce8fe9bc_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f0d29730396ec8a3593b072dce8fe9bc_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f0d29730396ec8a3593b072dce8fe9bc_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_f0d29730396ec8a3593b072dce8fe9bc_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_25 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_14 = mod_consts[12];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 70;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_51 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70);
        locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70);
        locals_androidemu$java$classes$activity_thread$$$class__7_Activity_70 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 70;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_51);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[59];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        tmp_assign_source_53 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_value_26;
            tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[60];
            tmp_dict_value_8 = mod_consts[111];
            tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[90];
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_4;
            }
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 91;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_26, mod_consts[112]);

            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_4;
            }
            tmp_dict_value_8 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_27;
                PyList_SET_ITEM(tmp_dict_value_8, 0, tmp_list_element_4);
                tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

                if (unlikely(tmp_called_value_27 == NULL)) {
                    tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                }

                if (tmp_called_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;

                    goto list_build_exception_1;
                }
                frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 92;
                tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_27, mod_consts[113]);

                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;

                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dict_value_8, 1, tmp_list_element_4);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dict_value_8);
            goto dict_build_exception_4;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_assign_source_53);
        goto try_except_handler_23;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        bool tmp_condition_result_29;
        PyObject *tmp_key_value_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        tmp_key_value_22 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_22, tmp_key_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_value_23 = mod_consts[59];
        tmp_assign_source_54 = DICT_GET_ITEM0(tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_assign_source_54 == NULL) {
            tmp_assign_source_54 = Py_None;
        }
        assert(!(tmp_assign_source_54 == NULL));
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_54 = (PyObject *)&PyType_Type;
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        Py_INCREF(tmp_assign_source_54);
        tmp_class_creation_8__metaclass = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_key_value_24;
        PyObject *tmp_dict_arg_value_24;
        tmp_key_value_24 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_24, tmp_key_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;

        goto try_except_handler_23;
    }
    branch_no_22:;
    {
        bool tmp_condition_result_31;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_36 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_36, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_15;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_37 = tmp_class_creation_8__metaclass;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[62]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        tmp_args_value_15 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 89;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_28);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_38 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_38, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_32 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_39 = tmp_class_creation_8__metaclass;
        tmp_name_value_14 = mod_consts[66];
        tmp_default_value_8 = mod_consts[67];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_expression_value_39, tmp_name_value_14, tmp_default_value_8);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_8 = tmp_class_creation_8__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[66]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 89;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_24:;
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_56;
    }
    branch_end_23:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_25;
        }
        frame_2c4789c9a89bec52db875da7981eeb39_9 = MAKE_CLASS_FRAME(codeobj_2c4789c9a89bec52db875da7981eeb39, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2c4789c9a89bec52db875da7981eeb39_9);
        assert(Py_REFCNT(frame_2c4789c9a89bec52db875da7981eeb39_9) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__12___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2c4789c9a89bec52db875da7981eeb39_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2c4789c9a89bec52db875da7981eeb39_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2c4789c9a89bec52db875da7981eeb39_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2c4789c9a89bec52db875da7981eeb39_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_2c4789c9a89bec52db875da7981eeb39_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_25;
        skip_nested_handling_8:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_29 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_16 = mod_consts[24];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 89;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_57 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89);
        locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89);
        locals_androidemu$java$classes$activity_thread$$$class__8_ActivityClientRecord_89 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 89;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_57);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[59];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        tmp_assign_source_59 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_59, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[60];
        tmp_dict_value_9 = mod_consts[116];
        tmp_res = PyDict_SetItem(tmp_assign_source_59, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        tmp_key_value_25 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_25, tmp_key_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_value_26 = mod_consts[59];
        tmp_assign_source_60 = DICT_GET_ITEM0(tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_assign_source_60 == NULL) {
            tmp_assign_source_60 = Py_None;
        }
        assert(!(tmp_assign_source_60 == NULL));
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_assign_source_60 = (PyObject *)&PyType_Type;
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        Py_INCREF(tmp_assign_source_60);
        tmp_class_creation_9__metaclass = tmp_assign_source_60;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_key_value_27;
        PyObject *tmp_dict_arg_value_27;
        tmp_key_value_27 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_27, tmp_key_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 100;

        goto try_except_handler_26;
    }
    branch_no_25:;
    {
        bool tmp_condition_result_35;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_41 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_41, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        tmp_condition_result_35 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_value_17;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_42 = tmp_class_creation_9__metaclass;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[62]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        tmp_args_value_17 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 100;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_30);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_43 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_43, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_36 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_44 = tmp_class_creation_9__metaclass;
        tmp_name_value_15 = mod_consts[66];
        tmp_default_value_9 = mod_consts[67];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_expression_value_44, tmp_name_value_15, tmp_default_value_9);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_type_arg_9;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_9 = tmp_class_creation_9__prepared;
            tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_expression_value_45 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[66]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_62;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_28;
        }
        frame_8e8af810a09183e8fc564ded04b387b6_10 = MAKE_CLASS_FRAME(codeobj_8e8af810a09183e8fc564ded04b387b6, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8e8af810a09183e8fc564ded04b387b6_10);
        assert(Py_REFCNT(frame_8e8af810a09183e8fc564ded04b387b6_10) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__13___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_32 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[49]);

            if (tmp_called_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_32 == NULL)) {
                        tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_value_32);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_8e8af810a09183e8fc564ded04b387b6_10->m_frame.f_lineno = 105;
            tmp_called_value_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[119], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_32);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__14_size();

            frame_8e8af810a09183e8fc564ded04b387b6_10->m_frame.f_lineno = 105;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_call_args_kwsplit_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_34 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[49]);

            if (tmp_called_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_34 == NULL)) {
                        tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_value_34);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_call_args_kwsplit_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[122], "ilii");
            frame_8e8af810a09183e8fc564ded04b387b6_10->m_frame.f_lineno = 110;
            tmp_called_value_33 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_34, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_2, 0), mod_consts[75]);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_call_args_kwsplit_2);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__15_valueAt();

            frame_8e8af810a09183e8fc564ded04b387b6_10->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8e8af810a09183e8fc564ded04b387b6_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8e8af810a09183e8fc564ded04b387b6_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8e8af810a09183e8fc564ded04b387b6_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8e8af810a09183e8fc564ded04b387b6_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_8e8af810a09183e8fc564ded04b387b6_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_28;
        skip_nested_handling_9:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_35 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_18 = mod_consts[23];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 100;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_63 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100);
        locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100);
        locals_androidemu$java$classes$activity_thread$$$class__9_ArrayMap_100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 100;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_63);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_10 = mod_consts[59];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        tmp_assign_source_65 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_65, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[60];
        tmp_dict_value_10 = mod_consts[125];
        tmp_res = PyDict_SetItem(tmp_assign_source_65, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        bool tmp_condition_result_37;
        PyObject *tmp_key_value_28;
        PyObject *tmp_dict_arg_value_28;
        PyObject *tmp_dict_arg_value_29;
        PyObject *tmp_key_value_29;
        tmp_key_value_28 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_28, tmp_key_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_value_29 = mod_consts[59];
        tmp_assign_source_66 = DICT_GET_ITEM0(tmp_dict_arg_value_29, tmp_key_value_29);
        if (tmp_assign_source_66 == NULL) {
            tmp_assign_source_66 = Py_None;
        }
        assert(!(tmp_assign_source_66 == NULL));
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_assign_source_66 = (PyObject *)&PyType_Type;
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        Py_INCREF(tmp_assign_source_66);
        tmp_class_creation_10__metaclass = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_key_value_30;
        PyObject *tmp_dict_arg_value_30;
        tmp_key_value_30 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_30, tmp_key_value_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 116;

        goto try_except_handler_29;
    }
    branch_no_28:;
    {
        bool tmp_condition_result_39;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_46 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_46, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_19;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_47 = tmp_class_creation_10__metaclass;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[62]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        tmp_args_value_19 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 116;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_36);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_48 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_48, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_40 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_49 = tmp_class_creation_10__metaclass;
        tmp_name_value_16 = mod_consts[66];
        tmp_default_value_10 = mod_consts[67];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_expression_value_49, tmp_name_value_16, tmp_default_value_10);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_10 = tmp_class_creation_10__prepared;
            tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_50 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[66]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 116;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_30:;
    goto branch_end_29;
    branch_no_29:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_68;
    }
    branch_end_29:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_31;
        }
        frame_a02618a6337685aec1926d46c3807cce_11 = MAKE_CLASS_FRAME(codeobj_a02618a6337685aec1926d46c3807cce, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a02618a6337685aec1926d46c3807cce_11);
        assert(Py_REFCNT(frame_a02618a6337685aec1926d46c3807cce_11) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__16___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_38;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_37 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116, mod_consts[129]);

            if (tmp_called_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_37);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_called_value_39 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116, mod_consts[49]);

            if (tmp_called_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_39 == NULL)) {
                        tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 123;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_39);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_a02618a6337685aec1926d46c3807cce_11->m_frame.f_lineno = 123;
            tmp_called_value_38 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[130], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_39);
            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }


            tmp_args_element_value_8 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__17_isUserAMonkey();

            frame_a02618a6337685aec1926d46c3807cce_11->m_frame.f_lineno = 123;
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            frame_a02618a6337685aec1926d46c3807cce_11->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a02618a6337685aec1926d46c3807cce_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a02618a6337685aec1926d46c3807cce_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a02618a6337685aec1926d46c3807cce_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a02618a6337685aec1926d46c3807cce_11,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_a02618a6337685aec1926d46c3807cce_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_31;
        skip_nested_handling_10:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_40 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_20 = mod_consts[127];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 116;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_69 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116);
        locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116);
        locals_androidemu$java$classes$activity_thread$$$class__10_ActivityManager_116 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 116;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_69);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_dict_key_11 = mod_consts[59];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        tmp_assign_source_71 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_71, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[60];
        tmp_dict_value_11 = mod_consts[133];
        tmp_res = PyDict_SetItem(tmp_assign_source_71, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        bool tmp_condition_result_41;
        PyObject *tmp_key_value_31;
        PyObject *tmp_dict_arg_value_31;
        PyObject *tmp_dict_arg_value_32;
        PyObject *tmp_key_value_32;
        tmp_key_value_31 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_31, tmp_key_value_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_value_32 = mod_consts[59];
        tmp_assign_source_72 = DICT_GET_ITEM0(tmp_dict_arg_value_32, tmp_key_value_32);
        if (tmp_assign_source_72 == NULL) {
            tmp_assign_source_72 = Py_None;
        }
        assert(!(tmp_assign_source_72 == NULL));
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_assign_source_72 = (PyObject *)&PyType_Type;
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        Py_INCREF(tmp_assign_source_72);
        tmp_class_creation_11__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_key_value_33;
        PyObject *tmp_dict_arg_value_33;
        tmp_key_value_33 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_33, tmp_key_value_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 130;

        goto try_except_handler_32;
    }
    branch_no_31:;
    {
        bool tmp_condition_result_43;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_51 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_51, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_value_21;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_52 = tmp_class_creation_11__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[62]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        tmp_args_value_21 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 130;
        tmp_assign_source_73 = CALL_FUNCTION(tmp_called_value_41, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_41);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_44;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_53 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_53, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_44 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_54 = tmp_class_creation_11__metaclass;
        tmp_name_value_17 = mod_consts[66];
        tmp_default_value_11 = mod_consts[67];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_expression_value_54, tmp_name_value_17, tmp_default_value_11);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_55;
            PyObject *tmp_type_arg_11;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_11 = tmp_class_creation_11__prepared;
            tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_expression_value_55 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[66]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_32;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 130;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_32;
    }
    branch_no_33:;
    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_74;
    }
    branch_end_32:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_34;
        }
        frame_17e98f5db00991d2ea22da7c444e0d28_12 = MAKE_CLASS_FRAME(codeobj_17e98f5db00991d2ea22da7c444e0d28, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_17e98f5db00991d2ea22da7c444e0d28_12);
        assert(Py_REFCNT(frame_17e98f5db00991d2ea22da7c444e0d28_12) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__18___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_9;
            tmp_called_value_43 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130, mod_consts[49]);

            if (tmp_called_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_43 == NULL)) {
                        tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_value_43);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_17e98f5db00991d2ea22da7c444e0d28_12->m_frame.f_lineno = 137;
            tmp_called_value_42 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_43);
            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__19_getClass();

            frame_17e98f5db00991d2ea22da7c444e0d28_12->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_17e98f5db00991d2ea22da7c444e0d28_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_17e98f5db00991d2ea22da7c444e0d28_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_17e98f5db00991d2ea22da7c444e0d28_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_17e98f5db00991d2ea22da7c444e0d28_12,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_17e98f5db00991d2ea22da7c444e0d28_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_34;
        skip_nested_handling_11:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_44 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_22 = mod_consts[17];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 130;
            tmp_assign_source_76 = CALL_FUNCTION(tmp_called_value_44, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_75 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130);
        locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130);
        locals_androidemu$java$classes$activity_thread$$$class__11_IActivityManager_130 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 130;
        goto try_except_handler_32;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_75);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_12 = mod_consts[59];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        tmp_assign_source_77 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[60];
        tmp_dict_value_12 = mod_consts[139];
        tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        bool tmp_condition_result_45;
        PyObject *tmp_key_value_34;
        PyObject *tmp_dict_arg_value_34;
        PyObject *tmp_dict_arg_value_35;
        PyObject *tmp_key_value_35;
        tmp_key_value_34 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_34, tmp_key_value_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_value_35 = mod_consts[59];
        tmp_assign_source_78 = DICT_GET_ITEM0(tmp_dict_arg_value_35, tmp_key_value_35);
        if (tmp_assign_source_78 == NULL) {
            tmp_assign_source_78 = Py_None;
        }
        assert(!(tmp_assign_source_78 == NULL));
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_assign_source_78 = (PyObject *)&PyType_Type;
        condexpr_end_12:;
        assert(tmp_class_creation_12__metaclass == NULL);
        Py_INCREF(tmp_assign_source_78);
        tmp_class_creation_12__metaclass = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_key_value_36;
        PyObject *tmp_dict_arg_value_36;
        tmp_key_value_36 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_36, tmp_key_value_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 145;

        goto try_except_handler_35;
    }
    branch_no_34:;
    {
        bool tmp_condition_result_47;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_56 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_56, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        tmp_condition_result_47 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_23;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_57 = tmp_class_creation_12__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[62]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        tmp_args_value_23 = mod_consts[140];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 145;
        tmp_assign_source_79 = CALL_FUNCTION(tmp_called_value_45, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_45);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_48;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_58 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_58, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_48 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_59 = tmp_class_creation_12__metaclass;
        tmp_name_value_18 = mod_consts[66];
        tmp_default_value_12 = mod_consts[67];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_expression_value_59, tmp_name_value_18, tmp_default_value_12);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_12 = tmp_class_creation_12__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[66]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_35;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 145;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_35;
    }
    branch_no_36:;
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_80;
    }
    branch_end_35:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_37;
        }
        frame_c8b93fff2b1ddf64b57d44e90712cfb4_13 = MAKE_CLASS_FRAME(codeobj_c8b93fff2b1ddf64b57d44e90712cfb4, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c8b93fff2b1ddf64b57d44e90712cfb4_13);
        assert(Py_REFCNT(frame_c8b93fff2b1ddf64b57d44e90712cfb4_13) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__20___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_13;
        }
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_47;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_46 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145, mod_consts[129]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 152;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_called_value_48 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145, mod_consts[49]);

            if (tmp_called_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_48 == NULL)) {
                        tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_48);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_c8b93fff2b1ddf64b57d44e90712cfb4_13->m_frame.f_lineno = 153;
            tmp_called_value_47 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_48);
            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_46);

                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__21_getDefault();

            frame_c8b93fff2b1ddf64b57d44e90712cfb4_13->m_frame.f_lineno = 153;
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_46);

                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_c8b93fff2b1ddf64b57d44e90712cfb4_13->m_frame.f_lineno = 152;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c8b93fff2b1ddf64b57d44e90712cfb4_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c8b93fff2b1ddf64b57d44e90712cfb4_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c8b93fff2b1ddf64b57d44e90712cfb4_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c8b93fff2b1ddf64b57d44e90712cfb4_13,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_c8b93fff2b1ddf64b57d44e90712cfb4_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_37;
        skip_nested_handling_12:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_49 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_24 = mod_consts[141];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 145;
            tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_49, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_81 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145);
        locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145);
        locals_androidemu$java$classes$activity_thread$$$class__12_ActivityManagerNative_145 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 145;
        goto try_except_handler_35;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_81);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_13 = mod_consts[59];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        tmp_assign_source_83 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_83, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[60];
        tmp_dict_value_13 = mod_consts[146];
        tmp_res = PyDict_SetItem(tmp_assign_source_83, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        bool tmp_condition_result_49;
        PyObject *tmp_key_value_37;
        PyObject *tmp_dict_arg_value_37;
        PyObject *tmp_dict_arg_value_38;
        PyObject *tmp_key_value_38;
        tmp_key_value_37 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_37, tmp_key_value_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_value_38 = mod_consts[59];
        tmp_assign_source_84 = DICT_GET_ITEM0(tmp_dict_arg_value_38, tmp_key_value_38);
        if (tmp_assign_source_84 == NULL) {
            tmp_assign_source_84 = Py_None;
        }
        assert(!(tmp_assign_source_84 == NULL));
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_assign_source_84 = (PyObject *)&PyType_Type;
        condexpr_end_13:;
        assert(tmp_class_creation_13__metaclass == NULL);
        Py_INCREF(tmp_assign_source_84);
        tmp_class_creation_13__metaclass = tmp_assign_source_84;
    }
    {
        bool tmp_condition_result_50;
        PyObject *tmp_key_value_39;
        PyObject *tmp_dict_arg_value_39;
        tmp_key_value_39 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_value_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_39, tmp_key_value_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;

        goto try_except_handler_38;
    }
    branch_no_37:;
    {
        bool tmp_condition_result_51;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_61 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_61, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        tmp_condition_result_51 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_value_25;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_62 = tmp_class_creation_13__metaclass;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[62]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        tmp_args_value_25 = mod_consts[147];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 160;
        tmp_assign_source_85 = CALL_FUNCTION(tmp_called_value_50, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_50);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_85;
    }
    {
        bool tmp_condition_result_52;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_63 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_63, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_52 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_64 = tmp_class_creation_13__metaclass;
        tmp_name_value_19 = mod_consts[66];
        tmp_default_value_13 = mod_consts[67];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tmp_expression_value_64, tmp_name_value_19, tmp_default_value_13);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_type_arg_13;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_13 = tmp_class_creation_13__prepared;
            tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_expression_value_65 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[66]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_38;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 160;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_38;
    }
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_86;
    }
    branch_end_38:;
    {
        PyObject *tmp_assign_source_87;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_40;
        }
        frame_3d05457eed668c48d1a4206ae3b34d8f_14 = MAKE_CLASS_FRAME(codeobj_3d05457eed668c48d1a4206ae3b34d8f, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3d05457eed668c48d1a4206ae3b34d8f_14);
        assert(Py_REFCNT(frame_3d05457eed668c48d1a4206ae3b34d8f_14) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__22___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_52 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160, mod_consts[49]);

            if (tmp_called_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_52 == NULL)) {
                        tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_value_52);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_3d05457eed668c48d1a4206ae3b34d8f_14->m_frame.f_lineno = 167;
            tmp_called_value_51 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_52);
            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__23_getClass();

            frame_3d05457eed668c48d1a4206ae3b34d8f_14->m_frame.f_lineno = 167;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3d05457eed668c48d1a4206ae3b34d8f_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3d05457eed668c48d1a4206ae3b34d8f_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3d05457eed668c48d1a4206ae3b34d8f_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3d05457eed668c48d1a4206ae3b34d8f_14,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_3d05457eed668c48d1a4206ae3b34d8f_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_40;
        skip_nested_handling_13:;
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_53 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_26 = mod_consts[26];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 160;
            tmp_assign_source_88 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_88;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_87 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_87);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160);
        locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160);
        locals_androidemu$java$classes$activity_thread$$$class__13_Instrumentation_160 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 160;
        goto try_except_handler_38;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_87);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_dict_key_14 = mod_consts[59];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        tmp_assign_source_89 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_89, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[60];
        tmp_dict_value_14 = mod_consts[150];
        tmp_res = PyDict_SetItem(tmp_assign_source_89, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        bool tmp_condition_result_53;
        PyObject *tmp_key_value_40;
        PyObject *tmp_dict_arg_value_40;
        PyObject *tmp_dict_arg_value_41;
        PyObject *tmp_key_value_41;
        tmp_key_value_40 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_40 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_40, tmp_key_value_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_53 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_41 = tmp_class_creation_14__class_decl_dict;
        tmp_key_value_41 = mod_consts[59];
        tmp_assign_source_90 = DICT_GET_ITEM0(tmp_dict_arg_value_41, tmp_key_value_41);
        if (tmp_assign_source_90 == NULL) {
            tmp_assign_source_90 = Py_None;
        }
        assert(!(tmp_assign_source_90 == NULL));
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_assign_source_90 = (PyObject *)&PyType_Type;
        condexpr_end_14:;
        assert(tmp_class_creation_14__metaclass == NULL);
        Py_INCREF(tmp_assign_source_90);
        tmp_class_creation_14__metaclass = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_key_value_42;
        PyObject *tmp_dict_arg_value_42;
        tmp_key_value_42 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_value_42 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_42, tmp_key_value_42);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 174;

        goto try_except_handler_41;
    }
    branch_no_40:;
    {
        bool tmp_condition_result_55;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_66 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_66, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        tmp_condition_result_55 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_value_27;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_67 = tmp_class_creation_14__metaclass;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[62]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        tmp_args_value_27 = mod_consts[151];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 174;
        tmp_assign_source_91 = CALL_FUNCTION(tmp_called_value_54, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_54);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_91;
    }
    {
        bool tmp_condition_result_56;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_68 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_68, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_56 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_69 = tmp_class_creation_14__metaclass;
        tmp_name_value_20 = mod_consts[66];
        tmp_default_value_14 = mod_consts[67];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_expression_value_69, tmp_name_value_20, tmp_default_value_14);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_14 = tmp_class_creation_14__prepared;
            tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_70 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[66]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_41;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 174;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_41;
    }
    branch_no_42:;
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_92;
    }
    branch_end_41:;
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[152];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_43;
        }
        frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15 = MAKE_CLASS_FRAME(codeobj_4f1ed6d80fed963a5ecccd2cb7c630f7, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15);
        assert(Py_REFCNT(frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__24___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto frame_exception_exit_15;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15,
            type_description_2,
            outline_13_var___class__
        );



        assertFrameObject(frame_4f1ed6d80fed963a5ecccd2cb7c630f7_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_43;
        skip_nested_handling_14:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_55 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_28 = mod_consts[152];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 174;
            tmp_assign_source_94 = CALL_FUNCTION(tmp_called_value_55, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_93 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_93);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174);
        locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174);
        locals_androidemu$java$classes$activity_thread$$$class__14_IInterface_174 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 174;
        goto try_except_handler_41;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_93);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_assign_source_95 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_96 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_dict_key_15 = mod_consts[59];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_assign_source_97 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_97, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[60];
        tmp_dict_value_15 = mod_consts[154];
        tmp_res = PyDict_SetItem(tmp_assign_source_97, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[155];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_97, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_assign_source_97);
        goto try_except_handler_44;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_57;
        PyObject *tmp_key_value_43;
        PyObject *tmp_dict_arg_value_43;
        PyObject *tmp_dict_arg_value_44;
        PyObject *tmp_key_value_44;
        nuitka_bool tmp_condition_result_58;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_43 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_value_43 = tmp_class_creation_15__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_43, tmp_key_value_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_value_44 = tmp_class_creation_15__class_decl_dict;
        tmp_key_value_44 = mod_consts[59];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_44, tmp_key_value_44);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_condition_result_58 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_71 = tmp_class_creation_15__bases;
        tmp_subscript_value_1 = mod_consts[45];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_71, tmp_subscript_value_1, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_1 = tmp_class_creation_15__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_key_value_45;
        PyObject *tmp_dict_arg_value_45;
        tmp_key_value_45 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_value_45 = tmp_class_creation_15__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_45, tmp_key_value_45);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 180;

        goto try_except_handler_44;
    }
    branch_no_43:;
    {
        bool tmp_condition_result_60;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_72 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_72, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_condition_result_60 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_73 = tmp_class_creation_15__metaclass;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[62]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_tuple_element_30 = mod_consts[156];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_30 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 180;
        tmp_assign_source_99 = CALL_FUNCTION(tmp_called_value_56, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_61;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_74 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_74, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_61 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_75 = tmp_class_creation_15__metaclass;
        tmp_name_value_21 = mod_consts[66];
        tmp_default_value_15 = mod_consts[67];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tmp_expression_value_75, tmp_name_value_21, tmp_default_value_15);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_16 = tmp_class_creation_15__prepared;
            tmp_expression_value_76 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_76 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[66]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_44;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_44;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 180;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_44;
    }
    branch_no_45:;
    goto branch_end_44;
    branch_no_44:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_100;
    }
    branch_end_44:;
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_46;
        }
        frame_da094a5da1baca90065440da5620bbef_16 = MAKE_CLASS_FRAME(codeobj_da094a5da1baca90065440da5620bbef, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_da094a5da1baca90065440da5620bbef_16);
        assert(Py_REFCNT(frame_da094a5da1baca90065440da5620bbef_16) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__25___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_15;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_da094a5da1baca90065440da5620bbef_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_da094a5da1baca90065440da5620bbef_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_da094a5da1baca90065440da5620bbef_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_da094a5da1baca90065440da5620bbef_16,
            type_description_2,
            outline_14_var___class__
        );



        assertFrameObject(frame_da094a5da1baca90065440da5620bbef_16);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_46;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_62;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_62 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_62 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto try_except_handler_46;
            }
            if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
                goto branch_yes_46;
            } else {
                goto branch_no_46;
            }
        }
        branch_yes_46:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_46;
        }
        branch_no_46:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_57 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_32 = mod_consts[156];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_32 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 180;
            tmp_assign_source_102 = CALL_FUNCTION(tmp_called_value_57, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto try_except_handler_46;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_101 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180);
        locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180);
        locals_androidemu$java$classes$activity_thread$$$class__15_IPackageManager_180 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 180;
        goto try_except_handler_44;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_101);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_dict_key_16 = mod_consts[59];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        tmp_assign_source_103 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_58;
            tmp_res = PyDict_SetItem(tmp_assign_source_103, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[60];
            tmp_dict_value_16 = mod_consts[159];
            tmp_res = PyDict_SetItem(tmp_assign_source_103, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[90];
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_6;
            }
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 190;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_58, mod_consts[160]);

            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_6;
            }
            tmp_dict_value_16 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_59;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_args_element_value_14;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_called_value_60;
                PyList_SET_ITEM(tmp_dict_value_16, 0, tmp_list_element_5);
                tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[48]);

                if (unlikely(tmp_called_value_59 == NULL)) {
                    tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                }

                if (tmp_called_value_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto list_build_exception_2;
                }
                tmp_args_element_value_13 = mod_consts[161];
                tmp_args_element_value_14 = mod_consts[162];
                tmp_args_element_value_15 = Py_True;
                tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[156]);

                if (unlikely(tmp_called_value_60 == NULL)) {
                    tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                }

                if (tmp_called_value_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto list_build_exception_2;
                }
                frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 192;
                tmp_args_element_value_16 = CALL_FUNCTION_NO_ARGS(tmp_called_value_60);
                if (tmp_args_element_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto list_build_exception_2;
                }
                frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 192;
                {
                    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_59, call_args);
                }

                Py_DECREF(tmp_args_element_value_16);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dict_value_16, 1, tmp_list_element_5);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dict_value_16);
            goto dict_build_exception_6;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assign_source_103, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_assign_source_103);
        goto try_except_handler_47;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        bool tmp_condition_result_63;
        PyObject *tmp_key_value_46;
        PyObject *tmp_dict_arg_value_46;
        PyObject *tmp_dict_arg_value_47;
        PyObject *tmp_key_value_47;
        tmp_key_value_46 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_value_46 = tmp_class_creation_16__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_46, tmp_key_value_46);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_value_47 = tmp_class_creation_16__class_decl_dict;
        tmp_key_value_47 = mod_consts[59];
        tmp_assign_source_104 = DICT_GET_ITEM0(tmp_dict_arg_value_47, tmp_key_value_47);
        if (tmp_assign_source_104 == NULL) {
            tmp_assign_source_104 = Py_None;
        }
        assert(!(tmp_assign_source_104 == NULL));
        goto condexpr_end_17;
        condexpr_false_17:;
        tmp_assign_source_104 = (PyObject *)&PyType_Type;
        condexpr_end_17:;
        assert(tmp_class_creation_16__metaclass == NULL);
        Py_INCREF(tmp_assign_source_104);
        tmp_class_creation_16__metaclass = tmp_assign_source_104;
    }
    {
        bool tmp_condition_result_64;
        PyObject *tmp_key_value_48;
        PyObject *tmp_dict_arg_value_48;
        tmp_key_value_48 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_value_48 = tmp_class_creation_16__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_48, tmp_key_value_48);
        assert(!(tmp_res == -1));
        tmp_condition_result_64 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_64 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;
    tmp_dictdel_key = mod_consts[59];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 188;

        goto try_except_handler_47;
    }
    branch_no_47:;
    {
        bool tmp_condition_result_65;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_77 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_77, mod_consts[62]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        tmp_condition_result_65 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_args_value_31;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_78 = tmp_class_creation_16__metaclass;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[62]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        tmp_args_value_31 = mod_consts[163];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 188;
        tmp_assign_source_105 = CALL_FUNCTION(tmp_called_value_61, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_61);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_105;
    }
    {
        bool tmp_condition_result_66;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_79 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_79, mod_consts[64]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_66 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_80 = tmp_class_creation_16__metaclass;
        tmp_name_value_22 = mod_consts[66];
        tmp_default_value_16 = mod_consts[67];
        tmp_tuple_element_33 = BUILTIN_GETATTR(tmp_expression_value_80, tmp_name_value_22, tmp_default_value_16);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_81;
            PyObject *tmp_type_arg_17;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_17 = tmp_class_creation_16__prepared;
            tmp_expression_value_81 = BUILTIN_TYPE1(tmp_type_arg_17);
            assert(!(tmp_expression_value_81 == NULL));
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[66]);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_47;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_47;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 188;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_47;
    }
    branch_no_49:;
    goto branch_end_48;
    branch_no_48:;
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_106;
    }
    branch_end_48:;
    {
        PyObject *tmp_assign_source_107;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_49;
        }
        frame_6667d72e47d2919afccb615dbd7326bc_17 = MAKE_CLASS_FRAME(codeobj_6667d72e47d2919afccb615dbd7326bc, module_androidemu$java$classes$activity_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6667d72e47d2919afccb615dbd7326bc_17);
        assert(Py_REFCNT(frame_6667d72e47d2919afccb615dbd7326bc_17) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__26___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_value_63;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_62 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[129]);

            if (tmp_called_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_62 == NULL)) {
                        tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_62);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            tmp_called_value_64 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[49]);

            if (tmp_called_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_64 == NULL)) {
                        tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_62);

                        exception_lineno = 206;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_64);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 206;
            tmp_called_value_63 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_64, &PyTuple_GET_ITEM(mod_consts[165], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_64);
            if (tmp_called_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_62);

                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__27_currentActivityThread();

            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 206;
            tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_62);

                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 205;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_66;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_element_value_20;
            tmp_called_value_65 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[129]);

            if (tmp_called_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_65 == NULL)) {
                        tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 215;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_65);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            tmp_called_value_67 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[49]);

            if (tmp_called_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_67 == NULL)) {
                        tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_65);

                        exception_lineno = 216;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_67);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 216;
            tmp_called_value_66 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_67);
            if (tmp_called_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_65);

                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }


            tmp_args_element_value_20 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__28_currentApplication();

            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 216;
            tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_65);

                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 215;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[168], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_called_value_68;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_21;
            tmp_called_value_69 = PyObject_GetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[49]);

            if (tmp_called_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_69 == NULL)) {
                        tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_value_69);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 222;
            tmp_called_value_68 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_69, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[86]);
            Py_DECREF(tmp_called_value_69);
            if (tmp_called_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_androidemu$java$classes$activity_thread$$$function__29_getSystemContext();

            frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_16;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6667d72e47d2919afccb615dbd7326bc_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6667d72e47d2919afccb615dbd7326bc_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6667d72e47d2919afccb615dbd7326bc_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6667d72e47d2919afccb615dbd7326bc_17,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_6667d72e47d2919afccb615dbd7326bc_17);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_49;
        skip_nested_handling_16:;
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_70 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_34 = mod_consts[31];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_73c92d3b87962c512beb0c13f31e4805->m_frame.f_lineno = 188;
            tmp_assign_source_108 = CALL_FUNCTION(tmp_called_value_70, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_49;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_108;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_107 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_107);
        goto try_return_handler_49;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188);
        locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188 = NULL;
        goto try_return_handler_48;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188);
        locals_androidemu$java$classes$activity_thread$$$class__16_ActivityThread_188 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto try_except_handler_48;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 188;
        goto try_except_handler_47;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_107);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_17;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73c92d3b87962c512beb0c13f31e4805, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73c92d3b87962c512beb0c13f31e4805->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73c92d3b87962c512beb0c13f31e4805, exception_lineno);
    }



    assertFrameObject(frame_73c92d3b87962c512beb0c13f31e4805);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_17:;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("androidemu.java.classes.activity_thread", false);

    Py_INCREF(module_androidemu$java$classes$activity_thread);
    return module_androidemu$java$classes$activity_thread;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$activity_thread, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("androidemu$java$classes$activity_thread", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
