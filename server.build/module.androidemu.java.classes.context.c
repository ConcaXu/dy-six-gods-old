/* Generated code for Python module 'androidemu.java.classes.context'
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

/* The "module_androidemu$java$classes$context" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_androidemu$java$classes$context;
PyDictObject *moduledict_androidemu$java$classes$context;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[169];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[169];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("androidemu.java.classes.context"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 169; i++) {
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
void checkModuleConstants_androidemu$java$classes$context(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 169; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_60ebd850efbe966b8781d8aa2850b045;
static PyCodeObject *codeobj_a8ef514c009249a98461a830c7c47ba5;
static PyCodeObject *codeobj_7e556ce617381c7cfbd6a0901855962f;
static PyCodeObject *codeobj_255421c413132302d137004f89924dfb;
static PyCodeObject *codeobj_4ffe9172c17c0c92d2236c97ac2db0f4;
static PyCodeObject *codeobj_5fae57abf844f4a252cc0a9ef2686869;
static PyCodeObject *codeobj_8b2e597d5b24a8af615402946661fa63;
static PyCodeObject *codeobj_3178d95234c1dedae40194932da9a15c;
static PyCodeObject *codeobj_32e7f76d246037d02ad00800b6902ca7;
static PyCodeObject *codeobj_a14eae6a713f6ae8c4d3080e8ffa8e54;
static PyCodeObject *codeobj_638f276904266c427c1cc2a7983b3a98;
static PyCodeObject *codeobj_409c3d38ba9abc3b21bc744fe419ccbf;
static PyCodeObject *codeobj_8be6bb0c1dcd6fb92e8de3327751aa78;
static PyCodeObject *codeobj_b5e0403dc0e011a951a3e9807a306ac6;
static PyCodeObject *codeobj_1bb15bf30f8beeb5acbdd864444ac284;
static PyCodeObject *codeobj_da75c4c0faeac5b28d5dddde26e119c4;
static PyCodeObject *codeobj_210d9c4233d048dcbef45471ad9379b2;
static PyCodeObject *codeobj_ff782b75eb25f5a73fefcb6e1fa509ac;
static PyCodeObject *codeobj_23156c6da80d9f20685e73d82208c498;
static PyCodeObject *codeobj_d787efd3aa2f708a9f5514c1b41a8ac8;
static PyCodeObject *codeobj_169bec11aa9341287222b49baa16d600;
static PyCodeObject *codeobj_cb2bc3b47f97d7983099f4b8dbe6311b;
static PyCodeObject *codeobj_1219488b65e6e6f4ec19cf0f7b83787b;
static PyCodeObject *codeobj_6536f6790fd7badcc7f7c5fe01bde215;
static PyCodeObject *codeobj_f69f20d3cd42df6e98d0f3dc9c61c462;
static PyCodeObject *codeobj_6a02f9cc74965b7c186e83cdc6678667;
static PyCodeObject *codeobj_da8943f8efd3f4b72ceae6444b10a562;
static PyCodeObject *codeobj_3425d244e0621d4bb8987c17074318e8;
static PyCodeObject *codeobj_105c9cae6760b633b623aba4ea88d520;
static PyCodeObject *codeobj_4db88e6d9ad8c4240ec99c386c09637d;
static PyCodeObject *codeobj_323d7038893c0ea6ba7a6fc8b1e5e39a;
static PyCodeObject *codeobj_81a8c11508b8aa1d59713b1e97717ee5;
static PyCodeObject *codeobj_ebcd3a65c21088232be14f0cc91e1456;
static PyCodeObject *codeobj_dd18818d0ab16ebfe827b781f0fb0351;
static PyCodeObject *codeobj_9a8b6b24c6c2c1d90d0b9ed96119a182;
static PyCodeObject *codeobj_bd900459a490dd2cdbdcae7625885e1f;
static PyCodeObject *codeobj_a70f5554fdb2cf38a2b07eee5af83abb;
static PyCodeObject *codeobj_a3248fcf1be425ac146df8fa2b3e058d;
static PyCodeObject *codeobj_0285ea0b1c98c6b745a3b08ce6f0dbd9;
static PyCodeObject *codeobj_8afd2791eb301c31acb11c5bd9a1aa91;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[154]); CHECK_OBJECT(module_filename_obj);
    codeobj_60ebd850efbe966b8781d8aa2850b045 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
    codeobj_a8ef514c009249a98461a830c7c47ba5 = MAKE_CODE_OBJECT(module_filename_obj, 15, 0, mod_consts[2], mod_consts[2], mod_consts[156], NULL, 0, 0, 0);
    codeobj_7e556ce617381c7cfbd6a0901855962f = MAKE_CODE_OBJECT(module_filename_obj, 83, 0, mod_consts[123], mod_consts[123], mod_consts[156], NULL, 0, 0, 0);
    codeobj_255421c413132302d137004f89924dfb = MAKE_CODE_OBJECT(module_filename_obj, 183, 0, mod_consts[139], mod_consts[139], mod_consts[156], NULL, 0, 0, 0);
    codeobj_4ffe9172c17c0c92d2236c97ac2db0f4 = MAKE_CODE_OBJECT(module_filename_obj, 21, 0, mod_consts[3], mod_consts[3], mod_consts[157], NULL, 1, 0, 0);
    codeobj_5fae57abf844f4a252cc0a9ef2686869 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[3], mod_consts[157], NULL, 1, 0, 0);
    codeobj_8b2e597d5b24a8af615402946661fa63 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[3], mod_consts[158], NULL, 2, 0, 0);
    codeobj_3178d95234c1dedae40194932da9a15c = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], mod_consts[159], NULL, 2, 0, 0);
    codeobj_32e7f76d246037d02ad00800b6902ca7 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[42], mod_consts[160], NULL, 2, 0, 0);
    codeobj_a14eae6a713f6ae8c4d3080e8ffa8e54 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[42], mod_consts[160], NULL, 2, 0, 0);
    codeobj_638f276904266c427c1cc2a7983b3a98 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[42], mod_consts[160], NULL, 2, 0, 0);
    codeobj_409c3d38ba9abc3b21bc744fe419ccbf = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[160], NULL, 2, 0, 0);
    codeobj_8be6bb0c1dcd6fb92e8de3327751aa78 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[160], NULL, 2, 0, 0);
    codeobj_b5e0403dc0e011a951a3e9807a306ac6 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[160], NULL, 2, 0, 0);
    codeobj_1bb15bf30f8beeb5acbdd864444ac284 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[39], mod_consts[160], NULL, 2, 0, 0);
    codeobj_da75c4c0faeac5b28d5dddde26e119c4 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[39], mod_consts[160], NULL, 2, 0, 0);
    codeobj_210d9c4233d048dcbef45471ad9379b2 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[39], mod_consts[161], NULL, 2, 0, 0);
    codeobj_ff782b75eb25f5a73fefcb6e1fa509ac = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[36], mod_consts[36], mod_consts[160], NULL, 2, 0, 0);
    codeobj_23156c6da80d9f20685e73d82208c498 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[36], mod_consts[36], mod_consts[162], NULL, 2, 0, 0);
    codeobj_d787efd3aa2f708a9f5514c1b41a8ac8 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[160], NULL, 2, 0, 0);
    codeobj_169bec11aa9341287222b49baa16d600 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[160], NULL, 2, 0, 0);
    codeobj_cb2bc3b47f97d7983099f4b8dbe6311b = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[160], NULL, 2, 0, 0);
    codeobj_1219488b65e6e6f4ec19cf0f7b83787b = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[160], NULL, 2, 0, 0);
    codeobj_6536f6790fd7badcc7f7c5fe01bde215 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[160], NULL, 2, 0, 0);
    codeobj_f69f20d3cd42df6e98d0f3dc9c61c462 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[163], NULL, 2, 0, 0);
    codeobj_6a02f9cc74965b7c186e83cdc6678667 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[160], NULL, 2, 0, 0);
    codeobj_da8943f8efd3f4b72ceae6444b10a562 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[160], NULL, 2, 0, 0);
    codeobj_3425d244e0621d4bb8987c17074318e8 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[164], NULL, 2, 0, 0);
    codeobj_105c9cae6760b633b623aba4ea88d520 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[160], NULL, 2, 0, 0);
    codeobj_4db88e6d9ad8c4240ec99c386c09637d = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[160], NULL, 2, 0, 0);
    codeobj_323d7038893c0ea6ba7a6fc8b1e5e39a = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[160], NULL, 2, 0, 0);
    codeobj_81a8c11508b8aa1d59713b1e97717ee5 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[160], NULL, 2, 0, 0);
    codeobj_ebcd3a65c21088232be14f0cc91e1456 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[160], NULL, 2, 0, 0);
    codeobj_dd18818d0ab16ebfe827b781f0fb0351 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[160], NULL, 2, 0, 0);
    codeobj_9a8b6b24c6c2c1d90d0b9ed96119a182 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[165], NULL, 4, 0, 0);
    codeobj_bd900459a490dd2cdbdcae7625885e1f = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[165], NULL, 4, 0, 0);
    codeobj_a70f5554fdb2cf38a2b07eee5af83abb = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[166], NULL, 4, 0, 0);
    codeobj_a3248fcf1be425ac146df8fa2b3e058d = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[167], NULL, 3, 0, 0);
    codeobj_0285ea0b1c98c6b745a3b08ce6f0dbd9 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[167], NULL, 3, 0, 0);
    codeobj_8afd2791eb301c31acb11c5bd9a1aa91 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[168], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__10_getPackageName();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__11_getSharedPreferences();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__12___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__13_getPackageManager();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__14_getAssets();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__15_getContentResolver();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__16_getSystemService();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__17_getApplicationInfo();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__18_getPackageName();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__19_checkSelfPermission();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__1___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__20_checkCallingOrSelfPermission();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__21_getPackageCodePath();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__22_getFilesDir();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__23_getSharedPreferences();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__24___init__();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__25_attachBaseContext();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__26_getPackageManager();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__27_getAssets();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__28_getContentResolver();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__29_getSystemService();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__2_getPackageManager();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__30_getApplicationInfo();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__31_getPackageName();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__32_checkSelfPermission();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__33_checkCallingOrSelfPermission();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__34_getPackageCodePath();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__35_getFilesDir();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__36_getSharedPreferences();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__3_getContentResolver();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__4_getSystemService();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__5_getApplicationInfo();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__6_checkSelfPermission();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__7_checkCallingOrSelfPermission();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__8_getPackageCodePath();


static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__9_getFilesDir();


// The module function definitions.
static PyObject *impl_androidemu$java$classes$context$$$function__2_getPackageManager(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_105c9cae6760b633b623aba4ea88d520;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_105c9cae6760b633b623aba4ea88d520 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_105c9cae6760b633b623aba4ea88d520)) {
        Py_XDECREF(cache_frame_105c9cae6760b633b623aba4ea88d520);

#if _DEBUG_REFCOUNTS
        if (cache_frame_105c9cae6760b633b623aba4ea88d520 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_105c9cae6760b633b623aba4ea88d520 = MAKE_FUNCTION_FRAME(codeobj_105c9cae6760b633b623aba4ea88d520, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_105c9cae6760b633b623aba4ea88d520->m_type_description == NULL);
    frame_105c9cae6760b633b623aba4ea88d520 = cache_frame_105c9cae6760b633b623aba4ea88d520;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_105c9cae6760b633b623aba4ea88d520);
    assert(Py_REFCNT(frame_105c9cae6760b633b623aba4ea88d520) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_105c9cae6760b633b623aba4ea88d520->m_frame.f_lineno = 27;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 27;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_105c9cae6760b633b623aba4ea88d520, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_105c9cae6760b633b623aba4ea88d520->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_105c9cae6760b633b623aba4ea88d520, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_105c9cae6760b633b623aba4ea88d520,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_105c9cae6760b633b623aba4ea88d520 == cache_frame_105c9cae6760b633b623aba4ea88d520) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_105c9cae6760b633b623aba4ea88d520);
        cache_frame_105c9cae6760b633b623aba4ea88d520 = NULL;
    }

    assertFrameObject(frame_105c9cae6760b633b623aba4ea88d520);

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


static PyObject *impl_androidemu$java$classes$context$$$function__3_getContentResolver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_d787efd3aa2f708a9f5514c1b41a8ac8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8)) {
        Py_XDECREF(cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8 = MAKE_FUNCTION_FRAME(codeobj_d787efd3aa2f708a9f5514c1b41a8ac8, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8->m_type_description == NULL);
    frame_d787efd3aa2f708a9f5514c1b41a8ac8 = cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d787efd3aa2f708a9f5514c1b41a8ac8);
    assert(Py_REFCNT(frame_d787efd3aa2f708a9f5514c1b41a8ac8) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d787efd3aa2f708a9f5514c1b41a8ac8->m_frame.f_lineno = 32;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 32;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d787efd3aa2f708a9f5514c1b41a8ac8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d787efd3aa2f708a9f5514c1b41a8ac8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d787efd3aa2f708a9f5514c1b41a8ac8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d787efd3aa2f708a9f5514c1b41a8ac8,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_d787efd3aa2f708a9f5514c1b41a8ac8 == cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8);
        cache_frame_d787efd3aa2f708a9f5514c1b41a8ac8 = NULL;
    }

    assertFrameObject(frame_d787efd3aa2f708a9f5514c1b41a8ac8);

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


static PyObject *impl_androidemu$java$classes$context$$$function__4_getSystemService(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_s1 = python_pars[2];
    struct Nuitka_FrameObject *frame_a3248fcf1be425ac146df8fa2b3e058d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3248fcf1be425ac146df8fa2b3e058d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a3248fcf1be425ac146df8fa2b3e058d)) {
        Py_XDECREF(cache_frame_a3248fcf1be425ac146df8fa2b3e058d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3248fcf1be425ac146df8fa2b3e058d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3248fcf1be425ac146df8fa2b3e058d = MAKE_FUNCTION_FRAME(codeobj_a3248fcf1be425ac146df8fa2b3e058d, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a3248fcf1be425ac146df8fa2b3e058d->m_type_description == NULL);
    frame_a3248fcf1be425ac146df8fa2b3e058d = cache_frame_a3248fcf1be425ac146df8fa2b3e058d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a3248fcf1be425ac146df8fa2b3e058d);
    assert(Py_REFCNT(frame_a3248fcf1be425ac146df8fa2b3e058d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a3248fcf1be425ac146df8fa2b3e058d->m_frame.f_lineno = 37;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 37;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a3248fcf1be425ac146df8fa2b3e058d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3248fcf1be425ac146df8fa2b3e058d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3248fcf1be425ac146df8fa2b3e058d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3248fcf1be425ac146df8fa2b3e058d,
        type_description_1,
        par_self,
        par_emu,
        par_s1
    );


    // Release cached frame if used for exception.
    if (frame_a3248fcf1be425ac146df8fa2b3e058d == cache_frame_a3248fcf1be425ac146df8fa2b3e058d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a3248fcf1be425ac146df8fa2b3e058d);
        cache_frame_a3248fcf1be425ac146df8fa2b3e058d = NULL;
    }

    assertFrameObject(frame_a3248fcf1be425ac146df8fa2b3e058d);

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
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_androidemu$java$classes$context$$$function__5_getApplicationInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_1bb15bf30f8beeb5acbdd864444ac284;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1bb15bf30f8beeb5acbdd864444ac284 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bb15bf30f8beeb5acbdd864444ac284)) {
        Py_XDECREF(cache_frame_1bb15bf30f8beeb5acbdd864444ac284);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bb15bf30f8beeb5acbdd864444ac284 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bb15bf30f8beeb5acbdd864444ac284 = MAKE_FUNCTION_FRAME(codeobj_1bb15bf30f8beeb5acbdd864444ac284, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bb15bf30f8beeb5acbdd864444ac284->m_type_description == NULL);
    frame_1bb15bf30f8beeb5acbdd864444ac284 = cache_frame_1bb15bf30f8beeb5acbdd864444ac284;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bb15bf30f8beeb5acbdd864444ac284);
    assert(Py_REFCNT(frame_1bb15bf30f8beeb5acbdd864444ac284) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1bb15bf30f8beeb5acbdd864444ac284->m_frame.f_lineno = 43;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 43;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bb15bf30f8beeb5acbdd864444ac284, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bb15bf30f8beeb5acbdd864444ac284->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bb15bf30f8beeb5acbdd864444ac284, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bb15bf30f8beeb5acbdd864444ac284,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_1bb15bf30f8beeb5acbdd864444ac284 == cache_frame_1bb15bf30f8beeb5acbdd864444ac284) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bb15bf30f8beeb5acbdd864444ac284);
        cache_frame_1bb15bf30f8beeb5acbdd864444ac284 = NULL;
    }

    assertFrameObject(frame_1bb15bf30f8beeb5acbdd864444ac284);

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


static PyObject *impl_androidemu$java$classes$context$$$function__6_checkSelfPermission(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_409c3d38ba9abc3b21bc744fe419ccbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_409c3d38ba9abc3b21bc744fe419ccbf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_409c3d38ba9abc3b21bc744fe419ccbf)) {
        Py_XDECREF(cache_frame_409c3d38ba9abc3b21bc744fe419ccbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_409c3d38ba9abc3b21bc744fe419ccbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_409c3d38ba9abc3b21bc744fe419ccbf = MAKE_FUNCTION_FRAME(codeobj_409c3d38ba9abc3b21bc744fe419ccbf, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_409c3d38ba9abc3b21bc744fe419ccbf->m_type_description == NULL);
    frame_409c3d38ba9abc3b21bc744fe419ccbf = cache_frame_409c3d38ba9abc3b21bc744fe419ccbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_409c3d38ba9abc3b21bc744fe419ccbf);
    assert(Py_REFCNT(frame_409c3d38ba9abc3b21bc744fe419ccbf) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_409c3d38ba9abc3b21bc744fe419ccbf->m_frame.f_lineno = 49;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 49;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_409c3d38ba9abc3b21bc744fe419ccbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_409c3d38ba9abc3b21bc744fe419ccbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_409c3d38ba9abc3b21bc744fe419ccbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_409c3d38ba9abc3b21bc744fe419ccbf,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_409c3d38ba9abc3b21bc744fe419ccbf == cache_frame_409c3d38ba9abc3b21bc744fe419ccbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_409c3d38ba9abc3b21bc744fe419ccbf);
        cache_frame_409c3d38ba9abc3b21bc744fe419ccbf = NULL;
    }

    assertFrameObject(frame_409c3d38ba9abc3b21bc744fe419ccbf);

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


static PyObject *impl_androidemu$java$classes$context$$$function__7_checkCallingOrSelfPermission(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_32e7f76d246037d02ad00800b6902ca7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32e7f76d246037d02ad00800b6902ca7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32e7f76d246037d02ad00800b6902ca7)) {
        Py_XDECREF(cache_frame_32e7f76d246037d02ad00800b6902ca7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32e7f76d246037d02ad00800b6902ca7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32e7f76d246037d02ad00800b6902ca7 = MAKE_FUNCTION_FRAME(codeobj_32e7f76d246037d02ad00800b6902ca7, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32e7f76d246037d02ad00800b6902ca7->m_type_description == NULL);
    frame_32e7f76d246037d02ad00800b6902ca7 = cache_frame_32e7f76d246037d02ad00800b6902ca7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32e7f76d246037d02ad00800b6902ca7);
    assert(Py_REFCNT(frame_32e7f76d246037d02ad00800b6902ca7) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_32e7f76d246037d02ad00800b6902ca7->m_frame.f_lineno = 55;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 55;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32e7f76d246037d02ad00800b6902ca7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32e7f76d246037d02ad00800b6902ca7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32e7f76d246037d02ad00800b6902ca7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32e7f76d246037d02ad00800b6902ca7,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_32e7f76d246037d02ad00800b6902ca7 == cache_frame_32e7f76d246037d02ad00800b6902ca7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32e7f76d246037d02ad00800b6902ca7);
        cache_frame_32e7f76d246037d02ad00800b6902ca7 = NULL;
    }

    assertFrameObject(frame_32e7f76d246037d02ad00800b6902ca7);

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


static PyObject *impl_androidemu$java$classes$context$$$function__8_getPackageCodePath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_6a02f9cc74965b7c186e83cdc6678667;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a02f9cc74965b7c186e83cdc6678667 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a02f9cc74965b7c186e83cdc6678667)) {
        Py_XDECREF(cache_frame_6a02f9cc74965b7c186e83cdc6678667);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a02f9cc74965b7c186e83cdc6678667 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a02f9cc74965b7c186e83cdc6678667 = MAKE_FUNCTION_FRAME(codeobj_6a02f9cc74965b7c186e83cdc6678667, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a02f9cc74965b7c186e83cdc6678667->m_type_description == NULL);
    frame_6a02f9cc74965b7c186e83cdc6678667 = cache_frame_6a02f9cc74965b7c186e83cdc6678667;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a02f9cc74965b7c186e83cdc6678667);
    assert(Py_REFCNT(frame_6a02f9cc74965b7c186e83cdc6678667) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6a02f9cc74965b7c186e83cdc6678667->m_frame.f_lineno = 61;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 61;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a02f9cc74965b7c186e83cdc6678667, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a02f9cc74965b7c186e83cdc6678667->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a02f9cc74965b7c186e83cdc6678667, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a02f9cc74965b7c186e83cdc6678667,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_6a02f9cc74965b7c186e83cdc6678667 == cache_frame_6a02f9cc74965b7c186e83cdc6678667) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a02f9cc74965b7c186e83cdc6678667);
        cache_frame_6a02f9cc74965b7c186e83cdc6678667 = NULL;
    }

    assertFrameObject(frame_6a02f9cc74965b7c186e83cdc6678667);

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


static PyObject *impl_androidemu$java$classes$context$$$function__9_getFilesDir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_1219488b65e6e6f4ec19cf0f7b83787b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1219488b65e6e6f4ec19cf0f7b83787b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1219488b65e6e6f4ec19cf0f7b83787b)) {
        Py_XDECREF(cache_frame_1219488b65e6e6f4ec19cf0f7b83787b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1219488b65e6e6f4ec19cf0f7b83787b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1219488b65e6e6f4ec19cf0f7b83787b = MAKE_FUNCTION_FRAME(codeobj_1219488b65e6e6f4ec19cf0f7b83787b, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1219488b65e6e6f4ec19cf0f7b83787b->m_type_description == NULL);
    frame_1219488b65e6e6f4ec19cf0f7b83787b = cache_frame_1219488b65e6e6f4ec19cf0f7b83787b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1219488b65e6e6f4ec19cf0f7b83787b);
    assert(Py_REFCNT(frame_1219488b65e6e6f4ec19cf0f7b83787b) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1219488b65e6e6f4ec19cf0f7b83787b->m_frame.f_lineno = 67;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 67;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1219488b65e6e6f4ec19cf0f7b83787b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1219488b65e6e6f4ec19cf0f7b83787b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1219488b65e6e6f4ec19cf0f7b83787b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1219488b65e6e6f4ec19cf0f7b83787b,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_1219488b65e6e6f4ec19cf0f7b83787b == cache_frame_1219488b65e6e6f4ec19cf0f7b83787b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1219488b65e6e6f4ec19cf0f7b83787b);
        cache_frame_1219488b65e6e6f4ec19cf0f7b83787b = NULL;
    }

    assertFrameObject(frame_1219488b65e6e6f4ec19cf0f7b83787b);

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


static PyObject *impl_androidemu$java$classes$context$$$function__10_getPackageName(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_81a8c11508b8aa1d59713b1e97717ee5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81a8c11508b8aa1d59713b1e97717ee5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81a8c11508b8aa1d59713b1e97717ee5)) {
        Py_XDECREF(cache_frame_81a8c11508b8aa1d59713b1e97717ee5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81a8c11508b8aa1d59713b1e97717ee5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81a8c11508b8aa1d59713b1e97717ee5 = MAKE_FUNCTION_FRAME(codeobj_81a8c11508b8aa1d59713b1e97717ee5, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81a8c11508b8aa1d59713b1e97717ee5->m_type_description == NULL);
    frame_81a8c11508b8aa1d59713b1e97717ee5 = cache_frame_81a8c11508b8aa1d59713b1e97717ee5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81a8c11508b8aa1d59713b1e97717ee5);
    assert(Py_REFCNT(frame_81a8c11508b8aa1d59713b1e97717ee5) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_81a8c11508b8aa1d59713b1e97717ee5->m_frame.f_lineno = 73;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 73;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81a8c11508b8aa1d59713b1e97717ee5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81a8c11508b8aa1d59713b1e97717ee5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81a8c11508b8aa1d59713b1e97717ee5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81a8c11508b8aa1d59713b1e97717ee5,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_81a8c11508b8aa1d59713b1e97717ee5 == cache_frame_81a8c11508b8aa1d59713b1e97717ee5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81a8c11508b8aa1d59713b1e97717ee5);
        cache_frame_81a8c11508b8aa1d59713b1e97717ee5 = NULL;
    }

    assertFrameObject(frame_81a8c11508b8aa1d59713b1e97717ee5);

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


static PyObject *impl_androidemu$java$classes$context$$$function__11_getSharedPreferences(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_mode = python_pars[3];
    struct Nuitka_FrameObject *frame_9a8b6b24c6c2c1d90d0b9ed96119a182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182)) {
        Py_XDECREF(cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182 = MAKE_FUNCTION_FRAME(codeobj_9a8b6b24c6c2c1d90d0b9ed96119a182, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182->m_type_description == NULL);
    frame_9a8b6b24c6c2c1d90d0b9ed96119a182 = cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a8b6b24c6c2c1d90d0b9ed96119a182);
    assert(Py_REFCNT(frame_9a8b6b24c6c2c1d90d0b9ed96119a182) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_9a8b6b24c6c2c1d90d0b9ed96119a182->m_frame.f_lineno = 79;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 79;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a8b6b24c6c2c1d90d0b9ed96119a182, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a8b6b24c6c2c1d90d0b9ed96119a182->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a8b6b24c6c2c1d90d0b9ed96119a182, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a8b6b24c6c2c1d90d0b9ed96119a182,
        type_description_1,
        par_self,
        par_emu,
        par_name,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_9a8b6b24c6c2c1d90d0b9ed96119a182 == cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182);
        cache_frame_9a8b6b24c6c2c1d90d0b9ed96119a182 = NULL;
    }

    assertFrameObject(frame_9a8b6b24c6c2c1d90d0b9ed96119a182);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_androidemu$java$classes$context$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pyPkgName = python_pars[1];
    struct Nuitka_FrameObject *frame_8b2e597d5b24a8af615402946661fa63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8b2e597d5b24a8af615402946661fa63 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b2e597d5b24a8af615402946661fa63)) {
        Py_XDECREF(cache_frame_8b2e597d5b24a8af615402946661fa63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b2e597d5b24a8af615402946661fa63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b2e597d5b24a8af615402946661fa63 = MAKE_FUNCTION_FRAME(codeobj_8b2e597d5b24a8af615402946661fa63, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b2e597d5b24a8af615402946661fa63->m_type_description == NULL);
    frame_8b2e597d5b24a8af615402946661fa63 = cache_frame_8b2e597d5b24a8af615402946661fa63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b2e597d5b24a8af615402946661fa63);
    assert(Py_REFCNT(frame_8b2e597d5b24a8af615402946661fa63) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_8b2e597d5b24a8af615402946661fa63->m_frame.f_lineno = 85;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pyPkgName);
        tmp_args_element_value_2 = par_pyPkgName;
        frame_8b2e597d5b24a8af615402946661fa63->m_frame.f_lineno = 87;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pyPkgName);
        tmp_args_element_value_3 = par_pyPkgName;
        frame_8b2e597d5b24a8af615402946661fa63->m_frame.f_lineno = 88;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8b2e597d5b24a8af615402946661fa63->m_frame.f_lineno = 89;
        tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[9], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[10], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[11], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b2e597d5b24a8af615402946661fa63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b2e597d5b24a8af615402946661fa63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b2e597d5b24a8af615402946661fa63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b2e597d5b24a8af615402946661fa63,
        type_description_1,
        par_self,
        par_pyPkgName
    );


    // Release cached frame if used for exception.
    if (frame_8b2e597d5b24a8af615402946661fa63 == cache_frame_8b2e597d5b24a8af615402946661fa63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b2e597d5b24a8af615402946661fa63);
        cache_frame_8b2e597d5b24a8af615402946661fa63 = NULL;
    }

    assertFrameObject(frame_8b2e597d5b24a8af615402946661fa63);

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


static PyObject *impl_androidemu$java$classes$context$$$function__13_getPackageManager(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_4db88e6d9ad8c4240ec99c386c09637d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4db88e6d9ad8c4240ec99c386c09637d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4db88e6d9ad8c4240ec99c386c09637d)) {
        Py_XDECREF(cache_frame_4db88e6d9ad8c4240ec99c386c09637d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4db88e6d9ad8c4240ec99c386c09637d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4db88e6d9ad8c4240ec99c386c09637d = MAKE_FUNCTION_FRAME(codeobj_4db88e6d9ad8c4240ec99c386c09637d, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4db88e6d9ad8c4240ec99c386c09637d->m_type_description == NULL);
    frame_4db88e6d9ad8c4240ec99c386c09637d = cache_frame_4db88e6d9ad8c4240ec99c386c09637d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4db88e6d9ad8c4240ec99c386c09637d);
    assert(Py_REFCNT(frame_4db88e6d9ad8c4240ec99c386c09637d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_4db88e6d9ad8c4240ec99c386c09637d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4db88e6d9ad8c4240ec99c386c09637d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4db88e6d9ad8c4240ec99c386c09637d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4db88e6d9ad8c4240ec99c386c09637d,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_4db88e6d9ad8c4240ec99c386c09637d == cache_frame_4db88e6d9ad8c4240ec99c386c09637d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4db88e6d9ad8c4240ec99c386c09637d);
        cache_frame_4db88e6d9ad8c4240ec99c386c09637d = NULL;
    }

    assertFrameObject(frame_4db88e6d9ad8c4240ec99c386c09637d);

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


static PyObject *impl_androidemu$java$classes$context$$$function__14_getAssets(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *var_pyapk_path = NULL;
    struct Nuitka_FrameObject *frame_23156c6da80d9f20685e73d82208c498;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_23156c6da80d9f20685e73d82208c498 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_23156c6da80d9f20685e73d82208c498)) {
        Py_XDECREF(cache_frame_23156c6da80d9f20685e73d82208c498);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23156c6da80d9f20685e73d82208c498 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23156c6da80d9f20685e73d82208c498 = MAKE_FUNCTION_FRAME(codeobj_23156c6da80d9f20685e73d82208c498, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23156c6da80d9f20685e73d82208c498->m_type_description == NULL);
    frame_23156c6da80d9f20685e73d82208c498 = cache_frame_23156c6da80d9f20685e73d82208c498;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23156c6da80d9f20685e73d82208c498);
    assert(Py_REFCNT(frame_23156c6da80d9f20685e73d82208c498) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[13];
        frame_23156c6da80d9f20685e73d82208c498->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_23156c6da80d9f20685e73d82208c498->m_frame.f_lineno = 104;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_pyapk_path == NULL);
        var_pyapk_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_4 = par_emu;
        CHECK_OBJECT(var_pyapk_path);
        tmp_args_element_value_5 = var_pyapk_path;
        frame_23156c6da80d9f20685e73d82208c498->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23156c6da80d9f20685e73d82208c498, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23156c6da80d9f20685e73d82208c498->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23156c6da80d9f20685e73d82208c498, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23156c6da80d9f20685e73d82208c498,
        type_description_1,
        par_self,
        par_emu,
        var_pyapk_path
    );


    // Release cached frame if used for exception.
    if (frame_23156c6da80d9f20685e73d82208c498 == cache_frame_23156c6da80d9f20685e73d82208c498) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23156c6da80d9f20685e73d82208c498);
        cache_frame_23156c6da80d9f20685e73d82208c498 = NULL;
    }

    assertFrameObject(frame_23156c6da80d9f20685e73d82208c498);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pyapk_path);
    var_pyapk_path = NULL;
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

    Py_XDECREF(var_pyapk_path);
    var_pyapk_path = NULL;
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


static PyObject *impl_androidemu$java$classes$context$$$function__15_getContentResolver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_169bec11aa9341287222b49baa16d600;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_169bec11aa9341287222b49baa16d600 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_169bec11aa9341287222b49baa16d600)) {
        Py_XDECREF(cache_frame_169bec11aa9341287222b49baa16d600);

#if _DEBUG_REFCOUNTS
        if (cache_frame_169bec11aa9341287222b49baa16d600 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_169bec11aa9341287222b49baa16d600 = MAKE_FUNCTION_FRAME(codeobj_169bec11aa9341287222b49baa16d600, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_169bec11aa9341287222b49baa16d600->m_type_description == NULL);
    frame_169bec11aa9341287222b49baa16d600 = cache_frame_169bec11aa9341287222b49baa16d600;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_169bec11aa9341287222b49baa16d600);
    assert(Py_REFCNT(frame_169bec11aa9341287222b49baa16d600) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_169bec11aa9341287222b49baa16d600, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_169bec11aa9341287222b49baa16d600->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_169bec11aa9341287222b49baa16d600, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_169bec11aa9341287222b49baa16d600,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_169bec11aa9341287222b49baa16d600 == cache_frame_169bec11aa9341287222b49baa16d600) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_169bec11aa9341287222b49baa16d600);
        cache_frame_169bec11aa9341287222b49baa16d600 = NULL;
    }

    assertFrameObject(frame_169bec11aa9341287222b49baa16d600);

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


static PyObject *impl_androidemu$java$classes$context$$$function__16_getSystemService(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_s1 = python_pars[2];
    PyObject *var_stype = NULL;
    struct Nuitka_FrameObject *frame_8afd2791eb301c31acb11c5bd9a1aa91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8afd2791eb301c31acb11c5bd9a1aa91 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8afd2791eb301c31acb11c5bd9a1aa91)) {
        Py_XDECREF(cache_frame_8afd2791eb301c31acb11c5bd9a1aa91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8afd2791eb301c31acb11c5bd9a1aa91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8afd2791eb301c31acb11c5bd9a1aa91 = MAKE_FUNCTION_FRAME(codeobj_8afd2791eb301c31acb11c5bd9a1aa91, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8afd2791eb301c31acb11c5bd9a1aa91->m_type_description == NULL);
    frame_8afd2791eb301c31acb11c5bd9a1aa91 = cache_frame_8afd2791eb301c31acb11c5bd9a1aa91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8afd2791eb301c31acb11c5bd9a1aa91);
    assert(Py_REFCNT(frame_8afd2791eb301c31acb11c5bd9a1aa91) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s1);
        tmp_args_element_value_1 = par_s1;
        frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame.f_lineno = 117;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s1);
        tmp_called_instance_1 = par_s1;
        frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame.f_lineno = 118;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_stype == NULL);
        var_stype = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_stype);
        tmp_cmp_expr_left_1 = var_stype;
        tmp_cmp_expr_right_1 = mod_consts[19];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame.f_lineno = 120;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_stype);
        tmp_cmp_expr_left_2 = var_stype;
        tmp_cmp_expr_right_2 = mod_consts[21];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame.f_lineno = 123;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_stype);
        tmp_cmp_expr_left_3 = var_stype;
        tmp_cmp_expr_right_3 = mod_consts[23];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame.f_lineno = 126;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame.f_lineno = 128;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 128;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_8afd2791eb301c31acb11c5bd9a1aa91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8afd2791eb301c31acb11c5bd9a1aa91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8afd2791eb301c31acb11c5bd9a1aa91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8afd2791eb301c31acb11c5bd9a1aa91,
        type_description_1,
        par_self,
        par_emu,
        par_s1,
        var_stype
    );


    // Release cached frame if used for exception.
    if (frame_8afd2791eb301c31acb11c5bd9a1aa91 == cache_frame_8afd2791eb301c31acb11c5bd9a1aa91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8afd2791eb301c31acb11c5bd9a1aa91);
        cache_frame_8afd2791eb301c31acb11c5bd9a1aa91 = NULL;
    }

    assertFrameObject(frame_8afd2791eb301c31acb11c5bd9a1aa91);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_stype);
    Py_DECREF(var_stype);
    var_stype = NULL;
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

    Py_XDECREF(var_stype);
    var_stype = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$context$$$function__17_getApplicationInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *var_pkgMgr = NULL;
    PyObject *var_pkgInfo = NULL;
    struct Nuitka_FrameObject *frame_210d9c4233d048dcbef45471ad9379b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_210d9c4233d048dcbef45471ad9379b2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_210d9c4233d048dcbef45471ad9379b2)) {
        Py_XDECREF(cache_frame_210d9c4233d048dcbef45471ad9379b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_210d9c4233d048dcbef45471ad9379b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_210d9c4233d048dcbef45471ad9379b2 = MAKE_FUNCTION_FRAME(codeobj_210d9c4233d048dcbef45471ad9379b2, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_210d9c4233d048dcbef45471ad9379b2->m_type_description == NULL);
    frame_210d9c4233d048dcbef45471ad9379b2 = cache_frame_210d9c4233d048dcbef45471ad9379b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_210d9c4233d048dcbef45471ad9379b2);
    assert(Py_REFCNT(frame_210d9c4233d048dcbef45471ad9379b2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_pkgMgr == NULL);
        var_pkgMgr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_pkgMgr);
        tmp_expression_value_2 = var_pkgMgr;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[13];
        frame_210d9c4233d048dcbef45471ad9379b2->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_pkgInfo == NULL);
        var_pkgInfo = tmp_assign_source_2;
    }
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_pkgInfo);
        tmp_expression_value_4 = var_pkgInfo;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_210d9c4233d048dcbef45471ad9379b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_210d9c4233d048dcbef45471ad9379b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_210d9c4233d048dcbef45471ad9379b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_210d9c4233d048dcbef45471ad9379b2,
        type_description_1,
        par_self,
        par_emu,
        var_pkgMgr,
        var_pkgInfo
    );


    // Release cached frame if used for exception.
    if (frame_210d9c4233d048dcbef45471ad9379b2 == cache_frame_210d9c4233d048dcbef45471ad9379b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_210d9c4233d048dcbef45471ad9379b2);
        cache_frame_210d9c4233d048dcbef45471ad9379b2 = NULL;
    }

    assertFrameObject(frame_210d9c4233d048dcbef45471ad9379b2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pkgMgr);
    Py_DECREF(var_pkgMgr);
    var_pkgMgr = NULL;
    CHECK_OBJECT(var_pkgInfo);
    Py_DECREF(var_pkgInfo);
    var_pkgInfo = NULL;
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

    Py_XDECREF(var_pkgMgr);
    var_pkgMgr = NULL;
    Py_XDECREF(var_pkgInfo);
    var_pkgInfo = NULL;
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


static PyObject *impl_androidemu$java$classes$context$$$function__18_getPackageName(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_ebcd3a65c21088232be14f0cc91e1456;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ebcd3a65c21088232be14f0cc91e1456 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ebcd3a65c21088232be14f0cc91e1456)) {
        Py_XDECREF(cache_frame_ebcd3a65c21088232be14f0cc91e1456);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebcd3a65c21088232be14f0cc91e1456 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebcd3a65c21088232be14f0cc91e1456 = MAKE_FUNCTION_FRAME(codeobj_ebcd3a65c21088232be14f0cc91e1456, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebcd3a65c21088232be14f0cc91e1456->m_type_description == NULL);
    frame_ebcd3a65c21088232be14f0cc91e1456 = cache_frame_ebcd3a65c21088232be14f0cc91e1456;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebcd3a65c21088232be14f0cc91e1456);
    assert(Py_REFCNT(frame_ebcd3a65c21088232be14f0cc91e1456) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_ebcd3a65c21088232be14f0cc91e1456, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebcd3a65c21088232be14f0cc91e1456->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebcd3a65c21088232be14f0cc91e1456, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebcd3a65c21088232be14f0cc91e1456,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_ebcd3a65c21088232be14f0cc91e1456 == cache_frame_ebcd3a65c21088232be14f0cc91e1456) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebcd3a65c21088232be14f0cc91e1456);
        cache_frame_ebcd3a65c21088232be14f0cc91e1456 = NULL;
    }

    assertFrameObject(frame_ebcd3a65c21088232be14f0cc91e1456);

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


static PyObject *impl_androidemu$java$classes$context$$$function__21_getPackageCodePath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *var_pkgName = NULL;
    PyObject *var_path = NULL;
    struct Nuitka_FrameObject *frame_3425d244e0621d4bb8987c17074318e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3425d244e0621d4bb8987c17074318e8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3425d244e0621d4bb8987c17074318e8)) {
        Py_XDECREF(cache_frame_3425d244e0621d4bb8987c17074318e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3425d244e0621d4bb8987c17074318e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3425d244e0621d4bb8987c17074318e8 = MAKE_FUNCTION_FRAME(codeobj_3425d244e0621d4bb8987c17074318e8, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3425d244e0621d4bb8987c17074318e8->m_type_description == NULL);
    frame_3425d244e0621d4bb8987c17074318e8 = cache_frame_3425d244e0621d4bb8987c17074318e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3425d244e0621d4bb8987c17074318e8);
    assert(Py_REFCNT(frame_3425d244e0621d4bb8987c17074318e8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_emu);
        tmp_expression_value_2 = par_emu;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3425d244e0621d4bb8987c17074318e8->m_frame.f_lineno = 155;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[28]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_pkgName == NULL);
        var_pkgName = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[29];
        CHECK_OBJECT(var_pkgName);
        tmp_tuple_element_1 = var_pkgName;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_1 = var_path;
        frame_3425d244e0621d4bb8987c17074318e8->m_frame.f_lineno = 157;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3425d244e0621d4bb8987c17074318e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3425d244e0621d4bb8987c17074318e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3425d244e0621d4bb8987c17074318e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3425d244e0621d4bb8987c17074318e8,
        type_description_1,
        par_self,
        par_emu,
        var_pkgName,
        var_path
    );


    // Release cached frame if used for exception.
    if (frame_3425d244e0621d4bb8987c17074318e8 == cache_frame_3425d244e0621d4bb8987c17074318e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3425d244e0621d4bb8987c17074318e8);
        cache_frame_3425d244e0621d4bb8987c17074318e8 = NULL;
    }

    assertFrameObject(frame_3425d244e0621d4bb8987c17074318e8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pkgName);
    Py_DECREF(var_pkgName);
    var_pkgName = NULL;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
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

    Py_XDECREF(var_pkgName);
    var_pkgName = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
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


static PyObject *impl_androidemu$java$classes$context$$$function__22_getFilesDir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *var_pkgName = NULL;
    PyObject *var_fdir = NULL;
    struct Nuitka_FrameObject *frame_f69f20d3cd42df6e98d0f3dc9c61c462;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462)) {
        Py_XDECREF(cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462 = MAKE_FUNCTION_FRAME(codeobj_f69f20d3cd42df6e98d0f3dc9c61c462, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462->m_type_description == NULL);
    frame_f69f20d3cd42df6e98d0f3dc9c61c462 = cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f69f20d3cd42df6e98d0f3dc9c61c462);
    assert(Py_REFCNT(frame_f69f20d3cd42df6e98d0f3dc9c61c462) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_emu);
        tmp_expression_value_2 = par_emu;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f69f20d3cd42df6e98d0f3dc9c61c462->m_frame.f_lineno = 162;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[28]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_pkgName == NULL);
        var_pkgName = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[30];
        CHECK_OBJECT(var_pkgName);
        tmp_tuple_element_1 = var_pkgName;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_fdir == NULL);
        var_fdir = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fdir);
        tmp_args_element_value_1 = var_fdir;
        frame_f69f20d3cd42df6e98d0f3dc9c61c462->m_frame.f_lineno = 164;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_f69f20d3cd42df6e98d0f3dc9c61c462, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f69f20d3cd42df6e98d0f3dc9c61c462->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f69f20d3cd42df6e98d0f3dc9c61c462, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f69f20d3cd42df6e98d0f3dc9c61c462,
        type_description_1,
        par_self,
        par_emu,
        var_pkgName,
        var_fdir
    );


    // Release cached frame if used for exception.
    if (frame_f69f20d3cd42df6e98d0f3dc9c61c462 == cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462);
        cache_frame_f69f20d3cd42df6e98d0f3dc9c61c462 = NULL;
    }

    assertFrameObject(frame_f69f20d3cd42df6e98d0f3dc9c61c462);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pkgName);
    Py_DECREF(var_pkgName);
    var_pkgName = NULL;
    CHECK_OBJECT(var_fdir);
    Py_DECREF(var_fdir);
    var_fdir = NULL;
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

    Py_XDECREF(var_pkgName);
    var_pkgName = NULL;
    Py_XDECREF(var_fdir);
    var_fdir = NULL;
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


static PyObject *impl_androidemu$java$classes$context$$$function__23_getSharedPreferences(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_mode = python_pars[3];
    PyObject *var_pkgName = NULL;
    PyObject *var_pyName = NULL;
    PyObject *var_path = NULL;
    PyObject *var_sp = NULL;
    struct Nuitka_FrameObject *frame_a70f5554fdb2cf38a2b07eee5af83abb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a70f5554fdb2cf38a2b07eee5af83abb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a70f5554fdb2cf38a2b07eee5af83abb)) {
        Py_XDECREF(cache_frame_a70f5554fdb2cf38a2b07eee5af83abb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a70f5554fdb2cf38a2b07eee5af83abb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a70f5554fdb2cf38a2b07eee5af83abb = MAKE_FUNCTION_FRAME(codeobj_a70f5554fdb2cf38a2b07eee5af83abb, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a70f5554fdb2cf38a2b07eee5af83abb->m_type_description == NULL);
    frame_a70f5554fdb2cf38a2b07eee5af83abb = cache_frame_a70f5554fdb2cf38a2b07eee5af83abb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a70f5554fdb2cf38a2b07eee5af83abb);
    assert(Py_REFCNT(frame_a70f5554fdb2cf38a2b07eee5af83abb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_emu);
        tmp_expression_value_2 = par_emu;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a70f5554fdb2cf38a2b07eee5af83abb->m_frame.f_lineno = 169;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[28]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pkgName == NULL);
        var_pkgName = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_name);
        tmp_called_instance_1 = par_name;
        frame_a70f5554fdb2cf38a2b07eee5af83abb->m_frame.f_lineno = 170;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pyName == NULL);
        var_pyName = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_pyName);
        tmp_cmp_expr_left_1 = var_pyName;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pyName);
        tmp_subscript_value_1 = var_pyName;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[32];
        CHECK_OBJECT(var_pkgName);
        tmp_tuple_element_1 = var_pkgName;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_pyName);
        tmp_tuple_element_1 = var_pyName;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_assign_source_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_2 = var_path;
        frame_a70f5554fdb2cf38a2b07eee5af83abb->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sp == NULL);
        var_sp = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_sp);
        tmp_ass_subvalue_1 = var_sp;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pyName);
        tmp_ass_subscript_1 = var_pyName;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_sp);
    tmp_return_value = var_sp;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a70f5554fdb2cf38a2b07eee5af83abb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a70f5554fdb2cf38a2b07eee5af83abb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a70f5554fdb2cf38a2b07eee5af83abb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a70f5554fdb2cf38a2b07eee5af83abb,
        type_description_1,
        par_self,
        par_emu,
        par_name,
        par_mode,
        var_pkgName,
        var_pyName,
        var_path,
        var_sp
    );


    // Release cached frame if used for exception.
    if (frame_a70f5554fdb2cf38a2b07eee5af83abb == cache_frame_a70f5554fdb2cf38a2b07eee5af83abb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a70f5554fdb2cf38a2b07eee5af83abb);
        cache_frame_a70f5554fdb2cf38a2b07eee5af83abb = NULL;
    }

    assertFrameObject(frame_a70f5554fdb2cf38a2b07eee5af83abb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pkgName);
    Py_DECREF(var_pkgName);
    var_pkgName = NULL;
    Py_XDECREF(var_pyName);
    var_pyName = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_sp);
    var_sp = NULL;
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

    Py_XDECREF(var_pkgName);
    var_pkgName = NULL;
    Py_XDECREF(var_pyName);
    var_pyName = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_sp);
    var_sp = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$context$$$function__24___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5fae57abf844f4a252cc0a9ef2686869;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5fae57abf844f4a252cc0a9ef2686869 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5fae57abf844f4a252cc0a9ef2686869)) {
        Py_XDECREF(cache_frame_5fae57abf844f4a252cc0a9ef2686869);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5fae57abf844f4a252cc0a9ef2686869 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5fae57abf844f4a252cc0a9ef2686869 = MAKE_FUNCTION_FRAME(codeobj_5fae57abf844f4a252cc0a9ef2686869, module_androidemu$java$classes$context, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5fae57abf844f4a252cc0a9ef2686869->m_type_description == NULL);
    frame_5fae57abf844f4a252cc0a9ef2686869 = cache_frame_5fae57abf844f4a252cc0a9ef2686869;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5fae57abf844f4a252cc0a9ef2686869);
    assert(Py_REFCNT(frame_5fae57abf844f4a252cc0a9ef2686869) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_5fae57abf844f4a252cc0a9ef2686869->m_frame.f_lineno = 186;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fae57abf844f4a252cc0a9ef2686869, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fae57abf844f4a252cc0a9ef2686869->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fae57abf844f4a252cc0a9ef2686869, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5fae57abf844f4a252cc0a9ef2686869,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5fae57abf844f4a252cc0a9ef2686869 == cache_frame_5fae57abf844f4a252cc0a9ef2686869) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5fae57abf844f4a252cc0a9ef2686869);
        cache_frame_5fae57abf844f4a252cc0a9ef2686869 = NULL;
    }

    assertFrameObject(frame_5fae57abf844f4a252cc0a9ef2686869);

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


static PyObject *impl_androidemu$java$classes$context$$$function__25_attachBaseContext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ctx_impl = python_pars[1];
    struct Nuitka_FrameObject *frame_3178d95234c1dedae40194932da9a15c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3178d95234c1dedae40194932da9a15c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3178d95234c1dedae40194932da9a15c)) {
        Py_XDECREF(cache_frame_3178d95234c1dedae40194932da9a15c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3178d95234c1dedae40194932da9a15c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3178d95234c1dedae40194932da9a15c = MAKE_FUNCTION_FRAME(codeobj_3178d95234c1dedae40194932da9a15c, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3178d95234c1dedae40194932da9a15c->m_type_description == NULL);
    frame_3178d95234c1dedae40194932da9a15c = cache_frame_3178d95234c1dedae40194932da9a15c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3178d95234c1dedae40194932da9a15c);
    assert(Py_REFCNT(frame_3178d95234c1dedae40194932da9a15c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ctx_impl);
        tmp_assattr_value_1 = par_ctx_impl;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3178d95234c1dedae40194932da9a15c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3178d95234c1dedae40194932da9a15c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3178d95234c1dedae40194932da9a15c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3178d95234c1dedae40194932da9a15c,
        type_description_1,
        par_self,
        par_ctx_impl
    );


    // Release cached frame if used for exception.
    if (frame_3178d95234c1dedae40194932da9a15c == cache_frame_3178d95234c1dedae40194932da9a15c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3178d95234c1dedae40194932da9a15c);
        cache_frame_3178d95234c1dedae40194932da9a15c = NULL;
    }

    assertFrameObject(frame_3178d95234c1dedae40194932da9a15c);

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
    CHECK_OBJECT(par_ctx_impl);
    Py_DECREF(par_ctx_impl);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ctx_impl);
    Py_DECREF(par_ctx_impl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$context$$$function__26_getPackageManager(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_323d7038893c0ea6ba7a6fc8b1e5e39a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a)) {
        Py_XDECREF(cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a = MAKE_FUNCTION_FRAME(codeobj_323d7038893c0ea6ba7a6fc8b1e5e39a, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a->m_type_description == NULL);
    frame_323d7038893c0ea6ba7a6fc8b1e5e39a = cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_323d7038893c0ea6ba7a6fc8b1e5e39a);
    assert(Py_REFCNT(frame_323d7038893c0ea6ba7a6fc8b1e5e39a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_323d7038893c0ea6ba7a6fc8b1e5e39a->m_frame.f_lineno = 196;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[35], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
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
        exception_tb = MAKE_TRACEBACK(frame_323d7038893c0ea6ba7a6fc8b1e5e39a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_323d7038893c0ea6ba7a6fc8b1e5e39a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_323d7038893c0ea6ba7a6fc8b1e5e39a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_323d7038893c0ea6ba7a6fc8b1e5e39a,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_323d7038893c0ea6ba7a6fc8b1e5e39a == cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a);
        cache_frame_323d7038893c0ea6ba7a6fc8b1e5e39a = NULL;
    }

    assertFrameObject(frame_323d7038893c0ea6ba7a6fc8b1e5e39a);

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


static PyObject *impl_androidemu$java$classes$context$$$function__27_getAssets(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_ff782b75eb25f5a73fefcb6e1fa509ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac)) {
        Py_XDECREF(cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac = MAKE_FUNCTION_FRAME(codeobj_ff782b75eb25f5a73fefcb6e1fa509ac, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac->m_type_description == NULL);
    frame_ff782b75eb25f5a73fefcb6e1fa509ac = cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff782b75eb25f5a73fefcb6e1fa509ac);
    assert(Py_REFCNT(frame_ff782b75eb25f5a73fefcb6e1fa509ac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_ff782b75eb25f5a73fefcb6e1fa509ac->m_frame.f_lineno = 201;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_ff782b75eb25f5a73fefcb6e1fa509ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff782b75eb25f5a73fefcb6e1fa509ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff782b75eb25f5a73fefcb6e1fa509ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff782b75eb25f5a73fefcb6e1fa509ac,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_ff782b75eb25f5a73fefcb6e1fa509ac == cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac);
        cache_frame_ff782b75eb25f5a73fefcb6e1fa509ac = NULL;
    }

    assertFrameObject(frame_ff782b75eb25f5a73fefcb6e1fa509ac);

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


static PyObject *impl_androidemu$java$classes$context$$$function__28_getContentResolver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_cb2bc3b47f97d7983099f4b8dbe6311b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b)) {
        Py_XDECREF(cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b = MAKE_FUNCTION_FRAME(codeobj_cb2bc3b47f97d7983099f4b8dbe6311b, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b->m_type_description == NULL);
    frame_cb2bc3b47f97d7983099f4b8dbe6311b = cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb2bc3b47f97d7983099f4b8dbe6311b);
    assert(Py_REFCNT(frame_cb2bc3b47f97d7983099f4b8dbe6311b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_cb2bc3b47f97d7983099f4b8dbe6311b->m_frame.f_lineno = 206;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
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
        exception_tb = MAKE_TRACEBACK(frame_cb2bc3b47f97d7983099f4b8dbe6311b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb2bc3b47f97d7983099f4b8dbe6311b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb2bc3b47f97d7983099f4b8dbe6311b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb2bc3b47f97d7983099f4b8dbe6311b,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_cb2bc3b47f97d7983099f4b8dbe6311b == cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b);
        cache_frame_cb2bc3b47f97d7983099f4b8dbe6311b = NULL;
    }

    assertFrameObject(frame_cb2bc3b47f97d7983099f4b8dbe6311b);

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


static PyObject *impl_androidemu$java$classes$context$$$function__29_getSystemService(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_s1 = python_pars[2];
    struct Nuitka_FrameObject *frame_0285ea0b1c98c6b745a3b08ce6f0dbd9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9)) {
        Py_XDECREF(cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9 = MAKE_FUNCTION_FRAME(codeobj_0285ea0b1c98c6b745a3b08ce6f0dbd9, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9->m_type_description == NULL);
    frame_0285ea0b1c98c6b745a3b08ce6f0dbd9 = cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0285ea0b1c98c6b745a3b08ce6f0dbd9);
    assert(Py_REFCNT(frame_0285ea0b1c98c6b745a3b08ce6f0dbd9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        CHECK_OBJECT(par_s1);
        tmp_args_element_value_2 = par_s1;
        frame_0285ea0b1c98c6b745a3b08ce6f0dbd9->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[38],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
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
        exception_tb = MAKE_TRACEBACK(frame_0285ea0b1c98c6b745a3b08ce6f0dbd9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0285ea0b1c98c6b745a3b08ce6f0dbd9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0285ea0b1c98c6b745a3b08ce6f0dbd9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0285ea0b1c98c6b745a3b08ce6f0dbd9,
        type_description_1,
        par_self,
        par_emu,
        par_s1
    );


    // Release cached frame if used for exception.
    if (frame_0285ea0b1c98c6b745a3b08ce6f0dbd9 == cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9);
        cache_frame_0285ea0b1c98c6b745a3b08ce6f0dbd9 = NULL;
    }

    assertFrameObject(frame_0285ea0b1c98c6b745a3b08ce6f0dbd9);

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
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_androidemu$java$classes$context$$$function__30_getApplicationInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_da75c4c0faeac5b28d5dddde26e119c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da75c4c0faeac5b28d5dddde26e119c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da75c4c0faeac5b28d5dddde26e119c4)) {
        Py_XDECREF(cache_frame_da75c4c0faeac5b28d5dddde26e119c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da75c4c0faeac5b28d5dddde26e119c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da75c4c0faeac5b28d5dddde26e119c4 = MAKE_FUNCTION_FRAME(codeobj_da75c4c0faeac5b28d5dddde26e119c4, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da75c4c0faeac5b28d5dddde26e119c4->m_type_description == NULL);
    frame_da75c4c0faeac5b28d5dddde26e119c4 = cache_frame_da75c4c0faeac5b28d5dddde26e119c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da75c4c0faeac5b28d5dddde26e119c4);
    assert(Py_REFCNT(frame_da75c4c0faeac5b28d5dddde26e119c4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_da75c4c0faeac5b28d5dddde26e119c4->m_frame.f_lineno = 216;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[39], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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
        exception_tb = MAKE_TRACEBACK(frame_da75c4c0faeac5b28d5dddde26e119c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da75c4c0faeac5b28d5dddde26e119c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da75c4c0faeac5b28d5dddde26e119c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da75c4c0faeac5b28d5dddde26e119c4,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_da75c4c0faeac5b28d5dddde26e119c4 == cache_frame_da75c4c0faeac5b28d5dddde26e119c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da75c4c0faeac5b28d5dddde26e119c4);
        cache_frame_da75c4c0faeac5b28d5dddde26e119c4 = NULL;
    }

    assertFrameObject(frame_da75c4c0faeac5b28d5dddde26e119c4);

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


static PyObject *impl_androidemu$java$classes$context$$$function__31_getPackageName(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_dd18818d0ab16ebfe827b781f0fb0351;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd18818d0ab16ebfe827b781f0fb0351 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd18818d0ab16ebfe827b781f0fb0351)) {
        Py_XDECREF(cache_frame_dd18818d0ab16ebfe827b781f0fb0351);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd18818d0ab16ebfe827b781f0fb0351 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd18818d0ab16ebfe827b781f0fb0351 = MAKE_FUNCTION_FRAME(codeobj_dd18818d0ab16ebfe827b781f0fb0351, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd18818d0ab16ebfe827b781f0fb0351->m_type_description == NULL);
    frame_dd18818d0ab16ebfe827b781f0fb0351 = cache_frame_dd18818d0ab16ebfe827b781f0fb0351;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd18818d0ab16ebfe827b781f0fb0351);
    assert(Py_REFCNT(frame_dd18818d0ab16ebfe827b781f0fb0351) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_dd18818d0ab16ebfe827b781f0fb0351->m_frame.f_lineno = 221;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[40], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_dd18818d0ab16ebfe827b781f0fb0351, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd18818d0ab16ebfe827b781f0fb0351->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd18818d0ab16ebfe827b781f0fb0351, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd18818d0ab16ebfe827b781f0fb0351,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_dd18818d0ab16ebfe827b781f0fb0351 == cache_frame_dd18818d0ab16ebfe827b781f0fb0351) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd18818d0ab16ebfe827b781f0fb0351);
        cache_frame_dd18818d0ab16ebfe827b781f0fb0351 = NULL;
    }

    assertFrameObject(frame_dd18818d0ab16ebfe827b781f0fb0351);

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


static PyObject *impl_androidemu$java$classes$context$$$function__32_checkSelfPermission(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_b5e0403dc0e011a951a3e9807a306ac6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5e0403dc0e011a951a3e9807a306ac6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5e0403dc0e011a951a3e9807a306ac6)) {
        Py_XDECREF(cache_frame_b5e0403dc0e011a951a3e9807a306ac6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5e0403dc0e011a951a3e9807a306ac6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5e0403dc0e011a951a3e9807a306ac6 = MAKE_FUNCTION_FRAME(codeobj_b5e0403dc0e011a951a3e9807a306ac6, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5e0403dc0e011a951a3e9807a306ac6->m_type_description == NULL);
    frame_b5e0403dc0e011a951a3e9807a306ac6 = cache_frame_b5e0403dc0e011a951a3e9807a306ac6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5e0403dc0e011a951a3e9807a306ac6);
    assert(Py_REFCNT(frame_b5e0403dc0e011a951a3e9807a306ac6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_b5e0403dc0e011a951a3e9807a306ac6->m_frame.f_lineno = 226;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
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
        exception_tb = MAKE_TRACEBACK(frame_b5e0403dc0e011a951a3e9807a306ac6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5e0403dc0e011a951a3e9807a306ac6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5e0403dc0e011a951a3e9807a306ac6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5e0403dc0e011a951a3e9807a306ac6,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_b5e0403dc0e011a951a3e9807a306ac6 == cache_frame_b5e0403dc0e011a951a3e9807a306ac6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5e0403dc0e011a951a3e9807a306ac6);
        cache_frame_b5e0403dc0e011a951a3e9807a306ac6 = NULL;
    }

    assertFrameObject(frame_b5e0403dc0e011a951a3e9807a306ac6);

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


static PyObject *impl_androidemu$java$classes$context$$$function__33_checkCallingOrSelfPermission(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_638f276904266c427c1cc2a7983b3a98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_638f276904266c427c1cc2a7983b3a98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_638f276904266c427c1cc2a7983b3a98)) {
        Py_XDECREF(cache_frame_638f276904266c427c1cc2a7983b3a98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_638f276904266c427c1cc2a7983b3a98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_638f276904266c427c1cc2a7983b3a98 = MAKE_FUNCTION_FRAME(codeobj_638f276904266c427c1cc2a7983b3a98, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_638f276904266c427c1cc2a7983b3a98->m_type_description == NULL);
    frame_638f276904266c427c1cc2a7983b3a98 = cache_frame_638f276904266c427c1cc2a7983b3a98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_638f276904266c427c1cc2a7983b3a98);
    assert(Py_REFCNT(frame_638f276904266c427c1cc2a7983b3a98) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_638f276904266c427c1cc2a7983b3a98->m_frame.f_lineno = 231;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[42], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
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
        exception_tb = MAKE_TRACEBACK(frame_638f276904266c427c1cc2a7983b3a98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_638f276904266c427c1cc2a7983b3a98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_638f276904266c427c1cc2a7983b3a98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_638f276904266c427c1cc2a7983b3a98,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_638f276904266c427c1cc2a7983b3a98 == cache_frame_638f276904266c427c1cc2a7983b3a98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_638f276904266c427c1cc2a7983b3a98);
        cache_frame_638f276904266c427c1cc2a7983b3a98 = NULL;
    }

    assertFrameObject(frame_638f276904266c427c1cc2a7983b3a98);

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


static PyObject *impl_androidemu$java$classes$context$$$function__34_getPackageCodePath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_da8943f8efd3f4b72ceae6444b10a562;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da8943f8efd3f4b72ceae6444b10a562 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da8943f8efd3f4b72ceae6444b10a562)) {
        Py_XDECREF(cache_frame_da8943f8efd3f4b72ceae6444b10a562);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da8943f8efd3f4b72ceae6444b10a562 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da8943f8efd3f4b72ceae6444b10a562 = MAKE_FUNCTION_FRAME(codeobj_da8943f8efd3f4b72ceae6444b10a562, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da8943f8efd3f4b72ceae6444b10a562->m_type_description == NULL);
    frame_da8943f8efd3f4b72ceae6444b10a562 = cache_frame_da8943f8efd3f4b72ceae6444b10a562;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da8943f8efd3f4b72ceae6444b10a562);
    assert(Py_REFCNT(frame_da8943f8efd3f4b72ceae6444b10a562) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_da8943f8efd3f4b72ceae6444b10a562->m_frame.f_lineno = 236;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[43], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_da8943f8efd3f4b72ceae6444b10a562, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da8943f8efd3f4b72ceae6444b10a562->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da8943f8efd3f4b72ceae6444b10a562, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da8943f8efd3f4b72ceae6444b10a562,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_da8943f8efd3f4b72ceae6444b10a562 == cache_frame_da8943f8efd3f4b72ceae6444b10a562) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da8943f8efd3f4b72ceae6444b10a562);
        cache_frame_da8943f8efd3f4b72ceae6444b10a562 = NULL;
    }

    assertFrameObject(frame_da8943f8efd3f4b72ceae6444b10a562);

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


static PyObject *impl_androidemu$java$classes$context$$$function__35_getFilesDir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    struct Nuitka_FrameObject *frame_6536f6790fd7badcc7f7c5fe01bde215;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6536f6790fd7badcc7f7c5fe01bde215 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6536f6790fd7badcc7f7c5fe01bde215)) {
        Py_XDECREF(cache_frame_6536f6790fd7badcc7f7c5fe01bde215);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6536f6790fd7badcc7f7c5fe01bde215 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6536f6790fd7badcc7f7c5fe01bde215 = MAKE_FUNCTION_FRAME(codeobj_6536f6790fd7badcc7f7c5fe01bde215, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6536f6790fd7badcc7f7c5fe01bde215->m_type_description == NULL);
    frame_6536f6790fd7badcc7f7c5fe01bde215 = cache_frame_6536f6790fd7badcc7f7c5fe01bde215;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6536f6790fd7badcc7f7c5fe01bde215);
    assert(Py_REFCNT(frame_6536f6790fd7badcc7f7c5fe01bde215) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        frame_6536f6790fd7badcc7f7c5fe01bde215->m_frame.f_lineno = 241;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[44], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_6536f6790fd7badcc7f7c5fe01bde215, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6536f6790fd7badcc7f7c5fe01bde215->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6536f6790fd7badcc7f7c5fe01bde215, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6536f6790fd7badcc7f7c5fe01bde215,
        type_description_1,
        par_self,
        par_emu
    );


    // Release cached frame if used for exception.
    if (frame_6536f6790fd7badcc7f7c5fe01bde215 == cache_frame_6536f6790fd7badcc7f7c5fe01bde215) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6536f6790fd7badcc7f7c5fe01bde215);
        cache_frame_6536f6790fd7badcc7f7c5fe01bde215 = NULL;
    }

    assertFrameObject(frame_6536f6790fd7badcc7f7c5fe01bde215);

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


static PyObject *impl_androidemu$java$classes$context$$$function__36_getSharedPreferences(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_emu = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_mode = python_pars[3];
    struct Nuitka_FrameObject *frame_bd900459a490dd2cdbdcae7625885e1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd900459a490dd2cdbdcae7625885e1f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd900459a490dd2cdbdcae7625885e1f)) {
        Py_XDECREF(cache_frame_bd900459a490dd2cdbdcae7625885e1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd900459a490dd2cdbdcae7625885e1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd900459a490dd2cdbdcae7625885e1f = MAKE_FUNCTION_FRAME(codeobj_bd900459a490dd2cdbdcae7625885e1f, module_androidemu$java$classes$context, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd900459a490dd2cdbdcae7625885e1f->m_type_description == NULL);
    frame_bd900459a490dd2cdbdcae7625885e1f = cache_frame_bd900459a490dd2cdbdcae7625885e1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd900459a490dd2cdbdcae7625885e1f);
    assert(Py_REFCNT(frame_bd900459a490dd2cdbdcae7625885e1f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_emu);
        tmp_args_element_value_1 = par_emu;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        CHECK_OBJECT(par_mode);
        tmp_args_element_value_3 = par_mode;
        frame_bd900459a490dd2cdbdcae7625885e1f->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bd900459a490dd2cdbdcae7625885e1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd900459a490dd2cdbdcae7625885e1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd900459a490dd2cdbdcae7625885e1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd900459a490dd2cdbdcae7625885e1f,
        type_description_1,
        par_self,
        par_emu,
        par_name,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_bd900459a490dd2cdbdcae7625885e1f == cache_frame_bd900459a490dd2cdbdcae7625885e1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd900459a490dd2cdbdcae7625885e1f);
        cache_frame_bd900459a490dd2cdbdcae7625885e1f = NULL;
    }

    assertFrameObject(frame_bd900459a490dd2cdbdcae7625885e1f);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_emu);
    Py_DECREF(par_emu);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__10_getPackageName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__10_getPackageName,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_81a8c11508b8aa1d59713b1e97717ee5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__11_getSharedPreferences() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__11_getSharedPreferences,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_9a8b6b24c6c2c1d90d0b9ed96119a182,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__12___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__12___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_8b2e597d5b24a8af615402946661fa63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__13_getPackageManager() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__13_getPackageManager,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_4db88e6d9ad8c4240ec99c386c09637d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__14_getAssets() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__14_getAssets,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_23156c6da80d9f20685e73d82208c498,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__15_getContentResolver() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__15_getContentResolver,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_169bec11aa9341287222b49baa16d600,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__16_getSystemService() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__16_getSystemService,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_8afd2791eb301c31acb11c5bd9a1aa91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__17_getApplicationInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__17_getApplicationInfo,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_210d9c4233d048dcbef45471ad9379b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__18_getPackageName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__18_getPackageName,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_ebcd3a65c21088232be14f0cc91e1456,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__19_checkSelfPermission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_8be6bb0c1dcd6fb92e8de3327751aa78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[13]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_4ffe9172c17c0c92d2236c97ac2db0f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__20_checkCallingOrSelfPermission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_a14eae6a713f6ae8c4d3080e8ffa8e54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[13]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__21_getPackageCodePath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__21_getPackageCodePath,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_3425d244e0621d4bb8987c17074318e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__22_getFilesDir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__22_getFilesDir,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_f69f20d3cd42df6e98d0f3dc9c61c462,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__23_getSharedPreferences() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__23_getSharedPreferences,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_a70f5554fdb2cf38a2b07eee5af83abb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__24___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__24___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_5fae57abf844f4a252cc0a9ef2686869,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__25_attachBaseContext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__25_attachBaseContext,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_3178d95234c1dedae40194932da9a15c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__26_getPackageManager() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__26_getPackageManager,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_323d7038893c0ea6ba7a6fc8b1e5e39a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__27_getAssets() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__27_getAssets,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_ff782b75eb25f5a73fefcb6e1fa509ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__28_getContentResolver() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__28_getContentResolver,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_cb2bc3b47f97d7983099f4b8dbe6311b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__29_getSystemService() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__29_getSystemService,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_0285ea0b1c98c6b745a3b08ce6f0dbd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__2_getPackageManager() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__2_getPackageManager,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_105c9cae6760b633b623aba4ea88d520,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__30_getApplicationInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__30_getApplicationInfo,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_da75c4c0faeac5b28d5dddde26e119c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__31_getPackageName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__31_getPackageName,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_dd18818d0ab16ebfe827b781f0fb0351,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__32_checkSelfPermission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__32_checkSelfPermission,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_b5e0403dc0e011a951a3e9807a306ac6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__33_checkCallingOrSelfPermission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__33_checkCallingOrSelfPermission,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_638f276904266c427c1cc2a7983b3a98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__34_getPackageCodePath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__34_getPackageCodePath,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_da8943f8efd3f4b72ceae6444b10a562,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__35_getFilesDir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__35_getFilesDir,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_6536f6790fd7badcc7f7c5fe01bde215,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__36_getSharedPreferences() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__36_getSharedPreferences,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_bd900459a490dd2cdbdcae7625885e1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__3_getContentResolver() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__3_getContentResolver,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_d787efd3aa2f708a9f5514c1b41a8ac8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__4_getSystemService() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__4_getSystemService,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_a3248fcf1be425ac146df8fa2b3e058d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__5_getApplicationInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__5_getApplicationInfo,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_1bb15bf30f8beeb5acbdd864444ac284,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__6_checkSelfPermission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__6_checkSelfPermission,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_409c3d38ba9abc3b21bc744fe419ccbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__7_checkCallingOrSelfPermission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__7_checkCallingOrSelfPermission,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_32e7f76d246037d02ad00800b6902ca7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__8_getPackageCodePath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__8_getPackageCodePath,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_6a02f9cc74965b7c186e83cdc6678667,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_androidemu$java$classes$context$$$function__9_getFilesDir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_androidemu$java$classes$context$$$function__9_getFilesDir,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_1219488b65e6e6f4ec19cf0f7b83787b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_androidemu$java$classes$context,
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

function_impl_code functable_androidemu$java$classes$context[] = {
    NULL,
    impl_androidemu$java$classes$context$$$function__2_getPackageManager,
    impl_androidemu$java$classes$context$$$function__3_getContentResolver,
    impl_androidemu$java$classes$context$$$function__4_getSystemService,
    impl_androidemu$java$classes$context$$$function__5_getApplicationInfo,
    impl_androidemu$java$classes$context$$$function__6_checkSelfPermission,
    impl_androidemu$java$classes$context$$$function__7_checkCallingOrSelfPermission,
    impl_androidemu$java$classes$context$$$function__8_getPackageCodePath,
    impl_androidemu$java$classes$context$$$function__9_getFilesDir,
    impl_androidemu$java$classes$context$$$function__10_getPackageName,
    impl_androidemu$java$classes$context$$$function__11_getSharedPreferences,
    impl_androidemu$java$classes$context$$$function__12___init__,
    impl_androidemu$java$classes$context$$$function__13_getPackageManager,
    impl_androidemu$java$classes$context$$$function__14_getAssets,
    impl_androidemu$java$classes$context$$$function__15_getContentResolver,
    impl_androidemu$java$classes$context$$$function__16_getSystemService,
    impl_androidemu$java$classes$context$$$function__17_getApplicationInfo,
    impl_androidemu$java$classes$context$$$function__18_getPackageName,
    NULL,
    NULL,
    impl_androidemu$java$classes$context$$$function__21_getPackageCodePath,
    impl_androidemu$java$classes$context$$$function__22_getFilesDir,
    impl_androidemu$java$classes$context$$$function__23_getSharedPreferences,
    impl_androidemu$java$classes$context$$$function__24___init__,
    impl_androidemu$java$classes$context$$$function__25_attachBaseContext,
    impl_androidemu$java$classes$context$$$function__26_getPackageManager,
    impl_androidemu$java$classes$context$$$function__27_getAssets,
    impl_androidemu$java$classes$context$$$function__28_getContentResolver,
    impl_androidemu$java$classes$context$$$function__29_getSystemService,
    impl_androidemu$java$classes$context$$$function__30_getApplicationInfo,
    impl_androidemu$java$classes$context$$$function__31_getPackageName,
    impl_androidemu$java$classes$context$$$function__32_checkSelfPermission,
    impl_androidemu$java$classes$context$$$function__33_checkCallingOrSelfPermission,
    impl_androidemu$java$classes$context$$$function__34_getPackageCodePath,
    impl_androidemu$java$classes$context$$$function__35_getFilesDir,
    impl_androidemu$java$classes$context$$$function__36_getSharedPreferences,
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

    function_impl_code *current = functable_androidemu$java$classes$context;
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

    if (offset > sizeof(functable_androidemu$java$classes$context) || offset < 0) {
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
        functable_androidemu$java$classes$context[offset],
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
        module_androidemu$java$classes$context,
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
PyObject *modulecode_androidemu$java$classes$context(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("androidemu.java.classes.context");

    // Store the module for future use.
    module_androidemu$java$classes$context = module;

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
        PRINT_STRING("androidemu.java.classes.context: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("androidemu.java.classes.context: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initandroidemu$java$classes$context\n");

    moduledict_androidemu$java$classes$context = MODULE_DICT(module_androidemu$java$classes$context);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_androidemu$java$classes$context,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_androidemu$java$classes$context,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[74]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_androidemu$java$classes$context,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_androidemu$java$classes$context,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_androidemu$java$classes$context,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_androidemu$java$classes$context);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_androidemu$java$classes$context);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_60ebd850efbe966b8781d8aa2850b045;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_androidemu$java$classes$context$$$class__1_Context_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a8ef514c009249a98461a830c7c47ba5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_androidemu$java$classes$context$$$class__2_ContextImpl_83 = NULL;
    struct Nuitka_FrameObject *frame_7e556ce617381c7cfbd6a0901855962f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183 = NULL;
    struct Nuitka_FrameObject *frame_255421c413132302d137004f89924dfb_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_2);
    }
    frame_60ebd850efbe966b8781d8aa2850b045 = MAKE_MODULE_FRAME(codeobj_60ebd850efbe966b8781d8aa2850b045, module_androidemu$java$classes$context);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_60ebd850efbe966b8781d8aa2850b045);
    assert(Py_REFCNT(frame_60ebd850efbe966b8781d8aa2850b045) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[52];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[53];
        tmp_level_value_1 = mod_consts[54];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[55],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[57];
        tmp_level_value_2 = mod_consts[54];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[58],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[59];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[60];
        tmp_level_value_3 = mod_consts[54];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[59],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[59]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[61],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[61]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_8);
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
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[62];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_fromlist_value_4 = mod_consts[63];
        tmp_level_value_4 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 4;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_androidemu$java$classes$context, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[65];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_5 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_fromlist_value_5 = mod_consts[63];
        tmp_level_value_5 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 5;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_androidemu$java$classes$context, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[66];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_6 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_fromlist_value_6 = mod_consts[63];
        tmp_level_value_6 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 6;
        tmp_star_imported_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_star_imported_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_androidemu$java$classes$context, true, tmp_star_imported_3);
        Py_DECREF(tmp_star_imported_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[21];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[67];
        tmp_level_value_7 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[20],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[20]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[22],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[22]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[24],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[24]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[68];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[69];
        tmp_level_value_8 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[8],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[70];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[71];
        tmp_level_value_9 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[4],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[72];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[73];
        tmp_level_value_10 = mod_consts[64];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[31],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[74];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_androidemu$java$classes$context;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[75];
        tmp_level_value_11 = mod_consts[76];
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 11;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_androidemu$java$classes$context,
                mod_consts[26],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[77];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_assign_source_17 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[78];
            tmp_dict_value_1 = mod_consts[79];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[80];
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_args_element_value_1 = mod_consts[81];
            tmp_args_element_value_2 = mod_consts[82];
            tmp_args_element_value_3 = Py_True;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 17;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[83]);

            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 17;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_value_3;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_args_element_value_6;
                PyObject *tmp_args_element_value_7;
                PyObject *tmp_args_element_value_8;
                PyObject *tmp_called_value_4;
                PyObject *tmp_called_value_5;
                PyObject *tmp_args_element_value_9;
                PyObject *tmp_args_element_value_10;
                PyObject *tmp_args_element_value_11;
                PyObject *tmp_args_element_value_12;
                PyObject *tmp_called_value_6;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[58]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;

                    goto list_build_exception_1;
                }
                tmp_args_element_value_5 = mod_consts[84];
                tmp_args_element_value_6 = mod_consts[82];
                tmp_args_element_value_7 = Py_True;
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[4]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;

                    goto list_build_exception_1;
                }
                frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 18;
                tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[85]);

                if (tmp_args_element_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;

                    goto list_build_exception_1;
                }
                frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 18;
                {
                    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
                }

                Py_DECREF(tmp_args_element_value_8);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;

                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_1);
                tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[58]);

                if (unlikely(tmp_called_value_5 == NULL)) {
                    tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                }

                if (tmp_called_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;

                    goto list_build_exception_1;
                }
                tmp_args_element_value_9 = mod_consts[86];
                tmp_args_element_value_10 = mod_consts[82];
                tmp_args_element_value_11 = Py_True;
                tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[4]);

                if (unlikely(tmp_called_value_6 == NULL)) {
                    tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                }

                if (tmp_called_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;

                    goto list_build_exception_1;
                }
                frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 19;
                tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[87]);

                if (tmp_args_element_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;

                    goto list_build_exception_1;
                }
                frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 19;
                {
                    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
                }

                Py_DECREF(tmp_args_element_value_12);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;

                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_17);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[77];
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
        tmp_key_value_2 = mod_consts[77];
        tmp_assign_source_18 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_18 == NULL) {
            tmp_assign_source_18 = Py_None;
        }
        assert(!(tmp_assign_source_18 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_18 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_18);
        tmp_class_creation_1__metaclass = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[77];
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
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_1, mod_consts[88]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[88]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_args_value_1 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 15;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_3, mod_consts[90]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
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
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[91];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_name_value_12 = mod_consts[92];
        tmp_default_value_1 = mod_consts[93];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_expression_value_4, tmp_name_value_12, tmp_default_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
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
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[92]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_androidemu$java$classes$context$$$class__1_Context_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        frame_a8ef514c009249a98461a830c7c47ba5_2 = MAKE_CLASS_FRAME(codeobj_a8ef514c009249a98461a830c7c47ba5, module_androidemu$java$classes$context, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a8ef514c009249a98461a830c7c47ba5_2);
        assert(Py_REFCNT(frame_a8ef514c009249a98461a830c7c47ba5_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$context$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_9 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 25;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 25;
            tmp_called_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_9);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__2_getPackageManager();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 25;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_11 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 30;
            tmp_called_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_11);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_14 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__3_getContentResolver();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_call_args_kwsplit_1;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_13 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[103], "ilii");
            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 35;
            tmp_called_value_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[104]);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_call_args_kwsplit_1);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__4_getSystemService();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_15 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 41;
            tmp_called_value_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_15);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__5_getApplicationInfo();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            tmp_called_value_17 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 47;
            tmp_called_value_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[108], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_17);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_17 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__6_checkSelfPermission();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_19 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_19 == NULL)) {
                        tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 53;
            tmp_called_value_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[110], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_19);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__7_checkCallingOrSelfPermission();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_19;
            tmp_called_value_21 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_21 == NULL)) {
                        tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 59;
            tmp_called_value_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_21);
            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__8_getPackageCodePath();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_20;
            tmp_called_value_23 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 65;
            tmp_called_value_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[114], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_23);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_20 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__9_getFilesDir();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_21;
            tmp_called_value_25 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 71;
            tmp_called_value_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[116], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_25);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__10_getPackageName();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_call_args_kwsplit_2;
            PyObject *tmp_args_element_value_22;
            tmp_called_value_27 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[59]);

            if (tmp_called_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_call_args_kwsplit_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[118], "ilii");
            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 77;
            tmp_called_value_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_2, 0), mod_consts[104]);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_call_args_kwsplit_2);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__11_getSharedPreferences();

            frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__1_Context_15, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a8ef514c009249a98461a830c7c47ba5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a8ef514c009249a98461a830c7c47ba5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a8ef514c009249a98461a830c7c47ba5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a8ef514c009249a98461a830c7c47ba5_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_a8ef514c009249a98461a830c7c47ba5_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_28 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[2];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[120];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_androidemu$java$classes$context$$$class__1_Context_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 15;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_21 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_androidemu$java$classes$context$$$class__1_Context_15);
        locals_androidemu$java$classes$context$$$class__1_Context_15 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF(locals_androidemu$java$classes$context$$$class__1_Context_15);
        locals_androidemu$java$classes$context$$$class__1_Context_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_assign_source_23 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_23, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_24 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[77];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_assign_source_25 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[78];
        tmp_dict_value_2 = mod_consts[121];
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[122];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_25);
        goto try_except_handler_6;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_4 = mod_consts[77];
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
        tmp_key_value_5 = mod_consts[77];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_type_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_2);
        Py_DECREF(tmp_type_arg_2);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_3:;
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;

        goto try_except_handler_6;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_7, mod_consts[88]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[88]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_tuple_element_4 = mod_consts[123];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 83;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_9, mod_consts[90]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[91];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_name_value_13 = mod_consts[92];
        tmp_default_value_2 = mod_consts[93];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_expression_value_10, tmp_name_value_13, tmp_default_value_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_3 = tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[92]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 83;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_androidemu$java$classes$context$$$class__2_ContextImpl_83 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_8;
        }
        frame_7e556ce617381c7cfbd6a0901855962f_3 = MAKE_CLASS_FRAME(codeobj_7e556ce617381c7cfbd6a0901855962f, module_androidemu$java$classes$context, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7e556ce617381c7cfbd6a0901855962f_3);
        assert(Py_REFCNT(frame_7e556ce617381c7cfbd6a0901855962f_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$context$$$function__12___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_23;
            tmp_called_value_31 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_31);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 94;
            tmp_called_value_30 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_31);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_23 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__13_getPackageManager();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 94;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_24;
            tmp_called_value_33 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_33 == NULL)) {
                        tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_33);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 99;
            tmp_called_value_32 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_33);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_24 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__14_getAssets();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_25;
            tmp_called_value_35 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_35 == NULL)) {
                        tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_35);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 110;
            tmp_called_value_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_35);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__15_getContentResolver();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_call_args_kwsplit_3;
            PyObject *tmp_args_element_value_26;
            tmp_called_value_37 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_37);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_call_args_kwsplit_3 = DEEP_COPY_TUPLE_GUIDED(mod_consts[103], "ilii");
            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 115;
            tmp_called_value_36 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_37, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_3, 0), mod_consts[104]);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_call_args_kwsplit_3);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_26 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__16_getSystemService();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_27;
            tmp_called_value_39 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_39 == NULL)) {
                        tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 131;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_39);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 131;
            tmp_called_value_38 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_39);
            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__17_getApplicationInfo();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_28;
            tmp_called_value_41 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_41 == NULL)) {
                        tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_41);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 138;
            tmp_called_value_40 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_41, &PyTuple_GET_ITEM(mod_consts[116], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_41);
            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__18_getPackageName();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_29;
            tmp_called_value_43 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_43 == NULL)) {
                        tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_43);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 143;
            tmp_called_value_42 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[108], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_43);
            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_29 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__19_checkSelfPermission();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 143;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_29);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_30;
            tmp_called_value_45 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_45 == NULL)) {
                        tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_45);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 148;
            tmp_called_value_44 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[110], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_45);
            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__20_checkCallingOrSelfPermission();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_31;
            tmp_called_value_47 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_47 == NULL)) {
                        tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_47);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 153;
            tmp_called_value_46 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_47);
            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_31 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__21_getPackageCodePath();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_32;
            tmp_called_value_49 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_49 == NULL)) {
                        tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_49);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 160;
            tmp_called_value_48 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[114], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_49);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_32 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__22_getFilesDir();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 160;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_called_value_51;
            PyObject *tmp_call_args_kwsplit_4;
            PyObject *tmp_args_element_value_33;
            tmp_called_value_51 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[59]);

            if (tmp_called_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_51 == NULL)) {
                        tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_51);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_call_args_kwsplit_4 = DEEP_COPY_TUPLE_GUIDED(mod_consts[118], "ilii");
            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 167;
            tmp_called_value_50 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_51, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_4, 0), mod_consts[104]);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_call_args_kwsplit_4);
            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_33 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__23_getSharedPreferences();

            frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame.f_lineno = 167;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7e556ce617381c7cfbd6a0901855962f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7e556ce617381c7cfbd6a0901855962f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7e556ce617381c7cfbd6a0901855962f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7e556ce617381c7cfbd6a0901855962f_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_7e556ce617381c7cfbd6a0901855962f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_8;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_52 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[123];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_androidemu$java$classes$context$$$class__2_ContextImpl_83;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 83;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_52, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_29 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83);
        locals_androidemu$java$classes$context$$$class__2_ContextImpl_83 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_androidemu$java$classes$context$$$class__2_ContextImpl_83);
        locals_androidemu$java$classes$context$$$class__2_ContextImpl_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 83;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_29);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_32 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[77];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_assign_source_33 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[78];
        tmp_dict_value_3 = mod_consts[138];
        tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[122];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_33);
        goto try_except_handler_9;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_7 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[77];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_12 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_2, 0);
        if (tmp_type_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_4);
        Py_DECREF(tmp_type_arg_4);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_5:;
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 183;

        goto try_except_handler_9;
    }
    branch_no_8:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_13, mod_consts[88]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[88]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_tuple_element_8 = mod_consts[139];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 183;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_15 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_15, mod_consts[90]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[91];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_name_value_14 = mod_consts[92];
        tmp_default_value_3 = mod_consts[93];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_expression_value_16, tmp_name_value_14, tmp_default_value_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_5 = tmp_class_creation_3__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[92]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 183;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_36;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_11;
        }
        frame_255421c413132302d137004f89924dfb_4 = MAKE_CLASS_FRAME(codeobj_255421c413132302d137004f89924dfb, module_androidemu$java$classes$context, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_255421c413132302d137004f89924dfb_4);
        assert(Py_REFCNT(frame_255421c413132302d137004f89924dfb_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$context$$$function__24___init__();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_androidemu$java$classes$context$$$function__25_attachBaseContext();

        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[141], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_34;
            tmp_called_value_55 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_55 == NULL)) {
                        tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_55);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 194;
            tmp_called_value_54 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_55, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_55);
            if (tmp_called_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_34 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__26_getPackageManager();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 194;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_56;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_35;
            tmp_called_value_57 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_57 == NULL)) {
                        tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_57);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 199;
            tmp_called_value_56 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_57, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_57);
            if (tmp_called_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_35 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__27_getAssets();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 199;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_35);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_58;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_36;
            tmp_called_value_59 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_59 == NULL)) {
                        tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 204;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_59);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 204;
            tmp_called_value_58 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_59);
            if (tmp_called_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_36 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__28_getContentResolver();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_60;
            PyObject *tmp_called_value_61;
            PyObject *tmp_call_args_kwsplit_5;
            PyObject *tmp_args_element_value_37;
            tmp_called_value_61 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_61 == NULL)) {
                        tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_call_args_kwsplit_5 = DEEP_COPY_TUPLE_GUIDED(mod_consts[103], "ilii");
            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 209;
            tmp_called_value_60 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_61, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_5, 0), mod_consts[104]);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_call_args_kwsplit_5);
            if (tmp_called_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_37 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__29_getSystemService();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_62;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_38;
            tmp_called_value_63 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_63 == NULL)) {
                        tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_63);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 214;
            tmp_called_value_62 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_63);
            if (tmp_called_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_38 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__30_getApplicationInfo();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_38);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_64;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_39;
            tmp_called_value_65 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_65 == NULL)) {
                        tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 219;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 219;
            tmp_called_value_64 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_65, &PyTuple_GET_ITEM(mod_consts[116], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_65);
            if (tmp_called_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_39 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__31_getPackageName();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_66;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_element_value_40;
            tmp_called_value_67 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_67 == NULL)) {
                        tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 224;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_67);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 224;
            tmp_called_value_66 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[108], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_67);
            if (tmp_called_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_40 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__32_checkSelfPermission();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 224;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_68;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_41;
            tmp_called_value_69 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_69 == NULL)) {
                        tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 229;
            tmp_called_value_68 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_69, &PyTuple_GET_ITEM(mod_consts[110], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_69);
            if (tmp_called_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_41 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__33_checkCallingOrSelfPermission();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 229;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_41);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_70;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_42;
            tmp_called_value_71 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_71 == NULL)) {
                        tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_71);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 234;
            tmp_called_value_70 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_71, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_71);
            if (tmp_called_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_42 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__34_getPackageCodePath();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_72;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_43;
            tmp_called_value_73 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_73 == NULL)) {
                        tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 239;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 239;
            tmp_called_value_72 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[114], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_73);
            if (tmp_called_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_43 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__35_getFilesDir();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_74;
            PyObject *tmp_called_value_75;
            PyObject *tmp_call_args_kwsplit_6;
            PyObject *tmp_args_element_value_44;
            tmp_called_value_75 = PyObject_GetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[59]);

            if (tmp_called_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_called_value_75 == NULL)) {
                        tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_called_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 244;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_75);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_call_args_kwsplit_6 = DEEP_COPY_TUPLE_GUIDED(mod_consts[118], "ilii");
            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 244;
            tmp_called_value_74 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_75, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_6, 0), mod_consts[104]);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_call_args_kwsplit_6);
            if (tmp_called_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_44 = MAKE_FUNCTION_androidemu$java$classes$context$$$function__36_getSharedPreferences();

            frame_255421c413132302d137004f89924dfb_4->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_44);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_255421c413132302d137004f89924dfb_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_255421c413132302d137004f89924dfb_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_255421c413132302d137004f89924dfb_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_255421c413132302d137004f89924dfb_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_255421c413132302d137004f89924dfb_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_11;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_76 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[139];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_60ebd850efbe966b8781d8aa2850b045->m_frame.f_lineno = 183;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_76, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_37 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183);
        locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183 = NULL;
        goto try_return_handler_10;
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

        Py_DECREF(locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183);
        locals_androidemu$java$classes$context$$$class__3_ContextWrapper_183 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 183;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_37);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60ebd850efbe966b8781d8aa2850b045, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60ebd850efbe966b8781d8aa2850b045->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60ebd850efbe966b8781d8aa2850b045, exception_lineno);
    }



    assertFrameObject(frame_60ebd850efbe966b8781d8aa2850b045);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("androidemu.java.classes.context", false);

    Py_INCREF(module_androidemu$java$classes$context);
    return module_androidemu$java$classes$context;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_androidemu$java$classes$context, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("androidemu$java$classes$context", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
