/* Generated code for Python module 'click.testing'
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

/* The "module_click$testing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$testing;
PyDictObject *moduledict_click$testing;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[254];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[254];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("click.testing"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 254; i++) {
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
void checkModuleConstants_click$testing(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 254; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_28db8a4212539c9aaddc64baa9a0cd35;
static PyCodeObject *codeobj_f9b667c99c9e73303a04c8a32cbd400e;
static PyCodeObject *codeobj_c79e98231f5a88f20dfe12532c25060d;
static PyCodeObject *codeobj_ff35498563988ae0c7f8b2daee9fa068;
static PyCodeObject *codeobj_c89b8336303f1fd307eafad480a0a024;
static PyCodeObject *codeobj_b269422862f6a81fdf89de80aa02041a;
static PyCodeObject *codeobj_9e121572a041dfc8f00fd888d1c69e86;
static PyCodeObject *codeobj_2c43e5d1d3923c44442d330769cee310;
static PyCodeObject *codeobj_066a37a39f8db9270f65a20cbe18319d;
static PyCodeObject *codeobj_a716a53a11be737b128786e7b5c344aa;
static PyCodeObject *codeobj_2d9f1a6e9d4d0da5e786bc5c1013c386;
static PyCodeObject *codeobj_b20b59cad826a22c3bc3c9b6b472f4e4;
static PyCodeObject *codeobj_b0f69685c69ebe0872265126b67bcc92;
static PyCodeObject *codeobj_80d900dfd08f1361953bcba8e867dbbb;
static PyCodeObject *codeobj_dad518ce05a792cab48538844bc99a22;
static PyCodeObject *codeobj_81f5cd128e87d94206345785d5c18b5d;
static PyCodeObject *codeobj_f3e74755c23e550bfd0aa3ca3ddb31d5;
static PyCodeObject *codeobj_f44bf70befcccc314a8b9bc3023c0bd2;
static PyCodeObject *codeobj_8c1b0a2229aae816e97a9705079e62a5;
static PyCodeObject *codeobj_836dd5cdacc549849459b35d3c7ef557;
static PyCodeObject *codeobj_e4a82cbabf115ede55e04aebf68404e1;
static PyCodeObject *codeobj_50975bc73897f145b8e4726de8cb66c4;
static PyCodeObject *codeobj_bb0189b9c2bef3c1f01730096038e188;
static PyCodeObject *codeobj_5954ff88739a58bac3927c888f69cde6;
static PyCodeObject *codeobj_872ecafa1bd1fefc7b2fd8eb0b3737ce;
static PyCodeObject *codeobj_a2de5ea053222d9652d65713237ff408;
static PyCodeObject *codeobj_65fdecee63f19ae484f53853cddc0dbd;
static PyCodeObject *codeobj_efa88daac852a26ec7d430a031aa6d5d;
static PyCodeObject *codeobj_0ab6bf7df79a4574096871c2ad43577d;
static PyCodeObject *codeobj_9dde06a175b196ca214fffebcc0eb4f8;
static PyCodeObject *codeobj_8808b68738e3ac376ceffff4d987dc0c;
static PyCodeObject *codeobj_4529960eed239c3680a56c825133596d;
static PyCodeObject *codeobj_5cf9235f5310d5572c3b22c21c7a5494;
static PyCodeObject *codeobj_6210d1f145c1e98833815e5a660d4997;
static PyCodeObject *codeobj_28ee88dcae76459b43274c3e5ae88d6b;
static PyCodeObject *codeobj_7bf24c9ee46f8e7ee9d55d9270c4d0c9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[226]); CHECK_OBJECT(module_filename_obj);
    codeobj_28db8a4212539c9aaddc64baa9a0cd35 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[227], NULL, 1, 0, 0);
    codeobj_f9b667c99c9e73303a04c8a32cbd400e = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[228], mod_consts[228], mod_consts[229], NULL, 1, 0, 0);
    codeobj_c79e98231f5a88f20dfe12532c25060d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[230], mod_consts[230], NULL, NULL, 0, 0, 0);
    codeobj_ff35498563988ae0c7f8b2daee9fa068 = MAKE_CODE_OBJECT(module_filename_obj, 159, 0, mod_consts[201], mod_consts[201], mod_consts[231], NULL, 0, 0, 0);
    codeobj_c89b8336303f1fd307eafad480a0a024 = MAKE_CODE_OBJECT(module_filename_obj, 20, 0, mod_consts[67], mod_consts[67], mod_consts[231], NULL, 0, 0, 0);
    codeobj_b269422862f6a81fdf89de80aa02041a = MAKE_CODE_OBJECT(module_filename_obj, 101, 0, mod_consts[134], mod_consts[134], mod_consts[231], NULL, 0, 0, 0);
    codeobj_9e121572a041dfc8f00fd888d1c69e86 = MAKE_CODE_OBJECT(module_filename_obj, 64, 0, mod_consts[68], mod_consts[68], mod_consts[231], NULL, 0, 0, 0);
    codeobj_2c43e5d1d3923c44442d330769cee310 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], mod_consts[232], NULL, 2, 0, 0);
    codeobj_066a37a39f8db9270f65a20cbe18319d = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[16], mod_consts[16], mod_consts[233], mod_consts[231], 4, 0, 0);
    codeobj_a716a53a11be737b128786e7b5c344aa = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[234], NULL, 5, 0, 0);
    codeobj_2d9f1a6e9d4d0da5e786bc5c1013c386 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[235], NULL, 3, 0, 0);
    codeobj_b20b59cad826a22c3bc3c9b6b472f4e4 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[236], NULL, 8, 0, 0);
    codeobj_b0f69685c69ebe0872265126b67bcc92 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[180], mod_consts[180], mod_consts[237], NULL, 1, 0, 0);
    codeobj_80d900dfd08f1361953bcba8e867dbbb = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[183], mod_consts[183], mod_consts[237], NULL, 1, 0, 0);
    codeobj_dad518ce05a792cab48538844bc99a22 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[183], mod_consts[183], mod_consts[238], NULL, 1, 0, 0);
    codeobj_81f5cd128e87d94206345785d5c18b5d = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], mod_consts[239], NULL, 2, 0, 0);
    codeobj_f3e74755c23e550bfd0aa3ca3ddb31d5 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[240], NULL, 1, 0, 0);
    codeobj_f44bf70befcccc314a8b9bc3023c0bd2 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[241], NULL, 1, 0, 0);
    codeobj_8c1b0a2229aae816e97a9705079e62a5 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], mod_consts[242], NULL, 2, 0, 0);
    codeobj_836dd5cdacc549849459b35d3c7ef557 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[87], mod_consts[87], mod_consts[243], mod_consts[244], 1, 0, 0);
    codeobj_e4a82cbabf115ede55e04aebf68404e1 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[223], mod_consts[223], mod_consts[245], NULL, 7, 0, 0);
    codeobj_50975bc73897f145b8e4726de8cb66c4 = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], mod_consts[246], NULL, 2, 0, 0);
    codeobj_bb0189b9c2bef3c1f01730096038e188 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], mod_consts[247], NULL, 4, 0, 0);
    codeobj_5954ff88739a58bac3927c888f69cde6 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[65], mod_consts[65], mod_consts[248], NULL, 2, 0, 0);
    codeobj_872ecafa1bd1fefc7b2fd8eb0b3737ce = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[58], mod_consts[249], NULL, 2, 0, 0);
    codeobj_a2de5ea053222d9652d65713237ff408 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[193], mod_consts[193], mod_consts[237], NULL, 1, 0, 0);
    codeobj_65fdecee63f19ae484f53853cddc0dbd = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[53], mod_consts[237], NULL, 1, 0, 0);
    codeobj_efa88daac852a26ec7d430a031aa6d5d = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[165], mod_consts[165], mod_consts[237], NULL, 1, 0, 0);
    codeobj_0ab6bf7df79a4574096871c2ad43577d = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], mod_consts[250], NULL, 2, 0, 0);
    codeobj_9dde06a175b196ca214fffebcc0eb4f8 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[7], mod_consts[7], mod_consts[250], NULL, 2, 0, 0);
    codeobj_8808b68738e3ac376ceffff4d987dc0c = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[8], mod_consts[250], NULL, 2, 0, 0);
    codeobj_4529960eed239c3680a56c825133596d = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[9], mod_consts[237], NULL, 1, 0, 0);
    codeobj_5cf9235f5310d5572c3b22c21c7a5494 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], mod_consts[251], mod_consts[252], 2, 0, 0);
    codeobj_6210d1f145c1e98833815e5a660d4997 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[77], mod_consts[77], mod_consts[237], NULL, 1, 0, 0);
    codeobj_28ee88dcae76459b43274c3e5ae88d6b = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[237], NULL, 1, 0, 0);
    codeobj_7bf24c9ee46f8e7ee9d55d9270c4d0c9 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[85], mod_consts[253], mod_consts[244], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_click$testing$$$function__8___iter__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_click$testing$$$function__23_isolation$$$genobj__1_isolation(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_click$testing$$$function__10__pause_echo(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__11___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$testing$$$function__12_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__13_mode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__14_make_input_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__15___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__16_output(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__17_stdout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__18_stderr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__19___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__20___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__21_get_default_prog_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__22_make_env(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__1_visible_input(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__2_hidden_input(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__3__getchar(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__4_should_strip_ansi(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$testing$$$function__24_invoke(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__25_isolated_filesystem(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__2___getattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__3__echo(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__4_read(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__5_read1(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__6_readline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__7_readlines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__8___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$testing$$$function__9___repr__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$testing$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_output = python_pars[2];
    struct Nuitka_FrameObject *frame_2d9f1a6e9d4d0da5e786bc5c1013c386;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386)) {
        Py_XDECREF(cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386 = MAKE_FUNCTION_FRAME(codeobj_2d9f1a6e9d4d0da5e786bc5c1013c386, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386->m_type_description == NULL);
    frame_2d9f1a6e9d4d0da5e786bc5c1013c386 = cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d9f1a6e9d4d0da5e786bc5c1013c386);
    assert(Py_REFCNT(frame_2d9f1a6e9d4d0da5e786bc5c1013c386) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_input);
        tmp_assattr_value_1 = par_input;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_output);
        tmp_assattr_value_2 = par_output;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d9f1a6e9d4d0da5e786bc5c1013c386, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d9f1a6e9d4d0da5e786bc5c1013c386->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d9f1a6e9d4d0da5e786bc5c1013c386, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d9f1a6e9d4d0da5e786bc5c1013c386,
        type_description_1,
        par_self,
        par_input,
        par_output
    );


    // Release cached frame if used for exception.
    if (frame_2d9f1a6e9d4d0da5e786bc5c1013c386 == cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386);
        cache_frame_2d9f1a6e9d4d0da5e786bc5c1013c386 = NULL;
    }

    assertFrameObject(frame_2d9f1a6e9d4d0da5e786bc5c1013c386);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__2___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_2c43e5d1d3923c44442d330769cee310;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c43e5d1d3923c44442d330769cee310 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c43e5d1d3923c44442d330769cee310)) {
        Py_XDECREF(cache_frame_2c43e5d1d3923c44442d330769cee310);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c43e5d1d3923c44442d330769cee310 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c43e5d1d3923c44442d330769cee310 = MAKE_FUNCTION_FRAME(codeobj_2c43e5d1d3923c44442d330769cee310, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c43e5d1d3923c44442d330769cee310->m_type_description == NULL);
    frame_2c43e5d1d3923c44442d330769cee310 = cache_frame_2c43e5d1d3923c44442d330769cee310;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c43e5d1d3923c44442d330769cee310);
    assert(Py_REFCNT(frame_2c43e5d1d3923c44442d330769cee310) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_name_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_name_value_1 = par_x;
        tmp_return_value = BUILTIN_GETATTR(tmp_expression_value_1, tmp_name_value_1, NULL);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
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
        exception_tb = MAKE_TRACEBACK(frame_2c43e5d1d3923c44442d330769cee310, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c43e5d1d3923c44442d330769cee310->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c43e5d1d3923c44442d330769cee310, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c43e5d1d3923c44442d330769cee310,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_2c43e5d1d3923c44442d330769cee310 == cache_frame_2c43e5d1d3923c44442d330769cee310) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c43e5d1d3923c44442d330769cee310);
        cache_frame_2c43e5d1d3923c44442d330769cee310 = NULL;
    }

    assertFrameObject(frame_2c43e5d1d3923c44442d330769cee310);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__3__echo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rv = python_pars[1];
    struct Nuitka_FrameObject *frame_81f5cd128e87d94206345785d5c18b5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_81f5cd128e87d94206345785d5c18b5d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81f5cd128e87d94206345785d5c18b5d)) {
        Py_XDECREF(cache_frame_81f5cd128e87d94206345785d5c18b5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81f5cd128e87d94206345785d5c18b5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81f5cd128e87d94206345785d5c18b5d = MAKE_FUNCTION_FRAME(codeobj_81f5cd128e87d94206345785d5c18b5d, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81f5cd128e87d94206345785d5c18b5d->m_type_description == NULL);
    frame_81f5cd128e87d94206345785d5c18b5d = cache_frame_81f5cd128e87d94206345785d5c18b5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81f5cd128e87d94206345785d5c18b5d);
    assert(Py_REFCNT(frame_81f5cd128e87d94206345785d5c18b5d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rv);
        tmp_args_element_value_1 = par_rv;
        frame_81f5cd128e87d94206345785d5c18b5d->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (par_rv == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81f5cd128e87d94206345785d5c18b5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81f5cd128e87d94206345785d5c18b5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81f5cd128e87d94206345785d5c18b5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81f5cd128e87d94206345785d5c18b5d,
        type_description_1,
        par_self,
        par_rv
    );


    // Release cached frame if used for exception.
    if (frame_81f5cd128e87d94206345785d5c18b5d == cache_frame_81f5cd128e87d94206345785d5c18b5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81f5cd128e87d94206345785d5c18b5d);
        cache_frame_81f5cd128e87d94206345785d5c18b5d = NULL;
    }

    assertFrameObject(frame_81f5cd128e87d94206345785d5c18b5d);

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
    CHECK_OBJECT(par_rv);
    Py_DECREF(par_rv);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rv);
    Py_DECREF(par_rv);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__4_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_n = python_pars[1];
    struct Nuitka_FrameObject *frame_0ab6bf7df79a4574096871c2ad43577d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ab6bf7df79a4574096871c2ad43577d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ab6bf7df79a4574096871c2ad43577d)) {
        Py_XDECREF(cache_frame_0ab6bf7df79a4574096871c2ad43577d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ab6bf7df79a4574096871c2ad43577d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ab6bf7df79a4574096871c2ad43577d = MAKE_FUNCTION_FRAME(codeobj_0ab6bf7df79a4574096871c2ad43577d, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ab6bf7df79a4574096871c2ad43577d->m_type_description == NULL);
    frame_0ab6bf7df79a4574096871c2ad43577d = cache_frame_0ab6bf7df79a4574096871c2ad43577d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ab6bf7df79a4574096871c2ad43577d);
    assert(Py_REFCNT(frame_0ab6bf7df79a4574096871c2ad43577d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_0ab6bf7df79a4574096871c2ad43577d->m_frame.f_lineno = 36;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0ab6bf7df79a4574096871c2ad43577d->m_frame.f_lineno = 36;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_0ab6bf7df79a4574096871c2ad43577d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ab6bf7df79a4574096871c2ad43577d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ab6bf7df79a4574096871c2ad43577d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ab6bf7df79a4574096871c2ad43577d,
        type_description_1,
        par_self,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_0ab6bf7df79a4574096871c2ad43577d == cache_frame_0ab6bf7df79a4574096871c2ad43577d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ab6bf7df79a4574096871c2ad43577d);
        cache_frame_0ab6bf7df79a4574096871c2ad43577d = NULL;
    }

    assertFrameObject(frame_0ab6bf7df79a4574096871c2ad43577d);

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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__5_read1(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_n = python_pars[1];
    struct Nuitka_FrameObject *frame_9dde06a175b196ca214fffebcc0eb4f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9dde06a175b196ca214fffebcc0eb4f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9dde06a175b196ca214fffebcc0eb4f8)) {
        Py_XDECREF(cache_frame_9dde06a175b196ca214fffebcc0eb4f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9dde06a175b196ca214fffebcc0eb4f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9dde06a175b196ca214fffebcc0eb4f8 = MAKE_FUNCTION_FRAME(codeobj_9dde06a175b196ca214fffebcc0eb4f8, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9dde06a175b196ca214fffebcc0eb4f8->m_type_description == NULL);
    frame_9dde06a175b196ca214fffebcc0eb4f8 = cache_frame_9dde06a175b196ca214fffebcc0eb4f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9dde06a175b196ca214fffebcc0eb4f8);
    assert(Py_REFCNT(frame_9dde06a175b196ca214fffebcc0eb4f8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_9dde06a175b196ca214fffebcc0eb4f8->m_frame.f_lineno = 39;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[7], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9dde06a175b196ca214fffebcc0eb4f8->m_frame.f_lineno = 39;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_9dde06a175b196ca214fffebcc0eb4f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9dde06a175b196ca214fffebcc0eb4f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9dde06a175b196ca214fffebcc0eb4f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9dde06a175b196ca214fffebcc0eb4f8,
        type_description_1,
        par_self,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_9dde06a175b196ca214fffebcc0eb4f8 == cache_frame_9dde06a175b196ca214fffebcc0eb4f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9dde06a175b196ca214fffebcc0eb4f8);
        cache_frame_9dde06a175b196ca214fffebcc0eb4f8 = NULL;
    }

    assertFrameObject(frame_9dde06a175b196ca214fffebcc0eb4f8);

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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__6_readline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_n = python_pars[1];
    struct Nuitka_FrameObject *frame_8808b68738e3ac376ceffff4d987dc0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8808b68738e3ac376ceffff4d987dc0c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8808b68738e3ac376ceffff4d987dc0c)) {
        Py_XDECREF(cache_frame_8808b68738e3ac376ceffff4d987dc0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8808b68738e3ac376ceffff4d987dc0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8808b68738e3ac376ceffff4d987dc0c = MAKE_FUNCTION_FRAME(codeobj_8808b68738e3ac376ceffff4d987dc0c, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8808b68738e3ac376ceffff4d987dc0c->m_type_description == NULL);
    frame_8808b68738e3ac376ceffff4d987dc0c = cache_frame_8808b68738e3ac376ceffff4d987dc0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8808b68738e3ac376ceffff4d987dc0c);
    assert(Py_REFCNT(frame_8808b68738e3ac376ceffff4d987dc0c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_8808b68738e3ac376ceffff4d987dc0c->m_frame.f_lineno = 42;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8808b68738e3ac376ceffff4d987dc0c->m_frame.f_lineno = 42;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_8808b68738e3ac376ceffff4d987dc0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8808b68738e3ac376ceffff4d987dc0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8808b68738e3ac376ceffff4d987dc0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8808b68738e3ac376ceffff4d987dc0c,
        type_description_1,
        par_self,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_8808b68738e3ac376ceffff4d987dc0c == cache_frame_8808b68738e3ac376ceffff4d987dc0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8808b68738e3ac376ceffff4d987dc0c);
        cache_frame_8808b68738e3ac376ceffff4d987dc0c = NULL;
    }

    assertFrameObject(frame_8808b68738e3ac376ceffff4d987dc0c);

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
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__7_readlines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4529960eed239c3680a56c825133596d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_f9b667c99c9e73303a04c8a32cbd400e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4529960eed239c3680a56c825133596d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4529960eed239c3680a56c825133596d)) {
        Py_XDECREF(cache_frame_4529960eed239c3680a56c825133596d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4529960eed239c3680a56c825133596d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4529960eed239c3680a56c825133596d = MAKE_FUNCTION_FRAME(codeobj_4529960eed239c3680a56c825133596d, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4529960eed239c3680a56c825133596d->m_type_description == NULL);
    frame_4529960eed239c3680a56c825133596d = cache_frame_4529960eed239c3680a56c825133596d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4529960eed239c3680a56c825133596d);
    assert(Py_REFCNT(frame_4529960eed239c3680a56c825133596d) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_4529960eed239c3680a56c825133596d->m_frame.f_lineno = 45;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2)) {
        Py_XDECREF(cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2 = MAKE_FUNCTION_FRAME(codeobj_f9b667c99c9e73303a04c8a32cbd400e, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2->m_type_description == NULL);
    frame_f9b667c99c9e73303a04c8a32cbd400e_2 = cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f9b667c99c9e73303a04c8a32cbd400e_2);
    assert(Py_REFCNT(frame_f9b667c99c9e73303a04c8a32cbd400e_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 45;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_4;
            Py_INCREF(outline_0_var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        if (par_self == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(outline_0_var_x);
        tmp_args_element_value_1 = outline_0_var_x;
        frame_f9b667c99c9e73303a04c8a32cbd400e_2->m_frame.f_lineno = 45;
        tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[5], tmp_args_element_value_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;
        type_description_2 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
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
    try_except_handler_2:;
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

    goto try_return_handler_1;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9b667c99c9e73303a04c8a32cbd400e_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9b667c99c9e73303a04c8a32cbd400e_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9b667c99c9e73303a04c8a32cbd400e_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9b667c99c9e73303a04c8a32cbd400e_2,
        type_description_2,
        outline_0_var_x,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f9b667c99c9e73303a04c8a32cbd400e_2 == cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2);
        cache_frame_f9b667c99c9e73303a04c8a32cbd400e_2 = NULL;
    }

    assertFrameObject(frame_f9b667c99c9e73303a04c8a32cbd400e_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
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
    exception_lineno = 45;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4529960eed239c3680a56c825133596d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4529960eed239c3680a56c825133596d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4529960eed239c3680a56c825133596d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4529960eed239c3680a56c825133596d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4529960eed239c3680a56c825133596d == cache_frame_4529960eed239c3680a56c825133596d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4529960eed239c3680a56c825133596d);
        cache_frame_4529960eed239c3680a56c825133596d = NULL;
    }

    assertFrameObject(frame_4529960eed239c3680a56c825133596d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

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


static PyObject *impl_click$testing$$$function__8___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_b0f69685c69ebe0872265126b67bcc92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0f69685c69ebe0872265126b67bcc92 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0f69685c69ebe0872265126b67bcc92)) {
        Py_XDECREF(cache_frame_b0f69685c69ebe0872265126b67bcc92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0f69685c69ebe0872265126b67bcc92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0f69685c69ebe0872265126b67bcc92 = MAKE_FUNCTION_FRAME(codeobj_b0f69685c69ebe0872265126b67bcc92, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0f69685c69ebe0872265126b67bcc92->m_type_description == NULL);
    frame_b0f69685c69ebe0872265126b67bcc92 = cache_frame_b0f69685c69ebe0872265126b67bcc92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0f69685c69ebe0872265126b67bcc92);
    assert(Py_REFCNT(frame_b0f69685c69ebe0872265126b67bcc92) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "c";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "c";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_self;
            Py_INCREF(tmp_closure_1[1]);

            tmp_iter_arg_1 = MAKE_GENERATOR_click$testing$$$function__8___iter__$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_b0f69685c69ebe0872265126b67bcc92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0f69685c69ebe0872265126b67bcc92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0f69685c69ebe0872265126b67bcc92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0f69685c69ebe0872265126b67bcc92,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b0f69685c69ebe0872265126b67bcc92 == cache_frame_b0f69685c69ebe0872265126b67bcc92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0f69685c69ebe0872265126b67bcc92);
        cache_frame_b0f69685c69ebe0872265126b67bcc92 = NULL;
    }

    assertFrameObject(frame_b0f69685c69ebe0872265126b67bcc92);

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



#if 1
struct click$testing$$$function__8___iter__$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *click$testing$$$function__8___iter__$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct click$testing$$$function__8___iter__$$$genexpr__1_genexpr_locals *generator_heap = (struct click$testing$$$function__8___iter__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_28db8a4212539c9aaddc64baa9a0cd35, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 48;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 48;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        CHECK_OBJECT(generator_heap->var_x);
        tmp_args_element_value_1 = generator_heap->var_x;
        generator->m_frame->m_frame.f_lineno = 48;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 48;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 48;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 48;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$testing$$$function__8___iter__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$testing$$$function__8___iter__$$$genexpr__1_genexpr_context,
        module_click$testing,
        mod_consts[11],
#if PYTHON_VERSION >= 0x350
        mod_consts[12],
#endif
        codeobj_28db8a4212539c9aaddc64baa9a0cd35,
        closure,
        2,
#if 1
        sizeof(struct click$testing$$$function__8___iter__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_click$testing$$$function__9___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_80d900dfd08f1361953bcba8e867dbbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80d900dfd08f1361953bcba8e867dbbb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80d900dfd08f1361953bcba8e867dbbb)) {
        Py_XDECREF(cache_frame_80d900dfd08f1361953bcba8e867dbbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80d900dfd08f1361953bcba8e867dbbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80d900dfd08f1361953bcba8e867dbbb = MAKE_FUNCTION_FRAME(codeobj_80d900dfd08f1361953bcba8e867dbbb, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80d900dfd08f1361953bcba8e867dbbb->m_type_description == NULL);
    frame_80d900dfd08f1361953bcba8e867dbbb = cache_frame_80d900dfd08f1361953bcba8e867dbbb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80d900dfd08f1361953bcba8e867dbbb);
    assert(Py_REFCNT(frame_80d900dfd08f1361953bcba8e867dbbb) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_80d900dfd08f1361953bcba8e867dbbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80d900dfd08f1361953bcba8e867dbbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80d900dfd08f1361953bcba8e867dbbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80d900dfd08f1361953bcba8e867dbbb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_80d900dfd08f1361953bcba8e867dbbb == cache_frame_80d900dfd08f1361953bcba8e867dbbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80d900dfd08f1361953bcba8e867dbbb);
        cache_frame_80d900dfd08f1361953bcba8e867dbbb = NULL;
    }

    assertFrameObject(frame_80d900dfd08f1361953bcba8e867dbbb);

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


static PyObject *impl_click$testing$$$function__10__pause_echo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_stream;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
};
#endif

static PyObject *click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo_locals *generator_heap = (struct click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f44bf70befcccc314a8b9bc3023c0bd2, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[13]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 56;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_1 = Py_None;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 57;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[13]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 59;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 59;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        tmp_expression_value_2 = Py_None;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_2;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[13]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo_context,
        module_click$testing,
        mod_consts[14],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_f44bf70befcccc314a8b9bc3023c0bd2,
        closure,
        1,
#if 1
        sizeof(struct click$testing$$$function__10__pause_echo$$$genobj__1__pause_echo_locals)
#else
        0
#endif
    );
}


static PyObject *impl_click$testing$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_mode = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_066a37a39f8db9270f65a20cbe18319d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_066a37a39f8db9270f65a20cbe18319d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_066a37a39f8db9270f65a20cbe18319d)) {
        Py_XDECREF(cache_frame_066a37a39f8db9270f65a20cbe18319d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_066a37a39f8db9270f65a20cbe18319d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_066a37a39f8db9270f65a20cbe18319d = MAKE_FUNCTION_FRAME(codeobj_066a37a39f8db9270f65a20cbe18319d, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_066a37a39f8db9270f65a20cbe18319d->m_type_description == NULL);
    frame_066a37a39f8db9270f65a20cbe18319d = cache_frame_066a37a39f8db9270f65a20cbe18319d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_066a37a39f8db9270f65a20cbe18319d);
    assert(Py_REFCNT(frame_066a37a39f8db9270f65a20cbe18319d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_click$testing, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buffer);
        tmp_tuple_element_1 = par_buffer;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__5_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_mode);
        tmp_assattr_value_2 = par_mode;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_066a37a39f8db9270f65a20cbe18319d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_066a37a39f8db9270f65a20cbe18319d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_066a37a39f8db9270f65a20cbe18319d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_066a37a39f8db9270f65a20cbe18319d,
        type_description_1,
        par_self,
        par_buffer,
        par_name,
        par_mode,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_066a37a39f8db9270f65a20cbe18319d == cache_frame_066a37a39f8db9270f65a20cbe18319d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_066a37a39f8db9270f65a20cbe18319d);
        cache_frame_066a37a39f8db9270f65a20cbe18319d = NULL;
    }

    assertFrameObject(frame_066a37a39f8db9270f65a20cbe18319d);

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
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__12_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_65fdecee63f19ae484f53853cddc0dbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65fdecee63f19ae484f53853cddc0dbd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65fdecee63f19ae484f53853cddc0dbd)) {
        Py_XDECREF(cache_frame_65fdecee63f19ae484f53853cddc0dbd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65fdecee63f19ae484f53853cddc0dbd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65fdecee63f19ae484f53853cddc0dbd = MAKE_FUNCTION_FRAME(codeobj_65fdecee63f19ae484f53853cddc0dbd, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65fdecee63f19ae484f53853cddc0dbd->m_type_description == NULL);
    frame_65fdecee63f19ae484f53853cddc0dbd = cache_frame_65fdecee63f19ae484f53853cddc0dbd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_65fdecee63f19ae484f53853cddc0dbd);
    assert(Py_REFCNT(frame_65fdecee63f19ae484f53853cddc0dbd) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_65fdecee63f19ae484f53853cddc0dbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65fdecee63f19ae484f53853cddc0dbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65fdecee63f19ae484f53853cddc0dbd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65fdecee63f19ae484f53853cddc0dbd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_65fdecee63f19ae484f53853cddc0dbd == cache_frame_65fdecee63f19ae484f53853cddc0dbd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65fdecee63f19ae484f53853cddc0dbd);
        cache_frame_65fdecee63f19ae484f53853cddc0dbd = NULL;
    }

    assertFrameObject(frame_65fdecee63f19ae484f53853cddc0dbd);

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


static PyObject *impl_click$testing$$$function__13_mode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a2de5ea053222d9652d65713237ff408;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2de5ea053222d9652d65713237ff408 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a2de5ea053222d9652d65713237ff408)) {
        Py_XDECREF(cache_frame_a2de5ea053222d9652d65713237ff408);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2de5ea053222d9652d65713237ff408 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2de5ea053222d9652d65713237ff408 = MAKE_FUNCTION_FRAME(codeobj_a2de5ea053222d9652d65713237ff408, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2de5ea053222d9652d65713237ff408->m_type_description == NULL);
    frame_a2de5ea053222d9652d65713237ff408 = cache_frame_a2de5ea053222d9652d65713237ff408;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a2de5ea053222d9652d65713237ff408);
    assert(Py_REFCNT(frame_a2de5ea053222d9652d65713237ff408) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_a2de5ea053222d9652d65713237ff408, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2de5ea053222d9652d65713237ff408->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2de5ea053222d9652d65713237ff408, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2de5ea053222d9652d65713237ff408,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a2de5ea053222d9652d65713237ff408 == cache_frame_a2de5ea053222d9652d65713237ff408) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2de5ea053222d9652d65713237ff408);
        cache_frame_a2de5ea053222d9652d65713237ff408 = NULL;
    }

    assertFrameObject(frame_a2de5ea053222d9652d65713237ff408);

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


static PyObject *impl_click$testing$$$function__14_make_input_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[0];
    PyObject *par_charset = python_pars[1];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_872ecafa1bd1fefc7b2fd8eb0b3737ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce)) {
        Py_XDECREF(cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce = MAKE_FUNCTION_FRAME(codeobj_872ecafa1bd1fefc7b2fd8eb0b3737ce, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_type_description == NULL);
    frame_872ecafa1bd1fefc7b2fd8eb0b3737ce = cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_872ecafa1bd1fefc7b2fd8eb0b3737ce);
    assert(Py_REFCNT(frame_872ecafa1bd1fefc7b2fd8eb0b3737ce) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_input);
        tmp_expression_value_1 = par_input;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_1, mod_consts[6]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_3 = par_input;
        frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_frame.f_lineno = 86;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_rv);
        tmp_cmp_expr_left_1 = var_rv;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[24];
        frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_frame.f_lineno = 91;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 91;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_input);
        tmp_cmp_expr_left_2 = par_input;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[25];
        {
            PyObject *old = par_input;
            assert(old != NULL);
            par_input = tmp_assign_source_2;
            Py_INCREF(par_input);
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_input);
        tmp_isinstance_inst_1 = par_input;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_input);
        tmp_expression_value_6 = par_input;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_charset);
        tmp_args_element_value_4 = par_charset;
        frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_frame.f_lineno = 96;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input;
            assert(old != NULL);
            par_input = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[27]);
        }
        assert(!(tmp_called_value_4 == NULL));
        CHECK_OBJECT(par_input);
        tmp_args_element_value_5 = par_input;
        frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_frame.f_lineno = 98;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_872ecafa1bd1fefc7b2fd8eb0b3737ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_872ecafa1bd1fefc7b2fd8eb0b3737ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_872ecafa1bd1fefc7b2fd8eb0b3737ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_872ecafa1bd1fefc7b2fd8eb0b3737ce,
        type_description_1,
        par_input,
        par_charset,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_872ecafa1bd1fefc7b2fd8eb0b3737ce == cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce);
        cache_frame_872ecafa1bd1fefc7b2fd8eb0b3737ce = NULL;
    }

    assertFrameObject(frame_872ecafa1bd1fefc7b2fd8eb0b3737ce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(par_input);
    par_input = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_runner = python_pars[1];
    PyObject *par_stdout_bytes = python_pars[2];
    PyObject *par_stderr_bytes = python_pars[3];
    PyObject *par_return_value = python_pars[4];
    PyObject *par_exit_code = python_pars[5];
    PyObject *par_exception = python_pars[6];
    PyObject *par_exc_info = python_pars[7];
    struct Nuitka_FrameObject *frame_b20b59cad826a22c3bc3c9b6b472f4e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4)) {
        Py_XDECREF(cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4 = MAKE_FUNCTION_FRAME(codeobj_b20b59cad826a22c3bc3c9b6b472f4e4, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4->m_type_description == NULL);
    frame_b20b59cad826a22c3bc3c9b6b472f4e4 = cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b20b59cad826a22c3bc3c9b6b472f4e4);
    assert(Py_REFCNT(frame_b20b59cad826a22c3bc3c9b6b472f4e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_runner);
        tmp_assattr_value_1 = par_runner;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_stdout_bytes);
        tmp_assattr_value_2 = par_stdout_bytes;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_stderr_bytes);
        tmp_assattr_value_3 = par_stderr_bytes;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[30], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_return_value);
        tmp_assattr_value_4 = par_return_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[31], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_exit_code);
        tmp_assattr_value_5 = par_exit_code;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[32], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_exception);
        tmp_assattr_value_6 = par_exception;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[33], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_exc_info);
        tmp_assattr_value_7 = par_exc_info;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[34], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b20b59cad826a22c3bc3c9b6b472f4e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b20b59cad826a22c3bc3c9b6b472f4e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b20b59cad826a22c3bc3c9b6b472f4e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b20b59cad826a22c3bc3c9b6b472f4e4,
        type_description_1,
        par_self,
        par_runner,
        par_stdout_bytes,
        par_stderr_bytes,
        par_return_value,
        par_exit_code,
        par_exception,
        par_exc_info
    );


    // Release cached frame if used for exception.
    if (frame_b20b59cad826a22c3bc3c9b6b472f4e4 == cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4);
        cache_frame_b20b59cad826a22c3bc3c9b6b472f4e4 = NULL;
    }

    assertFrameObject(frame_b20b59cad826a22c3bc3c9b6b472f4e4);

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
    CHECK_OBJECT(par_runner);
    Py_DECREF(par_runner);
    CHECK_OBJECT(par_stdout_bytes);
    Py_DECREF(par_stdout_bytes);
    CHECK_OBJECT(par_stderr_bytes);
    Py_DECREF(par_stderr_bytes);
    CHECK_OBJECT(par_return_value);
    Py_DECREF(par_return_value);
    CHECK_OBJECT(par_exit_code);
    Py_DECREF(par_exit_code);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_exc_info);
    Py_DECREF(par_exc_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_runner);
    Py_DECREF(par_runner);
    CHECK_OBJECT(par_stdout_bytes);
    Py_DECREF(par_stdout_bytes);
    CHECK_OBJECT(par_stderr_bytes);
    Py_DECREF(par_stderr_bytes);
    CHECK_OBJECT(par_return_value);
    Py_DECREF(par_return_value);
    CHECK_OBJECT(par_exit_code);
    Py_DECREF(par_exit_code);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_exc_info);
    Py_DECREF(par_exc_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__16_output(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_efa88daac852a26ec7d430a031aa6d5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_efa88daac852a26ec7d430a031aa6d5d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_efa88daac852a26ec7d430a031aa6d5d)) {
        Py_XDECREF(cache_frame_efa88daac852a26ec7d430a031aa6d5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efa88daac852a26ec7d430a031aa6d5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efa88daac852a26ec7d430a031aa6d5d = MAKE_FUNCTION_FRAME(codeobj_efa88daac852a26ec7d430a031aa6d5d, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_efa88daac852a26ec7d430a031aa6d5d->m_type_description == NULL);
    frame_efa88daac852a26ec7d430a031aa6d5d = cache_frame_efa88daac852a26ec7d430a031aa6d5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_efa88daac852a26ec7d430a031aa6d5d);
    assert(Py_REFCNT(frame_efa88daac852a26ec7d430a031aa6d5d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_efa88daac852a26ec7d430a031aa6d5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efa88daac852a26ec7d430a031aa6d5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efa88daac852a26ec7d430a031aa6d5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efa88daac852a26ec7d430a031aa6d5d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_efa88daac852a26ec7d430a031aa6d5d == cache_frame_efa88daac852a26ec7d430a031aa6d5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_efa88daac852a26ec7d430a031aa6d5d);
        cache_frame_efa88daac852a26ec7d430a031aa6d5d = NULL;
    }

    assertFrameObject(frame_efa88daac852a26ec7d430a031aa6d5d);

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


static PyObject *impl_click$testing$$$function__17_stdout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_28ee88dcae76459b43274c3e5ae88d6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28ee88dcae76459b43274c3e5ae88d6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28ee88dcae76459b43274c3e5ae88d6b)) {
        Py_XDECREF(cache_frame_28ee88dcae76459b43274c3e5ae88d6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28ee88dcae76459b43274c3e5ae88d6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28ee88dcae76459b43274c3e5ae88d6b = MAKE_FUNCTION_FRAME(codeobj_28ee88dcae76459b43274c3e5ae88d6b, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28ee88dcae76459b43274c3e5ae88d6b->m_type_description == NULL);
    frame_28ee88dcae76459b43274c3e5ae88d6b = cache_frame_28ee88dcae76459b43274c3e5ae88d6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28ee88dcae76459b43274c3e5ae88d6b);
    assert(Py_REFCNT(frame_28ee88dcae76459b43274c3e5ae88d6b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[39];
        frame_28ee88dcae76459b43274c3e5ae88d6b->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_28ee88dcae76459b43274c3e5ae88d6b->m_frame.f_lineno = 141;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[40]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_28ee88dcae76459b43274c3e5ae88d6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28ee88dcae76459b43274c3e5ae88d6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28ee88dcae76459b43274c3e5ae88d6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28ee88dcae76459b43274c3e5ae88d6b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_28ee88dcae76459b43274c3e5ae88d6b == cache_frame_28ee88dcae76459b43274c3e5ae88d6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28ee88dcae76459b43274c3e5ae88d6b);
        cache_frame_28ee88dcae76459b43274c3e5ae88d6b = NULL;
    }

    assertFrameObject(frame_28ee88dcae76459b43274c3e5ae88d6b);

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


static PyObject *impl_click$testing$$$function__18_stderr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6210d1f145c1e98833815e5a660d4997;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6210d1f145c1e98833815e5a660d4997 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6210d1f145c1e98833815e5a660d4997)) {
        Py_XDECREF(cache_frame_6210d1f145c1e98833815e5a660d4997);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6210d1f145c1e98833815e5a660d4997 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6210d1f145c1e98833815e5a660d4997 = MAKE_FUNCTION_FRAME(codeobj_6210d1f145c1e98833815e5a660d4997, module_click$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6210d1f145c1e98833815e5a660d4997->m_type_description == NULL);
    frame_6210d1f145c1e98833815e5a660d4997 = cache_frame_6210d1f145c1e98833815e5a660d4997;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6210d1f145c1e98833815e5a660d4997);
    assert(Py_REFCNT(frame_6210d1f145c1e98833815e5a660d4997) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        tmp_make_exception_arg_1 = mod_consts[42];
        frame_6210d1f145c1e98833815e5a660d4997->m_frame.f_lineno = 149;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 149;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[38]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[39];
        frame_6210d1f145c1e98833815e5a660d4997->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6210d1f145c1e98833815e5a660d4997->m_frame.f_lineno = 150;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[40]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_6210d1f145c1e98833815e5a660d4997, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6210d1f145c1e98833815e5a660d4997->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6210d1f145c1e98833815e5a660d4997, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6210d1f145c1e98833815e5a660d4997,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6210d1f145c1e98833815e5a660d4997 == cache_frame_6210d1f145c1e98833815e5a660d4997) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6210d1f145c1e98833815e5a660d4997);
        cache_frame_6210d1f145c1e98833815e5a660d4997 = NULL;
    }

    assertFrameObject(frame_6210d1f145c1e98833815e5a660d4997);

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


static PyObject *impl_click$testing$$$function__19___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_exc_str = NULL;
    struct Nuitka_FrameObject *frame_dad518ce05a792cab48538844bc99a22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dad518ce05a792cab48538844bc99a22 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dad518ce05a792cab48538844bc99a22)) {
        Py_XDECREF(cache_frame_dad518ce05a792cab48538844bc99a22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dad518ce05a792cab48538844bc99a22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dad518ce05a792cab48538844bc99a22 = MAKE_FUNCTION_FRAME(codeobj_dad518ce05a792cab48538844bc99a22, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dad518ce05a792cab48538844bc99a22->m_type_description == NULL);
    frame_dad518ce05a792cab48538844bc99a22 = cache_frame_dad518ce05a792cab48538844bc99a22;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dad518ce05a792cab48538844bc99a22);
    assert(Py_REFCNT(frame_dad518ce05a792cab48538844bc99a22) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[44];
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        assert(var_exc_str == NULL);
        var_exc_str = tmp_assign_source_1;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[45];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_3 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[47];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[48];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_exc_str);
            tmp_format_value_2 = var_exc_str;
            tmp_format_spec_2 = mod_consts[47];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_dad518ce05a792cab48538844bc99a22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dad518ce05a792cab48538844bc99a22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dad518ce05a792cab48538844bc99a22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dad518ce05a792cab48538844bc99a22,
        type_description_1,
        par_self,
        var_exc_str
    );


    // Release cached frame if used for exception.
    if (frame_dad518ce05a792cab48538844bc99a22 == cache_frame_dad518ce05a792cab48538844bc99a22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dad518ce05a792cab48538844bc99a22);
        cache_frame_dad518ce05a792cab48538844bc99a22 = NULL;
    }

    assertFrameObject(frame_dad518ce05a792cab48538844bc99a22);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_exc_str);
    Py_DECREF(var_exc_str);
    var_exc_str = NULL;
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

    Py_XDECREF(var_exc_str);
    var_exc_str = NULL;
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


static PyObject *impl_click$testing$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_charset = python_pars[1];
    PyObject *par_env = python_pars[2];
    PyObject *par_echo_stdin = python_pars[3];
    PyObject *par_mix_stderr = python_pars[4];
    struct Nuitka_FrameObject *frame_a716a53a11be737b128786e7b5c344aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a716a53a11be737b128786e7b5c344aa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a716a53a11be737b128786e7b5c344aa)) {
        Py_XDECREF(cache_frame_a716a53a11be737b128786e7b5c344aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a716a53a11be737b128786e7b5c344aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a716a53a11be737b128786e7b5c344aa = MAKE_FUNCTION_FRAME(codeobj_a716a53a11be737b128786e7b5c344aa, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a716a53a11be737b128786e7b5c344aa->m_type_description == NULL);
    frame_a716a53a11be737b128786e7b5c344aa = cache_frame_a716a53a11be737b128786e7b5c344aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a716a53a11be737b128786e7b5c344aa);
    assert(Py_REFCNT(frame_a716a53a11be737b128786e7b5c344aa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_charset);
        tmp_assattr_value_1 = par_charset;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_env);
        tmp_or_left_value_1 = par_env;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assattr_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_value_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_echo_stdin);
        tmp_assattr_value_3 = par_echo_stdin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[51], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_mix_stderr);
        tmp_assattr_value_4 = par_mix_stderr;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[52], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a716a53a11be737b128786e7b5c344aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a716a53a11be737b128786e7b5c344aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a716a53a11be737b128786e7b5c344aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a716a53a11be737b128786e7b5c344aa,
        type_description_1,
        par_self,
        par_charset,
        par_env,
        par_echo_stdin,
        par_mix_stderr
    );


    // Release cached frame if used for exception.
    if (frame_a716a53a11be737b128786e7b5c344aa == cache_frame_a716a53a11be737b128786e7b5c344aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a716a53a11be737b128786e7b5c344aa);
        cache_frame_a716a53a11be737b128786e7b5c344aa = NULL;
    }

    assertFrameObject(frame_a716a53a11be737b128786e7b5c344aa);

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
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_echo_stdin);
    Py_DECREF(par_echo_stdin);
    CHECK_OBJECT(par_mix_stderr);
    Py_DECREF(par_mix_stderr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_echo_stdin);
    Py_DECREF(par_echo_stdin);
    CHECK_OBJECT(par_mix_stderr);
    Py_DECREF(par_mix_stderr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__21_get_default_prog_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cli = python_pars[1];
    struct Nuitka_FrameObject *frame_8c1b0a2229aae816e97a9705079e62a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8c1b0a2229aae816e97a9705079e62a5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8c1b0a2229aae816e97a9705079e62a5)) {
        Py_XDECREF(cache_frame_8c1b0a2229aae816e97a9705079e62a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c1b0a2229aae816e97a9705079e62a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c1b0a2229aae816e97a9705079e62a5 = MAKE_FUNCTION_FRAME(codeobj_8c1b0a2229aae816e97a9705079e62a5, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c1b0a2229aae816e97a9705079e62a5->m_type_description == NULL);
    frame_8c1b0a2229aae816e97a9705079e62a5 = cache_frame_8c1b0a2229aae816e97a9705079e62a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c1b0a2229aae816e97a9705079e62a5);
    assert(Py_REFCNT(frame_8c1b0a2229aae816e97a9705079e62a5) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cli);
        tmp_expression_value_1 = par_cli;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[54];
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_8c1b0a2229aae816e97a9705079e62a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c1b0a2229aae816e97a9705079e62a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c1b0a2229aae816e97a9705079e62a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c1b0a2229aae816e97a9705079e62a5,
        type_description_1,
        par_self,
        par_cli
    );


    // Release cached frame if used for exception.
    if (frame_8c1b0a2229aae816e97a9705079e62a5 == cache_frame_8c1b0a2229aae816e97a9705079e62a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c1b0a2229aae816e97a9705079e62a5);
        cache_frame_8c1b0a2229aae816e97a9705079e62a5 = NULL;
    }

    assertFrameObject(frame_8c1b0a2229aae816e97a9705079e62a5);

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
    CHECK_OBJECT(par_cli);
    Py_DECREF(par_cli);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cli);
    Py_DECREF(par_cli);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__22_make_env(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_overrides = python_pars[1];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_5954ff88739a58bac3927c888f69cde6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5954ff88739a58bac3927c888f69cde6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5954ff88739a58bac3927c888f69cde6)) {
        Py_XDECREF(cache_frame_5954ff88739a58bac3927c888f69cde6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5954ff88739a58bac3927c888f69cde6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5954ff88739a58bac3927c888f69cde6 = MAKE_FUNCTION_FRAME(codeobj_5954ff88739a58bac3927c888f69cde6, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5954ff88739a58bac3927c888f69cde6->m_type_description == NULL);
    frame_5954ff88739a58bac3927c888f69cde6 = cache_frame_5954ff88739a58bac3927c888f69cde6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5954ff88739a58bac3927c888f69cde6);
    assert(Py_REFCNT(frame_5954ff88739a58bac3927c888f69cde6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_overrides);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_overrides);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(var_rv);
        tmp_dict_arg_value_1 = var_rv;
        CHECK_OBJECT(par_overrides);
        tmp_iterable_value_1 = par_overrides;
        assert(PyDict_Check(tmp_dict_arg_value_1));
        if (HAS_ATTR_BOOL(tmp_iterable_value_1, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        }

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    if (var_rv == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5954ff88739a58bac3927c888f69cde6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5954ff88739a58bac3927c888f69cde6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5954ff88739a58bac3927c888f69cde6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5954ff88739a58bac3927c888f69cde6,
        type_description_1,
        par_self,
        par_overrides,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_5954ff88739a58bac3927c888f69cde6 == cache_frame_5954ff88739a58bac3927c888f69cde6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5954ff88739a58bac3927c888f69cde6);
        cache_frame_5954ff88739a58bac3927c888f69cde6 = NULL;
    }

    assertFrameObject(frame_5954ff88739a58bac3927c888f69cde6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_overrides);
    Py_DECREF(par_overrides);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_overrides);
    Py_DECREF(par_overrides);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__23_isolation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_input = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_env = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_color = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_color;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_env;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_input;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_self;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_GENERATOR_click$testing$$$function__23_isolation$$$genobj__1_isolation(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    par_env = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct click$testing$$$function__23_isolation$$$genobj__1_isolation_locals {
    PyObject *var_bytes_input;
    PyObject *var_echo_input;
    PyObject *var_old_stdin;
    PyObject *var_old_stdout;
    PyObject *var_old_stderr;
    PyObject *var_old_forced_width;
    PyObject *var_bytes_output;
    struct Nuitka_CellObject *var_text_input;
    PyObject *var_bytes_error;
    PyObject *var_visible_input;
    PyObject *var_hidden_input;
    PyObject *var__getchar;
    struct Nuitka_CellObject *var_default_color;
    PyObject *var_should_strip_ansi;
    PyObject *var_old_visible_prompt_func;
    PyObject *var_old_hidden_prompt_func;
    PyObject *var_old__getchar_func;
    PyObject *var_old_should_strip_ansi;
    PyObject *var_old_env;
    PyObject *var_key;
    PyObject *var_value;
    PyObject *tmp_assign_unpack_1__assign_source;
    PyObject *tmp_assign_unpack_2__assign_source;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
};
#endif

static PyObject *click$testing$$$function__23_isolation$$$genobj__1_isolation_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct click$testing$$$function__23_isolation$$$genobj__1_isolation_locals *generator_heap = (struct click$testing$$$function__23_isolation$$$genobj__1_isolation_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_bytes_input = NULL;
    generator_heap->var_echo_input = NULL;
    generator_heap->var_old_stdin = NULL;
    generator_heap->var_old_stdout = NULL;
    generator_heap->var_old_stderr = NULL;
    generator_heap->var_old_forced_width = NULL;
    generator_heap->var_bytes_output = NULL;
    generator_heap->var_text_input = Nuitka_Cell_Empty();
    generator_heap->var_bytes_error = NULL;
    generator_heap->var_visible_input = NULL;
    generator_heap->var_hidden_input = NULL;
    generator_heap->var__getchar = NULL;
    generator_heap->var_default_color = Nuitka_Cell_Empty();
    generator_heap->var_should_strip_ansi = NULL;
    generator_heap->var_old_visible_prompt_func = NULL;
    generator_heap->var_old_hidden_prompt_func = NULL;
    generator_heap->var_old__getchar_func = NULL;
    generator_heap->var_old_should_strip_ansi = NULL;
    generator_heap->var_old_env = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_value = NULL;
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_bb0189b9c2bef3c1f01730096038e188, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[59]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_bytes_input == NULL);
        generator_heap->var_bytes_input = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(generator_heap->var_echo_input == NULL);
        Py_INCREF(tmp_assign_source_2);
        generator_heap->var_echo_input = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 236;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_stdin == NULL);
        generator_heap->var_old_stdin = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assign_source_4 == NULL));
        assert(generator_heap->var_old_stdout == NULL);
        Py_INCREF(tmp_assign_source_4);
        generator_heap->var_old_stdout = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_assign_source_5 == NULL));
        assert(generator_heap->var_old_stderr == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_old_stderr = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_forced_width == NULL);
        generator_heap->var_old_forced_width = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[64];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[65]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[50]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 242;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[1]);
            PyCell_SET(generator->m_closure[1], tmp_assign_source_7);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[27]);
        }
        assert(!(tmp_called_value_3 == NULL));
        generator->m_frame->m_frame.f_lineno = 244;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 244;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_bytes_output == NULL);
        generator_heap->var_bytes_output = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[51]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[66]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);

            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_bytes_input);
        tmp_args_element_value_6 = generator_heap->var_bytes_input;
        CHECK_OBJECT(generator_heap->var_bytes_output);
        tmp_args_element_value_7 = generator_heap->var_bytes_output;
        generator->m_frame->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);

            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_assign_unpack_1__assign_source == NULL);
        generator_heap->tmp_assign_unpack_1__assign_source = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_10 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = generator_heap->var_bytes_input;
            assert(old != NULL);
            generator_heap->var_bytes_input = tmp_assign_source_10;
            Py_INCREF(generator_heap->var_bytes_input);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_11 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = generator_heap->var_echo_input;
            assert(old != NULL);
            generator_heap->var_echo_input = tmp_assign_source_11;
            Py_INCREF(generator_heap->var_echo_input);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_bytes_input);
        tmp_kw_call_arg_value_0_1 = generator_heap->var_bytes_input;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[38]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[69];
        tmp_kw_call_dict_value_2_1 = mod_consts[70];
        generator->m_frame->m_frame.f_lineno = 251;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_assign_unpack_2__assign_source == NULL);
        generator_heap->tmp_assign_unpack_2__assign_source = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
        tmp_assattr_value_2 = generator_heap->tmp_assign_unpack_2__assign_source;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[61], tmp_assattr_value_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_assign_unpack_2__assign_source);
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
        tmp_assign_source_13 = generator_heap->tmp_assign_unpack_2__assign_source;
        assert(Nuitka_Cell_GET(generator_heap->var_text_input) == NULL);
        Py_INCREF(tmp_assign_source_13);
        PyCell_SET(generator_heap->var_text_input, tmp_assign_source_13);

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_2__assign_source);
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[51]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[72];
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_text_input));
        tmp_assattr_target_3 = Nuitka_Cell_GET(generator_heap->var_text_input);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[73], tmp_assattr_value_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_bytes_output == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = generator_heap->var_bytes_output;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[38]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_2 = mod_consts[75];
        tmp_kw_call_dict_value_2_2 = mod_consts[76];
        generator->m_frame->m_frame.f_lineno = 260;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2};
            tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[35], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        assert(generator_heap->var_bytes_error == NULL);
        Py_INCREF(tmp_assign_source_14);
        generator_heap->var_bytes_error = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[52]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assattr_value_5 == NULL));
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[77], tmp_assattr_value_5);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_8;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[27]);
        }
        assert(!(tmp_called_value_8 == NULL));
        generator->m_frame->m_frame.f_lineno = 268;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_bytes_error;
            assert(old != NULL);
            generator_heap->var_bytes_error = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_bytes_error);
        tmp_kw_call_arg_value_0_3 = generator_heap->var_bytes_error;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[38]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_3 = mod_consts[78];
        tmp_kw_call_dict_value_2_3 = mod_consts[76];
        tmp_kw_call_dict_value_3_1 = mod_consts[79];
        generator->m_frame->m_frame.f_lineno = 269;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_1};
            tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[80]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[77], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_echo_input);
        tmp_args_element_value_8 = generator_heap->var_echo_input;
        generator->m_frame->m_frame.f_lineno = 277;
        tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_8);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[81];
        tmp_dict_key_1 = mod_consts[82];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_10);

            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[83]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_10);

            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_10);

            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[84];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = generator_heap->var_text_input;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_9 = MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__1_visible_input(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

        generator->m_frame->m_frame.f_lineno = 277;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_visible_input == NULL);
        generator_heap->var_visible_input = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        struct Nuitka_CellObject *tmp_closure_2[1];
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_echo_input);
        tmp_args_element_value_10 = generator_heap->var_echo_input;
        generator->m_frame->m_frame.f_lineno = 285;
        tmp_called_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_10);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[81];
        tmp_dict_key_2 = mod_consts[82];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_12);

            generator_heap->exception_lineno = 286;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[83]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_12);

            generator_heap->exception_lineno = 286;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_12);

            generator_heap->exception_lineno = 286;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(generator_heap->tmp_res != 0));
        tmp_dict_key_2 = mod_consts[84];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(generator_heap->tmp_res != 0));
        Py_INCREF(tmp_defaults_2);

        tmp_closure_2[0] = generator_heap->var_text_input;
        Py_INCREF(tmp_closure_2[0]);

        tmp_args_element_value_11 = MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__2_hidden_input(tmp_defaults_2, tmp_annotations_2, tmp_closure_2);

        generator->m_frame->m_frame.f_lineno = 285;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_hidden_input == NULL);
        generator_heap->var_hidden_input = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_annotations_3;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_echo_input);
        tmp_args_element_value_12 = generator_heap->var_echo_input;
        generator->m_frame->m_frame.f_lineno = 291;
        tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_12);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = DICT_COPY(mod_consts[89]);


        tmp_args_element_value_13 = MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__3__getchar(tmp_annotations_3);

        generator->m_frame->m_frame.f_lineno = 291;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var__getchar == NULL);
        generator_heap->var__getchar = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_19 = Nuitka_Cell_GET(generator->m_closure[0]);
        assert(Nuitka_Cell_GET(generator_heap->var_default_color) == NULL);
        Py_INCREF(tmp_assign_source_19);
        PyCell_SET(generator_heap->var_default_color, tmp_assign_source_19);

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_21;
        struct Nuitka_CellObject *tmp_closure_3[1];
        tmp_defaults_3 = mod_consts[93];
        tmp_dict_key_3 = mod_consts[13];
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[83]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_expression_value_17);

            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[22]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_expression_value_17);

            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_expression_value_19);

            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[23]);
        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_expression_value_19);

            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_19);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_expression_value_17);

            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_17);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_5;
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_3 = mod_consts[92];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 304;
                generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[83]);
            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 304;
                generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = (PyObject *)&PyBool_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 304;
                generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_3 = mod_consts[84];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(generator_heap->tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_3);

        tmp_closure_3[0] = generator_heap->var_default_color;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_20 = MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__4_should_strip_ansi(tmp_defaults_3, tmp_annotations_4, tmp_closure_3);

        assert(generator_heap->var_should_strip_ansi == NULL);
        generator_heap->var_should_strip_ansi = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 310;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[97]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 310;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_visible_prompt_func == NULL);
        generator_heap->var_old_visible_prompt_func = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 311;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[98]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 311;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_hidden_prompt_func == NULL);
        generator_heap->var_old_hidden_prompt_func = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 312;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[90]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 312;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old__getchar_func == NULL);
        generator_heap->var_old__getchar_func = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[94]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_should_strip_ansi == NULL);
        generator_heap->var_old_should_strip_ansi = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(generator_heap->var_visible_input);
        tmp_assattr_value_7 = generator_heap->var_visible_input;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 314;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[97], tmp_assattr_value_7);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 314;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(generator_heap->var_hidden_input);
        tmp_assattr_value_8 = generator_heap->var_hidden_input;
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 315;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[98], tmp_assattr_value_8);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 315;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(generator_heap->var__getchar);
        tmp_assattr_value_9 = generator_heap->var__getchar;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 316;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[90], tmp_assattr_value_9);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 316;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(generator_heap->var_should_strip_ansi);
        tmp_assattr_value_10 = generator_heap->var_should_strip_ansi;
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[94], tmp_assattr_value_10);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(generator_heap->var_old_env == NULL);
        generator_heap->var_old_env = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_expression_value_28 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[100]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 321;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        generator->m_frame->m_frame.f_lineno = 321;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 321;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 321;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_26;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                generator_heap->exception_lineno = 321;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 321;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 321;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 321;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                    generator_heap->exception_lineno = 321;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[101];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 321;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_31 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_31;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_32 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_32;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 322;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[103]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 322;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[104]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 322;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_args_element_value_14 = generator_heap->var_key;
        generator->m_frame->m_frame.f_lineno = 322;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_17);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 322;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        if (generator_heap->var_old_env == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[105]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 322;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_1 = generator_heap->var_old_env;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_ass_subscript_1 = generator_heap->var_key;
        generator_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 322;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_cmp_expr_left_1 = generator_heap->var_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_delsubscr_subscript_1;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_7;
        }
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[103]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_delsubscr_subscript_1 = generator_heap->var_key;
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_4 == NULL) {
        generator_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_4);
    } else if (generator_heap->exception_keeper_lineno_4 != 0) {
        generator_heap->exception_keeper_tb_4 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_4, generator->m_frame, generator_heap->exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_4, &generator_heap->exception_keeper_value_4, &generator_heap->exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 324;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
    goto try_except_handler_8;
    branch_no_5:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_ass_subvalue_2 = generator_heap->var_value;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[103]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_ass_subscript_2 = generator_heap->var_key;
        generator_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_4;
        }
    }
    branch_end_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 321;
        generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_expression_value_33;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (generator_heap->var_bytes_output == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = generator_heap->var_bytes_output;
        tmp_expression_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_33, 0, tmp_tuple_element_1);
        if (generator_heap->var_bytes_error == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[106]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = generator_heap->var_bytes_error;
        PyTuple_SET_ITEM0(tmp_expression_value_33, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_33);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_33;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_3;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_7 == NULL) {
        generator_heap->exception_keeper_tb_7 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_7);
    } else if (generator_heap->exception_keeper_lineno_7 != 0) {
        generator_heap->exception_keeper_tb_7 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_7, generator->m_frame, generator_heap->exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_7, &generator_heap->exception_keeper_value_7, &generator_heap->exception_keeper_tb_7);
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_34;
        if (generator_heap->var_old_env == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[105]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_34 = generator_heap->var_old_env;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[100]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator->m_frame->m_frame.f_lineno = 332;
        tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
        Py_DECREF(tmp_called_value_18);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_33;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_34 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                generator_heap->exception_lineno = 332;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 332;
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_37 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_37 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 332;
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                    generator_heap->exception_lineno = 332;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[101];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 332;
            goto try_except_handler_12;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_38 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_38;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_39 = generator_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_39;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_cmp_expr_left_3 = generator_heap->var_value;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    // Tried code:
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_delsubscr_subscript_2;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_13;
        }
        tmp_delsubscr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[103]);
        if (tmp_delsubscr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_delsubscr_subscript_2 = generator_heap->var_key;
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        Py_DECREF(tmp_delsubscr_target_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_13;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_10 == NULL) {
        generator_heap->exception_keeper_tb_10 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_10);
    } else if (generator_heap->exception_keeper_lineno_10 != 0) {
        generator_heap->exception_keeper_tb_10 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_10, generator->m_frame, generator_heap->exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_10, &generator_heap->exception_keeper_value_10, &generator_heap->exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_Exception;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_7 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 334;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
    goto try_except_handler_14;
    branch_no_7:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto try_except_handler_10;
    // End of try:
    try_end_11:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_ass_subvalue_3 = generator_heap->var_value;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_10;
        }
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[103]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_ass_subscript_3 = generator_heap->var_key;
        generator_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_10;
        }
    }
    branch_end_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 332;
        generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_10:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_12;
    generator_heap->exception_value = generator_heap->exception_keeper_value_12;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_12;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

    goto try_except_handler_9;
    // End of try:
    try_end_12:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(generator_heap->var_old_stdout);
        tmp_assattr_value_11 = generator_heap->var_old_stdout;
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[35], tmp_assattr_value_11);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(generator_heap->var_old_stderr);
        tmp_assattr_value_12 = generator_heap->var_old_stderr;
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[77], tmp_assattr_value_12);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(generator_heap->var_old_stdin);
        tmp_assattr_value_13 = generator_heap->var_old_stdin;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 342;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[61], tmp_assattr_value_13);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 342;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(generator_heap->var_old_visible_prompt_func);
        tmp_assattr_value_14 = generator_heap->var_old_visible_prompt_func;
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[97], tmp_assattr_value_14);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(generator_heap->var_old_hidden_prompt_func);
        tmp_assattr_value_15 = generator_heap->var_old_hidden_prompt_func;
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 344;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[98], tmp_assattr_value_15);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 344;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(generator_heap->var_old__getchar_func);
        tmp_assattr_value_16 = generator_heap->var_old__getchar_func;
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[90], tmp_assattr_value_16);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(generator_heap->var_old_should_strip_ansi);
        tmp_assattr_value_17 = generator_heap->var_old_should_strip_ansi;
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 346;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[94], tmp_assattr_value_17);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 346;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT(generator_heap->var_old_forced_width);
        tmp_assattr_value_18 = generator_heap->var_old_forced_width;
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[63], tmp_assattr_value_18);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_9;
        }
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 320;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
    goto try_except_handler_9;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_3);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_37;
        if (generator_heap->var_old_env == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[105]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = generator_heap->var_old_env;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[100]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 332;
        tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        Py_DECREF(tmp_called_value_19);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_40;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_41 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                generator_heap->exception_lineno = 332;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_6 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_42 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_43 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 332;
            goto try_except_handler_17;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_44 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 332;
            goto try_except_handler_17;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
                    generator_heap->exception_lineno = 332;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[101];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            generator_heap->exception_lineno = 332;
            goto try_except_handler_17;
        }
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_17:;
    generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_45 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_45;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_46 = generator_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_46;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_cmp_expr_left_5 = generator_heap->var_value;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    // Tried code:
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_delsubscr_subscript_3;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_18;
        }
        tmp_delsubscr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[103]);
        if (tmp_delsubscr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_delsubscr_subscript_3 = generator_heap->var_key;
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        Py_DECREF(tmp_delsubscr_target_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_18;
        }
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_18:;
    generator_heap->exception_keeper_type_16 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_16 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_16 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_16 == NULL) {
        generator_heap->exception_keeper_tb_16 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_16);
    } else if (generator_heap->exception_keeper_lineno_16 != 0) {
        generator_heap->exception_keeper_tb_16 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_16, generator->m_frame, generator_heap->exception_keeper_lineno_16);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_16, &generator_heap->exception_keeper_value_16, &generator_heap->exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_Exception;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_9 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 334;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
    goto try_except_handler_19;
    branch_no_9:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_19:;
    generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_17;
    generator_heap->exception_value = generator_heap->exception_keeper_value_17;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

    goto try_except_handler_15;
    // End of try:
    try_end_16:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_ass_subvalue_4 = generator_heap->var_value;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_15;
        }
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[103]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(generator_heap->var_key);
        tmp_ass_subscript_4 = generator_heap->var_key;
        generator_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto try_except_handler_15;
        }
    }
    branch_end_8:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 332;
        generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_15:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(generator_heap->var_old_stdout);
        tmp_assattr_value_19 = generator_heap->var_old_stdout;
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[35], tmp_assattr_value_19);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        CHECK_OBJECT(generator_heap->var_old_stderr);
        tmp_assattr_value_20 = generator_heap->var_old_stderr;
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[77], tmp_assattr_value_20);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        CHECK_OBJECT(generator_heap->var_old_stdin);
        tmp_assattr_value_21 = generator_heap->var_old_stdin;
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 342;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[61], tmp_assattr_value_21);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 342;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(generator_heap->var_old_visible_prompt_func);
        tmp_assattr_value_22 = generator_heap->var_old_visible_prompt_func;
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[97], tmp_assattr_value_22);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        CHECK_OBJECT(generator_heap->var_old_hidden_prompt_func);
        tmp_assattr_value_23 = generator_heap->var_old_hidden_prompt_func;
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 344;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[98], tmp_assattr_value_23);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 344;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        CHECK_OBJECT(generator_heap->var_old__getchar_func);
        tmp_assattr_value_24 = generator_heap->var_old__getchar_func;
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[90], tmp_assattr_value_24);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 345;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        CHECK_OBJECT(generator_heap->var_old_should_strip_ansi);
        tmp_assattr_value_25 = generator_heap->var_old_should_strip_ansi;
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 346;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[94], tmp_assattr_value_25);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 346;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        CHECK_OBJECT(generator_heap->var_old_forced_width);
        tmp_assattr_value_26 = generator_heap->var_old_forced_width;
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[63], tmp_assattr_value_26);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ccccooooooocoooocoooooooo";
            goto frame_exception_exit_1;
        }
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[3],
            generator->m_closure[2],
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_bytes_input,
            generator_heap->var_echo_input,
            generator_heap->var_old_stdin,
            generator_heap->var_old_stdout,
            generator_heap->var_old_stderr,
            generator_heap->var_old_forced_width,
            generator_heap->var_bytes_output,
            generator_heap->var_text_input,
            generator_heap->var_bytes_error,
            generator_heap->var_visible_input,
            generator_heap->var_hidden_input,
            generator_heap->var__getchar,
            generator_heap->var_default_color,
            generator_heap->var_should_strip_ansi,
            generator_heap->var_old_visible_prompt_func,
            generator_heap->var_old_hidden_prompt_func,
            generator_heap->var_old__getchar_func,
            generator_heap->var_old_should_strip_ansi,
            generator_heap->var_old_env,
            generator_heap->var_key,
            generator_heap->var_value
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_19 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_19 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_19 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_bytes_input);
    generator_heap->var_bytes_input = NULL;
    Py_XDECREF(generator_heap->var_echo_input);
    generator_heap->var_echo_input = NULL;
    Py_XDECREF(generator_heap->var_old_stdin);
    generator_heap->var_old_stdin = NULL;
    Py_XDECREF(generator_heap->var_old_stdout);
    generator_heap->var_old_stdout = NULL;
    Py_XDECREF(generator_heap->var_old_stderr);
    generator_heap->var_old_stderr = NULL;
    Py_XDECREF(generator_heap->var_old_forced_width);
    generator_heap->var_old_forced_width = NULL;
    Py_XDECREF(generator_heap->var_bytes_output);
    generator_heap->var_bytes_output = NULL;
    CHECK_OBJECT(generator_heap->var_text_input);
    Py_DECREF(generator_heap->var_text_input);
    generator_heap->var_text_input = NULL;
    Py_XDECREF(generator_heap->var_bytes_error);
    generator_heap->var_bytes_error = NULL;
    Py_XDECREF(generator_heap->var_visible_input);
    generator_heap->var_visible_input = NULL;
    Py_XDECREF(generator_heap->var_hidden_input);
    generator_heap->var_hidden_input = NULL;
    Py_XDECREF(generator_heap->var__getchar);
    generator_heap->var__getchar = NULL;
    CHECK_OBJECT(generator_heap->var_default_color);
    Py_DECREF(generator_heap->var_default_color);
    generator_heap->var_default_color = NULL;
    Py_XDECREF(generator_heap->var_should_strip_ansi);
    generator_heap->var_should_strip_ansi = NULL;
    Py_XDECREF(generator_heap->var_old_visible_prompt_func);
    generator_heap->var_old_visible_prompt_func = NULL;
    Py_XDECREF(generator_heap->var_old_hidden_prompt_func);
    generator_heap->var_old_hidden_prompt_func = NULL;
    Py_XDECREF(generator_heap->var_old__getchar_func);
    generator_heap->var_old__getchar_func = NULL;
    Py_XDECREF(generator_heap->var_old_should_strip_ansi);
    generator_heap->var_old_should_strip_ansi = NULL;
    Py_XDECREF(generator_heap->var_old_env);
    generator_heap->var_old_env = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_19;
    generator_heap->exception_value = generator_heap->exception_keeper_value_19;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_19;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(generator_heap->var_bytes_input);
    Py_DECREF(generator_heap->var_bytes_input);
    generator_heap->var_bytes_input = NULL;
    CHECK_OBJECT(generator_heap->var_echo_input);
    Py_DECREF(generator_heap->var_echo_input);
    generator_heap->var_echo_input = NULL;
    CHECK_OBJECT(generator_heap->var_old_stdin);
    Py_DECREF(generator_heap->var_old_stdin);
    generator_heap->var_old_stdin = NULL;
    CHECK_OBJECT(generator_heap->var_old_stdout);
    Py_DECREF(generator_heap->var_old_stdout);
    generator_heap->var_old_stdout = NULL;
    CHECK_OBJECT(generator_heap->var_old_stderr);
    Py_DECREF(generator_heap->var_old_stderr);
    generator_heap->var_old_stderr = NULL;
    CHECK_OBJECT(generator_heap->var_old_forced_width);
    Py_DECREF(generator_heap->var_old_forced_width);
    generator_heap->var_old_forced_width = NULL;
    Py_XDECREF(generator_heap->var_bytes_output);
    generator_heap->var_bytes_output = NULL;
    CHECK_OBJECT(generator_heap->var_text_input);
    Py_DECREF(generator_heap->var_text_input);
    generator_heap->var_text_input = NULL;
    Py_XDECREF(generator_heap->var_bytes_error);
    generator_heap->var_bytes_error = NULL;
    CHECK_OBJECT(generator_heap->var_visible_input);
    Py_DECREF(generator_heap->var_visible_input);
    generator_heap->var_visible_input = NULL;
    CHECK_OBJECT(generator_heap->var_hidden_input);
    Py_DECREF(generator_heap->var_hidden_input);
    generator_heap->var_hidden_input = NULL;
    CHECK_OBJECT(generator_heap->var__getchar);
    Py_DECREF(generator_heap->var__getchar);
    generator_heap->var__getchar = NULL;
    CHECK_OBJECT(generator_heap->var_default_color);
    Py_DECREF(generator_heap->var_default_color);
    generator_heap->var_default_color = NULL;
    CHECK_OBJECT(generator_heap->var_should_strip_ansi);
    Py_DECREF(generator_heap->var_should_strip_ansi);
    generator_heap->var_should_strip_ansi = NULL;
    CHECK_OBJECT(generator_heap->var_old_visible_prompt_func);
    Py_DECREF(generator_heap->var_old_visible_prompt_func);
    generator_heap->var_old_visible_prompt_func = NULL;
    CHECK_OBJECT(generator_heap->var_old_hidden_prompt_func);
    Py_DECREF(generator_heap->var_old_hidden_prompt_func);
    generator_heap->var_old_hidden_prompt_func = NULL;
    CHECK_OBJECT(generator_heap->var_old__getchar_func);
    Py_DECREF(generator_heap->var_old__getchar_func);
    generator_heap->var_old__getchar_func = NULL;
    CHECK_OBJECT(generator_heap->var_old_should_strip_ansi);
    Py_DECREF(generator_heap->var_old_should_strip_ansi);
    generator_heap->var_old_should_strip_ansi = NULL;
    Py_XDECREF(generator_heap->var_old_env);
    generator_heap->var_old_env = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$testing$$$function__23_isolation$$$genobj__1_isolation(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$testing$$$function__23_isolation$$$genobj__1_isolation_context,
        module_click$testing,
        mod_consts[107],
#if PYTHON_VERSION >= 0x350
        mod_consts[108],
#endif
        codeobj_bb0189b9c2bef3c1f01730096038e188,
        closure,
        4,
#if 1
        sizeof(struct click$testing$$$function__23_isolation$$$genobj__1_isolation_locals)
#else
        0
#endif
    );
}


static PyObject *impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__1_visible_input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_prompt = python_pars[0];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9)) {
        Py_XDECREF(cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9 = MAKE_FUNCTION_FRAME(codeobj_7bf24c9ee46f8e7ee9d55d9270c4d0c9, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_type_description == NULL);
    frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9 = cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9);
    assert(Py_REFCNT(frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        tmp_expression_value_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prompt);
        tmp_or_left_value_1 = par_prompt;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 279;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[47];
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_frame.f_lineno = 279;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_frame.f_lineno = 280;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[110]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_frame.f_lineno = 280;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[111]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        tmp_expression_value_3 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_val);
        tmp_format_value_1 = var_val;
        tmp_format_spec_1 = mod_consts[47];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 281;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[112];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 281;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_frame.f_lineno = 281;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_called_instance_2 == NULL));
        frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_frame.f_lineno = 282;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[113]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9,
        type_description_1,
        par_prompt,
        var_val,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9 == cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9);
        cache_frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9 = NULL;
    }

    assertFrameObject(frame_7bf24c9ee46f8e7ee9d55d9270c4d0c9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_val);
    tmp_return_value = var_val;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_val);
    Py_DECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_val);
    var_val = NULL;
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
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__2_hidden_input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_prompt = python_pars[0];
    struct Nuitka_FrameObject *frame_836dd5cdacc549849459b35d3c7ef557;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_836dd5cdacc549849459b35d3c7ef557 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_836dd5cdacc549849459b35d3c7ef557)) {
        Py_XDECREF(cache_frame_836dd5cdacc549849459b35d3c7ef557);

#if _DEBUG_REFCOUNTS
        if (cache_frame_836dd5cdacc549849459b35d3c7ef557 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_836dd5cdacc549849459b35d3c7ef557 = MAKE_FUNCTION_FRAME(codeobj_836dd5cdacc549849459b35d3c7ef557, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_836dd5cdacc549849459b35d3c7ef557->m_type_description == NULL);
    frame_836dd5cdacc549849459b35d3c7ef557 = cache_frame_836dd5cdacc549849459b35d3c7ef557;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_836dd5cdacc549849459b35d3c7ef557);
    assert(Py_REFCNT(frame_836dd5cdacc549849459b35d3c7ef557) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_format_spec_1;
        tmp_expression_value_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prompt);
        tmp_or_left_value_1 = par_prompt;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[47];
        tmp_format_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_format_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_format_spec_1 = mod_consts[47];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[112];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_836dd5cdacc549849459b35d3c7ef557->m_frame.f_lineno = 287;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_called_instance_1 == NULL));
        frame_836dd5cdacc549849459b35d3c7ef557->m_frame.f_lineno = 288;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[113]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_836dd5cdacc549849459b35d3c7ef557->m_frame.f_lineno = 289;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[8]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[110]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_836dd5cdacc549849459b35d3c7ef557->m_frame.f_lineno = 289;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[111]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_836dd5cdacc549849459b35d3c7ef557, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_836dd5cdacc549849459b35d3c7ef557->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_836dd5cdacc549849459b35d3c7ef557, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_836dd5cdacc549849459b35d3c7ef557,
        type_description_1,
        par_prompt,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_836dd5cdacc549849459b35d3c7ef557 == cache_frame_836dd5cdacc549849459b35d3c7ef557) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_836dd5cdacc549849459b35d3c7ef557);
        cache_frame_836dd5cdacc549849459b35d3c7ef557 = NULL;
    }

    assertFrameObject(frame_836dd5cdacc549849459b35d3c7ef557);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__3__getchar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_echo = python_pars[0];
    PyObject *var_char = NULL;
    struct Nuitka_FrameObject *frame_f3e74755c23e550bfd0aa3ca3ddb31d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5)) {
        Py_XDECREF(cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5 = MAKE_FUNCTION_FRAME(codeobj_f3e74755c23e550bfd0aa3ca3ddb31d5, module_click$testing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5->m_type_description == NULL);
    frame_f3e74755c23e550bfd0aa3ca3ddb31d5 = cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3e74755c23e550bfd0aa3ca3ddb31d5);
    assert(Py_REFCNT(frame_f3e74755c23e550bfd0aa3ca3ddb31d5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f3e74755c23e550bfd0aa3ca3ddb31d5->m_frame.f_lineno = 293;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[114], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_char == NULL);
        var_char = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_echo);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_echo);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(var_char);
        tmp_args_element_value_1 = var_char;
        frame_f3e74755c23e550bfd0aa3ca3ddb31d5->m_frame.f_lineno = 296;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[3], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        tmp_called_instance_3 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_called_instance_3 == NULL));
        frame_f3e74755c23e550bfd0aa3ca3ddb31d5->m_frame.f_lineno = 298;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[113]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (var_char == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 299;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_char;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3e74755c23e550bfd0aa3ca3ddb31d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3e74755c23e550bfd0aa3ca3ddb31d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3e74755c23e550bfd0aa3ca3ddb31d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3e74755c23e550bfd0aa3ca3ddb31d5,
        type_description_1,
        par_echo,
        var_char
    );


    // Release cached frame if used for exception.
    if (frame_f3e74755c23e550bfd0aa3ca3ddb31d5 == cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5);
        cache_frame_f3e74755c23e550bfd0aa3ca3ddb31d5 = NULL;
    }

    assertFrameObject(frame_f3e74755c23e550bfd0aa3ca3ddb31d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_char);
    var_char = NULL;
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

    Py_XDECREF(var_char);
    var_char = NULL;
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
    CHECK_OBJECT(par_echo);
    Py_DECREF(par_echo);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_echo);
    Py_DECREF(par_echo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__4_should_strip_ansi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_color = python_pars[1];
    struct Nuitka_FrameObject *frame_5cf9235f5310d5572c3b22c21c7a5494;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5cf9235f5310d5572c3b22c21c7a5494 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cf9235f5310d5572c3b22c21c7a5494)) {
        Py_XDECREF(cache_frame_5cf9235f5310d5572c3b22c21c7a5494);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cf9235f5310d5572c3b22c21c7a5494 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cf9235f5310d5572c3b22c21c7a5494 = MAKE_FUNCTION_FRAME(codeobj_5cf9235f5310d5572c3b22c21c7a5494, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5cf9235f5310d5572c3b22c21c7a5494->m_type_description == NULL);
    frame_5cf9235f5310d5572c3b22c21c7a5494 = cache_frame_5cf9235f5310d5572c3b22c21c7a5494;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5cf9235f5310d5572c3b22c21c7a5494);
    assert(Py_REFCNT(frame_5cf9235f5310d5572c3b22c21c7a5494) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_color);
        tmp_cmp_expr_left_1 = par_color;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_operand_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 307;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_color);
        tmp_operand_value_2 = par_color;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooc";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5cf9235f5310d5572c3b22c21c7a5494, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cf9235f5310d5572c3b22c21c7a5494->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cf9235f5310d5572c3b22c21c7a5494, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cf9235f5310d5572c3b22c21c7a5494,
        type_description_1,
        par_stream,
        par_color,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5cf9235f5310d5572c3b22c21c7a5494 == cache_frame_5cf9235f5310d5572c3b22c21c7a5494) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5cf9235f5310d5572c3b22c21c7a5494);
        cache_frame_5cf9235f5310d5572c3b22c21c7a5494 = NULL;
    }

    assertFrameObject(frame_5cf9235f5310d5572c3b22c21c7a5494);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__24_invoke(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cli = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_input = python_pars[3];
    PyObject *par_env = python_pars[4];
    PyObject *par_catch_exceptions = python_pars[5];
    PyObject *par_color = python_pars[6];
    PyObject *par_extra = python_pars[7];
    PyObject *var_exception = NULL;
    PyObject *var_exc_info = NULL;
    PyObject *var_outstreams = NULL;
    PyObject *var_return_value = NULL;
    PyObject *var_exit_code = NULL;
    PyObject *var_prog_name = NULL;
    PyObject *var_e = NULL;
    PyObject *var_e_code = NULL;
    PyObject *var_stdout = NULL;
    PyObject *var_stderr = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_e4a82cbabf115ede55e04aebf68404e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e4a82cbabf115ede55e04aebf68404e1 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_exc_info == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_exc_info = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e4a82cbabf115ede55e04aebf68404e1)) {
        Py_XDECREF(cache_frame_e4a82cbabf115ede55e04aebf68404e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4a82cbabf115ede55e04aebf68404e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4a82cbabf115ede55e04aebf68404e1 = MAKE_FUNCTION_FRAME(codeobj_e4a82cbabf115ede55e04aebf68404e1, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4a82cbabf115ede55e04aebf68404e1->m_type_description == NULL);
    frame_e4a82cbabf115ede55e04aebf68404e1 = cache_frame_e4a82cbabf115ede55e04aebf68404e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4a82cbabf115ede55e04aebf68404e1);
    assert(Py_REFCNT(frame_e4a82cbabf115ede55e04aebf68404e1) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[107]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_input);
        tmp_kw_call_value_0_1 = par_input;
        CHECK_OBJECT(par_env);
        tmp_kw_call_value_1_1 = par_env;
        CHECK_OBJECT(par_color);
        tmp_kw_call_value_2_1 = par_color;
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 394;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[117]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[118]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 394;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[119]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_6 = tmp_with_1__enter;
        assert(var_outstreams == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_outstreams = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_return_value == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_return_value = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(var_exception == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_exception = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[120];
        assert(var_exit_code == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_exit_code = tmp_assign_source_9;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_args);
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[122]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_value_1 = par_args;
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 400;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(par_extra);
        tmp_dict_arg_value_1 = par_extra;
        tmp_key_value_1 = mod_consts[123];
        tmp_assign_source_11 = DICT_POP2(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_prog_name == NULL);
        var_prog_name = tmp_assign_source_11;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_cli);
        tmp_args_element_value_2 = par_cli;
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 405;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[124], tmp_args_element_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(var_prog_name == NULL);
        var_prog_name = tmp_assign_source_12;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 402;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_cli == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_5 = par_cli;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[126]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dict_key_1 = mod_consts[127];
        CHECK_OBJECT(par_args);
        tmp_or_left_value_1 = par_args;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 408;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[128];
        tmp_dict_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_dict_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[123];
        CHECK_OBJECT(var_prog_name);
        tmp_dict_value_1 = var_prog_name;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_13 = impl___main__$$$function__15_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_return_value;
            assert(old != NULL);
            var_return_value = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_SystemExit;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_e = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 410;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_exc_info;
            assert(old != NULL);
            var_exc_info = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[83]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[129]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_expression_value_7);
        Py_DECREF(tmp_expression_value_9);
        Py_DECREF(tmp_subscript_value_2);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_9);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_7);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_12 = var_e;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[130]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(var_e_code == NULL);
        var_e_code = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_e_code);
        tmp_cmp_expr_left_3 = var_e_code;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[120];
        {
            PyObject *old = var_e_code;
            assert(old != NULL);
            var_e_code = tmp_assign_source_17;
            Py_INCREF(var_e_code);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_e_code);
        tmp_cmp_expr_left_4 = var_e_code;
        tmp_cmp_expr_right_4 = mod_consts[120];
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(var_e);
        tmp_assign_source_18 = var_e;
        {
            PyObject *old = var_exception;
            assert(old != NULL);
            var_exception = tmp_assign_source_18;
            Py_INCREF(var_exception);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_e_code);
        tmp_isinstance_inst_2 = var_e_code;
        tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_unicode_arg_1;
        tmp_expression_value_13 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_expression_value_13 == NULL));
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[3]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_e_code);
        tmp_unicode_arg_1 = var_e_code;
        tmp_args_element_value_5 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 420;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        tmp_called_instance_3 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_called_instance_3 == NULL));
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 421;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[131], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[72];
        {
            PyObject *old = var_e_code;
            assert(old != NULL);
            var_e_code = tmp_assign_source_19;
            Py_INCREF(var_e_code);
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_9;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(var_e_code);
        tmp_assign_source_20 = var_e_code;
        {
            PyObject *old = var_exit_code;
            assert(old != NULL);
            var_exit_code = tmp_assign_source_20;
            Py_INCREF(var_exit_code);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_e = tmp_assign_source_21;
    }
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_catch_exceptions);
        tmp_operand_value_2 = par_catch_exceptions;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 428;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(var_e);
        tmp_assign_source_22 = var_e;
        {
            PyObject *old = var_exception;
            assert(old != NULL);
            var_exception = tmp_assign_source_22;
            Py_INCREF(var_exception);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[72];
        {
            PyObject *old = var_exit_code;
            assert(old != NULL);
            var_exit_code = tmp_assign_source_23;
            Py_INCREF(var_exit_code);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 431;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[34]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_exc_info;
            assert(old != NULL);
            var_exc_info = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 407;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_7:;
    branch_end_3:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_7;
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

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[35]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 433;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[113]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_outstreams);
        tmp_expression_value_15 = var_outstreams;
        tmp_subscript_value_3 = mod_consts[120];
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_3, 0);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 434;
        tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[132]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_stdout == NULL);
        var_stdout = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[52]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_9 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_None;
        assert(var_stderr == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_stderr = tmp_assign_source_26;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_outstreams);
        tmp_expression_value_17 = var_outstreams;
        tmp_subscript_value_4 = mod_consts[72];
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_4, 1);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 438;
        tmp_assign_source_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[132]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_stderr == NULL);
        var_stderr = tmp_assign_source_27;
    }
    branch_end_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 407;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_12;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_4;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[35]);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 433;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[113]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_outstreams);
        tmp_expression_value_19 = var_outstreams;
        tmp_subscript_value_5 = mod_consts[120];
        tmp_called_instance_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_5, 0);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 434;
        tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[132]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_stdout == NULL);
        var_stdout = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[52]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 435;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = Py_None;
        assert(var_stderr == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_stderr = tmp_assign_source_29;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_outstreams);
        tmp_expression_value_21 = var_outstreams;
        tmp_subscript_value_6 = mod_consts[72];
        tmp_called_instance_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_6, 1);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 438;
        tmp_assign_source_30 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[132]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_stderr == NULL);
        var_stderr = tmp_assign_source_30;
    }
    branch_end_10:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_e4a82cbabf115ede55e04aebf68404e1, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_assign_source_31;
        tmp_assign_source_31 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 394;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 394;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
    branch_end_11:;
    goto try_end_9;
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

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_3;
    // End of try:
    try_end_9:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 394;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[133]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_11);
            Py_XDECREF(exception_keeper_value_11);
            Py_XDECREF(exception_keeper_tb_11);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_13:;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_2;
    // End of try:
    try_end_10:;
    {
        bool tmp_condition_result_14;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_1__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_14 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 394;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[133]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_14:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_2 = par_self;
        if (var_stdout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_1_2 = var_stdout;
        if (var_stderr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_2_2 = var_stderr;
        CHECK_OBJECT(var_return_value);
        tmp_kw_call_value_3_1 = var_return_value;
        CHECK_OBJECT(var_exit_code);
        tmp_kw_call_value_4_1 = var_exit_code;
        CHECK_OBJECT(var_exception);
        tmp_kw_call_value_5_1 = var_exception;
        CHECK_OBJECT(var_exc_info);
        tmp_kw_call_value_6_1 = var_exc_info;
        frame_e4a82cbabf115ede55e04aebf68404e1->m_frame.f_lineno = 440;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, kw_values, mod_consts[135]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_e4a82cbabf115ede55e04aebf68404e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4a82cbabf115ede55e04aebf68404e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4a82cbabf115ede55e04aebf68404e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4a82cbabf115ede55e04aebf68404e1,
        type_description_1,
        par_self,
        par_cli,
        par_args,
        par_input,
        par_env,
        par_catch_exceptions,
        par_color,
        par_extra,
        var_exception,
        var_exc_info,
        var_outstreams,
        var_return_value,
        var_exit_code,
        var_prog_name,
        var_e,
        var_e_code,
        var_stdout,
        var_stderr
    );


    // Release cached frame if used for exception.
    if (frame_e4a82cbabf115ede55e04aebf68404e1 == cache_frame_e4a82cbabf115ede55e04aebf68404e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4a82cbabf115ede55e04aebf68404e1);
        cache_frame_e4a82cbabf115ede55e04aebf68404e1 = NULL;
    }

    assertFrameObject(frame_e4a82cbabf115ede55e04aebf68404e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(var_exception);
    Py_DECREF(var_exception);
    var_exception = NULL;
    CHECK_OBJECT(var_exc_info);
    Py_DECREF(var_exc_info);
    var_exc_info = NULL;
    CHECK_OBJECT(var_outstreams);
    Py_DECREF(var_outstreams);
    var_outstreams = NULL;
    CHECK_OBJECT(var_return_value);
    Py_DECREF(var_return_value);
    var_return_value = NULL;
    CHECK_OBJECT(var_exit_code);
    Py_DECREF(var_exit_code);
    var_exit_code = NULL;
    Py_XDECREF(var_prog_name);
    var_prog_name = NULL;
    Py_XDECREF(var_e_code);
    var_e_code = NULL;
    Py_XDECREF(var_stdout);
    var_stdout = NULL;
    Py_XDECREF(var_stderr);
    var_stderr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_exception);
    var_exception = NULL;
    Py_XDECREF(var_exc_info);
    var_exc_info = NULL;
    Py_XDECREF(var_outstreams);
    var_outstreams = NULL;
    Py_XDECREF(var_return_value);
    var_return_value = NULL;
    Py_XDECREF(var_exit_code);
    var_exit_code = NULL;
    Py_XDECREF(var_prog_name);
    var_prog_name = NULL;
    Py_XDECREF(var_e_code);
    var_e_code = NULL;
    Py_XDECREF(var_stdout);
    var_stdout = NULL;
    Py_XDECREF(var_stderr);
    var_stderr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cli);
    Py_DECREF(par_cli);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_catch_exceptions);
    Py_DECREF(par_catch_exceptions);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cli);
    Py_DECREF(par_cli);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_catch_exceptions);
    Py_DECREF(par_catch_exceptions);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$testing$$$function__25_isolated_filesystem(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_temp_dir = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = Nuitka_Cell_New0(par_self);
        tmp_closure_1[1] = par_temp_dir;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_temp_dir);
    Py_DECREF(par_temp_dir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem_locals {
    PyObject *var_cwd;
    PyObject *var_dt;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};
#endif

static PyObject *click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem_locals *generator_heap = (struct click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cwd = NULL;
    generator_heap->var_dt = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_50975bc73897f145b8e4726de8cb66c4, module_click$testing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        generator->m_frame->m_frame.f_lineno = 466;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[138]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 466;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_cwd == NULL);
        generator_heap->var_cwd = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[140]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[141]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 467;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_dt == NULL);
        generator_heap->var_dt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 468;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_dt);
        tmp_args_element_value_1 = generator_heap->var_dt;
        generator->m_frame->m_frame.f_lineno = 468;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[143], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 468;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_dt);
        tmp_expression_value_2 = generator_heap->var_dt;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 471;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 473;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(generator_heap->var_cwd);
        tmp_args_element_value_2 = generator_heap->var_cwd;
        generator->m_frame->m_frame.f_lineno = 473;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[143], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 473;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[141]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_dt);
        tmp_args_element_value_3 = generator_heap->var_dt;
        generator->m_frame->m_frame.f_lineno = 477;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[145], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_2 == NULL) {
        generator_heap->exception_keeper_tb_2 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_2);
    } else if (generator_heap->exception_keeper_lineno_2 != 0) {
        generator_heap->exception_keeper_tb_2 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_2, generator->m_frame, generator_heap->exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_2, &generator_heap->exception_keeper_value_2, &generator_heap->exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_OSError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 476;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
    branch_no_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 470;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 473;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_cwd);
        tmp_args_element_value_4 = generator_heap->var_cwd;
        generator->m_frame->m_frame.f_lineno = 473;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[143], tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 473;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[141]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(generator_heap->var_dt);
        tmp_args_element_value_5 = generator_heap->var_dt;
        generator->m_frame->m_frame.f_lineno = 477;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[145], tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_5 == NULL) {
        generator_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        generator_heap->exception_keeper_tb_5 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_5, generator->m_frame, generator_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_5, &generator_heap->exception_keeper_value_5, &generator_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_OSError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_4 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 476;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_7;
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    branch_no_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_cwd,
            generator_heap->var_dt
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_cwd);
    generator_heap->var_cwd = NULL;
    Py_XDECREF(generator_heap->var_dt);
    generator_heap->var_dt = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(generator_heap->var_cwd);
    Py_DECREF(generator_heap->var_cwd);
    generator_heap->var_cwd = NULL;
    CHECK_OBJECT(generator_heap->var_dt);
    Py_DECREF(generator_heap->var_dt);
    generator_heap->var_dt = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem_context,
        module_click$testing,
        mod_consts[146],
#if PYTHON_VERSION >= 0x350
        mod_consts[147],
#endif
        codeobj_50975bc73897f145b8e4726de8cb66c4,
        closure,
        2,
#if 1
        sizeof(struct click$testing$$$function__25_isolated_filesystem$$$genobj__1_isolated_filesystem_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__10__pause_echo(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__10__pause_echo,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f44bf70befcccc314a8b9bc3023c0bd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__11___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__11___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_066a37a39f8db9270f65a20cbe18319d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__12_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__12_name,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_65fdecee63f19ae484f53853cddc0dbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__13_mode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__13_mode,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_a2de5ea053222d9652d65713237ff408,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__14_make_input_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__14_make_input_stream,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_872ecafa1bd1fefc7b2fd8eb0b3737ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__15___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__15___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_b20b59cad826a22c3bc3c9b6b472f4e4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__16_output(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__16_output,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_efa88daac852a26ec7d430a031aa6d5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__17_stdout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__17_stdout,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_28ee88dcae76459b43274c3e5ae88d6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__18_stderr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__18_stderr,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_6210d1f145c1e98833815e5a660d4997,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__19___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__19___repr__,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_dad518ce05a792cab48538844bc99a22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__1___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_2d9f1a6e9d4d0da5e786bc5c1013c386,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__20___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__20___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_a716a53a11be737b128786e7b5c344aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__21_get_default_prog_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__21_get_default_prog_name,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_8c1b0a2229aae816e97a9705079e62a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__22_make_env(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__22_make_env,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_5954ff88739a58bac3927c888f69cde6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__23_isolation,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_bb0189b9c2bef3c1f01730096038e188,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__1_visible_input(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__1_visible_input,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_7bf24c9ee46f8e7ee9d55d9270c4d0c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__2_hidden_input(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__2_hidden_input,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_836dd5cdacc549849459b35d3c7ef557,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__3__getchar(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__3__getchar,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_f3e74755c23e550bfd0aa3ca3ddb31d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__4_should_strip_ansi(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__4_should_strip_ansi,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_5cf9235f5310d5572c3b22c21c7a5494,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__24_invoke(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__24_invoke,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_e4a82cbabf115ede55e04aebf68404e1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__25_isolated_filesystem(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__25_isolated_filesystem,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_50975bc73897f145b8e4726de8cb66c4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__2___getattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__2___getattr__,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_2c43e5d1d3923c44442d330769cee310,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__3__echo(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__3__echo,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_81f5cd128e87d94206345785d5c18b5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__4_read(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__4_read,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_0ab6bf7df79a4574096871c2ad43577d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__5_read1(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__5_read1,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_9dde06a175b196ca214fffebcc0eb4f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__6_readline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__6_readline,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_8808b68738e3ac376ceffff4d987dc0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__7_readlines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__7_readlines,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_4529960eed239c3680a56c825133596d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__8___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__8___iter__,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_b0f69685c69ebe0872265126b67bcc92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$testing$$$function__9___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$testing$$$function__9___repr__,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_80d900dfd08f1361953bcba8e867dbbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$testing,
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

function_impl_code functable_click$testing[] = {
    impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__1_visible_input,
    impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__2_hidden_input,
    impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__3__getchar,
    impl_click$testing$$$function__23_isolation$$$genobj__1_isolation$$$function__4_should_strip_ansi,
    impl_click$testing$$$function__1___init__,
    impl_click$testing$$$function__2___getattr__,
    impl_click$testing$$$function__3__echo,
    impl_click$testing$$$function__4_read,
    impl_click$testing$$$function__5_read1,
    impl_click$testing$$$function__6_readline,
    impl_click$testing$$$function__7_readlines,
    impl_click$testing$$$function__8___iter__,
    impl_click$testing$$$function__9___repr__,
    impl_click$testing$$$function__10__pause_echo,
    impl_click$testing$$$function__11___init__,
    impl_click$testing$$$function__12_name,
    impl_click$testing$$$function__13_mode,
    impl_click$testing$$$function__14_make_input_stream,
    impl_click$testing$$$function__15___init__,
    impl_click$testing$$$function__16_output,
    impl_click$testing$$$function__17_stdout,
    impl_click$testing$$$function__18_stderr,
    impl_click$testing$$$function__19___repr__,
    impl_click$testing$$$function__20___init__,
    impl_click$testing$$$function__21_get_default_prog_name,
    impl_click$testing$$$function__22_make_env,
    impl_click$testing$$$function__23_isolation,
    impl_click$testing$$$function__24_invoke,
    impl_click$testing$$$function__25_isolated_filesystem,
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

    function_impl_code *current = functable_click$testing;
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

    if (offset > sizeof(functable_click$testing) || offset < 0) {
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
        functable_click$testing[offset],
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
        module_click$testing,
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
PyObject *modulecode_click$testing(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click.testing");

    // Store the module for future use.
    module_click$testing = module;

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
        PRINT_STRING("click.testing: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("click.testing: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initclick$testing\n");

    moduledict_click$testing = MODULE_DICT(module_click$testing);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$testing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$testing,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[47]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$testing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click$testing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click$testing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$testing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_click$testing);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    struct Nuitka_FrameObject *frame_c79e98231f5a88f20dfe12532c25060d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_click$testing$$$class__1_EchoingStdin_20 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_c89b8336303f1fd307eafad480a0a024_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_click$testing$$$class__2__NamedTextIOWrapper_64 = NULL;
    struct Nuitka_FrameObject *frame_9e121572a041dfc8f00fd888d1c69e86_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_click$testing$$$class__3_Result_101 = NULL;
    struct Nuitka_FrameObject *frame_b269422862f6a81fdf89de80aa02041a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_click$testing$$$class__4_CliRunner_159 = NULL;
    struct Nuitka_FrameObject *frame_ff35498563988ae0c7f8b2daee9fa068_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_2);
    }
    frame_c79e98231f5a88f20dfe12532c25060d = MAKE_MODULE_FRAME(codeobj_c79e98231f5a88f20dfe12532c25060d, module_click$testing);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c79e98231f5a88f20dfe12532c25060d);
    assert(Py_REFCNT(frame_c79e98231f5a88f20dfe12532c25060d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[151], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[152], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[154];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[120];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[121];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[120];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[144];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[120];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[139];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[120];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_click$testing,
                mod_consts[156],
                mod_consts[120]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[156]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[47];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[157];
        tmp_level_value_5 = mod_consts[72];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_click$testing,
                mod_consts[62],
                mod_consts[120]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[47];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[158];
        tmp_level_value_6 = mod_consts[72];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 12;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_click$testing,
                mod_consts[96],
                mod_consts[120]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[47];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[159];
        tmp_level_value_7 = mod_consts[72];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_click$testing,
                mod_consts[99],
                mod_consts[120]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[160];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_click$testing;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[161];
        tmp_level_value_8 = mod_consts[72];
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 14;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_click$testing,
                mod_consts[19],
                mod_consts[120]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_click$testing$$$class__1_EchoingStdin_20 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[163], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[164], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_c89b8336303f1fd307eafad480a0a024_2 = MAKE_CLASS_FRAME(codeobj_c89b8336303f1fd307eafad480a0a024, module_click$testing, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c89b8336303f1fd307eafad480a0a024_2);
        assert(Py_REFCNT(frame_c89b8336303f1fd307eafad480a0a024_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_1;
            tmp_dict_key_1 = mod_consts[59];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_1 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_2;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[165];
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_2 == NULL));
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[84];
                tmp_dict_value_1 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[167];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[84];
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_3 == NULL));
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__2___getattr__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[168], tmp_dictset_value);
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
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[170]);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__3__echo(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_4;
            tmp_defaults_1 = mod_consts[172];
            tmp_annotations_4 = DICT_COPY(mod_consts[173]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__4_read(tmp_defaults_1, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_5;
            tmp_defaults_2 = mod_consts[172];
            tmp_annotations_5 = DICT_COPY(mod_consts[173]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__5_read1(tmp_defaults_2, tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_6;
            tmp_defaults_3 = mod_consts[172];
            tmp_annotations_6 = DICT_COPY(mod_consts[173]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__6_readline(tmp_defaults_3, tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            tmp_dict_key_3 = mod_consts[84];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_5 == NULL));
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[177]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_1 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__7_readlines(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            tmp_dict_key_4 = mod_consts[84];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_7 == NULL));
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[179]);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_2 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__8___iter__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c89b8336303f1fd307eafad480a0a024_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c89b8336303f1fd307eafad480a0a024_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c89b8336303f1fd307eafad480a0a024_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c89b8336303f1fd307eafad480a0a024_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c89b8336303f1fd307eafad480a0a024_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[182]);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__9___repr__(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__1_EchoingStdin_20, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[67];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_click$testing$$$class__1_EchoingStdin_20;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 20;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_click$testing$$$class__1_EchoingStdin_20);
        locals_click$testing$$$class__1_EchoingStdin_20 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_click$testing$$$class__1_EchoingStdin_20);
        locals_click$testing$$$class__1_EchoingStdin_20 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 20;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_19);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[185]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[13];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[83]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_subscript_value_3 == NULL)) {
            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_expression_value_9);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[84];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_12 == NULL));
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[179]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_4 = Py_None;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_args_element_value_1 = MAKE_FUNCTION_click$testing$$$function__10__pause_echo(tmp_annotations_10);

        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 54;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[186]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_14 = tmp_class_creation_2__bases;
        tmp_subscript_value_5 = mod_consts[120];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_5, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_15, mod_consts[187]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[187]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_tuple_element_3 = mod_consts[68];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 64;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_17 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_17, mod_consts[188]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_18 = tmp_class_creation_2__metaclass;
        tmp_name_value_9 = mod_consts[46];
        tmp_default_value_1 = mod_consts[190];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_expression_value_18, tmp_name_value_9, tmp_default_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[46]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 64;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_28;
        outline_1_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_click$testing$$$class__2__NamedTextIOWrapper_64 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[164], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        frame_9e121572a041dfc8f00fd888d1c69e86_3 = MAKE_CLASS_FRAME(codeobj_9e121572a041dfc8f00fd888d1c69e86, module_click$testing, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9e121572a041dfc8f00fd888d1c69e86_3);
        assert(Py_REFCNT(frame_9e121572a041dfc8f00fd888d1c69e86_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_20;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_6 = mod_consts[191];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_20 == NULL));
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[66]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_21;
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[53];
                tmp_dict_value_6 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[192]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[193];
                tmp_dict_value_6 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[192]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[194];
                tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_21 == NULL)) {
                    tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_21 == NULL));
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[23]);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[84];
                tmp_dict_value_6 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__11___init__(tmp_annotations_11, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[196]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_4 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[196]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[196]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_7 = mod_consts[84];
            tmp_dict_value_7 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[192]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_click$testing$$$function__12_name(tmp_annotations_12);

            frame_9e121572a041dfc8f00fd888d1c69e86_3->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_8 = mod_consts[84];
            tmp_dict_value_8 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[192]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_click$testing$$$function__12_name(tmp_annotations_13);

            frame_9e121572a041dfc8f00fd888d1c69e86_3->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[196]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_6 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[196]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[196]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_9 = mod_consts[84];
            tmp_dict_value_9 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[192]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_click$testing$$$function__13_mode(tmp_annotations_14);

            frame_9e121572a041dfc8f00fd888d1c69e86_3->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_10 = mod_consts[84];
            tmp_dict_value_10 = PyObject_GetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[192]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_click$testing$$$function__13_mode(tmp_annotations_15);

            frame_9e121572a041dfc8f00fd888d1c69e86_3->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[193], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9e121572a041dfc8f00fd888d1c69e86_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9e121572a041dfc8f00fd888d1c69e86_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9e121572a041dfc8f00fd888d1c69e86_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9e121572a041dfc8f00fd888d1c69e86_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_9e121572a041dfc8f00fd888d1c69e86_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_click$testing$$$class__2__NamedTextIOWrapper_64, mod_consts[199], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_5 = mod_consts[68];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_click$testing$$$class__2__NamedTextIOWrapper_64;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 64;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_29);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_28 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_click$testing$$$class__2__NamedTextIOWrapper_64);
        locals_click$testing$$$class__2__NamedTextIOWrapper_64 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_click$testing$$$class__2__NamedTextIOWrapper_64);
        locals_click$testing$$$class__2__NamedTextIOWrapper_64 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 64;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_28);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_6;
        tmp_dict_key_11 = mod_consts[59];
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_23 == NULL));
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[83]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_25 == NULL));
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[129]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_22);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_28;
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = (PyObject *)&PyBytes_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_6);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_27 == NULL));
            tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[22]);
            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_28 == NULL));
            tmp_subscript_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[23]);
            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_26);

                exception_lineno = 82;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_7, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_expression_value_22);
        Py_DECREF(tmp_expression_value_24);
        Py_DECREF(tmp_subscript_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_24);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_subscript_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_22);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_22);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_29;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[38];
            tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[84];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_29 == NULL));
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[66]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_30 = MAKE_FUNCTION_click$testing$$$function__14_make_input_stream(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_click$testing$$$class__3_Result_101 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[163], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[200];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[148], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[134];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[164], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_b269422862f6a81fdf89de80aa02041a_4 = MAKE_CLASS_FRAME(codeobj_b269422862f6a81fdf89de80aa02041a, module_click$testing, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b269422862f6a81fdf89de80aa02041a_4);
        assert(Py_REFCNT(frame_b269422862f6a81fdf89de80aa02041a_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_defaults_4 = mod_consts[81];
            tmp_dict_key_12 = mod_consts[28];
            tmp_dict_value_12 = mod_consts[201];
            tmp_annotations_17 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[29];
                tmp_dict_value_12 = (PyObject *)&PyBytes_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[30];
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_31 == NULL));
                tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[83]);
                if (tmp_expression_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_9 = (PyObject *)&PyBytes_Type;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[31];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_32 == NULL));
                tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[23]);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[32];
                tmp_dict_value_12 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[33];
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_34 == NULL));
                tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[83]);
                if (tmp_expression_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_10 = PyExc_BaseException;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_33);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[34];
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_36 == NULL));
                tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[83]);
                if (tmp_expression_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_38 == NULL));
                tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[202]);
                if (tmp_expression_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_35);

                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_40 == NULL)) {
                    tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_40 == NULL));
                tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[203]);
                if (tmp_expression_value_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_35);
                    Py_DECREF(tmp_expression_value_37);

                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_13 = PyExc_BaseException;
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_39);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_35);
                    Py_DECREF(tmp_expression_value_37);

                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyExc_BaseException;
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[156]);

                if (unlikely(tmp_tuple_element_7 == NULL)) {
                    tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                }

                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 2, tmp_tuple_element_7);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_12);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_subscript_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_35);

                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_17);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__15___init__(tmp_defaults_4, tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_18;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_annotations_18 = DICT_COPY(mod_consts[182]);


            tmp_args_element_value_6 = MAKE_FUNCTION_click$testing$$$function__16_output(tmp_annotations_18);

            frame_b269422862f6a81fdf89de80aa02041a_4->m_frame.f_lineno = 133;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_19;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_annotations_19 = DICT_COPY(mod_consts[182]);


            tmp_args_element_value_7 = MAKE_FUNCTION_click$testing$$$function__17_stdout(tmp_annotations_19);

            frame_b269422862f6a81fdf89de80aa02041a_4->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_20;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_annotations_20 = DICT_COPY(mod_consts[182]);


            tmp_args_element_value_8 = MAKE_FUNCTION_click$testing$$$function__18_stderr(tmp_annotations_20);

            frame_b269422862f6a81fdf89de80aa02041a_4->m_frame.f_lineno = 145;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b269422862f6a81fdf89de80aa02041a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b269422862f6a81fdf89de80aa02041a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b269422862f6a81fdf89de80aa02041a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b269422862f6a81fdf89de80aa02041a_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_b269422862f6a81fdf89de80aa02041a_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_annotations_21;
            tmp_annotations_21 = DICT_COPY(mod_consts[182]);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__19___repr__(tmp_annotations_21);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__3_Result_101, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_12 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[134];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_click$testing$$$class__3_Result_101;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 101;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_33 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_click$testing$$$class__3_Result_101);
        locals_click$testing$$$class__3_Result_101 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF(locals_click$testing$$$class__3_Result_101);
        locals_click$testing$$$class__3_Result_101 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 101;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_33);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_click$testing$$$class__4_CliRunner_159 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[163], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[209];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[148], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[164], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ff35498563988ae0c7f8b2daee9fa068_5 = MAKE_CLASS_FRAME(codeobj_ff35498563988ae0c7f8b2daee9fa068, module_click$testing, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ff35498563988ae0c7f8b2daee9fa068_5);
        assert(Py_REFCNT(frame_ff35498563988ae0c7f8b2daee9fa068_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_defaults_5 = mod_consts[210];
            tmp_dict_key_13 = mod_consts[38];
            tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_22 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_41;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_tuple_element_9;
                tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[50];
                tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_42 == NULL)) {
                    tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_42 == NULL));
                tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[83]);
                if (tmp_expression_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_44 == NULL));
                tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[211]);
                if (tmp_expression_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_41);

                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_45;
                    PyObject *tmp_expression_value_46;
                    PyObject *tmp_subscript_value_16;
                    PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_9);
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_46 == NULL));
                    tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[83]);
                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
                    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_16);
                    Py_DECREF(tmp_expression_value_45);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_15);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_subscript_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_41);

                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[51];
                tmp_dict_value_13 = (PyObject *)&PyBool_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[52];
                tmp_dict_value_13 = (PyObject *)&PyBool_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[84];
                tmp_dict_value_13 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_22);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__20___init__(tmp_defaults_5, tmp_annotations_22);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_23;
            tmp_annotations_23 = DICT_COPY(mod_consts[213]);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__21_get_default_prog_name(tmp_annotations_23);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_10;
            tmp_defaults_6 = mod_consts[81];
            tmp_dict_key_14 = mod_consts[215];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_48 == NULL));
            tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[83]);
            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_50 == NULL));
            tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[211]);
            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_47);

                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_51;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_19;
                PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_10);
                tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_52 == NULL)) {
                    tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_52 == NULL));
                tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[83]);
                if (tmp_expression_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_51);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_18);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_subscript_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_47);

                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_tuple_element_11;
                tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[84];
                tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_54 == NULL)) {
                    tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_54 == NULL));
                tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[211]);
                if (tmp_expression_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_55;
                    PyObject *tmp_expression_value_56;
                    PyObject *tmp_subscript_value_21;
                    PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_11);
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_56 == NULL));
                    tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[83]);
                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
                    tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_21);
                    Py_DECREF(tmp_expression_value_55);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_20);
                goto dict_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_24);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__22_make_env(tmp_defaults_6, tmp_annotations_24);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_tuple_element_12;
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[185]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_defaults_7 = mod_consts[217];
            tmp_dict_key_15 = mod_consts[59];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_59 == NULL));
            tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[83]);
            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_61 == NULL));
            tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[129]);
            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_expression_value_58);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_62;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_64;
                PyTuple_SET_ITEM0(tmp_subscript_value_23, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = (PyObject *)&PyBytes_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_23, 1, tmp_tuple_element_12);
                tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_63 == NULL)) {
                    tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_63 == NULL));
                tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[22]);
                if (tmp_expression_value_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_64 == NULL)) {
                    tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_64 == NULL));
                tmp_subscript_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[23]);
                if (tmp_subscript_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_62);

                    exception_lineno = 209;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_62);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_23, 2, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_23);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_subscript_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_subscript_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_expression_value_58);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_65;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_71;
                PyObject *tmp_expression_value_72;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_tuple_element_14;
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_15, tmp_dict_value_15);
                Py_DECREF(tmp_dict_value_15);
                assert(!(tmp_res != 0));
                tmp_dict_key_15 = mod_consts[50];
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_66 == NULL));
                tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[83]);
                if (tmp_expression_value_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_68 == NULL)) {
                    tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_68 == NULL));
                tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[211]);
                if (tmp_expression_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_65);

                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_69;
                    PyObject *tmp_expression_value_70;
                    PyObject *tmp_subscript_value_27;
                    PyTuple_SET_ITEM0(tmp_subscript_value_26, 0, tmp_tuple_element_13);
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_70 == NULL));
                    tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[83]);
                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
                    tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_27);
                    Py_DECREF(tmp_expression_value_69);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_subscript_value_26);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_subscript_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_subscript_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_65);

                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_15, tmp_dict_value_15);
                Py_DECREF(tmp_dict_value_15);
                assert(!(tmp_res != 0));
                tmp_dict_key_15 = mod_consts[92];
                tmp_dict_value_15 = (PyObject *)&PyBool_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_15, tmp_dict_value_15);
                assert(!(tmp_res != 0));
                tmp_dict_key_15 = mod_consts[84];
                tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_72 == NULL)) {
                    tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_72 == NULL));
                tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[179]);
                if (tmp_expression_value_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_74 == NULL)) {
                    tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_74 == NULL));
                tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[202]);
                if (tmp_expression_value_73 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_71);

                    exception_lineno = 212;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                {
                    PyObject *hard_module = IMPORT_HARD_IO();
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[27]);
                }
                assert(!(tmp_tuple_element_14 == NULL));
                tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_75;
                    PyObject *tmp_expression_value_76;
                    PyObject *tmp_subscript_value_30;
                    PyTuple_SET_ITEM(tmp_subscript_value_29, 0, tmp_tuple_element_14);
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_76 == NULL));
                    tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[83]);
                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 212;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    {
                        PyObject *hard_module = IMPORT_HARD_IO();
                        tmp_subscript_value_30 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[27]);
                    }
                    assert(!(tmp_subscript_value_30 == NULL));
                    tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_30);
                    Py_DECREF(tmp_expression_value_75);
                    Py_DECREF(tmp_subscript_value_30);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 212;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_71);
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_subscript_value_29);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_subscript_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_subscript_value_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_71);

                    exception_lineno = 212;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_71);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_15, tmp_dict_value_15);
                Py_DECREF(tmp_dict_value_15);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_annotations_25);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            Py_INCREF(tmp_defaults_7);


            tmp_args_element_value_9 = MAKE_FUNCTION_click$testing$$$function__23_isolation(tmp_defaults_7, tmp_annotations_25);

            frame_ff35498563988ae0c7f8b2daee9fa068_5->m_frame.f_lineno = 206;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_defaults_8 = mod_consts[218];
            tmp_dict_key_16 = mod_consts[125];
            tmp_dict_value_16 = mod_consts[219];
            tmp_annotations_26 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_77;
                PyObject *tmp_expression_value_78;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_expression_value_80;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_expression_value_83;
                PyObject *tmp_expression_value_84;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_expression_value_85;
                PyObject *tmp_expression_value_86;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_expression_value_90;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_expression_value_92;
                PyObject *tmp_expression_value_93;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_expression_value_96;
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[127];
                tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_78 == NULL)) {
                    tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_78 == NULL));
                tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[83]);
                if (tmp_expression_value_77 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_80 == NULL)) {
                    tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_80 == NULL));
                tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[129]);
                if (tmp_expression_value_79 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_77);

                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_81;
                    PyObject *tmp_expression_value_82;
                    PyObject *tmp_subscript_value_33;
                    PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_15);
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_82 == NULL));
                    tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[220]);
                    if (tmp_expression_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 352;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    tmp_subscript_value_33 = (PyObject *)&PyUnicode_Type;
                    tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_33);
                    Py_DECREF(tmp_expression_value_81);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 352;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_expression_value_77);
                Py_DECREF(tmp_expression_value_79);
                Py_DECREF(tmp_subscript_value_32);
                goto dict_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_79);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_subscript_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_77);

                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_77);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[59];
                tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_84 == NULL)) {
                    tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_84 == NULL));
                tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[83]);
                if (tmp_expression_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_86 == NULL)) {
                    tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_86 == NULL));
                tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[129]);
                if (tmp_expression_value_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_83);

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_tuple_element_16 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_expression_value_87;
                    PyObject *tmp_expression_value_88;
                    PyObject *tmp_subscript_value_36;
                    PyObject *tmp_expression_value_89;
                    PyTuple_SET_ITEM0(tmp_subscript_value_35, 0, tmp_tuple_element_16);
                    tmp_tuple_element_16 = (PyObject *)&PyBytes_Type;
                    PyTuple_SET_ITEM0(tmp_subscript_value_35, 1, tmp_tuple_element_16);
                    tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_88 == NULL)) {
                        tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_88 == NULL));
                    tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[22]);
                    if (tmp_expression_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_89 == NULL));
                    tmp_subscript_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[23]);
                    if (tmp_subscript_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_87);

                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_36);
                    Py_DECREF(tmp_expression_value_87);
                    Py_DECREF(tmp_subscript_value_36);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_35, 2, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_expression_value_83);
                Py_DECREF(tmp_expression_value_85);
                Py_DECREF(tmp_subscript_value_35);
                goto dict_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_subscript_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_85);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_subscript_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_83);

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_83);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[50];
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_91 == NULL));
                tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[83]);
                if (tmp_expression_value_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_93 == NULL)) {
                    tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_93 == NULL));
                tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[211]);
                if (tmp_expression_value_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_90);

                    exception_lineno = 354;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_tuple_element_17 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_94;
                    PyObject *tmp_expression_value_95;
                    PyObject *tmp_subscript_value_39;
                    PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_17);
                    tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_95 == NULL)) {
                        tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_95 == NULL));
                    tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[83]);
                    if (tmp_expression_value_94 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 354;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    tmp_subscript_value_39 = (PyObject *)&PyUnicode_Type;
                    tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_39);
                    Py_DECREF(tmp_expression_value_94);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 354;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_expression_value_90);
                Py_DECREF(tmp_expression_value_92);
                Py_DECREF(tmp_subscript_value_38);
                goto dict_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_92);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_subscript_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_90);

                    exception_lineno = 354;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_90);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[221];
                tmp_dict_value_16 = (PyObject *)&PyBool_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[92];
                tmp_dict_value_16 = (PyObject *)&PyBool_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[222];
                tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_96 == NULL)) {
                    tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_96 == NULL));
                tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[23]);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 357;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[84];
                tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[134]);

                if (unlikely(tmp_dict_value_16 == NULL)) {
                    tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
                }

                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 358;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_16, tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_26);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_click$testing$$$function__24_invoke(tmp_defaults_8, tmp_annotations_26);

            tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[223], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_41;
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[185]);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_defaults_9 = mod_consts[81];
            tmp_dict_key_17 = mod_consts[141];
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_99 == NULL));
            tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[83]);
            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_expression_value_101 == NULL));
            tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[129]);
            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_expression_value_98);

                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_41 = mod_consts[225];
            tmp_subscript_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_subscript_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_expression_value_98);

                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_98);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_102;
                PyObject *tmp_expression_value_103;
                PyObject *tmp_subscript_value_42;
                tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[84];
                tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_103 == NULL)) {
                    tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                assert(!(tmp_expression_value_103 == NULL));
                tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[179]);
                if (tmp_expression_value_102 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 453;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_42);
                Py_DECREF(tmp_expression_value_102);
                if (tmp_dict_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 453;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_annotations_27);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            Py_INCREF(tmp_defaults_9);


            tmp_args_element_value_10 = MAKE_FUNCTION_click$testing$$$function__25_isolated_filesystem(tmp_defaults_9, tmp_annotations_27);

            frame_ff35498563988ae0c7f8b2daee9fa068_5->m_frame.f_lineno = 450;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_click$testing$$$class__4_CliRunner_159, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ff35498563988ae0c7f8b2daee9fa068_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ff35498563988ae0c7f8b2daee9fa068_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ff35498563988ae0c7f8b2daee9fa068_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ff35498563988ae0c7f8b2daee9fa068_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_ff35498563988ae0c7f8b2daee9fa068_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_15 = (PyObject *)&PyType_Type;
            tmp_tuple_element_18 = mod_consts[201];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_click$testing$$$class__4_CliRunner_159;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
            frame_c79e98231f5a88f20dfe12532c25060d->m_frame.f_lineno = 159;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_37 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_click$testing$$$class__4_CliRunner_159);
        locals_click$testing$$$class__4_CliRunner_159 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_click$testing$$$class__4_CliRunner_159);
        locals_click$testing$$$class__4_CliRunner_159 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 159;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_click$testing, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_37);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c79e98231f5a88f20dfe12532c25060d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c79e98231f5a88f20dfe12532c25060d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c79e98231f5a88f20dfe12532c25060d, exception_lineno);
    }



    assertFrameObject(frame_c79e98231f5a88f20dfe12532c25060d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click.testing", false);

    Py_INCREF(module_click$testing);
    return module_click$testing;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$testing, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("click$testing", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
