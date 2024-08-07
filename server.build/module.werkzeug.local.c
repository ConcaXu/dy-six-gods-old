/* Generated code for Python module 'werkzeug.local'
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

/* The "module_werkzeug$local" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_werkzeug$local;
PyDictObject *moduledict_werkzeug$local;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[392];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[392];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("werkzeug.local"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 392; i++) {
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
void checkModuleConstants_werkzeug$local(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 392; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ee27411b62df613cd80005d11a82bd16;
static PyCodeObject *codeobj_bfd7fd17cf04098d7304a859fa609034;
static PyCodeObject *codeobj_6a499812ad1a0c7f061a8ba399ac43b0;
static PyCodeObject *codeobj_f5440881ad853f9d9eeed8e09dc999f0;
static PyCodeObject *codeobj_d9decf094a5982361ac5617ee6d3fb81;
static PyCodeObject *codeobj_5fefb265d894d14e83dbbffaafa767fe;
static PyCodeObject *codeobj_5a4fbe00cb12153144d88223a299d63e;
static PyCodeObject *codeobj_e5c0f9ff5b727c5f702ef5a57e66934d;
static PyCodeObject *codeobj_72399b4db6b4da84c2b6a4872ddba422;
static PyCodeObject *codeobj_a590959be0b446ec8abf990f0a11d0c0;
static PyCodeObject *codeobj_0cae4e1a25de167516cb1655c72eb292;
static PyCodeObject *codeobj_8d30744577a5277353f531c5e0f3373c;
static PyCodeObject *codeobj_91b18df344355b084171dc062241db99;
static PyCodeObject *codeobj_4a994a2b9acd1b0f86646456dd7a1616;
static PyCodeObject *codeobj_aa29b2af4d2a8935aa99ddf22474beeb;
static PyCodeObject *codeobj_e4698e385c4c74e1742c6901dc9b4322;
static PyCodeObject *codeobj_da1e0a511e8d34c8e68d3f14affc7704;
static PyCodeObject *codeobj_5811b8f1f323b7647c4e559172cfeec4;
static PyCodeObject *codeobj_4c4cd77bf8e7297bff93534e5e7092f8;
static PyCodeObject *codeobj_57c206969e27fb79853d7f8eaa3e9592;
static PyCodeObject *codeobj_18d4bb6af9fb6a71ca9df7707dd4df7e;
static PyCodeObject *codeobj_75cd88eee724db42e62db1bcf274bafd;
static PyCodeObject *codeobj_e63bf1cf2fa5361657e3e27e9ab45b32;
static PyCodeObject *codeobj_36c89b63e1c0d65f2bdc562039579443;
static PyCodeObject *codeobj_d6296545cb887aeb80d9d82bb8c986e6;
static PyCodeObject *codeobj_962d8bbf1effa6d688208adb56c50197;
static PyCodeObject *codeobj_c02a8d09ca382520e595185e9fc78794;
static PyCodeObject *codeobj_fa5029e25bafc6cc88d6ef8634599f8c;
static PyCodeObject *codeobj_8ba2123e42a43a00c3edb7ee30c7bb36;
static PyCodeObject *codeobj_2fe1edd45f15b13f0878535a6123129f;
static PyCodeObject *codeobj_b8334f211f54999b752cf1512e923b1b;
static PyCodeObject *codeobj_88585872430cd8deac332ca3ba256565;
static PyCodeObject *codeobj_dabfeacfd8bcef6257da3d7830da5c20;
static PyCodeObject *codeobj_ca334a39c13c64d0f238d4f0833c73f4;
static PyCodeObject *codeobj_28a71d7de2ff7bc32d8753624c1d113f;
static PyCodeObject *codeobj_229ebfbe70246650bec336f665f17e76;
static PyCodeObject *codeobj_607f5c41b81b237e00d3b4542f50b8d2;
static PyCodeObject *codeobj_397d18a99a4415e1ea0666b193765687;
static PyCodeObject *codeobj_c089a9dd67498403fe0a45bdfad24048;
static PyCodeObject *codeobj_de128aa069414e641e1c17e7f7f3fbf7;
static PyCodeObject *codeobj_f83c005d5ae63f41c44a44e6654abef6;
static PyCodeObject *codeobj_8654ed296fc534d78ee0edaeb40c24bc;
static PyCodeObject *codeobj_de8f010f23155eb6d1d40b1a37db2d5b;
static PyCodeObject *codeobj_75f2f620e644106d94475dbc6a34ab71;
static PyCodeObject *codeobj_fd433873e310519170f95df536afeb96;
static PyCodeObject *codeobj_478bf9f7f33e24267df5c66b5d38c053;
static PyCodeObject *codeobj_6c3a85dcc2947bf4caaff9fe12ddfdd2;
static PyCodeObject *codeobj_d838b3dfb2eb0753129d57396ed56114;
static PyCodeObject *codeobj_876c350965119974040e400570915748;
static PyCodeObject *codeobj_83bfac0d60ac80a3380f05b1d98eceb8;
static PyCodeObject *codeobj_6a8dd9002da81d5cb3c89acb76b04861;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[354]); CHECK_OBJECT(module_filename_obj);
    codeobj_ee27411b62df613cd80005d11a82bd16 = MAKE_CODE_OBJECT(module_filename_obj, 524, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[355], NULL, 1, 0, 0);
    codeobj_bfd7fd17cf04098d7304a859fa609034 = MAKE_CODE_OBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[355], NULL, 1, 0, 0);
    codeobj_6a499812ad1a0c7f061a8ba399ac43b0 = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[355], NULL, 1, 0, 0);
    codeobj_f5440881ad853f9d9eeed8e09dc999f0 = MAKE_CODE_OBJECT(module_filename_obj, 543, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[355], NULL, 1, 0, 0);
    codeobj_d9decf094a5982361ac5617ee6d3fb81 = MAKE_CODE_OBJECT(module_filename_obj, 548, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[355], NULL, 1, 0, 0);
    codeobj_5fefb265d894d14e83dbbffaafa767fe = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[355], NULL, 1, 0, 0);
    codeobj_5a4fbe00cb12153144d88223a299d63e = MAKE_CODE_OBJECT(module_filename_obj, 565, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[356], NULL, 1, 0, 0);
    codeobj_e5c0f9ff5b727c5f702ef5a57e66934d = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[357], NULL, 2, 0, 0);
    codeobj_72399b4db6b4da84c2b6a4872ddba422 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[201], mod_consts[357], NULL, 2, 0, 0);
    codeobj_a590959be0b446ec8abf990f0a11d0c0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[358], mod_consts[358], NULL, NULL, 0, 0, 0);
    codeobj_0cae4e1a25de167516cb1655c72eb292 = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_FUTURE_ANNOTATIONS, mod_consts[10], mod_consts[10], mod_consts[359], NULL, 0, 0, 0);
    codeobj_8d30744577a5277353f531c5e0f3373c = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_FUTURE_ANNOTATIONS, mod_consts[79], mod_consts[79], mod_consts[359], NULL, 0, 0, 0);
    codeobj_91b18df344355b084171dc062241db99 = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_FUTURE_ANNOTATIONS, mod_consts[187], mod_consts[187], mod_consts[359], NULL, 0, 0, 0);
    codeobj_4a994a2b9acd1b0f86646456dd7a1616 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[125], mod_consts[125], mod_consts[360], NULL, 2, 0, 0);
    codeobj_aa29b2af4d2a8935aa99ddf22474beeb = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[125], mod_consts[125], mod_consts[361], NULL, 2, 1, 0);
    codeobj_e4698e385c4c74e1742c6901dc9b4322 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[125], mod_consts[125], mod_consts[361], NULL, 2, 1, 0);
    codeobj_da1e0a511e8d34c8e68d3f14affc7704 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[135], mod_consts[362], NULL, 2, 0, 0);
    codeobj_5811b8f1f323b7647c4e559172cfeec4 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[43], mod_consts[43], mod_consts[363], NULL, 3, 0, 0);
    codeobj_4c4cd77bf8e7297bff93534e5e7092f8 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[130], mod_consts[130], mod_consts[362], NULL, 2, 0, 0);
    codeobj_57c206969e27fb79853d7f8eaa3e9592 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[364], NULL, 2, 0, 0);
    codeobj_18d4bb6af9fb6a71ca9df7707dd4df7e = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[364], NULL, 2, 0, 0);
    codeobj_75cd88eee724db42e62db1bcf274bafd = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[365], mod_consts[359], 3, 0, 0);
    codeobj_e63bf1cf2fa5361657e3e27e9ab45b32 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[366], NULL, 5, 0, 0);
    codeobj_36c89b63e1c0d65f2bdc562039579443 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[367], NULL, 3, 1, 0);
    codeobj_d6296545cb887aeb80d9d82bb8c986e6 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[368], NULL, 2, 0, 0);
    codeobj_962d8bbf1effa6d688208adb56c50197 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[121], mod_consts[121], mod_consts[355], NULL, 1, 0, 0);
    codeobj_c02a8d09ca382520e595185e9fc78794 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[0], mod_consts[0], mod_consts[355], NULL, 1, 0, 0);
    codeobj_fa5029e25bafc6cc88d6ef8634599f8c = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[0], mod_consts[0], mod_consts[355], NULL, 1, 0, 0);
    codeobj_8ba2123e42a43a00c3edb7ee30c7bb36 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[355], NULL, 1, 0, 0);
    codeobj_2fe1edd45f15b13f0878535a6123129f = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[355], NULL, 1, 0, 0);
    codeobj_b8334f211f54999b752cf1512e923b1b = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[180], mod_consts[180], mod_consts[369], NULL, 3, 0, 0);
    codeobj_88585872430cd8deac332ca3ba256565 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[370], NULL, 3, 0, 0);
    codeobj_dabfeacfd8bcef6257da3d7830da5c20 = MAKE_CODE_OBJECT(module_filename_obj, 514, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[53], mod_consts[53], mod_consts[371], mod_consts[371], 0, 0, 0);
    codeobj_ca334a39c13c64d0f238d4f0833c73f4 = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[53], mod_consts[53], mod_consts[372], mod_consts[372], 0, 0, 0);
    codeobj_28a71d7de2ff7bc32d8753624c1d113f = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[53], mod_consts[53], mod_consts[373], mod_consts[372], 0, 0, 0);
    codeobj_229ebfbe70246650bec336f665f17e76 = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[53], mod_consts[53], mod_consts[373], mod_consts[372], 0, 0, 0);
    codeobj_607f5c41b81b237e00d3b4542f50b8d2 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[71], mod_consts[71], mod_consts[374], NULL, 1, 0, 0);
    codeobj_397d18a99a4415e1ea0666b193765687 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[193], mod_consts[193], mod_consts[375], NULL, 1, 0, 0);
    codeobj_c089a9dd67498403fe0a45bdfad24048 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[376], mod_consts[377], 2, 0, 0);
    codeobj_de128aa069414e641e1c17e7f7f3fbf7 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[45], mod_consts[45], mod_consts[378], mod_consts[379], 2, 0, 0);
    codeobj_f83c005d5ae63f41c44a44e6654abef6 = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[45], mod_consts[45], mod_consts[378], mod_consts[379], 2, 0, 0);
    codeobj_8654ed296fc534d78ee0edaeb40c24bc = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[45], mod_consts[45], mod_consts[380], mod_consts[379], 2, 0, 0);
    codeobj_de8f010f23155eb6d1d40b1a37db2d5b = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[381], NULL, 1, 0, 0);
    codeobj_75f2f620e644106d94475dbc6a34ab71 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[60], mod_consts[60], mod_consts[382], mod_consts[383], 2, 0, 0);
    codeobj_fd433873e310519170f95df536afeb96 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[37], mod_consts[37], mod_consts[384], NULL, 2, 0, 0);
    codeobj_478bf9f7f33e24267df5c66b5d38c053 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[168], mod_consts[168], mod_consts[385], NULL, 2, 0, 0);
    codeobj_6c3a85dcc2947bf4caaff9fe12ddfdd2 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[152], mod_consts[152], mod_consts[386], NULL, 1, 0, 0);
    codeobj_d838b3dfb2eb0753129d57396ed56114 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[387], NULL, 2, 0, 0);
    codeobj_876c350965119974040e400570915748 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[64], mod_consts[64], mod_consts[388], mod_consts[389], 2, 0, 0);
    codeobj_83bfac0d60ac80a3380f05b1d98eceb8 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[390], NULL, 1, 0, 0);
    codeobj_6a8dd9002da81d5cb3c89acb76b04861 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[85], mod_consts[85], mod_consts[391], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__10___release_local__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__11_push(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__12_pop(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__13_top(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__14___call__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__15___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__16_cleanup(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__17_make_middleware(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__17_make_middleware$$$function__1_application(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__18_middleware(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__19___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__1_release_local(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__20___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__20___init__$$$function__1_bind_f(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__20___init__$$$function__2_bind_f(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__21___set_name__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__22___get__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__23___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__24___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__25___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__25___init__$$$function__1_bind_f(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__25___init__$$$function__1_bind_f$$$function__1_i_op(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__26__l_to_r_op(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__26__l_to_r_op$$$function__1_r_op(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__27__identity(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__1__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__2__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__3__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__4__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__29_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__2___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__30_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__31_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__32_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__33_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__34_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__35_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__36_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__37_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__3___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__4___call__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__5___release_local__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__6___getattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__7___setattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__8___delattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__9___init__(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_werkzeug$local$$$function__1_release_local(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_local = python_pars[0];
    struct Nuitka_FrameObject *frame_83bfac0d60ac80a3380f05b1d98eceb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83bfac0d60ac80a3380f05b1d98eceb8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83bfac0d60ac80a3380f05b1d98eceb8)) {
        Py_XDECREF(cache_frame_83bfac0d60ac80a3380f05b1d98eceb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83bfac0d60ac80a3380f05b1d98eceb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83bfac0d60ac80a3380f05b1d98eceb8 = MAKE_FUNCTION_FRAME(codeobj_83bfac0d60ac80a3380f05b1d98eceb8, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83bfac0d60ac80a3380f05b1d98eceb8->m_type_description == NULL);
    frame_83bfac0d60ac80a3380f05b1d98eceb8 = cache_frame_83bfac0d60ac80a3380f05b1d98eceb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83bfac0d60ac80a3380f05b1d98eceb8);
    assert(Py_REFCNT(frame_83bfac0d60ac80a3380f05b1d98eceb8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_local);
        tmp_called_instance_1 = par_local;
        frame_83bfac0d60ac80a3380f05b1d98eceb8->m_frame.f_lineno = 32;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83bfac0d60ac80a3380f05b1d98eceb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83bfac0d60ac80a3380f05b1d98eceb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83bfac0d60ac80a3380f05b1d98eceb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83bfac0d60ac80a3380f05b1d98eceb8,
        type_description_1,
        par_local
    );


    // Release cached frame if used for exception.
    if (frame_83bfac0d60ac80a3380f05b1d98eceb8 == cache_frame_83bfac0d60ac80a3380f05b1d98eceb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83bfac0d60ac80a3380f05b1d98eceb8);
        cache_frame_83bfac0d60ac80a3380f05b1d98eceb8 = NULL;
    }

    assertFrameObject(frame_83bfac0d60ac80a3380f05b1d98eceb8);

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
    CHECK_OBJECT(par_local);
    Py_DECREF(par_local);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_local);
    Py_DECREF(par_local);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context_var = python_pars[1];
    struct Nuitka_FrameObject *frame_57c206969e27fb79853d7f8eaa3e9592;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_57c206969e27fb79853d7f8eaa3e9592 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_57c206969e27fb79853d7f8eaa3e9592)) {
        Py_XDECREF(cache_frame_57c206969e27fb79853d7f8eaa3e9592);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57c206969e27fb79853d7f8eaa3e9592 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57c206969e27fb79853d7f8eaa3e9592 = MAKE_FUNCTION_FRAME(codeobj_57c206969e27fb79853d7f8eaa3e9592, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57c206969e27fb79853d7f8eaa3e9592->m_type_description == NULL);
    frame_57c206969e27fb79853d7f8eaa3e9592 = cache_frame_57c206969e27fb79853d7f8eaa3e9592;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_57c206969e27fb79853d7f8eaa3e9592);
    assert(Py_REFCNT(frame_57c206969e27fb79853d7f8eaa3e9592) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_context_var);
        tmp_cmp_expr_left_1 = par_context_var;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[3];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_id_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_id_arg_1 = par_self;
            tmp_format_value_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
            assert(!(tmp_format_value_1 == NULL));
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_57c206969e27fb79853d7f8eaa3e9592->m_frame.f_lineno = 60;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_context_var;
            assert(old != NULL);
            par_context_var = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        tmp_args_element_value_3 = mod_consts[7];
        CHECK_OBJECT(par_context_var);
        tmp_args_element_value_4 = par_context_var;
        frame_57c206969e27fb79853d7f8eaa3e9592->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57c206969e27fb79853d7f8eaa3e9592, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57c206969e27fb79853d7f8eaa3e9592->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57c206969e27fb79853d7f8eaa3e9592, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57c206969e27fb79853d7f8eaa3e9592,
        type_description_1,
        par_self,
        par_context_var
    );


    // Release cached frame if used for exception.
    if (frame_57c206969e27fb79853d7f8eaa3e9592 == cache_frame_57c206969e27fb79853d7f8eaa3e9592) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57c206969e27fb79853d7f8eaa3e9592);
        cache_frame_57c206969e27fb79853d7f8eaa3e9592 = NULL;
    }

    assertFrameObject(frame_57c206969e27fb79853d7f8eaa3e9592);

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
    CHECK_OBJECT(par_context_var);
    Py_DECREF(par_context_var);
    par_context_var = NULL;
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

    Py_XDECREF(par_context_var);
    par_context_var = NULL;
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


static PyObject *impl_werkzeug$local$$$function__3___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_962d8bbf1effa6d688208adb56c50197;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_962d8bbf1effa6d688208adb56c50197 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_962d8bbf1effa6d688208adb56c50197)) {
        Py_XDECREF(cache_frame_962d8bbf1effa6d688208adb56c50197);

#if _DEBUG_REFCOUNTS
        if (cache_frame_962d8bbf1effa6d688208adb56c50197 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_962d8bbf1effa6d688208adb56c50197 = MAKE_FUNCTION_FRAME(codeobj_962d8bbf1effa6d688208adb56c50197, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_962d8bbf1effa6d688208adb56c50197->m_type_description == NULL);
    frame_962d8bbf1effa6d688208adb56c50197 = cache_frame_962d8bbf1effa6d688208adb56c50197;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_962d8bbf1effa6d688208adb56c50197);
    assert(Py_REFCNT(frame_962d8bbf1effa6d688208adb56c50197) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_DICT_EMPTY();
        frame_962d8bbf1effa6d688208adb56c50197->m_frame.f_lineno = 65;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_962d8bbf1effa6d688208adb56c50197->m_frame.f_lineno = 65;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_962d8bbf1effa6d688208adb56c50197, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_962d8bbf1effa6d688208adb56c50197->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_962d8bbf1effa6d688208adb56c50197, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_962d8bbf1effa6d688208adb56c50197,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_962d8bbf1effa6d688208adb56c50197 == cache_frame_962d8bbf1effa6d688208adb56c50197) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_962d8bbf1effa6d688208adb56c50197);
        cache_frame_962d8bbf1effa6d688208adb56c50197 = NULL;
    }

    assertFrameObject(frame_962d8bbf1effa6d688208adb56c50197);

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


static PyObject *impl_werkzeug$local$$$function__4___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_unbound_message = python_pars[2];
    struct Nuitka_FrameObject *frame_aa29b2af4d2a8935aa99ddf22474beeb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa29b2af4d2a8935aa99ddf22474beeb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa29b2af4d2a8935aa99ddf22474beeb)) {
        Py_XDECREF(cache_frame_aa29b2af4d2a8935aa99ddf22474beeb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa29b2af4d2a8935aa99ddf22474beeb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa29b2af4d2a8935aa99ddf22474beeb = MAKE_FUNCTION_FRAME(codeobj_aa29b2af4d2a8935aa99ddf22474beeb, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa29b2af4d2a8935aa99ddf22474beeb->m_type_description == NULL);
    frame_aa29b2af4d2a8935aa99ddf22474beeb = cache_frame_aa29b2af4d2a8935aa99ddf22474beeb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aa29b2af4d2a8935aa99ddf22474beeb);
    assert(Py_REFCNT(frame_aa29b2af4d2a8935aa99ddf22474beeb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        CHECK_OBJECT(par_unbound_message);
        tmp_kw_call_dict_value_0_1 = par_unbound_message;
        frame_aa29b2af4d2a8935aa99ddf22474beeb->m_frame.f_lineno = 75;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[11]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_aa29b2af4d2a8935aa99ddf22474beeb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa29b2af4d2a8935aa99ddf22474beeb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa29b2af4d2a8935aa99ddf22474beeb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa29b2af4d2a8935aa99ddf22474beeb,
        type_description_1,
        par_self,
        par_name,
        par_unbound_message
    );


    // Release cached frame if used for exception.
    if (frame_aa29b2af4d2a8935aa99ddf22474beeb == cache_frame_aa29b2af4d2a8935aa99ddf22474beeb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa29b2af4d2a8935aa99ddf22474beeb);
        cache_frame_aa29b2af4d2a8935aa99ddf22474beeb = NULL;
    }

    assertFrameObject(frame_aa29b2af4d2a8935aa99ddf22474beeb);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_unbound_message);
    Py_DECREF(par_unbound_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_unbound_message);
    Py_DECREF(par_unbound_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__5___release_local__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c02a8d09ca382520e595185e9fc78794;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c02a8d09ca382520e595185e9fc78794 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c02a8d09ca382520e595185e9fc78794)) {
        Py_XDECREF(cache_frame_c02a8d09ca382520e595185e9fc78794);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c02a8d09ca382520e595185e9fc78794 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c02a8d09ca382520e595185e9fc78794 = MAKE_FUNCTION_FRAME(codeobj_c02a8d09ca382520e595185e9fc78794, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c02a8d09ca382520e595185e9fc78794->m_type_description == NULL);
    frame_c02a8d09ca382520e595185e9fc78794 = cache_frame_c02a8d09ca382520e595185e9fc78794;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c02a8d09ca382520e595185e9fc78794);
    assert(Py_REFCNT(frame_c02a8d09ca382520e595185e9fc78794) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_DICT_EMPTY();
        frame_c02a8d09ca382520e595185e9fc78794->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_call_arg_element_1);
        Py_DECREF(tmp_called_instance_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c02a8d09ca382520e595185e9fc78794, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c02a8d09ca382520e595185e9fc78794->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c02a8d09ca382520e595185e9fc78794, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c02a8d09ca382520e595185e9fc78794,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c02a8d09ca382520e595185e9fc78794 == cache_frame_c02a8d09ca382520e595185e9fc78794) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c02a8d09ca382520e595185e9fc78794);
        cache_frame_c02a8d09ca382520e595185e9fc78794 = NULL;
    }

    assertFrameObject(frame_c02a8d09ca382520e595185e9fc78794);

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


static PyObject *impl_werkzeug$local$$$function__6___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_values = NULL;
    struct Nuitka_FrameObject *frame_4c4cd77bf8e7297bff93534e5e7092f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4c4cd77bf8e7297bff93534e5e7092f8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c4cd77bf8e7297bff93534e5e7092f8)) {
        Py_XDECREF(cache_frame_4c4cd77bf8e7297bff93534e5e7092f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c4cd77bf8e7297bff93534e5e7092f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c4cd77bf8e7297bff93534e5e7092f8 = MAKE_FUNCTION_FRAME(codeobj_4c4cd77bf8e7297bff93534e5e7092f8, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c4cd77bf8e7297bff93534e5e7092f8->m_type_description == NULL);
    frame_4c4cd77bf8e7297bff93534e5e7092f8 = cache_frame_4c4cd77bf8e7297bff93534e5e7092f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c4cd77bf8e7297bff93534e5e7092f8);
    assert(Py_REFCNT(frame_4c4cd77bf8e7297bff93534e5e7092f8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_DICT_EMPTY();
        frame_4c4cd77bf8e7297bff93534e5e7092f8->m_frame.f_lineno = 81;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        CHECK_OBJECT(var_values);
        tmp_cmp_expr_right_1 = var_values;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_values);
        tmp_expression_value_3 = var_values;
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(par_name);
        tmp_make_exception_arg_1 = par_name;
        frame_4c4cd77bf8e7297bff93534e5e7092f8->m_frame.f_lineno = 86;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 86;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_4c4cd77bf8e7297bff93534e5e7092f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c4cd77bf8e7297bff93534e5e7092f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c4cd77bf8e7297bff93534e5e7092f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c4cd77bf8e7297bff93534e5e7092f8,
        type_description_1,
        par_self,
        par_name,
        var_values
    );


    // Release cached frame if used for exception.
    if (frame_4c4cd77bf8e7297bff93534e5e7092f8 == cache_frame_4c4cd77bf8e7297bff93534e5e7092f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c4cd77bf8e7297bff93534e5e7092f8);
        cache_frame_4c4cd77bf8e7297bff93534e5e7092f8 = NULL;
    }

    assertFrameObject(frame_4c4cd77bf8e7297bff93534e5e7092f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
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

    Py_XDECREF(var_values);
    var_values = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__7___setattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_values = NULL;
    struct Nuitka_FrameObject *frame_88585872430cd8deac332ca3ba256565;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_88585872430cd8deac332ca3ba256565 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88585872430cd8deac332ca3ba256565)) {
        Py_XDECREF(cache_frame_88585872430cd8deac332ca3ba256565);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88585872430cd8deac332ca3ba256565 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88585872430cd8deac332ca3ba256565 = MAKE_FUNCTION_FRAME(codeobj_88585872430cd8deac332ca3ba256565, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88585872430cd8deac332ca3ba256565->m_type_description == NULL);
    frame_88585872430cd8deac332ca3ba256565 = cache_frame_88585872430cd8deac332ca3ba256565;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88585872430cd8deac332ca3ba256565);
    assert(Py_REFCNT(frame_88585872430cd8deac332ca3ba256565) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_DICT_EMPTY();
        frame_88585872430cd8deac332ca3ba256565->m_frame.f_lineno = 89;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_88585872430cd8deac332ca3ba256565->m_frame.f_lineno = 89;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(var_values);
        tmp_ass_subscribed_1 = var_values;
        CHECK_OBJECT(par_name);
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_1 = var_values;
        frame_88585872430cd8deac332ca3ba256565->m_frame.f_lineno = 91;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88585872430cd8deac332ca3ba256565, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88585872430cd8deac332ca3ba256565->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88585872430cd8deac332ca3ba256565, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88585872430cd8deac332ca3ba256565,
        type_description_1,
        par_self,
        par_name,
        par_value,
        var_values
    );


    // Release cached frame if used for exception.
    if (frame_88585872430cd8deac332ca3ba256565 == cache_frame_88585872430cd8deac332ca3ba256565) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88585872430cd8deac332ca3ba256565);
        cache_frame_88585872430cd8deac332ca3ba256565 = NULL;
    }

    assertFrameObject(frame_88585872430cd8deac332ca3ba256565);

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
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
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

    Py_XDECREF(var_values);
    var_values = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__8___delattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_values = NULL;
    struct Nuitka_FrameObject *frame_da1e0a511e8d34c8e68d3f14affc7704;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_da1e0a511e8d34c8e68d3f14affc7704 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da1e0a511e8d34c8e68d3f14affc7704)) {
        Py_XDECREF(cache_frame_da1e0a511e8d34c8e68d3f14affc7704);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da1e0a511e8d34c8e68d3f14affc7704 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da1e0a511e8d34c8e68d3f14affc7704 = MAKE_FUNCTION_FRAME(codeobj_da1e0a511e8d34c8e68d3f14affc7704, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da1e0a511e8d34c8e68d3f14affc7704->m_type_description == NULL);
    frame_da1e0a511e8d34c8e68d3f14affc7704 = cache_frame_da1e0a511e8d34c8e68d3f14affc7704;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da1e0a511e8d34c8e68d3f14affc7704);
    assert(Py_REFCNT(frame_da1e0a511e8d34c8e68d3f14affc7704) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_DICT_EMPTY();
        frame_da1e0a511e8d34c8e68d3f14affc7704->m_frame.f_lineno = 94;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        CHECK_OBJECT(var_values);
        tmp_cmp_expr_right_1 = var_values;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_values);
        tmp_expression_value_3 = var_values;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_da1e0a511e8d34c8e68d3f14affc7704->m_frame.f_lineno = 97;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_values;
            assert(old != NULL);
            var_values = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(var_values);
        tmp_delsubscr_target_1 = var_values;
        CHECK_OBJECT(par_name);
        tmp_delsubscr_subscript_1 = par_name;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_1 = var_values;
        frame_da1e0a511e8d34c8e68d3f14affc7704->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(par_name);
        tmp_make_exception_arg_1 = par_name;
        frame_da1e0a511e8d34c8e68d3f14affc7704->m_frame.f_lineno = 101;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 101;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da1e0a511e8d34c8e68d3f14affc7704, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da1e0a511e8d34c8e68d3f14affc7704->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da1e0a511e8d34c8e68d3f14affc7704, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da1e0a511e8d34c8e68d3f14affc7704,
        type_description_1,
        par_self,
        par_name,
        var_values
    );


    // Release cached frame if used for exception.
    if (frame_da1e0a511e8d34c8e68d3f14affc7704 == cache_frame_da1e0a511e8d34c8e68d3f14affc7704) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da1e0a511e8d34c8e68d3f14affc7704);
        cache_frame_da1e0a511e8d34c8e68d3f14affc7704 = NULL;
    }

    assertFrameObject(frame_da1e0a511e8d34c8e68d3f14affc7704);

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
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
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

    Py_XDECREF(var_values);
    var_values = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context_var = python_pars[1];
    struct Nuitka_FrameObject *frame_18d4bb6af9fb6a71ca9df7707dd4df7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e)) {
        Py_XDECREF(cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e = MAKE_FUNCTION_FRAME(codeobj_18d4bb6af9fb6a71ca9df7707dd4df7e, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e->m_type_description == NULL);
    frame_18d4bb6af9fb6a71ca9df7707dd4df7e = cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18d4bb6af9fb6a71ca9df7707dd4df7e);
    assert(Py_REFCNT(frame_18d4bb6af9fb6a71ca9df7707dd4df7e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_context_var);
        tmp_cmp_expr_left_1 = par_context_var;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[15];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_id_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_id_arg_1 = par_self;
            tmp_format_value_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
            assert(!(tmp_format_value_1 == NULL));
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_18d4bb6af9fb6a71ca9df7707dd4df7e->m_frame.f_lineno = 131;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_context_var;
            assert(old != NULL);
            par_context_var = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_context_var);
        tmp_assattr_value_1 = par_context_var;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18d4bb6af9fb6a71ca9df7707dd4df7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18d4bb6af9fb6a71ca9df7707dd4df7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18d4bb6af9fb6a71ca9df7707dd4df7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18d4bb6af9fb6a71ca9df7707dd4df7e,
        type_description_1,
        par_self,
        par_context_var
    );


    // Release cached frame if used for exception.
    if (frame_18d4bb6af9fb6a71ca9df7707dd4df7e == cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e);
        cache_frame_18d4bb6af9fb6a71ca9df7707dd4df7e = NULL;
    }

    assertFrameObject(frame_18d4bb6af9fb6a71ca9df7707dd4df7e);

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
    CHECK_OBJECT(par_context_var);
    Py_DECREF(par_context_var);
    par_context_var = NULL;
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

    Py_XDECREF(par_context_var);
    par_context_var = NULL;
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


static PyObject *impl_werkzeug$local$$$function__10___release_local__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fa5029e25bafc6cc88d6ef8634599f8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa5029e25bafc6cc88d6ef8634599f8c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa5029e25bafc6cc88d6ef8634599f8c)) {
        Py_XDECREF(cache_frame_fa5029e25bafc6cc88d6ef8634599f8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa5029e25bafc6cc88d6ef8634599f8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa5029e25bafc6cc88d6ef8634599f8c = MAKE_FUNCTION_FRAME(codeobj_fa5029e25bafc6cc88d6ef8634599f8c, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa5029e25bafc6cc88d6ef8634599f8c->m_type_description == NULL);
    frame_fa5029e25bafc6cc88d6ef8634599f8c = cache_frame_fa5029e25bafc6cc88d6ef8634599f8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa5029e25bafc6cc88d6ef8634599f8c);
    assert(Py_REFCNT(frame_fa5029e25bafc6cc88d6ef8634599f8c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_fa5029e25bafc6cc88d6ef8634599f8c->m_frame.f_lineno = 136;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_call_arg_element_1);
        Py_DECREF(tmp_called_instance_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa5029e25bafc6cc88d6ef8634599f8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa5029e25bafc6cc88d6ef8634599f8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa5029e25bafc6cc88d6ef8634599f8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa5029e25bafc6cc88d6ef8634599f8c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fa5029e25bafc6cc88d6ef8634599f8c == cache_frame_fa5029e25bafc6cc88d6ef8634599f8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa5029e25bafc6cc88d6ef8634599f8c);
        cache_frame_fa5029e25bafc6cc88d6ef8634599f8c = NULL;
    }

    assertFrameObject(frame_fa5029e25bafc6cc88d6ef8634599f8c);

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


static PyObject *impl_werkzeug$local$$$function__11_push(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *var_stack = NULL;
    struct Nuitka_FrameObject *frame_d838b3dfb2eb0753129d57396ed56114;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d838b3dfb2eb0753129d57396ed56114 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d838b3dfb2eb0753129d57396ed56114)) {
        Py_XDECREF(cache_frame_d838b3dfb2eb0753129d57396ed56114);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d838b3dfb2eb0753129d57396ed56114 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d838b3dfb2eb0753129d57396ed56114 = MAKE_FUNCTION_FRAME(codeobj_d838b3dfb2eb0753129d57396ed56114, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d838b3dfb2eb0753129d57396ed56114->m_type_description == NULL);
    frame_d838b3dfb2eb0753129d57396ed56114 = cache_frame_d838b3dfb2eb0753129d57396ed56114;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d838b3dfb2eb0753129d57396ed56114);
    assert(Py_REFCNT(frame_d838b3dfb2eb0753129d57396ed56114) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_d838b3dfb2eb0753129d57396ed56114->m_frame.f_lineno = 140;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d838b3dfb2eb0753129d57396ed56114->m_frame.f_lineno = 140;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_stack == NULL);
        var_stack = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_stack);
        tmp_expression_value_4 = var_stack;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        frame_d838b3dfb2eb0753129d57396ed56114->m_frame.f_lineno = 141;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_stack);
        tmp_args_element_value_2 = var_stack;
        frame_d838b3dfb2eb0753129d57396ed56114->m_frame.f_lineno = 142;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d838b3dfb2eb0753129d57396ed56114, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d838b3dfb2eb0753129d57396ed56114->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d838b3dfb2eb0753129d57396ed56114, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d838b3dfb2eb0753129d57396ed56114,
        type_description_1,
        par_self,
        par_obj,
        var_stack
    );


    // Release cached frame if used for exception.
    if (frame_d838b3dfb2eb0753129d57396ed56114 == cache_frame_d838b3dfb2eb0753129d57396ed56114) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d838b3dfb2eb0753129d57396ed56114);
        cache_frame_d838b3dfb2eb0753129d57396ed56114 = NULL;
    }

    assertFrameObject(frame_d838b3dfb2eb0753129d57396ed56114);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_stack);
    tmp_return_value = var_stack;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_stack);
    Py_DECREF(var_stack);
    var_stack = NULL;
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

    Py_XDECREF(var_stack);
    var_stack = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__12_pop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_stack = NULL;
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_6c3a85dcc2947bf4caaff9fe12ddfdd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2)) {
        Py_XDECREF(cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2 = MAKE_FUNCTION_FRAME(codeobj_6c3a85dcc2947bf4caaff9fe12ddfdd2, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2->m_type_description == NULL);
    frame_6c3a85dcc2947bf4caaff9fe12ddfdd2 = cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c3a85dcc2947bf4caaff9fe12ddfdd2);
    assert(Py_REFCNT(frame_6c3a85dcc2947bf4caaff9fe12ddfdd2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_6c3a85dcc2947bf4caaff9fe12ddfdd2->m_frame.f_lineno = 149;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_stack == NULL);
        var_stack = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_stack);
        tmp_len_arg_1 = var_stack;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_stack);
        tmp_expression_value_3 = var_stack;
        tmp_subscript_value_1 = mod_consts[19];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, -1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_stack);
        tmp_expression_value_6 = var_stack;
        tmp_subscript_value_2 = mod_consts[20];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6c3a85dcc2947bf4caaff9fe12ddfdd2->m_frame.f_lineno = 155;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_6c3a85dcc2947bf4caaff9fe12ddfdd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c3a85dcc2947bf4caaff9fe12ddfdd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c3a85dcc2947bf4caaff9fe12ddfdd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c3a85dcc2947bf4caaff9fe12ddfdd2,
        type_description_1,
        par_self,
        var_stack,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_6c3a85dcc2947bf4caaff9fe12ddfdd2 == cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2);
        cache_frame_6c3a85dcc2947bf4caaff9fe12ddfdd2 = NULL;
    }

    assertFrameObject(frame_6c3a85dcc2947bf4caaff9fe12ddfdd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_stack);
    Py_DECREF(var_stack);
    var_stack = NULL;
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

    Py_XDECREF(var_stack);
    var_stack = NULL;
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


static PyObject *impl_werkzeug$local$$$function__13_top(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_stack = NULL;
    struct Nuitka_FrameObject *frame_6a8dd9002da81d5cb3c89acb76b04861;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a8dd9002da81d5cb3c89acb76b04861 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6a8dd9002da81d5cb3c89acb76b04861)) {
        Py_XDECREF(cache_frame_6a8dd9002da81d5cb3c89acb76b04861);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a8dd9002da81d5cb3c89acb76b04861 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a8dd9002da81d5cb3c89acb76b04861 = MAKE_FUNCTION_FRAME(codeobj_6a8dd9002da81d5cb3c89acb76b04861, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a8dd9002da81d5cb3c89acb76b04861->m_type_description == NULL);
    frame_6a8dd9002da81d5cb3c89acb76b04861 = cache_frame_6a8dd9002da81d5cb3c89acb76b04861;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a8dd9002da81d5cb3c89acb76b04861);
    assert(Py_REFCNT(frame_6a8dd9002da81d5cb3c89acb76b04861) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST_EMPTY(0);
        frame_6a8dd9002da81d5cb3c89acb76b04861->m_frame.f_lineno = 163;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_stack == NULL);
        var_stack = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_stack);
        tmp_len_arg_1 = var_stack;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_stack);
        tmp_expression_value_3 = var_stack;
        tmp_subscript_value_1 = mod_consts[19];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, -1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_6a8dd9002da81d5cb3c89acb76b04861, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a8dd9002da81d5cb3c89acb76b04861->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a8dd9002da81d5cb3c89acb76b04861, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a8dd9002da81d5cb3c89acb76b04861,
        type_description_1,
        par_self,
        var_stack
    );


    // Release cached frame if used for exception.
    if (frame_6a8dd9002da81d5cb3c89acb76b04861 == cache_frame_6a8dd9002da81d5cb3c89acb76b04861) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a8dd9002da81d5cb3c89acb76b04861);
        cache_frame_6a8dd9002da81d5cb3c89acb76b04861 = NULL;
    }

    assertFrameObject(frame_6a8dd9002da81d5cb3c89acb76b04861);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_stack);
    Py_DECREF(var_stack);
    var_stack = NULL;
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

    Py_XDECREF(var_stack);
    var_stack = NULL;
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


static PyObject *impl_werkzeug$local$$$function__14___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_unbound_message = python_pars[2];
    struct Nuitka_FrameObject *frame_e4698e385c4c74e1742c6901dc9b4322;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4698e385c4c74e1742c6901dc9b4322 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4698e385c4c74e1742c6901dc9b4322)) {
        Py_XDECREF(cache_frame_e4698e385c4c74e1742c6901dc9b4322);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4698e385c4c74e1742c6901dc9b4322 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4698e385c4c74e1742c6901dc9b4322 = MAKE_FUNCTION_FRAME(codeobj_e4698e385c4c74e1742c6901dc9b4322, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4698e385c4c74e1742c6901dc9b4322->m_type_description == NULL);
    frame_e4698e385c4c74e1742c6901dc9b4322 = cache_frame_e4698e385c4c74e1742c6901dc9b4322;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4698e385c4c74e1742c6901dc9b4322);
    assert(Py_REFCNT(frame_e4698e385c4c74e1742c6901dc9b4322) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        CHECK_OBJECT(par_unbound_message);
        tmp_kw_call_dict_value_0_1 = par_unbound_message;
        frame_e4698e385c4c74e1742c6901dc9b4322->m_frame.f_lineno = 181;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[11]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
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
        exception_tb = MAKE_TRACEBACK(frame_e4698e385c4c74e1742c6901dc9b4322, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4698e385c4c74e1742c6901dc9b4322->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4698e385c4c74e1742c6901dc9b4322, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4698e385c4c74e1742c6901dc9b4322,
        type_description_1,
        par_self,
        par_name,
        par_unbound_message
    );


    // Release cached frame if used for exception.
    if (frame_e4698e385c4c74e1742c6901dc9b4322 == cache_frame_e4698e385c4c74e1742c6901dc9b4322) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4698e385c4c74e1742c6901dc9b4322);
        cache_frame_e4698e385c4c74e1742c6901dc9b4322 = NULL;
    }

    assertFrameObject(frame_e4698e385c4c74e1742c6901dc9b4322);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_unbound_message);
    Py_DECREF(par_unbound_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_unbound_message);
    Py_DECREF(par_unbound_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_locals = python_pars[1];
    struct Nuitka_FrameObject *frame_d6296545cb887aeb80d9d82bb8c986e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d6296545cb887aeb80d9d82bb8c986e6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6296545cb887aeb80d9d82bb8c986e6)) {
        Py_XDECREF(cache_frame_d6296545cb887aeb80d9d82bb8c986e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6296545cb887aeb80d9d82bb8c986e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6296545cb887aeb80d9d82bb8c986e6 = MAKE_FUNCTION_FRAME(codeobj_d6296545cb887aeb80d9d82bb8c986e6, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6296545cb887aeb80d9d82bb8c986e6->m_type_description == NULL);
    frame_d6296545cb887aeb80d9d82bb8c986e6 = cache_frame_d6296545cb887aeb80d9d82bb8c986e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6296545cb887aeb80d9d82bb8c986e6);
    assert(Py_REFCNT(frame_d6296545cb887aeb80d9d82bb8c986e6) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_locals);
        tmp_cmp_expr_left_1 = par_locals;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_locals);
        tmp_isinstance_inst_1 = par_locals;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_locals);
        tmp_list_element_1 = par_locals;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_2, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_locals);
        tmp_list_arg_1 = par_locals;
        tmp_assattr_value_3 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[24], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6296545cb887aeb80d9d82bb8c986e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6296545cb887aeb80d9d82bb8c986e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6296545cb887aeb80d9d82bb8c986e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6296545cb887aeb80d9d82bb8c986e6,
        type_description_1,
        par_self,
        par_locals
    );


    // Release cached frame if used for exception.
    if (frame_d6296545cb887aeb80d9d82bb8c986e6 == cache_frame_d6296545cb887aeb80d9d82bb8c986e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6296545cb887aeb80d9d82bb8c986e6);
        cache_frame_d6296545cb887aeb80d9d82bb8c986e6 = NULL;
    }

    assertFrameObject(frame_d6296545cb887aeb80d9d82bb8c986e6);

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
    CHECK_OBJECT(par_locals);
    Py_DECREF(par_locals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_locals);
    Py_DECREF(par_locals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__16_cleanup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_local = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_de8f010f23155eb6d1d40b1a37db2d5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_de8f010f23155eb6d1d40b1a37db2d5b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_de8f010f23155eb6d1d40b1a37db2d5b)) {
        Py_XDECREF(cache_frame_de8f010f23155eb6d1d40b1a37db2d5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de8f010f23155eb6d1d40b1a37db2d5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de8f010f23155eb6d1d40b1a37db2d5b = MAKE_FUNCTION_FRAME(codeobj_de8f010f23155eb6d1d40b1a37db2d5b, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de8f010f23155eb6d1d40b1a37db2d5b->m_type_description == NULL);
    frame_de8f010f23155eb6d1d40b1a37db2d5b = cache_frame_de8f010f23155eb6d1d40b1a37db2d5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de8f010f23155eb6d1d40b1a37db2d5b);
    assert(Py_REFCNT(frame_de8f010f23155eb6d1d40b1a37db2d5b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 221;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_local;
            var_local = tmp_assign_source_3;
            Py_INCREF(var_local);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_local);
        tmp_args_element_value_1 = var_local;
        frame_de8f010f23155eb6d1d40b1a37db2d5b->m_frame.f_lineno = 222;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 221;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de8f010f23155eb6d1d40b1a37db2d5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de8f010f23155eb6d1d40b1a37db2d5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de8f010f23155eb6d1d40b1a37db2d5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de8f010f23155eb6d1d40b1a37db2d5b,
        type_description_1,
        par_self,
        var_local
    );


    // Release cached frame if used for exception.
    if (frame_de8f010f23155eb6d1d40b1a37db2d5b == cache_frame_de8f010f23155eb6d1d40b1a37db2d5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de8f010f23155eb6d1d40b1a37db2d5b);
        cache_frame_de8f010f23155eb6d1d40b1a37db2d5b = NULL;
    }

    assertFrameObject(frame_de8f010f23155eb6d1d40b1a37db2d5b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_local);
    var_local = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_local);
    var_local = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_werkzeug$local$$$function__17_make_middleware(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_app = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_application = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_annotations_1 = DICT_COPY(mod_consts[28]);

        tmp_closure_1[0] = par_app;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$local$$$function__17_make_middleware$$$function__1_application(tmp_annotations_1, tmp_closure_1);

        assert(var_application == NULL);
        var_application = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_application);
    tmp_return_value = var_application;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_application);
    Py_DECREF(var_application);
    var_application = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__17_make_middleware$$$function__1_application(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_environ = python_pars[0];
    PyObject *par_start_response = python_pars[1];
    struct Nuitka_FrameObject *frame_c089a9dd67498403fe0a45bdfad24048;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c089a9dd67498403fe0a45bdfad24048 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c089a9dd67498403fe0a45bdfad24048)) {
        Py_XDECREF(cache_frame_c089a9dd67498403fe0a45bdfad24048);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c089a9dd67498403fe0a45bdfad24048 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c089a9dd67498403fe0a45bdfad24048 = MAKE_FUNCTION_FRAME(codeobj_c089a9dd67498403fe0a45bdfad24048, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c089a9dd67498403fe0a45bdfad24048->m_type_description == NULL);
    frame_c089a9dd67498403fe0a45bdfad24048 = cache_frame_c089a9dd67498403fe0a45bdfad24048;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c089a9dd67498403fe0a45bdfad24048);
    assert(Py_REFCNT(frame_c089a9dd67498403fe0a45bdfad24048) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_environ);
        tmp_args_element_value_2 = par_environ;
        CHECK_OBJECT(par_start_response);
        tmp_args_element_value_3 = par_start_response;
        frame_c089a9dd67498403fe0a45bdfad24048->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 232;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_c089a9dd67498403fe0a45bdfad24048->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_c089a9dd67498403fe0a45bdfad24048, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c089a9dd67498403fe0a45bdfad24048->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c089a9dd67498403fe0a45bdfad24048, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c089a9dd67498403fe0a45bdfad24048,
        type_description_1,
        par_environ,
        par_start_response,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_c089a9dd67498403fe0a45bdfad24048 == cache_frame_c089a9dd67498403fe0a45bdfad24048) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c089a9dd67498403fe0a45bdfad24048);
        cache_frame_c089a9dd67498403fe0a45bdfad24048 = NULL;
    }

    assertFrameObject(frame_c089a9dd67498403fe0a45bdfad24048);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_environ);
    Py_DECREF(par_environ);
    CHECK_OBJECT(par_start_response);
    Py_DECREF(par_start_response);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_environ);
    Py_DECREF(par_environ);
    CHECK_OBJECT(par_start_response);
    Py_DECREF(par_start_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__18_middleware(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    struct Nuitka_FrameObject *frame_478bf9f7f33e24267df5c66b5d38c053;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_478bf9f7f33e24267df5c66b5d38c053 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_478bf9f7f33e24267df5c66b5d38c053)) {
        Py_XDECREF(cache_frame_478bf9f7f33e24267df5c66b5d38c053);

#if _DEBUG_REFCOUNTS
        if (cache_frame_478bf9f7f33e24267df5c66b5d38c053 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_478bf9f7f33e24267df5c66b5d38c053 = MAKE_FUNCTION_FRAME(codeobj_478bf9f7f33e24267df5c66b5d38c053, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_478bf9f7f33e24267df5c66b5d38c053->m_type_description == NULL);
    frame_478bf9f7f33e24267df5c66b5d38c053 = cache_frame_478bf9f7f33e24267df5c66b5d38c053;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_478bf9f7f33e24267df5c66b5d38c053);
    assert(Py_REFCNT(frame_478bf9f7f33e24267df5c66b5d38c053) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_func);
        tmp_args_element_value_2 = par_func;
        frame_478bf9f7f33e24267df5c66b5d38c053->m_frame.f_lineno = 246;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[37], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_args_element_value_3 = par_func;
        frame_478bf9f7f33e24267df5c66b5d38c053->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_478bf9f7f33e24267df5c66b5d38c053, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_478bf9f7f33e24267df5c66b5d38c053->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_478bf9f7f33e24267df5c66b5d38c053, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_478bf9f7f33e24267df5c66b5d38c053,
        type_description_1,
        par_self,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_478bf9f7f33e24267df5c66b5d38c053 == cache_frame_478bf9f7f33e24267df5c66b5d38c053) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_478bf9f7f33e24267df5c66b5d38c053);
        cache_frame_478bf9f7f33e24267df5c66b5d38c053 = NULL;
    }

    assertFrameObject(frame_478bf9f7f33e24267df5c66b5d38c053);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__19___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8ba2123e42a43a00c3edb7ee30c7bb36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36)) {
        Py_XDECREF(cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36 = MAKE_FUNCTION_FRAME(codeobj_8ba2123e42a43a00c3edb7ee30c7bb36, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36->m_type_description == NULL);
    frame_8ba2123e42a43a00c3edb7ee30c7bb36 = cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ba2123e42a43a00c3edb7ee30c7bb36);
    assert(Py_REFCNT(frame_8ba2123e42a43a00c3edb7ee30c7bb36) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[39];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
            if (tmp_len_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = BUILTIN_LEN(tmp_len_arg_1);
            Py_DECREF(tmp_len_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[42];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_8ba2123e42a43a00c3edb7ee30c7bb36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ba2123e42a43a00c3edb7ee30c7bb36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ba2123e42a43a00c3edb7ee30c7bb36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ba2123e42a43a00c3edb7ee30c7bb36,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8ba2123e42a43a00c3edb7ee30c7bb36 == cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36);
        cache_frame_8ba2123e42a43a00c3edb7ee30c7bb36 = NULL;
    }

    assertFrameObject(frame_8ba2123e42a43a00c3edb7ee30c7bb36);

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


static PyObject *impl_werkzeug$local$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_fallback = python_pars[2];
    PyObject *par_class_value = python_pars[3];
    PyObject *par_is_attr = python_pars[4];
    PyObject *var_bind_f = NULL;
    struct Nuitka_FrameObject *frame_e63bf1cf2fa5361657e3e27e9ab45b32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32)) {
        Py_XDECREF(cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32 = MAKE_FUNCTION_FRAME(codeobj_e63bf1cf2fa5361657e3e27e9ab45b32, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32->m_type_description == NULL);
    frame_e63bf1cf2fa5361657e3e27e9ab45b32 = cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e63bf1cf2fa5361657e3e27e9ab45b32);
    assert(Py_REFCNT(frame_e63bf1cf2fa5361657e3e27e9ab45b32) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_f);
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_1, mod_consts[43]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ocoooo";
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
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[44]);

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$local$$$function__20___init__$$$function__1_bind_f(tmp_annotations_1, tmp_closure_1);

        assert(var_bind_f == NULL);
        var_bind_f = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_f);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[1];
        tmp_annotations_2 = DICT_COPY(mod_consts[44]);

        tmp_closure_2[0] = par_f;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_werkzeug$local$$$function__20___init__$$$function__2_bind_f(tmp_annotations_2, tmp_closure_2);

        assert(var_bind_f == NULL);
        var_bind_f = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_bind_f == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_bind_f = tmp_assign_source_3;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_bind_f);
        tmp_assattr_value_1 = var_bind_f;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ocoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_fallback);
        tmp_assattr_value_2 = par_fallback;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ocoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_class_value);
        tmp_assattr_value_3 = par_class_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[48], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ocoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_is_attr);
        tmp_assattr_value_4 = par_is_attr;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[49], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ocoooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e63bf1cf2fa5361657e3e27e9ab45b32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e63bf1cf2fa5361657e3e27e9ab45b32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e63bf1cf2fa5361657e3e27e9ab45b32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e63bf1cf2fa5361657e3e27e9ab45b32,
        type_description_1,
        par_self,
        par_f,
        par_fallback,
        par_class_value,
        par_is_attr,
        var_bind_f
    );


    // Release cached frame if used for exception.
    if (frame_e63bf1cf2fa5361657e3e27e9ab45b32 == cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32);
        cache_frame_e63bf1cf2fa5361657e3e27e9ab45b32 = NULL;
    }

    assertFrameObject(frame_e63bf1cf2fa5361657e3e27e9ab45b32);

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
    CHECK_OBJECT(var_bind_f);
    Py_DECREF(var_bind_f);
    var_bind_f = NULL;
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

    Py_XDECREF(var_bind_f);
    var_bind_f = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_fallback);
    Py_DECREF(par_fallback);
    CHECK_OBJECT(par_class_value);
    Py_DECREF(par_class_value);
    CHECK_OBJECT(par_is_attr);
    Py_DECREF(par_is_attr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_fallback);
    Py_DECREF(par_fallback);
    CHECK_OBJECT(par_class_value);
    Py_DECREF(par_class_value);
    CHECK_OBJECT(par_is_attr);
    Py_DECREF(par_is_attr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__20___init__$$$function__1_bind_f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_instance = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_de128aa069414e641e1c17e7f7f3fbf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de128aa069414e641e1c17e7f7f3fbf7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de128aa069414e641e1c17e7f7f3fbf7)) {
        Py_XDECREF(cache_frame_de128aa069414e641e1c17e7f7f3fbf7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de128aa069414e641e1c17e7f7f3fbf7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de128aa069414e641e1c17e7f7f3fbf7 = MAKE_FUNCTION_FRAME(codeobj_de128aa069414e641e1c17e7f7f3fbf7, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de128aa069414e641e1c17e7f7f3fbf7->m_type_description == NULL);
    frame_de128aa069414e641e1c17e7f7f3fbf7 = cache_frame_de128aa069414e641e1c17e7f7f3fbf7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de128aa069414e641e1c17e7f7f3fbf7);
    assert(Py_REFCNT(frame_de128aa069414e641e1c17e7f7f3fbf7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_type_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(par_obj);
        tmp_type_arg_1 = par_obj;
        tmp_args_element_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_de128aa069414e641e1c17e7f7f3fbf7->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_de128aa069414e641e1c17e7f7f3fbf7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de128aa069414e641e1c17e7f7f3fbf7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de128aa069414e641e1c17e7f7f3fbf7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de128aa069414e641e1c17e7f7f3fbf7,
        type_description_1,
        par_instance,
        par_obj,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_de128aa069414e641e1c17e7f7f3fbf7 == cache_frame_de128aa069414e641e1c17e7f7f3fbf7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de128aa069414e641e1c17e7f7f3fbf7);
        cache_frame_de128aa069414e641e1c17e7f7f3fbf7 = NULL;
    }

    assertFrameObject(frame_de128aa069414e641e1c17e7f7f3fbf7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__20___init__$$$function__2_bind_f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_instance = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_f83c005d5ae63f41c44a44e6654abef6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f83c005d5ae63f41c44a44e6654abef6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f83c005d5ae63f41c44a44e6654abef6)) {
        Py_XDECREF(cache_frame_f83c005d5ae63f41c44a44e6654abef6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f83c005d5ae63f41c44a44e6654abef6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f83c005d5ae63f41c44a44e6654abef6 = MAKE_FUNCTION_FRAME(codeobj_f83c005d5ae63f41c44a44e6654abef6, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f83c005d5ae63f41c44a44e6654abef6->m_type_description == NULL);
    frame_f83c005d5ae63f41c44a44e6654abef6 = cache_frame_f83c005d5ae63f41c44a44e6654abef6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f83c005d5ae63f41c44a44e6654abef6);
    assert(Py_REFCNT(frame_f83c005d5ae63f41c44a44e6654abef6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        assert(!(tmp_called_value_1 == NULL));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        frame_f83c005d5ae63f41c44a44e6654abef6->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_f83c005d5ae63f41c44a44e6654abef6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f83c005d5ae63f41c44a44e6654abef6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f83c005d5ae63f41c44a44e6654abef6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f83c005d5ae63f41c44a44e6654abef6,
        type_description_1,
        par_instance,
        par_obj,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f83c005d5ae63f41c44a44e6654abef6 == cache_frame_f83c005d5ae63f41c44a44e6654abef6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f83c005d5ae63f41c44a44e6654abef6);
        cache_frame_f83c005d5ae63f41c44a44e6654abef6 = NULL;
    }

    assertFrameObject(frame_f83c005d5ae63f41c44a44e6654abef6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__21___set_name__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_owner = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_b8334f211f54999b752cf1512e923b1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b8334f211f54999b752cf1512e923b1b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b8334f211f54999b752cf1512e923b1b)) {
        Py_XDECREF(cache_frame_b8334f211f54999b752cf1512e923b1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8334f211f54999b752cf1512e923b1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8334f211f54999b752cf1512e923b1b = MAKE_FUNCTION_FRAME(codeobj_b8334f211f54999b752cf1512e923b1b, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b8334f211f54999b752cf1512e923b1b->m_type_description == NULL);
    frame_b8334f211f54999b752cf1512e923b1b = cache_frame_b8334f211f54999b752cf1512e923b1b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b8334f211f54999b752cf1512e923b1b);
    assert(Py_REFCNT(frame_b8334f211f54999b752cf1512e923b1b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[52], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8334f211f54999b752cf1512e923b1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8334f211f54999b752cf1512e923b1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8334f211f54999b752cf1512e923b1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8334f211f54999b752cf1512e923b1b,
        type_description_1,
        par_self,
        par_owner,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_b8334f211f54999b752cf1512e923b1b == cache_frame_b8334f211f54999b752cf1512e923b1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b8334f211f54999b752cf1512e923b1b);
        cache_frame_b8334f211f54999b752cf1512e923b1b = NULL;
    }

    assertFrameObject(frame_b8334f211f54999b752cf1512e923b1b);

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
    CHECK_OBJECT(par_owner);
    Py_DECREF(par_owner);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_owner);
    Py_DECREF(par_owner);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__22___get__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_instance = python_pars[1];
    PyObject *par_owner = python_pars[2];
    PyObject *var_obj = NULL;
    PyObject *var_fallback = NULL;
    struct Nuitka_FrameObject *frame_5811b8f1f323b7647c4e559172cfeec4;
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
    static struct Nuitka_FrameObject *cache_frame_5811b8f1f323b7647c4e559172cfeec4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5811b8f1f323b7647c4e559172cfeec4)) {
        Py_XDECREF(cache_frame_5811b8f1f323b7647c4e559172cfeec4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5811b8f1f323b7647c4e559172cfeec4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5811b8f1f323b7647c4e559172cfeec4 = MAKE_FUNCTION_FRAME(codeobj_5811b8f1f323b7647c4e559172cfeec4, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5811b8f1f323b7647c4e559172cfeec4->m_type_description == NULL);
    frame_5811b8f1f323b7647c4e559172cfeec4 = cache_frame_5811b8f1f323b7647c4e559172cfeec4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5811b8f1f323b7647c4e559172cfeec4);
    assert(Py_REFCNT(frame_5811b8f1f323b7647c4e559172cfeec4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_instance);
        tmp_cmp_expr_left_1 = par_instance;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_instance);
        tmp_called_instance_1 = par_instance;
        frame_5811b8f1f323b7647c4e559172cfeec4->m_frame.f_lineno = 311;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[53]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_1;
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5811b8f1f323b7647c4e559172cfeec4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5811b8f1f323b7647c4e559172cfeec4, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_RuntimeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 314;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5811b8f1f323b7647c4e559172cfeec4->m_frame) frame_5811b8f1f323b7647c4e559172cfeec4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_instance);
        tmp_args_element_value_1 = par_instance;
        CHECK_OBJECT(par_owner);
        tmp_args_element_value_2 = par_owner;
        frame_5811b8f1f323b7647c4e559172cfeec4->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[43],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        assert(var_fallback == NULL);
        var_fallback = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_fallback);
        tmp_called_value_1 = var_fallback;
        frame_5811b8f1f323b7647c4e559172cfeec4->m_frame.f_lineno = 321;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    branch_no_5:;
    CHECK_OBJECT(var_fallback);
    tmp_return_value = var_fallback;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 310;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5811b8f1f323b7647c4e559172cfeec4->m_frame) frame_5811b8f1f323b7647c4e559172cfeec4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[45]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_instance);
        tmp_args_element_value_3 = par_instance;
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_4 = var_obj;
        frame_5811b8f1f323b7647c4e559172cfeec4->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_obj);
        tmp_expression_value_7 = var_obj;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_name_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[52]);
        if (tmp_name_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_GETATTR(tmp_expression_value_7, tmp_name_value_1, NULL);
        Py_DECREF(tmp_name_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_5811b8f1f323b7647c4e559172cfeec4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5811b8f1f323b7647c4e559172cfeec4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5811b8f1f323b7647c4e559172cfeec4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5811b8f1f323b7647c4e559172cfeec4,
        type_description_1,
        par_self,
        par_instance,
        par_owner,
        var_obj,
        var_fallback
    );


    // Release cached frame if used for exception.
    if (frame_5811b8f1f323b7647c4e559172cfeec4 == cache_frame_5811b8f1f323b7647c4e559172cfeec4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5811b8f1f323b7647c4e559172cfeec4);
        cache_frame_5811b8f1f323b7647c4e559172cfeec4 = NULL;
    }

    assertFrameObject(frame_5811b8f1f323b7647c4e559172cfeec4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_fallback);
    var_fallback = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_fallback);
    var_fallback = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_owner);
    Py_DECREF(par_owner);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_owner);
    Py_DECREF(par_owner);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__23___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2fe1edd45f15b13f0878535a6123129f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fe1edd45f15b13f0878535a6123129f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fe1edd45f15b13f0878535a6123129f)) {
        Py_XDECREF(cache_frame_2fe1edd45f15b13f0878535a6123129f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fe1edd45f15b13f0878535a6123129f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fe1edd45f15b13f0878535a6123129f = MAKE_FUNCTION_FRAME(codeobj_2fe1edd45f15b13f0878535a6123129f, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fe1edd45f15b13f0878535a6123129f->m_type_description == NULL);
    frame_2fe1edd45f15b13f0878535a6123129f = cache_frame_2fe1edd45f15b13f0878535a6123129f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2fe1edd45f15b13f0878535a6123129f);
    assert(Py_REFCNT(frame_2fe1edd45f15b13f0878535a6123129f) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[54];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_2fe1edd45f15b13f0878535a6123129f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fe1edd45f15b13f0878535a6123129f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fe1edd45f15b13f0878535a6123129f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fe1edd45f15b13f0878535a6123129f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2fe1edd45f15b13f0878535a6123129f == cache_frame_2fe1edd45f15b13f0878535a6123129f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fe1edd45f15b13f0878535a6123129f);
        cache_frame_2fe1edd45f15b13f0878535a6123129f = NULL;
    }

    assertFrameObject(frame_2fe1edd45f15b13f0878535a6123129f);

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


static PyObject *impl_werkzeug$local$$$function__24___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_instance = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_4a994a2b9acd1b0f86646456dd7a1616;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a994a2b9acd1b0f86646456dd7a1616 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a994a2b9acd1b0f86646456dd7a1616)) {
        Py_XDECREF(cache_frame_4a994a2b9acd1b0f86646456dd7a1616);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a994a2b9acd1b0f86646456dd7a1616 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a994a2b9acd1b0f86646456dd7a1616 = MAKE_FUNCTION_FRAME(codeobj_4a994a2b9acd1b0f86646456dd7a1616, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a994a2b9acd1b0f86646456dd7a1616->m_type_description == NULL);
    frame_4a994a2b9acd1b0f86646456dd7a1616 = cache_frame_4a994a2b9acd1b0f86646456dd7a1616;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a994a2b9acd1b0f86646456dd7a1616);
    assert(Py_REFCNT(frame_4a994a2b9acd1b0f86646456dd7a1616) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_instance);
        tmp_args_element_value_1 = par_instance;
        CHECK_OBJECT(par_instance);
        tmp_type_arg_1 = par_instance;
        tmp_args_element_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_4a994a2b9acd1b0f86646456dd7a1616->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_dircall_arg1_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
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
        exception_tb = MAKE_TRACEBACK(frame_4a994a2b9acd1b0f86646456dd7a1616, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a994a2b9acd1b0f86646456dd7a1616->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a994a2b9acd1b0f86646456dd7a1616, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a994a2b9acd1b0f86646456dd7a1616,
        type_description_1,
        par_self,
        par_instance,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_4a994a2b9acd1b0f86646456dd7a1616 == cache_frame_4a994a2b9acd1b0f86646456dd7a1616) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a994a2b9acd1b0f86646456dd7a1616);
        cache_frame_4a994a2b9acd1b0f86646456dd7a1616 = NULL;
    }

    assertFrameObject(frame_4a994a2b9acd1b0f86646456dd7a1616);

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
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__25___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_fallback = python_pars[2];
    PyObject *var_bind_f = NULL;
    struct Nuitka_FrameObject *frame_75cd88eee724db42e62db1bcf274bafd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_75cd88eee724db42e62db1bcf274bafd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_75cd88eee724db42e62db1bcf274bafd)) {
        Py_XDECREF(cache_frame_75cd88eee724db42e62db1bcf274bafd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75cd88eee724db42e62db1bcf274bafd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75cd88eee724db42e62db1bcf274bafd = MAKE_FUNCTION_FRAME(codeobj_75cd88eee724db42e62db1bcf274bafd, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75cd88eee724db42e62db1bcf274bafd->m_type_description == NULL);
    frame_75cd88eee724db42e62db1bcf274bafd = cache_frame_75cd88eee724db42e62db1bcf274bafd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_75cd88eee724db42e62db1bcf274bafd);
    assert(Py_REFCNT(frame_75cd88eee724db42e62db1bcf274bafd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_werkzeug$local, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_f);
        CHECK_OBJECT(par_fallback);
        tmp_args_element_value_2 = par_fallback;
        frame_75cd88eee724db42e62db1bcf274bafd->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[57],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[44]);

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$local$$$function__25___init__$$$function__1_bind_f(tmp_annotations_1, tmp_closure_1);

        assert(var_bind_f == NULL);
        var_bind_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_bind_f);
        tmp_assattr_value_1 = var_bind_f;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ocooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75cd88eee724db42e62db1bcf274bafd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75cd88eee724db42e62db1bcf274bafd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75cd88eee724db42e62db1bcf274bafd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75cd88eee724db42e62db1bcf274bafd,
        type_description_1,
        par_self,
        par_f,
        par_fallback,
        var_bind_f,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_75cd88eee724db42e62db1bcf274bafd == cache_frame_75cd88eee724db42e62db1bcf274bafd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75cd88eee724db42e62db1bcf274bafd);
        cache_frame_75cd88eee724db42e62db1bcf274bafd = NULL;
    }

    assertFrameObject(frame_75cd88eee724db42e62db1bcf274bafd);

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
    CHECK_OBJECT(var_bind_f);
    Py_DECREF(var_bind_f);
    var_bind_f = NULL;
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

    Py_XDECREF(var_bind_f);
    var_bind_f = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_fallback);
    Py_DECREF(par_fallback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_fallback);
    Py_DECREF(par_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__25___init__$$$function__1_bind_f(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_instance = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_obj = python_pars[1];
    PyObject *var_i_op = NULL;
    struct Nuitka_FrameObject *frame_8654ed296fc534d78ee0edaeb40c24bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8654ed296fc534d78ee0edaeb40c24bc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_annotations_1 = DICT_COPY(mod_consts[59]);

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_instance;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$local$$$function__25___init__$$$function__1_bind_f$$$function__1_i_op(tmp_annotations_1, tmp_closure_1);

        assert(var_i_op == NULL);
        var_i_op = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8654ed296fc534d78ee0edaeb40c24bc)) {
        Py_XDECREF(cache_frame_8654ed296fc534d78ee0edaeb40c24bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8654ed296fc534d78ee0edaeb40c24bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8654ed296fc534d78ee0edaeb40c24bc = MAKE_FUNCTION_FRAME(codeobj_8654ed296fc534d78ee0edaeb40c24bc, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8654ed296fc534d78ee0edaeb40c24bc->m_type_description == NULL);
    frame_8654ed296fc534d78ee0edaeb40c24bc = cache_frame_8654ed296fc534d78ee0edaeb40c24bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8654ed296fc534d78ee0edaeb40c24bc);
    assert(Py_REFCNT(frame_8654ed296fc534d78ee0edaeb40c24bc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(var_i_op);
        tmp_called_instance_1 = var_i_op;
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(par_obj);
        tmp_type_arg_1 = par_obj;
        tmp_args_element_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_8654ed296fc534d78ee0edaeb40c24bc->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "coo";
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
        exception_tb = MAKE_TRACEBACK(frame_8654ed296fc534d78ee0edaeb40c24bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8654ed296fc534d78ee0edaeb40c24bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8654ed296fc534d78ee0edaeb40c24bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8654ed296fc534d78ee0edaeb40c24bc,
        type_description_1,
        par_instance,
        par_obj,
        var_i_op
    );


    // Release cached frame if used for exception.
    if (frame_8654ed296fc534d78ee0edaeb40c24bc == cache_frame_8654ed296fc534d78ee0edaeb40c24bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8654ed296fc534d78ee0edaeb40c24bc);
        cache_frame_8654ed296fc534d78ee0edaeb40c24bc = NULL;
    }

    assertFrameObject(frame_8654ed296fc534d78ee0edaeb40c24bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_i_op);
    Py_DECREF(var_i_op);
    var_i_op = NULL;
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

    CHECK_OBJECT(var_i_op);
    Py_DECREF(var_i_op);
    var_i_op = NULL;
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
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__25___init__$$$function__1_bind_f$$$function__1_i_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_75f2f620e644106d94475dbc6a34ab71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_75f2f620e644106d94475dbc6a34ab71 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_75f2f620e644106d94475dbc6a34ab71)) {
        Py_XDECREF(cache_frame_75f2f620e644106d94475dbc6a34ab71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75f2f620e644106d94475dbc6a34ab71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75f2f620e644106d94475dbc6a34ab71 = MAKE_FUNCTION_FRAME(codeobj_75f2f620e644106d94475dbc6a34ab71, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75f2f620e644106d94475dbc6a34ab71->m_type_description == NULL);
    frame_75f2f620e644106d94475dbc6a34ab71 = cache_frame_75f2f620e644106d94475dbc6a34ab71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_75f2f620e644106d94475dbc6a34ab71);
    assert(Py_REFCNT(frame_75f2f620e644106d94475dbc6a34ab71) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        frame_75f2f620e644106d94475dbc6a34ab71->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 357;
        type_description_1 = "oocc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[1]);
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
        exception_tb = MAKE_TRACEBACK(frame_75f2f620e644106d94475dbc6a34ab71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75f2f620e644106d94475dbc6a34ab71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75f2f620e644106d94475dbc6a34ab71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75f2f620e644106d94475dbc6a34ab71,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_75f2f620e644106d94475dbc6a34ab71 == cache_frame_75f2f620e644106d94475dbc6a34ab71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75f2f620e644106d94475dbc6a34ab71);
        cache_frame_75f2f620e644106d94475dbc6a34ab71 = NULL;
    }

    assertFrameObject(frame_75f2f620e644106d94475dbc6a34ab71);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__26__l_to_r_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_op = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_r_op = NULL;
    struct Nuitka_FrameObject *frame_397d18a99a4415e1ea0666b193765687;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_397d18a99a4415e1ea0666b193765687 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[63]);

        tmp_closure_1[0] = par_op;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$local$$$function__26__l_to_r_op$$$function__1_r_op(tmp_annotations_1, tmp_closure_1);

        assert(var_r_op == NULL);
        var_r_op = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_397d18a99a4415e1ea0666b193765687)) {
        Py_XDECREF(cache_frame_397d18a99a4415e1ea0666b193765687);

#if _DEBUG_REFCOUNTS
        if (cache_frame_397d18a99a4415e1ea0666b193765687 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_397d18a99a4415e1ea0666b193765687 = MAKE_FUNCTION_FRAME(codeobj_397d18a99a4415e1ea0666b193765687, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_397d18a99a4415e1ea0666b193765687->m_type_description == NULL);
    frame_397d18a99a4415e1ea0666b193765687 = cache_frame_397d18a99a4415e1ea0666b193765687;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_397d18a99a4415e1ea0666b193765687);
    assert(Py_REFCNT(frame_397d18a99a4415e1ea0666b193765687) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 370;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r_op);
        tmp_args_element_value_2 = var_r_op;
        frame_397d18a99a4415e1ea0666b193765687->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "co";
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
        exception_tb = MAKE_TRACEBACK(frame_397d18a99a4415e1ea0666b193765687, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_397d18a99a4415e1ea0666b193765687->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_397d18a99a4415e1ea0666b193765687, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_397d18a99a4415e1ea0666b193765687,
        type_description_1,
        par_op,
        var_r_op
    );


    // Release cached frame if used for exception.
    if (frame_397d18a99a4415e1ea0666b193765687 == cache_frame_397d18a99a4415e1ea0666b193765687) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_397d18a99a4415e1ea0666b193765687);
        cache_frame_397d18a99a4415e1ea0666b193765687 = NULL;
    }

    assertFrameObject(frame_397d18a99a4415e1ea0666b193765687);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_r_op);
    Py_DECREF(var_r_op);
    var_r_op = NULL;
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

    CHECK_OBJECT(var_r_op);
    Py_DECREF(var_r_op);
    var_r_op = NULL;
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
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__26__l_to_r_op$$$function__1_r_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_876c350965119974040e400570915748;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_876c350965119974040e400570915748 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_876c350965119974040e400570915748)) {
        Py_XDECREF(cache_frame_876c350965119974040e400570915748);

#if _DEBUG_REFCOUNTS
        if (cache_frame_876c350965119974040e400570915748 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_876c350965119974040e400570915748 = MAKE_FUNCTION_FRAME(codeobj_876c350965119974040e400570915748, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_876c350965119974040e400570915748->m_type_description == NULL);
    frame_876c350965119974040e400570915748 = cache_frame_876c350965119974040e400570915748;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_876c350965119974040e400570915748);
    assert(Py_REFCNT(frame_876c350965119974040e400570915748) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        frame_876c350965119974040e400570915748->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_876c350965119974040e400570915748, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_876c350965119974040e400570915748->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_876c350965119974040e400570915748, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_876c350965119974040e400570915748,
        type_description_1,
        par_obj,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_876c350965119974040e400570915748 == cache_frame_876c350965119974040e400570915748) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_876c350965119974040e400570915748);
        cache_frame_876c350965119974040e400570915748 = NULL;
    }

    assertFrameObject(frame_876c350965119974040e400570915748);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__27__identity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_o = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_o);
    tmp_return_value = par_o;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__28___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_local = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_name = python_pars[2];
    struct Nuitka_CellObject *par_unbound_message = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *var_get_name = Nuitka_Cell_Empty();
    PyObject *var__get_current_object = NULL;
    struct Nuitka_FrameObject *frame_36c89b63e1c0d65f2bdc562039579443;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_36c89b63e1c0d65f2bdc562039579443 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_36c89b63e1c0d65f2bdc562039579443)) {
        Py_XDECREF(cache_frame_36c89b63e1c0d65f2bdc562039579443);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36c89b63e1c0d65f2bdc562039579443 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36c89b63e1c0d65f2bdc562039579443 = MAKE_FUNCTION_FRAME(codeobj_36c89b63e1c0d65f2bdc562039579443, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36c89b63e1c0d65f2bdc562039579443->m_type_description == NULL);
    frame_36c89b63e1c0d65f2bdc562039579443 = cache_frame_36c89b63e1c0d65f2bdc562039579443;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_36c89b63e1c0d65f2bdc562039579443);
    assert(Py_REFCNT(frame_36c89b63e1c0d65f2bdc562039579443) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_get_name) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(var_get_name, tmp_assign_source_1);

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_36c89b63e1c0d65f2bdc562039579443->m_frame.f_lineno = 477;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_get_name) == NULL);
        PyCell_SET(var_get_name, tmp_assign_source_2);

    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(par_unbound_message) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_unbound_message);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[74];
        {
            PyObject *old = Nuitka_Cell_GET(par_unbound_message);
            PyCell_SET(par_unbound_message, tmp_assign_source_3);
            Py_INCREF(tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (Nuitka_Cell_GET(par_local) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_local);
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (par_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = par_name;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[76];
        frame_36c89b63e1c0d65f2bdc562039579443->m_frame.f_lineno = 484;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 484;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_annotations_1 = DICT_COPY(mod_consts[77]);

        tmp_closure_1[0] = var_get_name;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_local;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_unbound_message;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_4 = MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__1__get_current_object(tmp_annotations_1, tmp_closure_1);

        assert(var__get_current_object == NULL);
        var__get_current_object = tmp_assign_source_4;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        if (Nuitka_Cell_GET(par_local) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_2 = Nuitka_Cell_GET(par_local);
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[3];
        tmp_annotations_2 = DICT_COPY(mod_consts[77]);

        tmp_closure_2[0] = var_get_name;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_local;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = par_unbound_message;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_5 = MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__2__get_current_object(tmp_annotations_2, tmp_closure_2);

        assert(var__get_current_object == NULL);
        var__get_current_object = tmp_assign_source_5;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        if (Nuitka_Cell_GET(par_local) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 502;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_3 = Nuitka_Cell_GET(par_local);
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_3;
        struct Nuitka_CellObject *tmp_closure_3[3];
        tmp_annotations_3 = DICT_COPY(mod_consts[77]);

        tmp_closure_3[0] = var_get_name;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = par_local;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_unbound_message;
        Py_INCREF(tmp_closure_3[2]);

        tmp_assign_source_6 = MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__3__get_current_object(tmp_annotations_3, tmp_closure_3);

        assert(var__get_current_object == NULL);
        var__get_current_object = tmp_assign_source_6;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[80]);
        assert(tmp_called_value_2 != NULL);
        if (Nuitka_Cell_GET(par_local) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(par_local);
        frame_36c89b63e1c0d65f2bdc562039579443->m_frame.f_lineno = 512;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 512;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_4;
        struct Nuitka_CellObject *tmp_closure_4[2];
        tmp_annotations_4 = DICT_COPY(mod_consts[77]);

        tmp_closure_4[0] = var_get_name;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = par_local;
        Py_INCREF(tmp_closure_4[1]);

        tmp_assign_source_7 = MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__4__get_current_object(tmp_annotations_4, tmp_closure_4);

        assert(var__get_current_object == NULL);
        var__get_current_object = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[81];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(par_local) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 518;
                type_description_1 = "ococco";
                goto tuple_build_exception_1;
            }

            tmp_type_arg_1 = Nuitka_Cell_GET(par_local);
            tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_1 = "ococco";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_1 = "ococco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[82];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        frame_36c89b63e1c0d65f2bdc562039579443->m_frame.f_lineno = 518;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 518;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_1 = (PyObject *)&PyBaseObject_Type;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        assert(!(tmp_called_value_3 == NULL));
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        tmp_args_element_value_4 = mod_consts[83];
        if (Nuitka_Cell_GET(par_local) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(par_local);
        frame_36c89b63e1c0d65f2bdc562039579443->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_6 = par_self;
        tmp_args_element_value_7 = mod_consts[53];
        CHECK_OBJECT(var__get_current_object);
        tmp_args_element_value_8 = var__get_current_object;
        frame_36c89b63e1c0d65f2bdc562039579443->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ococco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36c89b63e1c0d65f2bdc562039579443, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36c89b63e1c0d65f2bdc562039579443->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36c89b63e1c0d65f2bdc562039579443, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36c89b63e1c0d65f2bdc562039579443,
        type_description_1,
        par_self,
        par_local,
        par_name,
        par_unbound_message,
        var_get_name,
        var__get_current_object
    );


    // Release cached frame if used for exception.
    if (frame_36c89b63e1c0d65f2bdc562039579443 == cache_frame_36c89b63e1c0d65f2bdc562039579443) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36c89b63e1c0d65f2bdc562039579443);
        cache_frame_36c89b63e1c0d65f2bdc562039579443 = NULL;
    }

    assertFrameObject(frame_36c89b63e1c0d65f2bdc562039579443);

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
    CHECK_OBJECT(par_unbound_message);
    Py_DECREF(par_unbound_message);
    par_unbound_message = NULL;
    CHECK_OBJECT(var_get_name);
    Py_DECREF(var_get_name);
    var_get_name = NULL;
    CHECK_OBJECT(var__get_current_object);
    Py_DECREF(var__get_current_object);
    var__get_current_object = NULL;
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

    CHECK_OBJECT(par_unbound_message);
    Py_DECREF(par_unbound_message);
    par_unbound_message = NULL;
    CHECK_OBJECT(var_get_name);
    Py_DECREF(var_get_name);
    var_get_name = NULL;
    Py_XDECREF(var__get_current_object);
    var__get_current_object = NULL;
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
    CHECK_OBJECT(par_local);
    Py_DECREF(par_local);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_local);
    Py_DECREF(par_local);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__28___init__$$$function__1__get_current_object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ca334a39c13c64d0f238d4f0833c73f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_ca334a39c13c64d0f238d4f0833c73f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca334a39c13c64d0f238d4f0833c73f4)) {
        Py_XDECREF(cache_frame_ca334a39c13c64d0f238d4f0833c73f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca334a39c13c64d0f238d4f0833c73f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca334a39c13c64d0f238d4f0833c73f4 = MAKE_FUNCTION_FRAME(codeobj_ca334a39c13c64d0f238d4f0833c73f4, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca334a39c13c64d0f238d4f0833c73f4->m_type_description == NULL);
    frame_ca334a39c13c64d0f238d4f0833c73f4 = cache_frame_ca334a39c13c64d0f238d4f0833c73f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca334a39c13c64d0f238d4f0833c73f4);
    assert(Py_REFCNT(frame_ca334a39c13c64d0f238d4f0833c73f4) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "ccc";
            goto try_except_handler_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "ccc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_ca334a39c13c64d0f238d4f0833c73f4->m_frame.f_lineno = 488;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ccc";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ca334a39c13c64d0f238d4f0833c73f4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ca334a39c13c64d0f238d4f0833c73f4, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "ccc";
            goto try_except_handler_2;
        }

        tmp_make_exception_arg_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_ca334a39c13c64d0f238d4f0833c73f4->m_frame.f_lineno = 490;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        tmp_raise_cause_1 = Py_None;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 490;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ccc";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 487;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ca334a39c13c64d0f238d4f0833c73f4->m_frame) frame_ca334a39c13c64d0f238d4f0833c73f4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccc";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ca334a39c13c64d0f238d4f0833c73f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca334a39c13c64d0f238d4f0833c73f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca334a39c13c64d0f238d4f0833c73f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca334a39c13c64d0f238d4f0833c73f4,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_ca334a39c13c64d0f238d4f0833c73f4 == cache_frame_ca334a39c13c64d0f238d4f0833c73f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca334a39c13c64d0f238d4f0833c73f4);
        cache_frame_ca334a39c13c64d0f238d4f0833c73f4 = NULL;
    }

    assertFrameObject(frame_ca334a39c13c64d0f238d4f0833c73f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__28___init__$$$function__2__get_current_object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_28a71d7de2ff7bc32d8753624c1d113f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_28a71d7de2ff7bc32d8753624c1d113f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28a71d7de2ff7bc32d8753624c1d113f)) {
        Py_XDECREF(cache_frame_28a71d7de2ff7bc32d8753624c1d113f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28a71d7de2ff7bc32d8753624c1d113f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28a71d7de2ff7bc32d8753624c1d113f = MAKE_FUNCTION_FRAME(codeobj_28a71d7de2ff7bc32d8753624c1d113f, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28a71d7de2ff7bc32d8753624c1d113f->m_type_description == NULL);
    frame_28a71d7de2ff7bc32d8753624c1d113f = cache_frame_28a71d7de2ff7bc32d8753624c1d113f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28a71d7de2ff7bc32d8753624c1d113f);
    assert(Py_REFCNT(frame_28a71d7de2ff7bc32d8753624c1d113f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[85]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_obj);
        tmp_cmp_expr_left_1 = var_obj;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_make_exception_arg_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_28a71d7de2ff7bc32d8753624c1d113f->m_frame.f_lineno = 498;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 498;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "occc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_1 = var_obj;
        frame_28a71d7de2ff7bc32d8753624c1d113f->m_frame.f_lineno = 500;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_28a71d7de2ff7bc32d8753624c1d113f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28a71d7de2ff7bc32d8753624c1d113f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28a71d7de2ff7bc32d8753624c1d113f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28a71d7de2ff7bc32d8753624c1d113f,
        type_description_1,
        var_obj,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_28a71d7de2ff7bc32d8753624c1d113f == cache_frame_28a71d7de2ff7bc32d8753624c1d113f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28a71d7de2ff7bc32d8753624c1d113f);
        cache_frame_28a71d7de2ff7bc32d8753624c1d113f = NULL;
    }

    assertFrameObject(frame_28a71d7de2ff7bc32d8753624c1d113f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_obj);
    Py_DECREF(var_obj);
    var_obj = NULL;
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

    Py_XDECREF(var_obj);
    var_obj = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__28___init__$$$function__3__get_current_object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_229ebfbe70246650bec336f665f17e76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_229ebfbe70246650bec336f665f17e76 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_229ebfbe70246650bec336f665f17e76)) {
        Py_XDECREF(cache_frame_229ebfbe70246650bec336f665f17e76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_229ebfbe70246650bec336f665f17e76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_229ebfbe70246650bec336f665f17e76 = MAKE_FUNCTION_FRAME(codeobj_229ebfbe70246650bec336f665f17e76, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_229ebfbe70246650bec336f665f17e76->m_type_description == NULL);
    frame_229ebfbe70246650bec336f665f17e76 = cache_frame_229ebfbe70246650bec336f665f17e76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_229ebfbe70246650bec336f665f17e76);
    assert(Py_REFCNT(frame_229ebfbe70246650bec336f665f17e76) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "occc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "occc";
            goto try_except_handler_2;
        }
        frame_229ebfbe70246650bec336f665f17e76->m_frame.f_lineno = 506;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "occc";
            goto try_except_handler_2;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_1;
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_229ebfbe70246650bec336f665f17e76, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_229ebfbe70246650bec336f665f17e76, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_LookupError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_1 = "occc";
            goto try_except_handler_3;
        }

        tmp_make_exception_arg_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_229ebfbe70246650bec336f665f17e76->m_frame.f_lineno = 508;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        tmp_raise_cause_1 = Py_None;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 508;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "occc";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 505;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_229ebfbe70246650bec336f665f17e76->m_frame) frame_229ebfbe70246650bec336f665f17e76->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occc";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 510;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_1 = var_obj;
        frame_229ebfbe70246650bec336f665f17e76->m_frame.f_lineno = 510;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_229ebfbe70246650bec336f665f17e76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_229ebfbe70246650bec336f665f17e76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_229ebfbe70246650bec336f665f17e76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_229ebfbe70246650bec336f665f17e76,
        type_description_1,
        var_obj,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_229ebfbe70246650bec336f665f17e76 == cache_frame_229ebfbe70246650bec336f665f17e76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_229ebfbe70246650bec336f665f17e76);
        cache_frame_229ebfbe70246650bec336f665f17e76 = NULL;
    }

    assertFrameObject(frame_229ebfbe70246650bec336f665f17e76);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_obj);
    Py_DECREF(var_obj);
    var_obj = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_obj);
    var_obj = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__28___init__$$$function__4__get_current_object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_dabfeacfd8bcef6257da3d7830da5c20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dabfeacfd8bcef6257da3d7830da5c20 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dabfeacfd8bcef6257da3d7830da5c20)) {
        Py_XDECREF(cache_frame_dabfeacfd8bcef6257da3d7830da5c20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dabfeacfd8bcef6257da3d7830da5c20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dabfeacfd8bcef6257da3d7830da5c20 = MAKE_FUNCTION_FRAME(codeobj_dabfeacfd8bcef6257da3d7830da5c20, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dabfeacfd8bcef6257da3d7830da5c20->m_type_description == NULL);
    frame_dabfeacfd8bcef6257da3d7830da5c20 = cache_frame_dabfeacfd8bcef6257da3d7830da5c20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dabfeacfd8bcef6257da3d7830da5c20);
    assert(Py_REFCNT(frame_dabfeacfd8bcef6257da3d7830da5c20) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_dabfeacfd8bcef6257da3d7830da5c20->m_frame.f_lineno = 515;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_dabfeacfd8bcef6257da3d7830da5c20->m_frame.f_lineno = 515;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "cc";
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
        exception_tb = MAKE_TRACEBACK(frame_dabfeacfd8bcef6257da3d7830da5c20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dabfeacfd8bcef6257da3d7830da5c20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dabfeacfd8bcef6257da3d7830da5c20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dabfeacfd8bcef6257da3d7830da5c20,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_dabfeacfd8bcef6257da3d7830da5c20 == cache_frame_dabfeacfd8bcef6257da3d7830da5c20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dabfeacfd8bcef6257da3d7830da5c20);
        cache_frame_dabfeacfd8bcef6257da3d7830da5c20 = NULL;
    }

    assertFrameObject(frame_dabfeacfd8bcef6257da3d7830da5c20);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__29_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ee27411b62df613cd80005d11a82bd16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee27411b62df613cd80005d11a82bd16 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee27411b62df613cd80005d11a82bd16)) {
        Py_XDECREF(cache_frame_ee27411b62df613cd80005d11a82bd16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee27411b62df613cd80005d11a82bd16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee27411b62df613cd80005d11a82bd16 = MAKE_FUNCTION_FRAME(codeobj_ee27411b62df613cd80005d11a82bd16, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee27411b62df613cd80005d11a82bd16->m_type_description == NULL);
    frame_ee27411b62df613cd80005d11a82bd16 = cache_frame_ee27411b62df613cd80005d11a82bd16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee27411b62df613cd80005d11a82bd16);
    assert(Py_REFCNT(frame_ee27411b62df613cd80005d11a82bd16) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[86]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
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
        exception_tb = MAKE_TRACEBACK(frame_ee27411b62df613cd80005d11a82bd16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee27411b62df613cd80005d11a82bd16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee27411b62df613cd80005d11a82bd16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee27411b62df613cd80005d11a82bd16,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ee27411b62df613cd80005d11a82bd16 == cache_frame_ee27411b62df613cd80005d11a82bd16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee27411b62df613cd80005d11a82bd16);
        cache_frame_ee27411b62df613cd80005d11a82bd16 = NULL;
    }

    assertFrameObject(frame_ee27411b62df613cd80005d11a82bd16);

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


static PyObject *impl_werkzeug$local$$$function__30_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bfd7fd17cf04098d7304a859fa609034;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bfd7fd17cf04098d7304a859fa609034 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bfd7fd17cf04098d7304a859fa609034)) {
        Py_XDECREF(cache_frame_bfd7fd17cf04098d7304a859fa609034);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bfd7fd17cf04098d7304a859fa609034 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bfd7fd17cf04098d7304a859fa609034 = MAKE_FUNCTION_FRAME(codeobj_bfd7fd17cf04098d7304a859fa609034, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bfd7fd17cf04098d7304a859fa609034->m_type_description == NULL);
    frame_bfd7fd17cf04098d7304a859fa609034 = cache_frame_bfd7fd17cf04098d7304a859fa609034;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bfd7fd17cf04098d7304a859fa609034);
    assert(Py_REFCNT(frame_bfd7fd17cf04098d7304a859fa609034) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
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
        exception_tb = MAKE_TRACEBACK(frame_bfd7fd17cf04098d7304a859fa609034, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bfd7fd17cf04098d7304a859fa609034->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bfd7fd17cf04098d7304a859fa609034, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bfd7fd17cf04098d7304a859fa609034,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bfd7fd17cf04098d7304a859fa609034 == cache_frame_bfd7fd17cf04098d7304a859fa609034) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bfd7fd17cf04098d7304a859fa609034);
        cache_frame_bfd7fd17cf04098d7304a859fa609034 = NULL;
    }

    assertFrameObject(frame_bfd7fd17cf04098d7304a859fa609034);

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


static PyObject *impl_werkzeug$local$$$function__31_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6a499812ad1a0c7f061a8ba399ac43b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a499812ad1a0c7f061a8ba399ac43b0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a499812ad1a0c7f061a8ba399ac43b0)) {
        Py_XDECREF(cache_frame_6a499812ad1a0c7f061a8ba399ac43b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a499812ad1a0c7f061a8ba399ac43b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a499812ad1a0c7f061a8ba399ac43b0 = MAKE_FUNCTION_FRAME(codeobj_6a499812ad1a0c7f061a8ba399ac43b0, module_werkzeug$local, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a499812ad1a0c7f061a8ba399ac43b0->m_type_description == NULL);
    frame_6a499812ad1a0c7f061a8ba399ac43b0 = cache_frame_6a499812ad1a0c7f061a8ba399ac43b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a499812ad1a0c7f061a8ba399ac43b0);
    assert(Py_REFCNT(frame_6a499812ad1a0c7f061a8ba399ac43b0) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[39];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
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
        exception_tb = MAKE_TRACEBACK(frame_6a499812ad1a0c7f061a8ba399ac43b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a499812ad1a0c7f061a8ba399ac43b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a499812ad1a0c7f061a8ba399ac43b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a499812ad1a0c7f061a8ba399ac43b0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6a499812ad1a0c7f061a8ba399ac43b0 == cache_frame_6a499812ad1a0c7f061a8ba399ac43b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a499812ad1a0c7f061a8ba399ac43b0);
        cache_frame_6a499812ad1a0c7f061a8ba399ac43b0 = NULL;
    }

    assertFrameObject(frame_6a499812ad1a0c7f061a8ba399ac43b0);

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


static PyObject *impl_werkzeug$local$$$function__33_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_werkzeug$local$$$function__34_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_return_value = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_return_value == NULL));
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_werkzeug$local$$$function__35_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_e5c0f9ff5b727c5f702ef5a57e66934d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d)) {
        Py_XDECREF(cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d = MAKE_FUNCTION_FRAME(codeobj_e5c0f9ff5b727c5f702ef5a57e66934d, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d->m_type_description == NULL);
    frame_e5c0f9ff5b727c5f702ef5a57e66934d = cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e5c0f9ff5b727c5f702ef5a57e66934d);
    assert(Py_REFCNT(frame_e5c0f9ff5b727c5f702ef5a57e66934d) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_isinstance_cls_1 = par_self;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_e5c0f9ff5b727c5f702ef5a57e66934d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5c0f9ff5b727c5f702ef5a57e66934d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5c0f9ff5b727c5f702ef5a57e66934d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5c0f9ff5b727c5f702ef5a57e66934d,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_e5c0f9ff5b727c5f702ef5a57e66934d == cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d);
        cache_frame_e5c0f9ff5b727c5f702ef5a57e66934d = NULL;
    }

    assertFrameObject(frame_e5c0f9ff5b727c5f702ef5a57e66934d);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__36_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_72399b4db6b4da84c2b6a4872ddba422;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_72399b4db6b4da84c2b6a4872ddba422 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72399b4db6b4da84c2b6a4872ddba422)) {
        Py_XDECREF(cache_frame_72399b4db6b4da84c2b6a4872ddba422);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72399b4db6b4da84c2b6a4872ddba422 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72399b4db6b4da84c2b6a4872ddba422 = MAKE_FUNCTION_FRAME(codeobj_72399b4db6b4da84c2b6a4872ddba422, module_werkzeug$local, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72399b4db6b4da84c2b6a4872ddba422->m_type_description == NULL);
    frame_72399b4db6b4da84c2b6a4872ddba422 = cache_frame_72399b4db6b4da84c2b6a4872ddba422;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72399b4db6b4da84c2b6a4872ddba422);
    assert(Py_REFCNT(frame_72399b4db6b4da84c2b6a4872ddba422) == 2);

    // Framed code:
    {
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        CHECK_OBJECT(par_other);
        tmp_issubclass_cls_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_issubclass_classes_1 = par_self;
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_72399b4db6b4da84c2b6a4872ddba422, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72399b4db6b4da84c2b6a4872ddba422->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72399b4db6b4da84c2b6a4872ddba422, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72399b4db6b4da84c2b6a4872ddba422,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_72399b4db6b4da84c2b6a4872ddba422 == cache_frame_72399b4db6b4da84c2b6a4872ddba422) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72399b4db6b4da84c2b6a4872ddba422);
        cache_frame_72399b4db6b4da84c2b6a4872ddba422 = NULL;
    }

    assertFrameObject(frame_72399b4db6b4da84c2b6a4872ddba422);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$local$$$function__37_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_5a4fbe00cb12153144d88223a299d63e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a4fbe00cb12153144d88223a299d63e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5a4fbe00cb12153144d88223a299d63e)) {
        Py_XDECREF(cache_frame_5a4fbe00cb12153144d88223a299d63e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a4fbe00cb12153144d88223a299d63e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a4fbe00cb12153144d88223a299d63e = MAKE_FUNCTION_FRAME(codeobj_5a4fbe00cb12153144d88223a299d63e, module_werkzeug$local, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5a4fbe00cb12153144d88223a299d63e->m_type_description == NULL);
    frame_5a4fbe00cb12153144d88223a299d63e = cache_frame_5a4fbe00cb12153144d88223a299d63e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5a4fbe00cb12153144d88223a299d63e);
    assert(Py_REFCNT(frame_5a4fbe00cb12153144d88223a299d63e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_self);
        tmp_dircall_arg1_1 = par_self;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
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
        exception_tb = MAKE_TRACEBACK(frame_5a4fbe00cb12153144d88223a299d63e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a4fbe00cb12153144d88223a299d63e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a4fbe00cb12153144d88223a299d63e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a4fbe00cb12153144d88223a299d63e,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_5a4fbe00cb12153144d88223a299d63e == cache_frame_5a4fbe00cb12153144d88223a299d63e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5a4fbe00cb12153144d88223a299d63e);
        cache_frame_5a4fbe00cb12153144d88223a299d63e = NULL;
    }

    assertFrameObject(frame_5a4fbe00cb12153144d88223a299d63e);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__10___release_local__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__10___release_local__,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_fa5029e25bafc6cc88d6ef8634599f8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__11_push(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__11_push,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_d838b3dfb2eb0753129d57396ed56114,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__12_pop(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__12_pop,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_6c3a85dcc2947bf4caaff9fe12ddfdd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__13_top(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__13_top,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_6a8dd9002da81d5cb3c89acb76b04861,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__14___call__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__14___call__,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_e4698e385c4c74e1742c6901dc9b4322,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__15___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__15___init__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_d6296545cb887aeb80d9d82bb8c986e6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__16_cleanup(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__16_cleanup,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_de8f010f23155eb6d1d40b1a37db2d5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__17_make_middleware(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__17_make_middleware,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_fd433873e310519170f95df536afeb96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__17_make_middleware$$$function__1_application(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__17_make_middleware$$$function__1_application,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_c089a9dd67498403fe0a45bdfad24048,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__18_middleware(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__18_middleware,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_478bf9f7f33e24267df5c66b5d38c053,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__19___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__19___repr__,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_8ba2123e42a43a00c3edb7ee30c7bb36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__1_release_local(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__1_release_local,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83bfac0d60ac80a3380f05b1d98eceb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__20___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__20___init__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_e63bf1cf2fa5361657e3e27e9ab45b32,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__20___init__$$$function__1_bind_f(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__20___init__$$$function__1_bind_f,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_de128aa069414e641e1c17e7f7f3fbf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__20___init__$$$function__2_bind_f(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__20___init__$$$function__2_bind_f,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_f83c005d5ae63f41c44a44e6654abef6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__21___set_name__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__21___set_name__,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_b8334f211f54999b752cf1512e923b1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__22___get__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__22___get__,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_5811b8f1f323b7647c4e559172cfeec4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__23___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__23___repr__,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_2fe1edd45f15b13f0878535a6123129f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__24___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__24___call__,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_4a994a2b9acd1b0f86646456dd7a1616,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__25___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__25___init__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_75cd88eee724db42e62db1bcf274bafd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__25___init__$$$function__1_bind_f(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__25___init__$$$function__1_bind_f,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_8654ed296fc534d78ee0edaeb40c24bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__25___init__$$$function__1_bind_f$$$function__1_i_op(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__25___init__$$$function__1_bind_f$$$function__1_i_op,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_75f2f620e644106d94475dbc6a34ab71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__26__l_to_r_op(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__26__l_to_r_op,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_397d18a99a4415e1ea0666b193765687,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__26__l_to_r_op$$$function__1_r_op(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__26__l_to_r_op$$$function__1_r_op,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_876c350965119974040e400570915748,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__27__identity(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__27__identity,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_607f5c41b81b237e00d3b4542f50b8d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__28___init__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_36c89b63e1c0d65f2bdc562039579443,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__1__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__28___init__$$$function__1__get_current_object,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_ca334a39c13c64d0f238d4f0833c73f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__2__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__28___init__$$$function__2__get_current_object,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_28a71d7de2ff7bc32d8753624c1d113f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__3__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__28___init__$$$function__3__get_current_object,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_229ebfbe70246650bec336f665f17e76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__28___init__$$$function__4__get_current_object(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__28___init__$$$function__4__get_current_object,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_dabfeacfd8bcef6257da3d7830da5c20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__29_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__29_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_ee27411b62df613cd80005d11a82bd16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__2___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__2___init__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_57c206969e27fb79853d7f8eaa3e9592,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__30_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__30_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_bfd7fd17cf04098d7304a859fa609034,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__31_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__31_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_6a499812ad1a0c7f061a8ba399ac43b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__32_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_f5440881ad853f9d9eeed8e09dc999f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__33_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__33_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_d9decf094a5982361ac5617ee6d3fb81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__34_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__34_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_5fefb265d894d14e83dbbffaafa767fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__35_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__35_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_e5c0f9ff5b727c5f702ef5a57e66934d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__36_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__36_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_72399b4db6b4da84c2b6a4872ddba422,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__37_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__37_lambda,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_5a4fbe00cb12153144d88223a299d63e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__3___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__3___iter__,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_962d8bbf1effa6d688208adb56c50197,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__4___call__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__4___call__,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_aa29b2af4d2a8935aa99ddf22474beeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_werkzeug$local,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__5___release_local__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__5___release_local__,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_c02a8d09ca382520e595185e9fc78794,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__6___getattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__6___getattr__,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_4c4cd77bf8e7297bff93534e5e7092f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__7___setattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__7___setattr__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_88585872430cd8deac332ca3ba256565,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__8___delattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__8___delattr__,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_da1e0a511e8d34c8e68d3f14affc7704,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$local$$$function__9___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$local$$$function__9___init__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_18d4bb6af9fb6a71ca9df7707dd4df7e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_werkzeug$local,
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

function_impl_code functable_werkzeug$local[] = {
    impl_werkzeug$local$$$function__17_make_middleware$$$function__1_application,
    impl_werkzeug$local$$$function__20___init__$$$function__1_bind_f,
    impl_werkzeug$local$$$function__20___init__$$$function__2_bind_f,
    impl_werkzeug$local$$$function__25___init__$$$function__1_bind_f,
    impl_werkzeug$local$$$function__25___init__$$$function__1_bind_f$$$function__1_i_op,
    impl_werkzeug$local$$$function__26__l_to_r_op$$$function__1_r_op,
    impl_werkzeug$local$$$function__28___init__$$$function__1__get_current_object,
    impl_werkzeug$local$$$function__28___init__$$$function__2__get_current_object,
    impl_werkzeug$local$$$function__28___init__$$$function__3__get_current_object,
    impl_werkzeug$local$$$function__28___init__$$$function__4__get_current_object,
    impl_werkzeug$local$$$function__1_release_local,
    impl_werkzeug$local$$$function__2___init__,
    impl_werkzeug$local$$$function__3___iter__,
    impl_werkzeug$local$$$function__4___call__,
    impl_werkzeug$local$$$function__5___release_local__,
    impl_werkzeug$local$$$function__6___getattr__,
    impl_werkzeug$local$$$function__7___setattr__,
    impl_werkzeug$local$$$function__8___delattr__,
    impl_werkzeug$local$$$function__9___init__,
    impl_werkzeug$local$$$function__10___release_local__,
    impl_werkzeug$local$$$function__11_push,
    impl_werkzeug$local$$$function__12_pop,
    impl_werkzeug$local$$$function__13_top,
    impl_werkzeug$local$$$function__14___call__,
    impl_werkzeug$local$$$function__15___init__,
    impl_werkzeug$local$$$function__16_cleanup,
    impl_werkzeug$local$$$function__17_make_middleware,
    impl_werkzeug$local$$$function__18_middleware,
    impl_werkzeug$local$$$function__19___repr__,
    impl_werkzeug$local$$$function__20___init__,
    impl_werkzeug$local$$$function__21___set_name__,
    impl_werkzeug$local$$$function__22___get__,
    impl_werkzeug$local$$$function__23___repr__,
    impl_werkzeug$local$$$function__24___call__,
    impl_werkzeug$local$$$function__25___init__,
    impl_werkzeug$local$$$function__26__l_to_r_op,
    impl_werkzeug$local$$$function__27__identity,
    impl_werkzeug$local$$$function__28___init__,
    impl_werkzeug$local$$$function__29_lambda,
    impl_werkzeug$local$$$function__30_lambda,
    impl_werkzeug$local$$$function__31_lambda,
    NULL,
    impl_werkzeug$local$$$function__33_lambda,
    impl_werkzeug$local$$$function__34_lambda,
    impl_werkzeug$local$$$function__35_lambda,
    impl_werkzeug$local$$$function__36_lambda,
    impl_werkzeug$local$$$function__37_lambda,
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

    function_impl_code *current = functable_werkzeug$local;
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

    if (offset > sizeof(functable_werkzeug$local) || offset < 0) {
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
        functable_werkzeug$local[offset],
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
        module_werkzeug$local,
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
PyObject *modulecode_werkzeug$local(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("werkzeug.local");

    // Store the module for future use.
    module_werkzeug$local = module;

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
        PRINT_STRING("werkzeug.local: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("werkzeug.local: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwerkzeug$local\n");

    moduledict_werkzeug$local = MODULE_DICT(module_werkzeug$local);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_werkzeug$local,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_werkzeug$local,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[4]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_werkzeug$local,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_werkzeug$local,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_werkzeug$local,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_werkzeug$local);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_werkzeug$local);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    struct Nuitka_CellObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
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
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    struct Nuitka_FrameObject *frame_a590959be0b446ec8abf990f0a11d0c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_werkzeug$local$$$class__1_Local_35 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    PyObject *locals_werkzeug$local$$$class__2_LocalStack_104 = NULL;
    struct Nuitka_FrameObject *frame_8d30744577a5277353f531c5e0f3373c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_werkzeug$local$$$class__3_LocalManager_184 = NULL;
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
    PyObject *locals_werkzeug$local$$$class__4__ProxyLookup_252 = NULL;
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
    PyObject *locals_werkzeug$local$$$class__5__ProxyIOp_342 = NULL;
    struct Nuitka_FrameObject *frame_91b18df344355b084171dc062241db99_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_werkzeug$local$$$class__6_LocalProxy_377 = NULL;
    struct Nuitka_FrameObject *frame_0cae4e1a25de167516cb1655c72eb292_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_2);
    }
    frame_a590959be0b446ec8abf990f0a11d0c0 = MAKE_MODULE_FRAME(codeobj_a590959be0b446ec8abf990f0a11d0c0, module_werkzeug$local);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a590959be0b446ec8abf990f0a11d0c0);
    assert(Py_REFCNT(frame_a590959be0b446ec8abf990f0a11d0c0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[90], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[91], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[93]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_werkzeug$local;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[94];
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[95];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_werkzeug$local;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[94];
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[96];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_werkzeug$local;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[94];
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[97];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_werkzeug$local;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[98];
        tmp_level_value_4 = mod_consts[94];
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_werkzeug$local,
                mod_consts[2],
                mod_consts[94]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[51]);
        }
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_werkzeug$local,
                mod_consts[36],
                mod_consts[94]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[36]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[96];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_werkzeug$local;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[99];
        tmp_level_value_5 = mod_consts[94];
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_werkzeug$local,
                mod_consts[72],
                mod_consts[94]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[100];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_werkzeug$local;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[101];
        tmp_level_value_6 = mod_consts[102];
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_werkzeug$local,
                mod_consts[32],
                mod_consts[94]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 19;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[103],
            PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_Ellipsis;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[107]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 20;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[108], kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[110]);


        tmp_assign_source_16 = MAKE_FUNCTION_werkzeug$local$$$function__1_release_local(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
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
            locals_werkzeug$local$$$class__1_Local_35 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[112], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[86], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[114], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[116], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_2;
            tmp_defaults_1 = mod_consts[117];
            tmp_annotations_2 = DICT_COPY(mod_consts[118]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__2___init__(tmp_defaults_1, tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[120]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__3___iter__(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_4;
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[123]);
            tmp_annotations_4 = DICT_COPY(mod_consts[124]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__4___call__(tmp_kw_defaults_1, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[127]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__5___release_local__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[129]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__6___getattr__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[132]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__7___setattr__(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[134]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__8___delattr__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__1_Local_35, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[25];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_werkzeug$local$$$class__1_Local_35;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 35;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

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
        Py_DECREF(locals_werkzeug$local$$$class__1_Local_35);
        locals_werkzeug$local$$$class__1_Local_35 = NULL;
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

        Py_DECREF(locals_werkzeug$local$$$class__1_Local_35);
        locals_werkzeug$local$$$class__1_Local_35 = NULL;
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
        exception_lineno = 35;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_19);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[138]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_subscript_value_2 == NULL)) {
            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_5);

            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

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
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[94];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_8, mod_consts[139]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[139]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_tuple_element_4 = mod_consts[79];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 104;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_10, mod_consts[140]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[141];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_7 = mod_consts[40];
        tmp_default_value_1 = mod_consts[142];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_expression_value_11, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[40]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 104;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_werkzeug$local$$$class__2_LocalStack_104 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        frame_8d30744577a5277353f531c5e0f3373c_2 = MAKE_CLASS_FRAME(codeobj_8d30744577a5277353f531c5e0f3373c, module_werkzeug$local, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8d30744577a5277353f531c5e0f3373c_2);
        assert(Py_REFCNT(frame_8d30744577a5277353f531c5e0f3373c_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_9;
            tmp_defaults_2 = mod_consts[117];
            tmp_annotations_9 = DICT_COPY(mod_consts[145]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__9___init__(tmp_defaults_2, tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[127]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__10___release_local__(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[148]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__11_push(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[151]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__12_pop(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_13;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_14;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[154]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_4 = PyObject_GetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[154]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[154]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = DICT_COPY(mod_consts[151]);


            tmp_args_element_value_1 = MAKE_FUNCTION_werkzeug$local$$$function__13_top(tmp_annotations_13);

            frame_8d30744577a5277353f531c5e0f3373c_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_annotations_14 = DICT_COPY(mod_consts[151]);


            tmp_args_element_value_2 = MAKE_FUNCTION_werkzeug$local$$$function__13_top(tmp_annotations_14);

            frame_8d30744577a5277353f531c5e0f3373c_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_15;
            tmp_defaults_3 = mod_consts[117];
            tmp_kw_defaults_2 = DICT_COPY(mod_consts[123]);
            tmp_annotations_15 = DICT_COPY(mod_consts[156]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__14___call__(tmp_defaults_3, tmp_kw_defaults_2, tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8d30744577a5277353f531c5e0f3373c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8d30744577a5277353f531c5e0f3373c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8d30744577a5277353f531c5e0f3373c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8d30744577a5277353f531c5e0f3373c_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_8d30744577a5277353f531c5e0f3373c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__2_LocalStack_104, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[79];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_werkzeug$local$$$class__2_LocalStack_104;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 104;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_27 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_werkzeug$local$$$class__2_LocalStack_104);
        locals_werkzeug$local$$$class__2_LocalStack_104 = NULL;
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

        Py_DECREF(locals_werkzeug$local$$$class__2_LocalStack_104);
        locals_werkzeug$local$$$class__2_LocalStack_104 = NULL;
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
        exception_lineno = 104;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_27);
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
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_werkzeug$local$$$class__3_LocalManager_184 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[112], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[86], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[114], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[161];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[116], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_16;
            tmp_defaults_4 = mod_consts[117];
            tmp_annotations_16 = DICT_COPY(mod_consts[162]);
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__15___init__(tmp_defaults_4, tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[127]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__16_cleanup(tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_18;
            tmp_annotations_18 = DICT_COPY(mod_consts[165]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__17_make_middleware(tmp_annotations_18);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[167]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__18_middleware(tmp_annotations_19);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[168], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_20;
            tmp_annotations_20 = DICT_COPY(mod_consts[170]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__19___repr__(tmp_annotations_20);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__3_LocalManager_184, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_7 = mod_consts[160];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_werkzeug$local$$$class__3_LocalManager_184;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 184;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_31 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_werkzeug$local$$$class__3_LocalManager_184);
        locals_werkzeug$local$$$class__3_LocalManager_184 = NULL;
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

        Py_DECREF(locals_werkzeug$local$$$class__3_LocalManager_184);
        locals_werkzeug$local$$$class__3_LocalManager_184 = NULL;
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
        exception_lineno = 184;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_werkzeug$local$$$class__4__ProxyLookup_252 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[112], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[86], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[114], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[175];
        tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[116], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_21;
            tmp_defaults_5 = mod_consts[176];
            tmp_annotations_21 = DICT_COPY(mod_consts[177]);
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__20___init__(tmp_defaults_5, tmp_annotations_21);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(mod_consts[179]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__21___set_name__(tmp_annotations_22);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_23;
            tmp_defaults_6 = mod_consts[117];
            tmp_annotations_23 = DICT_COPY(mod_consts[182]);
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__22___get__(tmp_defaults_6, tmp_annotations_23);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_24;
            tmp_annotations_24 = DICT_COPY(mod_consts[170]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__23___repr__(tmp_annotations_24);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(mod_consts[185]);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__24___call__(tmp_annotations_25);

            tmp_res = PyDict_SetItem(locals_werkzeug$local$$$class__4__ProxyLookup_252, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_8 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[174];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_werkzeug$local$$$class__4__ProxyLookup_252;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
            frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 252;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_35 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_werkzeug$local$$$class__4__ProxyLookup_252);
        locals_werkzeug$local$$$class__4__ProxyLookup_252 = NULL;
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

        Py_DECREF(locals_werkzeug$local$$$class__4__ProxyLookup_252);
        locals_werkzeug$local$$$class__4__ProxyLookup_252 = NULL;
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
        exception_lineno = 252;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_35);
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
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        assert(!(tmp_tuple_element_9 == NULL));
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_38 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_13 = tmp_class_creation_5__bases;
        tmp_subscript_value_4 = mod_consts[94];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_2 = tmp_class_creation_5__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_14 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_14, mod_consts[139]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_6;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_15 = tmp_class_creation_5__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[139]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        tmp_tuple_element_10 = mod_consts[187];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_10 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_6 = tmp_class_creation_5__class_decl_dict;
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 342;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_6);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_16 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_16, mod_consts[140]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[141];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_17 = tmp_class_creation_5__metaclass;
        tmp_name_value_8 = mod_consts[40];
        tmp_default_value_2 = mod_consts[142];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_expression_value_17, tmp_name_value_8, tmp_default_value_2);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_4 = tmp_class_creation_5__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[40]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 342;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_42;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_43;
        outline_4_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_werkzeug$local$$$class__5__ProxyIOp_342 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__5__ProxyIOp_342, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[188];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__5__ProxyIOp_342, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[187];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__5__ProxyIOp_342, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_15;
        }
        frame_91b18df344355b084171dc062241db99_3 = MAKE_CLASS_FRAME(codeobj_91b18df344355b084171dc062241db99, module_werkzeug$local, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_91b18df344355b084171dc062241db99_3);
        assert(Py_REFCNT(frame_91b18df344355b084171dc062241db99_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__5__ProxyIOp_342, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_26;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_7 = mod_consts[189];
            tmp_annotations_26 = DICT_COPY(mod_consts[190]);
            Py_INCREF(tmp_defaults_7);

            tmp_closure_1[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__25___init__(tmp_defaults_7, tmp_annotations_26, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__5__ProxyIOp_342, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_91b18df344355b084171dc062241db99_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_91b18df344355b084171dc062241db99_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_91b18df344355b084171dc062241db99_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_91b18df344355b084171dc062241db99_3,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_91b18df344355b084171dc062241db99_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_15;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__5__ProxyIOp_342, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_15;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_12 = mod_consts[187];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_12 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_werkzeug$local$$$class__5__ProxyIOp_342;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 342;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto try_except_handler_15;
            }
            assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
            PyCell_SET(outline_4_var___class__, tmp_assign_source_44);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
        tmp_assign_source_43 = Nuitka_Cell_GET(outline_4_var___class__);
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_werkzeug$local$$$class__5__ProxyIOp_342);
        locals_werkzeug$local$$$class__5__ProxyIOp_342 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_werkzeug$local$$$class__5__ProxyIOp_342);
        locals_werkzeug$local$$$class__5__ProxyIOp_342 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 342;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_43);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_27;
        tmp_annotations_27 = DICT_COPY(mod_consts[192]);


        tmp_assign_source_45 = MAKE_FUNCTION_werkzeug$local$$$function__26__l_to_r_op(tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_28;
        tmp_annotations_28 = DICT_COPY(mod_consts[194]);


        tmp_assign_source_46 = MAKE_FUNCTION_werkzeug$local$$$function__27__identity(tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_46);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_5;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_expression_value_20 == NULL));
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[138]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_subscript_value_5 == NULL)) {
            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_19);

            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_assign_source_47 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_48 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_21 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[94];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_6, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_3 = tmp_class_creation_6__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_22 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_22, mod_consts[139]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_23 = tmp_class_creation_6__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[139]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_tuple_element_14 = mod_consts[10];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_14 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_6__class_decl_dict;
        frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 377;
        tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_24 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tmp_expression_value_24, mod_consts[140]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[141];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_25 = tmp_class_creation_6__metaclass;
        tmp_name_value_9 = mod_consts[40];
        tmp_default_value_3 = mod_consts[142];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_expression_value_25, tmp_name_value_9, tmp_default_value_3);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_6 = tmp_class_creation_6__prepared;
            tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_26 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[40]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 377;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_52;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_werkzeug$local$$$class__6_LocalProxy_377 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_18;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[196], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_18;
        }
        frame_0cae4e1a25de167516cb1655c72eb292_4 = MAKE_CLASS_FRAME(codeobj_0cae4e1a25de167516cb1655c72eb292, module_werkzeug$local, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0cae4e1a25de167516cb1655c72eb292_4);
        assert(Py_REFCNT(frame_0cae4e1a25de167516cb1655c72eb292_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[197];
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[198];
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[196]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[196]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_1 = mod_consts[53];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_29;
            tmp_defaults_8 = mod_consts[117];
            tmp_kw_defaults_3 = DICT_COPY(mod_consts[123]);
            tmp_annotations_29 = DICT_COPY(mod_consts[199]);
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$local$$$function__28___init__(tmp_defaults_8, tmp_kw_defaults_3, tmp_annotations_29);

            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_kw_call_value_2_1;
            tmp_called_value_12 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 523;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_kw_call_value_0_2 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[86]);

            if (unlikely(tmp_kw_call_value_0_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 524;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_kw_call_value_0_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 524;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_kw_call_value_1_1 = MAKE_FUNCTION_werkzeug$local$$$function__29_lambda();

            tmp_kw_call_value_2_1 = Py_True;
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 523;
            {
                PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[203]);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_kw_call_value_1_2;
            tmp_called_value_13 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 526;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_kw_call_value_0_3 = MAKE_FUNCTION_werkzeug$local$$$function__30_lambda();

            tmp_kw_call_value_1_2 = Py_True;
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 526;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[204]);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_value_0_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_dict_value_0_1;
            tmp_called_value_14 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 530;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_kw_call_arg_value_0_1 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[206]);

            if (tmp_kw_call_arg_value_0_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_kw_call_arg_value_0_1 = LOOKUP_BUILTIN(mod_consts[206]);
                    assert(tmp_kw_call_arg_value_0_1 != NULL);
                    Py_INCREF(tmp_kw_call_arg_value_0_1);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_werkzeug$local$$$function__31_lambda();

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 530;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_14, args, kw_values, mod_consts[207]);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_15 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 533;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_3 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[208]);

            if (tmp_args_element_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_args_element_value_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 533;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_16 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 534;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_4 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[210]);

            if (tmp_args_element_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_4 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_args_element_value_4);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 534;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[211], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_17;
            tmp_called_value_17 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 535;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 535;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
            Py_DECREF(tmp_called_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_27;
            tmp_called_value_18 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_18 == NULL)) {
                        tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 536;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_18);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_27 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 536;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[213]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 536;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 536;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 536;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 536;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_expression_value_28;
            tmp_called_value_19 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_19 == NULL)) {
                        tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 537;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_19);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_28 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 537;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[215]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 537;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 537;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[216], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_29;
            tmp_called_value_20 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_20 == NULL)) {
                        tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 538;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_29 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 538;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[217]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 538;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[218], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_expression_value_30;
            tmp_called_value_21 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_21 == NULL)) {
                        tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 539;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_30 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 539;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[219]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 539;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[220], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_expression_value_31;
            tmp_called_value_22 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 540;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_31 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 540;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[221]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 540;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 540;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[222], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_expression_value_32;
            tmp_called_value_23 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 541;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_32 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 541;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[223]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 541;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[224], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_24 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 542;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_11 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[225]);

            if (tmp_args_element_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_11 = LOOKUP_BUILTIN(mod_consts[225]);
                    assert(tmp_args_element_value_11 != NULL);
                    Py_INCREF(tmp_args_element_value_11);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 542;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_kw_call_arg_value_0_2;
            PyObject *tmp_kw_call_dict_value_0_2;
            tmp_called_value_25 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 543;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_kw_call_arg_value_0_2 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[227]);

            if (tmp_kw_call_arg_value_0_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_kw_call_arg_value_0_2 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_kw_call_arg_value_0_2);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_kw_call_dict_value_0_2 = MAKE_FUNCTION_werkzeug$local$$$function__32_lambda();

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 543;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_2};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_25, args, kw_values, mod_consts[207]);
            }

            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[228], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_26 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_26 == NULL)) {
                        tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 544;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_12 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[229]);

            if (tmp_args_element_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_12 = LOOKUP_BUILTIN(mod_consts[229]);
                    assert(tmp_args_element_value_12 != NULL);
                    Py_INCREF(tmp_args_element_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 544;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_27 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 546;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_13 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[230]);

            if (tmp_args_element_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_13 = LOOKUP_BUILTIN(mod_consts[230]);
                    assert(tmp_args_element_value_13 != NULL);
                    Py_INCREF(tmp_args_element_value_13);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 546;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_28 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 547;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_14 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[231]);

            if (tmp_args_element_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_14 = LOOKUP_BUILTIN(mod_consts[231]);
                    assert(tmp_args_element_value_14 != NULL);
                    Py_INCREF(tmp_args_element_value_14);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 547;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_kw_call_arg_value_0_3;
            PyObject *tmp_kw_call_dict_value_0_3;
            tmp_called_value_29 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 548;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_kw_call_arg_value_0_3 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[232]);

            if (tmp_kw_call_arg_value_0_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_kw_call_arg_value_0_3 = LOOKUP_BUILTIN(mod_consts[232]);
                    assert(tmp_kw_call_arg_value_0_3 != NULL);
                    Py_INCREF(tmp_kw_call_arg_value_0_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_kw_call_dict_value_0_3 = MAKE_FUNCTION_werkzeug$local$$$function__33_lambda();

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 548;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_3};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_29, args, kw_values, mod_consts[207]);
            }

            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[233], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_3;
            tmp_called_value_30 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 559;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_kw_call_value_0_4 = MAKE_FUNCTION_werkzeug$local$$$function__34_lambda();

            tmp_kw_call_value_1_3 = Py_True;
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 559;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, kw_values, mod_consts[204]);
            }

            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_kw_call_value_0_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_31 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 562;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_15 = MAKE_FUNCTION_werkzeug$local$$$function__35_lambda();

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 562;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[234], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_32 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_32 == NULL)) {
                        tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 563;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_16 = MAKE_FUNCTION_werkzeug$local$$$function__36_lambda();

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 563;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[235], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_17;
            tmp_called_value_33 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_33 == NULL)) {
                        tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 565;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_33);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_17 = MAKE_FUNCTION_werkzeug$local$$$function__37_lambda();

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 565;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_34 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_34 == NULL)) {
                        tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 566;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_18 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[236]);

            if (tmp_args_element_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_18 = LOOKUP_BUILTIN(mod_consts[236]);
                    assert(tmp_args_element_value_18 != NULL);
                    Py_INCREF(tmp_args_element_value_18);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 566;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[237], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_expression_value_33;
            tmp_called_value_35 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_35 == NULL)) {
                        tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 567;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_33 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 567;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[238]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 567;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 567;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[239], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_expression_value_34;
            tmp_called_value_36 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_36 == NULL)) {
                        tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 568;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_36);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_34 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 568;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[240]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 568;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 568;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_expression_value_35;
            tmp_called_value_37 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 569;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_35 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 569;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[241]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 569;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 569;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[242], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_expression_value_36;
            tmp_called_value_38 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_38 == NULL)) {
                        tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 570;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_38);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_36 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 570;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[243]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 570;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 570;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[244], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_23;
            tmp_called_value_39 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_39 == NULL)) {
                        tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 572;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_39);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_23 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[245]);

            if (tmp_args_element_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_23 = LOOKUP_BUILTIN(mod_consts[245]);
                    assert(tmp_args_element_value_23 != NULL);
                    Py_INCREF(tmp_args_element_value_23);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 572;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_24;
            tmp_called_value_40 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_40 == NULL)) {
                        tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 573;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_40);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_24 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[246]);

            if (tmp_args_element_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_24 = LOOKUP_BUILTIN(mod_consts[246]);
                    assert(tmp_args_element_value_24 != NULL);
                    Py_INCREF(tmp_args_element_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 573;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[247], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_25;
            tmp_called_value_41 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_41 == NULL)) {
                        tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 574;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_41);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_25 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[248]);

            if (tmp_args_element_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_25 = (PyObject *)&PyReversed_Type;
                    Py_INCREF(tmp_args_element_value_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 574;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[249], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_expression_value_37;
            tmp_called_value_42 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_42 == NULL)) {
                        tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 575;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_42);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_37 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 575;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[250]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_args_element_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_42);

                exception_lineno = 575;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 575;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[251], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_expression_value_38;
            tmp_called_value_43 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_43 == NULL)) {
                        tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 576;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_38 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 576;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[252]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_args_element_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_43);

                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 576;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[253], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_expression_value_39;
            tmp_called_value_44 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_44 == NULL)) {
                        tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 577;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_39 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 577;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[254]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);

                exception_lineno = 577;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 577;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[255], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_expression_value_40;
            tmp_called_value_45 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_45 == NULL)) {
                        tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 578;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_40 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 578;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[256]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_args_element_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 578;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 578;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_29);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 578;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[257], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 578;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_expression_value_41;
            tmp_called_value_46 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 579;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_41 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 579;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[258]);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_46);

                exception_lineno = 579;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 579;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[259], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_expression_value_42;
            tmp_called_value_47 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_47 == NULL)) {
                        tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 580;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_42 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);

                        exception_lineno = 580;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[260]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 580;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[261], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_expression_value_43;
            tmp_called_value_48 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_48 == NULL)) {
                        tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 581;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_43 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 581;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[262]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);

                exception_lineno = 581;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 581;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[263], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_expression_value_44;
            tmp_called_value_49 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_49 == NULL)) {
                        tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 582;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_44 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 582;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[264]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_args_element_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_49);

                exception_lineno = 582;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 582;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 582;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[265], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 582;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_34;
            tmp_called_value_50 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_50 == NULL)) {
                        tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 583;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_34 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[266]);

            if (tmp_args_element_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_34 = LOOKUP_BUILTIN(mod_consts[266]);
                    assert(tmp_args_element_value_34 != NULL);
                    Py_INCREF(tmp_args_element_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 583;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_35;
            tmp_called_value_51 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_51 == NULL)) {
                        tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 584;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_51);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_35 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[268]);

            if (tmp_args_element_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_35 = LOOKUP_BUILTIN(mod_consts[268]);
                    assert(tmp_args_element_value_35 != NULL);
                    Py_INCREF(tmp_args_element_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 584;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_35);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 584;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[269], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 584;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_expression_value_45;
            tmp_called_value_52 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_52 == NULL)) {
                        tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 585;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_45 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 585;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[270]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_args_element_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_52);

                exception_lineno = 585;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 585;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 585;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[271], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 585;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_expression_value_46;
            tmp_called_value_53 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_53 == NULL)) {
                        tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 586;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_53);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_46 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_53);

                        exception_lineno = 586;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[272]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);

                exception_lineno = 586;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 586;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[273], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_expression_value_47;
            tmp_called_value_54 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_54 == NULL)) {
                        tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 587;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_54);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_47 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_54);

                        exception_lineno = 587;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[274]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_54);

                exception_lineno = 587;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 587;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_38);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[275], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_expression_value_48;
            tmp_called_value_55 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_55 == NULL)) {
                        tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 588;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_55);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_48 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_55);

                        exception_lineno = 588;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[276]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_55);

                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 588;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[277], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_expression_value_49;
            tmp_called_value_56 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_56 == NULL)) {
                        tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 589;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_49 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_56);

                        exception_lineno = 589;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[278]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_56);

                exception_lineno = 589;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 589;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[279], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_expression_value_50;
            tmp_called_value_57 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_57 == NULL)) {
                        tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 590;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_57);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_58 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_58 == NULL)) {
                        tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_57);

                        exception_lineno = 590;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_50 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_57);
                        Py_DECREF(tmp_called_value_58);

                        exception_lineno = 590;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[252]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_args_element_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_called_value_58);

                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 590;
            tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);

                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 590;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_41);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[280], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_expression_value_51;
            tmp_called_value_59 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_59 == NULL)) {
                        tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 591;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_59);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_60 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_60 == NULL)) {
                        tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_59);

                        exception_lineno = 591;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_60);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_51 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_59);
                        Py_DECREF(tmp_called_value_60);

                        exception_lineno = 591;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[254]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_args_element_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_called_value_60);

                exception_lineno = 591;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 591;
            tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_44);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_args_element_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_59);

                exception_lineno = 591;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 591;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 591;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[281], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 591;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_expression_value_52;
            tmp_called_value_61 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_61 == NULL)) {
                        tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 592;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_62 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_62 == NULL)) {
                        tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_61);

                        exception_lineno = 592;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_62);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_52 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_61);
                        Py_DECREF(tmp_called_value_62);

                        exception_lineno = 592;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[256]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_args_element_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_called_value_62);

                exception_lineno = 592;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 592;
            tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_args_element_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_61);

                exception_lineno = 592;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 592;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 592;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[282], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 592;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_expression_value_53;
            tmp_called_value_63 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_63 == NULL)) {
                        tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 593;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_63);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_64 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_64 == NULL)) {
                        tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_63);

                        exception_lineno = 593;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_64);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_53 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_63);
                        Py_DECREF(tmp_called_value_64);

                        exception_lineno = 593;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[258]);
            Py_DECREF(tmp_expression_value_53);
            if (tmp_args_element_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_63);
                Py_DECREF(tmp_called_value_64);

                exception_lineno = 593;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 593;
            tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_args_element_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_63);

                exception_lineno = 593;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 593;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_47);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 593;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[283], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 593;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_expression_value_54;
            tmp_called_value_65 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_65 == NULL)) {
                        tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 594;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_66 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_66 == NULL)) {
                        tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_65);

                        exception_lineno = 594;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_66);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_54 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_65);
                        Py_DECREF(tmp_called_value_66);

                        exception_lineno = 594;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[260]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_args_element_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_65);
                Py_DECREF(tmp_called_value_66);

                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 594;
            tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_50);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_args_element_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_65);

                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 594;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[284], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_expression_value_55;
            tmp_called_value_67 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_67 == NULL)) {
                        tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 595;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_67);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_68 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_68 == NULL)) {
                        tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_67);

                        exception_lineno = 595;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_68);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_55 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_67);
                        Py_DECREF(tmp_called_value_68);

                        exception_lineno = 595;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[262]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_args_element_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_67);
                Py_DECREF(tmp_called_value_68);

                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 595;
            tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_67);

                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 595;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[285], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_expression_value_56;
            tmp_called_value_69 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_69 == NULL)) {
                        tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 596;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_70 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_70 == NULL)) {
                        tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_69);

                        exception_lineno = 596;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_70);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_56 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_69);
                        Py_DECREF(tmp_called_value_70);

                        exception_lineno = 596;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[264]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_args_element_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_69);
                Py_DECREF(tmp_called_value_70);

                exception_lineno = 596;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 596;
            tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_54);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_args_element_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_69);

                exception_lineno = 596;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 596;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_53);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[286], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_56;
            tmp_called_value_71 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_71 == NULL)) {
                        tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 597;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_71);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_72 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_72 == NULL)) {
                        tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_71);

                        exception_lineno = 597;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_72);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_56 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[266]);

            if (tmp_args_element_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_56 = LOOKUP_BUILTIN(mod_consts[266]);
                    assert(tmp_args_element_value_56 != NULL);
                    Py_INCREF(tmp_args_element_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 597;
            tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_56);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_56);
            if (tmp_args_element_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_71);

                exception_lineno = 597;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 597;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_55);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[287], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_element_value_58;
            tmp_called_value_73 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_73 == NULL)) {
                        tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 598;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_74 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_74 == NULL)) {
                        tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_73);

                        exception_lineno = 598;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_74);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_58 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[268]);

            if (tmp_args_element_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_58 = LOOKUP_BUILTIN(mod_consts[268]);
                    assert(tmp_args_element_value_58 != NULL);
                    Py_INCREF(tmp_args_element_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 598;
            tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_58);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_58);
            if (tmp_args_element_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_73);

                exception_lineno = 598;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 598;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_57);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_57);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[288], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_75;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_expression_value_57;
            tmp_called_value_75 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_75 == NULL)) {
                        tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 599;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_75);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_76 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_76 == NULL)) {
                        tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_75);

                        exception_lineno = 599;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_76);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_57 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_75);
                        Py_DECREF(tmp_called_value_76);

                        exception_lineno = 599;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[270]);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_args_element_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_75);
                Py_DECREF(tmp_called_value_76);

                exception_lineno = 599;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 599;
            tmp_args_element_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_60);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_args_element_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_75);

                exception_lineno = 599;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 599;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_75, tmp_args_element_value_59);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_args_element_value_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[289], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_expression_value_58;
            tmp_called_value_77 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_77 == NULL)) {
                        tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 600;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_77);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_78 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_78 == NULL)) {
                        tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_77);

                        exception_lineno = 600;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_78);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_58 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_77);
                        Py_DECREF(tmp_called_value_78);

                        exception_lineno = 600;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[272]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_args_element_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_77);
                Py_DECREF(tmp_called_value_78);

                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 600;
            tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_62);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_62);
            if (tmp_args_element_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_77);

                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 600;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_61);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[290], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_value_80;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_expression_value_59;
            tmp_called_value_79 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_79 == NULL)) {
                        tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 601;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_79);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_80 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_80 == NULL)) {
                        tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_79);

                        exception_lineno = 601;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_80);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_59 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_79);
                        Py_DECREF(tmp_called_value_80);

                        exception_lineno = 601;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[274]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_args_element_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_79);
                Py_DECREF(tmp_called_value_80);

                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 601;
            tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_64);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_64);
            if (tmp_args_element_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_79);

                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 601;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_63);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_63);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[291], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_81;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_expression_value_60;
            tmp_called_value_81 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_81 == NULL)) {
                        tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 602;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_81);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_82 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_82 == NULL)) {
                        tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_81);

                        exception_lineno = 602;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_82);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_60 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_81);
                        Py_DECREF(tmp_called_value_82);

                        exception_lineno = 602;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[276]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_args_element_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_81);
                Py_DECREF(tmp_called_value_82);

                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 602;
            tmp_args_element_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_66);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_66);
            if (tmp_args_element_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_81);

                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 602;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_65);
            Py_DECREF(tmp_called_value_81);
            Py_DECREF(tmp_args_element_value_65);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[292], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_expression_value_61;
            tmp_called_value_83 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_83 == NULL)) {
                        tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 603;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_83);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_84 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[193]);

            if (tmp_called_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[193]);

                    if (unlikely(tmp_called_value_84 == NULL)) {
                        tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
                    }

                    if (tmp_called_value_84 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_83);

                        exception_lineno = 603;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_84);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_61 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_83);
                        Py_DECREF(tmp_called_value_84);

                        exception_lineno = 603;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[278]);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_args_element_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_83);
                Py_DECREF(tmp_called_value_84);

                exception_lineno = 603;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 603;
            tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_68);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_args_element_value_68);
            if (tmp_args_element_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_83);

                exception_lineno = 603;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 603;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_67);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_67);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 603;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[293], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 603;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_85;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_expression_value_62;
            tmp_called_value_85 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_85 == NULL)) {
                        tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 604;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_85);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_62 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_85);

                        exception_lineno = 604;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[294]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_args_element_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_85);

                exception_lineno = 604;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 604;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_85, tmp_args_element_value_69);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_69);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 604;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[295], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 604;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_expression_value_63;
            tmp_called_value_86 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_86 == NULL)) {
                        tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_86 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 605;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_86);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_63 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_86);

                        exception_lineno = 605;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[296]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_args_element_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_86);

                exception_lineno = 605;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 605;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_70);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_70);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 605;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[297], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 605;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_87;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_expression_value_64;
            tmp_called_value_87 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_87 == NULL)) {
                        tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 606;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_87);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_64 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_87);

                        exception_lineno = 606;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[298]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_args_element_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_87);

                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 606;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_87, tmp_args_element_value_71);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_args_element_value_71);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[299], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_88;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_expression_value_65;
            tmp_called_value_88 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_88 == NULL)) {
                        tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_88 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 607;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_88);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_65 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_88);

                        exception_lineno = 607;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[300]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_args_element_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_88);

                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 607;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_72);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_72);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[301], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_89;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_expression_value_66;
            tmp_called_value_89 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_89 == NULL)) {
                        tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 608;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_89);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_66 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_89);

                        exception_lineno = 608;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_66);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[302]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_args_element_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_89);

                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 608;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_73);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_73);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[303], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_90;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_expression_value_67;
            tmp_called_value_90 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_90 == NULL)) {
                        tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 609;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_90);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_67 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_90);

                        exception_lineno = 609;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_67);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[304]);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_args_element_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_90);

                exception_lineno = 609;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 609;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_74);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_74);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[305], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_expression_value_68;
            tmp_called_value_91 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_91 == NULL)) {
                        tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 610;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_91);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_68 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_91);

                        exception_lineno = 610;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_68);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[306]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_args_element_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_91);

                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 610;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_91, tmp_args_element_value_75);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_75);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[307], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_92;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_expression_value_69;
            tmp_called_value_92 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_92 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_92 == NULL)) {
                        tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_92 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 611;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_92);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_69 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_92);

                        exception_lineno = 611;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[308]);
            Py_DECREF(tmp_expression_value_69);
            if (tmp_args_element_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_92);

                exception_lineno = 611;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 611;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_76);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_76);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[309], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_93;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_expression_value_70;
            tmp_called_value_93 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_93 == NULL)) {
                        tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 612;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_93);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_70 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_93);

                        exception_lineno = 612;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[310]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_args_element_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_93);

                exception_lineno = 612;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 612;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_93, tmp_args_element_value_77);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_args_element_value_77);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[311], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_94;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_expression_value_71;
            tmp_called_value_94 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_94 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_94 == NULL)) {
                        tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_94 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 613;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_94);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_71 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_94);

                        exception_lineno = 613;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_71);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[312]);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_args_element_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_94);

                exception_lineno = 613;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 613;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_78);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_78);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[313], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_expression_value_72;
            tmp_called_value_95 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_95 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_95 == NULL)) {
                        tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_95 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 614;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_95);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_72 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_95);

                        exception_lineno = 614;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[314]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_args_element_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_95);

                exception_lineno = 614;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 614;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_79);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_79);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[315], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_expression_value_73;
            tmp_called_value_96 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_96 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_96 == NULL)) {
                        tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_96 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 615;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_96);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_73 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_96);

                        exception_lineno = 615;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[316]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_args_element_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_96);

                exception_lineno = 615;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 615;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_80);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_args_element_value_80);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[317], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_97;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_expression_value_74;
            tmp_called_value_97 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[187]);

            if (tmp_called_value_97 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_value_97 == NULL)) {
                        tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_value_97 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 616;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_97);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_74 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_97);

                        exception_lineno = 616;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[318]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_args_element_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_97);

                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 616;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_97, tmp_args_element_value_81);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_81);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[319], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_expression_value_75;
            tmp_called_value_98 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_98 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_98 == NULL)) {
                        tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_98 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 617;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_98);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_75 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_98);

                        exception_lineno = 617;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[320]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_args_element_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_98);

                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 617;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_82);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_82);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[321], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_99;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_expression_value_76;
            tmp_called_value_99 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_99 == NULL)) {
                        tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_99 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 618;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_99);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_76 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_99);

                        exception_lineno = 618;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[322]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_args_element_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_99);

                exception_lineno = 618;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 618;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_83);
            Py_DECREF(tmp_called_value_99);
            Py_DECREF(tmp_args_element_value_83);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[323], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_100;
            PyObject *tmp_args_element_value_84;
            tmp_called_value_100 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_100 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_100 == NULL)) {
                        tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_100 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 619;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_100);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_84 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[324]);

            if (tmp_args_element_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_84 = LOOKUP_BUILTIN(mod_consts[324]);
                    assert(tmp_args_element_value_84 != NULL);
                    Py_INCREF(tmp_args_element_value_84);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 619;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_84);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_84);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[325], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_101;
            PyObject *tmp_args_element_value_85;
            PyObject *tmp_expression_value_77;
            tmp_called_value_101 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_101 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_101 == NULL)) {
                        tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_101 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 620;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_101);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_77 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_101);

                        exception_lineno = 620;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_77);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[326]);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_args_element_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_101);

                exception_lineno = 620;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 620;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_101, tmp_args_element_value_85);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_85);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[327], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_102;
            PyObject *tmp_args_element_value_86;
            tmp_called_value_102 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_102 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_102 == NULL)) {
                        tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_102 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 621;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_102);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_86 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[328]);

            if (tmp_args_element_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_86 = (PyObject *)&PyComplex_Type;
                    Py_INCREF(tmp_args_element_value_86);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 621;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_86);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_args_element_value_86);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[329], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_103;
            PyObject *tmp_args_element_value_87;
            tmp_called_value_103 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_103 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_103 == NULL)) {
                        tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_103 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 622;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_103);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_87 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[330]);

            if (tmp_args_element_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_87 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_args_element_value_87);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 622;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_103, tmp_args_element_value_87);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_87);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[331], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_104;
            PyObject *tmp_args_element_value_88;
            tmp_called_value_104 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_104 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_104 == NULL)) {
                        tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_104 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 623;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_104);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_88 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[332]);

            if (tmp_args_element_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_88 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_args_element_value_88);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 623;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_88);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_88);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[333], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_105;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_expression_value_78;
            tmp_called_value_105 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_105 == NULL)) {
                        tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_105 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 624;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_105);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_78 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[96]);

            if (tmp_expression_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_expression_value_78 == NULL)) {
                        tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_expression_value_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_105);

                        exception_lineno = 624;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_78);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[334]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_args_element_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_105);

                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 624;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_105, tmp_args_element_value_89);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_args_element_value_89);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[335], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_106;
            PyObject *tmp_args_element_value_90;
            tmp_called_value_106 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_106 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_106 == NULL)) {
                        tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_106 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 625;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_106);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_90 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[336]);

            if (tmp_args_element_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_90 = LOOKUP_BUILTIN(mod_consts[336]);
                    assert(tmp_args_element_value_90 != NULL);
                    Py_INCREF(tmp_args_element_value_90);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 625;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_90);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_90);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[337], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_107;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_expression_value_79;
            tmp_called_value_107 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_107 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_107 == NULL)) {
                        tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_107 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 626;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_107);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_79 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[95]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_107);

                        exception_lineno = 626;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[338]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_args_element_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_107);

                exception_lineno = 626;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 626;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_91);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_91);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[339], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_108;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_expression_value_80;
            tmp_called_value_108 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_108 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_108 == NULL)) {
                        tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_108 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 627;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_108);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_80 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[95]);

            if (tmp_expression_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_expression_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_108);

                        exception_lineno = 627;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_80);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[340]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_args_element_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_108);

                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 627;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_92);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_args_element_value_92);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[341], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_109;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_expression_value_81;
            tmp_called_value_109 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_109 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_109 == NULL)) {
                        tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_109 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 628;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_109);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_81 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[95]);

            if (tmp_expression_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_expression_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_109);

                        exception_lineno = 628;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_81);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[342]);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_args_element_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_109);

                exception_lineno = 628;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 628;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_109, tmp_args_element_value_93);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_93);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[343], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_110;
            tmp_called_value_110 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_110 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_110 == NULL)) {
                        tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_110 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 629;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_110);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 629;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_110);
            Py_DECREF(tmp_called_value_110);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[344], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_111;
            tmp_called_value_111 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_111 == NULL)) {
                        tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_111 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 630;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_111);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 630;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_111);
            Py_DECREF(tmp_called_value_111);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[345], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_112;
            tmp_called_value_112 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_112 == NULL)) {
                        tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_112 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 631;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_112);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 631;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_112);
            Py_DECREF(tmp_called_value_112);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[346], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_113;
            tmp_called_value_113 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_113 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_113 == NULL)) {
                        tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_113 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 632;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_113);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 632;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_113);
            Py_DECREF(tmp_called_value_113);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[347], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_114;
            tmp_called_value_114 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_114 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_114 == NULL)) {
                        tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_114 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 633;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_114);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 633;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_114);
            Py_DECREF(tmp_called_value_114);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[348], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_115;
            tmp_called_value_115 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_115 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_115 == NULL)) {
                        tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_115 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 634;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_115);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 634;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_115);
            Py_DECREF(tmp_called_value_115);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[349], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_116;
            tmp_called_value_116 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_116 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_116 == NULL)) {
                        tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_116 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 635;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_116);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 635;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_116);
            Py_DECREF(tmp_called_value_116);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[350], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_117;
            PyObject *tmp_args_element_value_94;
            PyObject *tmp_expression_value_82;
            tmp_called_value_117 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_117 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_117 == NULL)) {
                        tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_117 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 636;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_117);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_82 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[14]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_117);

                        exception_lineno = 636;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[14]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_args_element_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_117);

                exception_lineno = 636;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 636;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_94);
            Py_DECREF(tmp_called_value_117);
            Py_DECREF(tmp_args_element_value_94);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[351], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_118;
            PyObject *tmp_args_element_value_95;
            PyObject *tmp_expression_value_83;
            tmp_called_value_118 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[174]);

            if (tmp_called_value_118 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[174]);

                    if (unlikely(tmp_called_value_118 == NULL)) {
                        tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                    }

                    if (tmp_called_value_118 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 637;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_118);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_83 = PyObject_GetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[14]);

            if (tmp_expression_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_83 == NULL)) {
                        tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_118);

                        exception_lineno = 637;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_83);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[352]);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_args_element_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_118);

                exception_lineno = 637;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame.f_lineno = 637;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_95);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_95);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[353], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0cae4e1a25de167516cb1655c72eb292_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0cae4e1a25de167516cb1655c72eb292_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0cae4e1a25de167516cb1655c72eb292_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0cae4e1a25de167516cb1655c72eb292_4,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_0cae4e1a25de167516cb1655c72eb292_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_18;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_werkzeug$local$$$class__6_LocalProxy_377, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_18;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_119;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_119 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_16 = mod_consts[10];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_16 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_werkzeug$local$$$class__6_LocalProxy_377;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_6__class_decl_dict;
            frame_a590959be0b446ec8abf990f0a11d0c0->m_frame.f_lineno = 377;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_119, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_53 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_werkzeug$local$$$class__6_LocalProxy_377);
        locals_werkzeug$local$$$class__6_LocalProxy_377 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_werkzeug$local$$$class__6_LocalProxy_377);
        locals_werkzeug$local$$$class__6_LocalProxy_377 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 377;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$local, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_53);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a590959be0b446ec8abf990f0a11d0c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a590959be0b446ec8abf990f0a11d0c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a590959be0b446ec8abf990f0a11d0c0, exception_lineno);
    }



    assertFrameObject(frame_a590959be0b446ec8abf990f0a11d0c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("werkzeug.local", false);

    Py_INCREF(module_werkzeug$local);
    return module_werkzeug$local;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$local, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("werkzeug$local", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
