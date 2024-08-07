/* Generated code for Python module 'idna.uts46data'
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

/* The "module_idna$uts46data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna$uts46data;
PyDictObject *moduledict_idna$uts46data;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[183];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[183];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("idna.uts46data"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 183; i++) {
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
void checkModuleConstants_idna$uts46data(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 183; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9e0670ec1ab110896395deeadfbe4163;
static PyCodeObject *codeobj_5ed93e860ed2ad9faf730c2498e4cb9b;
static PyCodeObject *codeobj_7f2231423cba8973d65bd6f60645a3bc;
static PyCodeObject *codeobj_2732039f65071c332f80cbe9bcd4783d;
static PyCodeObject *codeobj_60d44507eb519509487d8427a6ea28c3;
static PyCodeObject *codeobj_65e6be50ff778b4eea9b9653e56538b7;
static PyCodeObject *codeobj_a3f3220863e42042bb3ebb2fe5c64825;
static PyCodeObject *codeobj_747d6ab605354aa85f74c49209e21e6b;
static PyCodeObject *codeobj_ed3212a1e2b14e6afbf738d979adbbba;
static PyCodeObject *codeobj_fd75632d63934eb305391185abe12314;
static PyCodeObject *codeobj_a81f743e666f768d0c84a542d381f84d;
static PyCodeObject *codeobj_38a4f98fc2728d5834182ea7c81b9400;
static PyCodeObject *codeobj_b14cfc2fede19561eef6182f926337a8;
static PyCodeObject *codeobj_c41d19329c367443761cdceee11a48c8;
static PyCodeObject *codeobj_7156cc9ef7ef5d4fe0d92a815b9ad1f4;
static PyCodeObject *codeobj_6fa009f5b78a931d54d69d014335f7b9;
static PyCodeObject *codeobj_dc1faa20e4268e30d0bebef0bef0bd54;
static PyCodeObject *codeobj_b1474319693582ad0e9c087d668bffed;
static PyCodeObject *codeobj_25fae3c12462b8279000e024bb74e60a;
static PyCodeObject *codeobj_9332e0970d7b5d9f115dcfdd0a64cadc;
static PyCodeObject *codeobj_f18a03d6976c80198ae77db691f368b7;
static PyCodeObject *codeobj_2a32eaee2a4f187501ae337978a6ac89;
static PyCodeObject *codeobj_ab2267598d9c0cbbd3407df735617a99;
static PyCodeObject *codeobj_cd5688f81106f2a5716ade936c818c69;
static PyCodeObject *codeobj_fad869fe3e575bd0691a5ee559cf4b97;
static PyCodeObject *codeobj_68ea52ffab1959f44e303c7260b861d2;
static PyCodeObject *codeobj_8491977d5423897fbfd6feb422d8cfc4;
static PyCodeObject *codeobj_0be356fd1d581c43769dbe9ce67935a4;
static PyCodeObject *codeobj_e5be41bcd00ff6dc32c47d9e0a7e70f2;
static PyCodeObject *codeobj_394a944e150ffc7e0f08ead9a9ee4741;
static PyCodeObject *codeobj_13551d553c90fbf973e99ab245a69b03;
static PyCodeObject *codeobj_fbb7588c16994092fce8792e849d7420;
static PyCodeObject *codeobj_f6539882d61a975ba8355b37d376d9f4;
static PyCodeObject *codeobj_c1be6de6fd0b3b9bd1c57df546c11863;
static PyCodeObject *codeobj_c7908e5c6b6f40d66db8f6846016a97a;
static PyCodeObject *codeobj_1917be38b428ebf246a6f58f020da2a6;
static PyCodeObject *codeobj_461ce061cee9aedb7fe9fc9a81aed284;
static PyCodeObject *codeobj_c4c389413207d589106757d1fddc390f;
static PyCodeObject *codeobj_5ebc100a79e75a137e420cf639feb58c;
static PyCodeObject *codeobj_a9bd315337a408990c0c5d7107b6f78c;
static PyCodeObject *codeobj_a3a779b4c924d864be2d64e9a166b6da;
static PyCodeObject *codeobj_e286193f39b9eec2df4845983bfa79e9;
static PyCodeObject *codeobj_5117fa593a2386c3fb9bb24b51f162e0;
static PyCodeObject *codeobj_45f359dc1a3a0cac95a8734b066f9d2f;
static PyCodeObject *codeobj_b789820c7007512590d644d755db4dc1;
static PyCodeObject *codeobj_0b58bc0c5b5a4e3f6b381c45178e11ec;
static PyCodeObject *codeobj_35216d62186ff99ac6ebd3f8f9f86ed0;
static PyCodeObject *codeobj_c9da000ca0fd6a6c75cf77d02b27313c;
static PyCodeObject *codeobj_5b88021412eea22ab3b2818c5c68e22d;
static PyCodeObject *codeobj_c8959a426da4debe6027663a6134a0fe;
static PyCodeObject *codeobj_eec4bf58d828d9ecba6fb2046a5119ce;
static PyCodeObject *codeobj_add98f9b63328e623f70ba2efc5fadcd;
static PyCodeObject *codeobj_f1c38724d388dd405fddc0489263acd4;
static PyCodeObject *codeobj_5d4f1556bda5f31813cca5c6a201d3e7;
static PyCodeObject *codeobj_6c37b6891020123e4771c5e55f1d14f2;
static PyCodeObject *codeobj_9bddb9385fa1bc05d699d69eb754620e;
static PyCodeObject *codeobj_faf904d554a00ced99c3ef5e3e889cf5;
static PyCodeObject *codeobj_6a6f78c7fdbf1d45db1927f53c1df0ab;
static PyCodeObject *codeobj_fa9014395ac95021b935e44e1211758c;
static PyCodeObject *codeobj_8951544aa76166432f75580f548ca221;
static PyCodeObject *codeobj_084f35bfc0c344259245b2d9986abae8;
static PyCodeObject *codeobj_611cb89b10f51d325007a0dcbedea28d;
static PyCodeObject *codeobj_3091fda701222068d8b44457ba9addb5;
static PyCodeObject *codeobj_8ec0aa98a18abc481ea5244a5ba60da6;
static PyCodeObject *codeobj_9d1249c8bcf3ed55a853d64e0d35e234;
static PyCodeObject *codeobj_399c8ed451846f6a6ed9afc883ca1a10;
static PyCodeObject *codeobj_0dc63890739388eeb0a884cfde35ba33;
static PyCodeObject *codeobj_9928f3065a2e4ee60806fb6f2a78697e;
static PyCodeObject *codeobj_fdb2df8d7e60d09b41b33bffd5c36841;
static PyCodeObject *codeobj_b115408e8b16ab7cf740eacf8ef235e1;
static PyCodeObject *codeobj_c54a89382b7d0d7d61bf62995b8f33f9;
static PyCodeObject *codeobj_f780a3d24a7abe0794c6758676f1ddb5;
static PyCodeObject *codeobj_aa8f55265c3c8efaa6277dc235367b09;
static PyCodeObject *codeobj_7fbdba80ed3a38cf1faf49add15b63a3;
static PyCodeObject *codeobj_5e1385526a20cb068b4a876885aac17e;
static PyCodeObject *codeobj_0ac9e58fe094c54d58dc17701f4e4d86;
static PyCodeObject *codeobj_cd7b497dd50c30c38fb7325ba3684a90;
static PyCodeObject *codeobj_64ff1c2f3f5fd1eb5ab4e5bca301ca7d;
static PyCodeObject *codeobj_b9644c5ef76513bca558fae8cb6c5504;
static PyCodeObject *codeobj_08efa3a5fb315a10d670867438f9596c;
static PyCodeObject *codeobj_0a91a4dc4fc8791ddd0d745b8f766351;
static PyCodeObject *codeobj_ab40b37874ed7cb88f3259aa89e50666;
static PyCodeObject *codeobj_944f745da61b16c9ef611d0e2181e449;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[180]); CHECK_OBJECT(module_filename_obj);
    codeobj_9e0670ec1ab110896395deeadfbe4163 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[181], mod_consts[181], NULL, NULL, 0, 0, 0);
    codeobj_5ed93e860ed2ad9faf730c2498e4cb9b = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[97], mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_7f2231423cba8973d65bd6f60645a3bc = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_2732039f65071c332f80cbe9bcd4783d = MAKE_CODE_OBJECT(module_filename_obj, 1051, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], NULL, NULL, 0, 0, 0);
    codeobj_60d44507eb519509487d8427a6ea28c3 = MAKE_CODE_OBJECT(module_filename_obj, 1155, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], NULL, NULL, 0, 0, 0);
    codeobj_65e6be50ff778b4eea9b9653e56538b7 = MAKE_CODE_OBJECT(module_filename_obj, 1259, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], NULL, NULL, 0, 0, 0);
    codeobj_a3f3220863e42042bb3ebb2fe5c64825 = MAKE_CODE_OBJECT(module_filename_obj, 1363, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[110], NULL, NULL, 0, 0, 0);
    codeobj_747d6ab605354aa85f74c49209e21e6b = MAKE_CODE_OBJECT(module_filename_obj, 1467, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], NULL, NULL, 0, 0, 0);
    codeobj_ed3212a1e2b14e6afbf738d979adbbba = MAKE_CODE_OBJECT(module_filename_obj, 1571, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_fd75632d63934eb305391185abe12314 = MAKE_CODE_OBJECT(module_filename_obj, 1675, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_a81f743e666f768d0c84a542d381f84d = MAKE_CODE_OBJECT(module_filename_obj, 1779, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[114], mod_consts[114], NULL, NULL, 0, 0, 0);
    codeobj_38a4f98fc2728d5834182ea7c81b9400 = MAKE_CODE_OBJECT(module_filename_obj, 1883, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[115], NULL, NULL, 0, 0, 0);
    codeobj_b14cfc2fede19561eef6182f926337a8 = MAKE_CODE_OBJECT(module_filename_obj, 1987, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[116], mod_consts[116], NULL, NULL, 0, 0, 0);
    codeobj_c41d19329c367443761cdceee11a48c8 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[99], NULL, NULL, 0, 0, 0);
    codeobj_7156cc9ef7ef5d4fe0d92a815b9ad1f4 = MAKE_CODE_OBJECT(module_filename_obj, 2091, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_6fa009f5b78a931d54d69d014335f7b9 = MAKE_CODE_OBJECT(module_filename_obj, 2195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], NULL, NULL, 0, 0, 0);
    codeobj_dc1faa20e4268e30d0bebef0bef0bd54 = MAKE_CODE_OBJECT(module_filename_obj, 2299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[119], mod_consts[119], NULL, NULL, 0, 0, 0);
    codeobj_b1474319693582ad0e9c087d668bffed = MAKE_CODE_OBJECT(module_filename_obj, 2403, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[120], mod_consts[120], NULL, NULL, 0, 0, 0);
    codeobj_25fae3c12462b8279000e024bb74e60a = MAKE_CODE_OBJECT(module_filename_obj, 2507, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[121], mod_consts[121], NULL, NULL, 0, 0, 0);
    codeobj_9332e0970d7b5d9f115dcfdd0a64cadc = MAKE_CODE_OBJECT(module_filename_obj, 2611, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[122], NULL, NULL, 0, 0, 0);
    codeobj_f18a03d6976c80198ae77db691f368b7 = MAKE_CODE_OBJECT(module_filename_obj, 2715, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[123], mod_consts[123], NULL, NULL, 0, 0, 0);
    codeobj_2a32eaee2a4f187501ae337978a6ac89 = MAKE_CODE_OBJECT(module_filename_obj, 2819, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], NULL, NULL, 0, 0, 0);
    codeobj_ab2267598d9c0cbbd3407df735617a99 = MAKE_CODE_OBJECT(module_filename_obj, 2923, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[125], mod_consts[125], NULL, NULL, 0, 0, 0);
    codeobj_cd5688f81106f2a5716ade936c818c69 = MAKE_CODE_OBJECT(module_filename_obj, 3027, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[126], mod_consts[126], NULL, NULL, 0, 0, 0);
    codeobj_fad869fe3e575bd0691a5ee559cf4b97 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[100], mod_consts[100], NULL, NULL, 0, 0, 0);
    codeobj_68ea52ffab1959f44e303c7260b861d2 = MAKE_CODE_OBJECT(module_filename_obj, 3131, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[127], mod_consts[127], NULL, NULL, 0, 0, 0);
    codeobj_8491977d5423897fbfd6feb422d8cfc4 = MAKE_CODE_OBJECT(module_filename_obj, 3235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_0be356fd1d581c43769dbe9ce67935a4 = MAKE_CODE_OBJECT(module_filename_obj, 3339, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_e5be41bcd00ff6dc32c47d9e0a7e70f2 = MAKE_CODE_OBJECT(module_filename_obj, 3443, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[130], mod_consts[130], NULL, NULL, 0, 0, 0);
    codeobj_394a944e150ffc7e0f08ead9a9ee4741 = MAKE_CODE_OBJECT(module_filename_obj, 3547, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[131], mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_13551d553c90fbf973e99ab245a69b03 = MAKE_CODE_OBJECT(module_filename_obj, 3651, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[132], mod_consts[132], NULL, NULL, 0, 0, 0);
    codeobj_fbb7588c16994092fce8792e849d7420 = MAKE_CODE_OBJECT(module_filename_obj, 3755, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[133], mod_consts[133], NULL, NULL, 0, 0, 0);
    codeobj_f6539882d61a975ba8355b37d376d9f4 = MAKE_CODE_OBJECT(module_filename_obj, 3859, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[134], mod_consts[134], NULL, NULL, 0, 0, 0);
    codeobj_c1be6de6fd0b3b9bd1c57df546c11863 = MAKE_CODE_OBJECT(module_filename_obj, 3963, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[135], mod_consts[135], NULL, NULL, 0, 0, 0);
    codeobj_c7908e5c6b6f40d66db8f6846016a97a = MAKE_CODE_OBJECT(module_filename_obj, 4067, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_1917be38b428ebf246a6f58f020da2a6 = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[101], mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_461ce061cee9aedb7fe9fc9a81aed284 = MAKE_CODE_OBJECT(module_filename_obj, 4171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_c4c389413207d589106757d1fddc390f = MAKE_CODE_OBJECT(module_filename_obj, 4275, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[138], mod_consts[138], NULL, NULL, 0, 0, 0);
    codeobj_5ebc100a79e75a137e420cf639feb58c = MAKE_CODE_OBJECT(module_filename_obj, 4379, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_a9bd315337a408990c0c5d7107b6f78c = MAKE_CODE_OBJECT(module_filename_obj, 4483, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[140], mod_consts[140], NULL, NULL, 0, 0, 0);
    codeobj_a3a779b4c924d864be2d64e9a166b6da = MAKE_CODE_OBJECT(module_filename_obj, 4587, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], NULL, NULL, 0, 0, 0);
    codeobj_e286193f39b9eec2df4845983bfa79e9 = MAKE_CODE_OBJECT(module_filename_obj, 4691, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], NULL, NULL, 0, 0, 0);
    codeobj_5117fa593a2386c3fb9bb24b51f162e0 = MAKE_CODE_OBJECT(module_filename_obj, 4795, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[143], mod_consts[143], NULL, NULL, 0, 0, 0);
    codeobj_45f359dc1a3a0cac95a8734b066f9d2f = MAKE_CODE_OBJECT(module_filename_obj, 4899, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_b789820c7007512590d644d755db4dc1 = MAKE_CODE_OBJECT(module_filename_obj, 5003, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[145], mod_consts[145], NULL, NULL, 0, 0, 0);
    codeobj_0b58bc0c5b5a4e3f6b381c45178e11ec = MAKE_CODE_OBJECT(module_filename_obj, 5107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    codeobj_35216d62186ff99ac6ebd3f8f9f86ed0 = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[102], NULL, NULL, 0, 0, 0);
    codeobj_c9da000ca0fd6a6c75cf77d02b27313c = MAKE_CODE_OBJECT(module_filename_obj, 5211, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], NULL, NULL, 0, 0, 0);
    codeobj_5b88021412eea22ab3b2818c5c68e22d = MAKE_CODE_OBJECT(module_filename_obj, 5315, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[148], mod_consts[148], NULL, NULL, 0, 0, 0);
    codeobj_c8959a426da4debe6027663a6134a0fe = MAKE_CODE_OBJECT(module_filename_obj, 5419, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_eec4bf58d828d9ecba6fb2046a5119ce = MAKE_CODE_OBJECT(module_filename_obj, 5523, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_add98f9b63328e623f70ba2efc5fadcd = MAKE_CODE_OBJECT(module_filename_obj, 5627, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[151], mod_consts[151], NULL, NULL, 0, 0, 0);
    codeobj_f1c38724d388dd405fddc0489263acd4 = MAKE_CODE_OBJECT(module_filename_obj, 5731, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_5d4f1556bda5f31813cca5c6a201d3e7 = MAKE_CODE_OBJECT(module_filename_obj, 5835, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], NULL, NULL, 0, 0, 0);
    codeobj_6c37b6891020123e4771c5e55f1d14f2 = MAKE_CODE_OBJECT(module_filename_obj, 5939, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[154], mod_consts[154], NULL, NULL, 0, 0, 0);
    codeobj_9bddb9385fa1bc05d699d69eb754620e = MAKE_CODE_OBJECT(module_filename_obj, 6043, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
    codeobj_faf904d554a00ced99c3ef5e3e889cf5 = MAKE_CODE_OBJECT(module_filename_obj, 6147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[156], mod_consts[156], NULL, NULL, 0, 0, 0);
    codeobj_6a6f78c7fdbf1d45db1927f53c1df0ab = MAKE_CODE_OBJECT(module_filename_obj, 635, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[103], mod_consts[103], NULL, NULL, 0, 0, 0);
    codeobj_fa9014395ac95021b935e44e1211758c = MAKE_CODE_OBJECT(module_filename_obj, 6251, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[157], mod_consts[157], NULL, NULL, 0, 0, 0);
    codeobj_8951544aa76166432f75580f548ca221 = MAKE_CODE_OBJECT(module_filename_obj, 6355, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
    codeobj_084f35bfc0c344259245b2d9986abae8 = MAKE_CODE_OBJECT(module_filename_obj, 6459, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[159], mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_611cb89b10f51d325007a0dcbedea28d = MAKE_CODE_OBJECT(module_filename_obj, 6563, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_3091fda701222068d8b44457ba9addb5 = MAKE_CODE_OBJECT(module_filename_obj, 6667, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[161], mod_consts[161], NULL, NULL, 0, 0, 0);
    codeobj_8ec0aa98a18abc481ea5244a5ba60da6 = MAKE_CODE_OBJECT(module_filename_obj, 6771, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[162], mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_9d1249c8bcf3ed55a853d64e0d35e234 = MAKE_CODE_OBJECT(module_filename_obj, 6875, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[163], mod_consts[163], NULL, NULL, 0, 0, 0);
    codeobj_399c8ed451846f6a6ed9afc883ca1a10 = MAKE_CODE_OBJECT(module_filename_obj, 6979, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[164], mod_consts[164], NULL, NULL, 0, 0, 0);
    codeobj_0dc63890739388eeb0a884cfde35ba33 = MAKE_CODE_OBJECT(module_filename_obj, 7083, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[165], mod_consts[165], NULL, NULL, 0, 0, 0);
    codeobj_9928f3065a2e4ee60806fb6f2a78697e = MAKE_CODE_OBJECT(module_filename_obj, 7187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[166], mod_consts[166], NULL, NULL, 0, 0, 0);
    codeobj_fdb2df8d7e60d09b41b33bffd5c36841 = MAKE_CODE_OBJECT(module_filename_obj, 739, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[104], mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_b115408e8b16ab7cf740eacf8ef235e1 = MAKE_CODE_OBJECT(module_filename_obj, 7291, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[167], mod_consts[167], NULL, NULL, 0, 0, 0);
    codeobj_c54a89382b7d0d7d61bf62995b8f33f9 = MAKE_CODE_OBJECT(module_filename_obj, 7395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_f780a3d24a7abe0794c6758676f1ddb5 = MAKE_CODE_OBJECT(module_filename_obj, 7499, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[169], mod_consts[169], NULL, NULL, 0, 0, 0);
    codeobj_aa8f55265c3c8efaa6277dc235367b09 = MAKE_CODE_OBJECT(module_filename_obj, 7603, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[170], mod_consts[170], NULL, NULL, 0, 0, 0);
    codeobj_7fbdba80ed3a38cf1faf49add15b63a3 = MAKE_CODE_OBJECT(module_filename_obj, 7707, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[171], mod_consts[171], NULL, NULL, 0, 0, 0);
    codeobj_5e1385526a20cb068b4a876885aac17e = MAKE_CODE_OBJECT(module_filename_obj, 7811, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[172], mod_consts[172], NULL, NULL, 0, 0, 0);
    codeobj_0ac9e58fe094c54d58dc17701f4e4d86 = MAKE_CODE_OBJECT(module_filename_obj, 7915, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[173], mod_consts[173], NULL, NULL, 0, 0, 0);
    codeobj_cd7b497dd50c30c38fb7325ba3684a90 = MAKE_CODE_OBJECT(module_filename_obj, 8019, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_64ff1c2f3f5fd1eb5ab4e5bca301ca7d = MAKE_CODE_OBJECT(module_filename_obj, 8123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_b9644c5ef76513bca558fae8cb6c5504 = MAKE_CODE_OBJECT(module_filename_obj, 8227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[176], mod_consts[176], NULL, NULL, 0, 0, 0);
    codeobj_08efa3a5fb315a10d670867438f9596c = MAKE_CODE_OBJECT(module_filename_obj, 843, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], NULL, NULL, 0, 0, 0);
    codeobj_0a91a4dc4fc8791ddd0d745b8f766351 = MAKE_CODE_OBJECT(module_filename_obj, 8331, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[177], mod_consts[177], NULL, NULL, 0, 0, 0);
    codeobj_ab40b37874ed7cb88f3259aa89e50666 = MAKE_CODE_OBJECT(module_filename_obj, 8435, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[178], mod_consts[178], NULL, NULL, 0, 0, 0);
    codeobj_944f745da61b16c9ef611d0e2181e449 = MAKE_CODE_OBJECT(module_filename_obj, 947, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[106], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__82__seg_81(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(PyObject *annotations);


// The module function definitions.
static PyObject *impl_idna$uts46data$$$function__1__seg_0(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__2__seg_1(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__3__seg_2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__4__seg_3(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__5__seg_4(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__6__seg_5(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__7__seg_6(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__8__seg_7(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__9__seg_8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__10__seg_9(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__11__seg_10(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__12__seg_11(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__13__seg_12(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__14__seg_13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__15__seg_14(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__16__seg_15(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__17__seg_16(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__18__seg_17(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__19__seg_18(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__20__seg_19(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__21__seg_20(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__22__seg_21(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__23__seg_22(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__24__seg_23(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__25__seg_24(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__26__seg_25(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__27__seg_26(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__28__seg_27(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__29__seg_28(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__30__seg_29(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__31__seg_30(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__32__seg_31(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__33__seg_32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__34__seg_33(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[33]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__35__seg_34(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[34]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__36__seg_35(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__37__seg_36(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__38__seg_37(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__39__seg_38(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__40__seg_39(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[39]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__41__seg_40(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__42__seg_41(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__43__seg_42(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__44__seg_43(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[43]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__45__seg_44(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[44]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__46__seg_45(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[45]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__47__seg_46(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[46]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__48__seg_47(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[47]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__49__seg_48(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[48]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__50__seg_49(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[49]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__51__seg_50(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[50]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__52__seg_51(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[51]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__53__seg_52(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[52]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__54__seg_53(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[53]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__55__seg_54(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[54]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__56__seg_55(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[55]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__57__seg_56(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[56]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__58__seg_57(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[57]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__59__seg_58(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[58]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__60__seg_59(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[59]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__61__seg_60(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[60]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__62__seg_61(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[61]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__63__seg_62(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[62]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__64__seg_63(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[63]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__65__seg_64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[64]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__66__seg_65(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[65]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__67__seg_66(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[66]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__68__seg_67(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[67]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__69__seg_68(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[68]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__70__seg_69(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[69]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__71__seg_70(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[70]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__72__seg_71(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[71]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__73__seg_72(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[72]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__74__seg_73(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[73]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__75__seg_74(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[74]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__76__seg_75(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[75]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__77__seg_76(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[76]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__78__seg_77(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[77]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__79__seg_78(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[78]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__80__seg_79(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[79]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__81__seg_80(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[80]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__82__seg_81(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[81]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__10__seg_9,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_944f745da61b16c9ef611d0e2181e449,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__11__seg_10,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2732039f65071c332f80cbe9bcd4783d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__12__seg_11,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60d44507eb519509487d8427a6ea28c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__13__seg_12,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65e6be50ff778b4eea9b9653e56538b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__14__seg_13,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a3f3220863e42042bb3ebb2fe5c64825,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__15__seg_14,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_747d6ab605354aa85f74c49209e21e6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__16__seg_15,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed3212a1e2b14e6afbf738d979adbbba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__17__seg_16,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fd75632d63934eb305391185abe12314,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__18__seg_17,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a81f743e666f768d0c84a542d381f84d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__19__seg_18,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38a4f98fc2728d5834182ea7c81b9400,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__1__seg_0,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ed93e860ed2ad9faf730c2498e4cb9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__20__seg_19,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b14cfc2fede19561eef6182f926337a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__21__seg_20,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7156cc9ef7ef5d4fe0d92a815b9ad1f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__22__seg_21,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fa009f5b78a931d54d69d014335f7b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__23__seg_22,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc1faa20e4268e30d0bebef0bef0bd54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__24__seg_23,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1474319693582ad0e9c087d668bffed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__25__seg_24,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25fae3c12462b8279000e024bb74e60a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__26__seg_25,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9332e0970d7b5d9f115dcfdd0a64cadc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__27__seg_26,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f18a03d6976c80198ae77db691f368b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__28__seg_27,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a32eaee2a4f187501ae337978a6ac89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__29__seg_28,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab2267598d9c0cbbd3407df735617a99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__2__seg_1,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f2231423cba8973d65bd6f60645a3bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__30__seg_29,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd5688f81106f2a5716ade936c818c69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__31__seg_30,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68ea52ffab1959f44e303c7260b861d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__32__seg_31,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8491977d5423897fbfd6feb422d8cfc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__33__seg_32,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0be356fd1d581c43769dbe9ce67935a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__34__seg_33,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e5be41bcd00ff6dc32c47d9e0a7e70f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__35__seg_34,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_394a944e150ffc7e0f08ead9a9ee4741,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__36__seg_35,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13551d553c90fbf973e99ab245a69b03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__37__seg_36,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fbb7588c16994092fce8792e849d7420,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__38__seg_37,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6539882d61a975ba8355b37d376d9f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__39__seg_38,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c1be6de6fd0b3b9bd1c57df546c11863,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__3__seg_2,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c41d19329c367443761cdceee11a48c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__40__seg_39,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c7908e5c6b6f40d66db8f6846016a97a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__41__seg_40,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_461ce061cee9aedb7fe9fc9a81aed284,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__42__seg_41,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c4c389413207d589106757d1fddc390f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__43__seg_42,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ebc100a79e75a137e420cf639feb58c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__44__seg_43,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a9bd315337a408990c0c5d7107b6f78c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__45__seg_44,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a3a779b4c924d864be2d64e9a166b6da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__46__seg_45,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e286193f39b9eec2df4845983bfa79e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__47__seg_46,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5117fa593a2386c3fb9bb24b51f162e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__48__seg_47,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45f359dc1a3a0cac95a8734b066f9d2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__49__seg_48,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b789820c7007512590d644d755db4dc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__4__seg_3,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fad869fe3e575bd0691a5ee559cf4b97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__50__seg_49,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b58bc0c5b5a4e3f6b381c45178e11ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__51__seg_50,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c9da000ca0fd6a6c75cf77d02b27313c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__52__seg_51,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5b88021412eea22ab3b2818c5c68e22d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__53__seg_52,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c8959a426da4debe6027663a6134a0fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__54__seg_53,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eec4bf58d828d9ecba6fb2046a5119ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__55__seg_54,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_add98f9b63328e623f70ba2efc5fadcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__56__seg_55,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1c38724d388dd405fddc0489263acd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__57__seg_56,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d4f1556bda5f31813cca5c6a201d3e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__58__seg_57,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c37b6891020123e4771c5e55f1d14f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__59__seg_58,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9bddb9385fa1bc05d699d69eb754620e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__5__seg_4,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1917be38b428ebf246a6f58f020da2a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__60__seg_59,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_faf904d554a00ced99c3ef5e3e889cf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__61__seg_60,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa9014395ac95021b935e44e1211758c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__62__seg_61,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8951544aa76166432f75580f548ca221,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__63__seg_62,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_084f35bfc0c344259245b2d9986abae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__64__seg_63,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_611cb89b10f51d325007a0dcbedea28d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__65__seg_64,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3091fda701222068d8b44457ba9addb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__66__seg_65,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ec0aa98a18abc481ea5244a5ba60da6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__67__seg_66,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d1249c8bcf3ed55a853d64e0d35e234,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__68__seg_67,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_399c8ed451846f6a6ed9afc883ca1a10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__69__seg_68,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0dc63890739388eeb0a884cfde35ba33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__6__seg_5,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35216d62186ff99ac6ebd3f8f9f86ed0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__70__seg_69,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9928f3065a2e4ee60806fb6f2a78697e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__71__seg_70,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b115408e8b16ab7cf740eacf8ef235e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__72__seg_71,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c54a89382b7d0d7d61bf62995b8f33f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__73__seg_72,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f780a3d24a7abe0794c6758676f1ddb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__74__seg_73,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa8f55265c3c8efaa6277dc235367b09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__75__seg_74,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7fbdba80ed3a38cf1faf49add15b63a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__76__seg_75,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e1385526a20cb068b4a876885aac17e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__77__seg_76,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ac9e58fe094c54d58dc17701f4e4d86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__78__seg_77,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd7b497dd50c30c38fb7325ba3684a90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__79__seg_78,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64ff1c2f3f5fd1eb5ab4e5bca301ca7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__7__seg_6,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a6f78c7fdbf1d45db1927f53c1df0ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__80__seg_79,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9644c5ef76513bca558fae8cb6c5504,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__81__seg_80,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a91a4dc4fc8791ddd0d745b8f766351,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__82__seg_81(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__82__seg_81,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab40b37874ed7cb88f3259aa89e50666,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__8__seg_7,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fdb2df8d7e60d09b41b33bffd5c36841,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__9__seg_8,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08efa3a5fb315a10d670867438f9596c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
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

function_impl_code functable_idna$uts46data[] = {
    impl_idna$uts46data$$$function__1__seg_0,
    impl_idna$uts46data$$$function__2__seg_1,
    impl_idna$uts46data$$$function__3__seg_2,
    impl_idna$uts46data$$$function__4__seg_3,
    impl_idna$uts46data$$$function__5__seg_4,
    impl_idna$uts46data$$$function__6__seg_5,
    impl_idna$uts46data$$$function__7__seg_6,
    impl_idna$uts46data$$$function__8__seg_7,
    impl_idna$uts46data$$$function__9__seg_8,
    impl_idna$uts46data$$$function__10__seg_9,
    impl_idna$uts46data$$$function__11__seg_10,
    impl_idna$uts46data$$$function__12__seg_11,
    impl_idna$uts46data$$$function__13__seg_12,
    impl_idna$uts46data$$$function__14__seg_13,
    impl_idna$uts46data$$$function__15__seg_14,
    impl_idna$uts46data$$$function__16__seg_15,
    impl_idna$uts46data$$$function__17__seg_16,
    impl_idna$uts46data$$$function__18__seg_17,
    impl_idna$uts46data$$$function__19__seg_18,
    impl_idna$uts46data$$$function__20__seg_19,
    impl_idna$uts46data$$$function__21__seg_20,
    impl_idna$uts46data$$$function__22__seg_21,
    impl_idna$uts46data$$$function__23__seg_22,
    impl_idna$uts46data$$$function__24__seg_23,
    impl_idna$uts46data$$$function__25__seg_24,
    impl_idna$uts46data$$$function__26__seg_25,
    impl_idna$uts46data$$$function__27__seg_26,
    impl_idna$uts46data$$$function__28__seg_27,
    impl_idna$uts46data$$$function__29__seg_28,
    impl_idna$uts46data$$$function__30__seg_29,
    impl_idna$uts46data$$$function__31__seg_30,
    impl_idna$uts46data$$$function__32__seg_31,
    impl_idna$uts46data$$$function__33__seg_32,
    impl_idna$uts46data$$$function__34__seg_33,
    impl_idna$uts46data$$$function__35__seg_34,
    impl_idna$uts46data$$$function__36__seg_35,
    impl_idna$uts46data$$$function__37__seg_36,
    impl_idna$uts46data$$$function__38__seg_37,
    impl_idna$uts46data$$$function__39__seg_38,
    impl_idna$uts46data$$$function__40__seg_39,
    impl_idna$uts46data$$$function__41__seg_40,
    impl_idna$uts46data$$$function__42__seg_41,
    impl_idna$uts46data$$$function__43__seg_42,
    impl_idna$uts46data$$$function__44__seg_43,
    impl_idna$uts46data$$$function__45__seg_44,
    impl_idna$uts46data$$$function__46__seg_45,
    impl_idna$uts46data$$$function__47__seg_46,
    impl_idna$uts46data$$$function__48__seg_47,
    impl_idna$uts46data$$$function__49__seg_48,
    impl_idna$uts46data$$$function__50__seg_49,
    impl_idna$uts46data$$$function__51__seg_50,
    impl_idna$uts46data$$$function__52__seg_51,
    impl_idna$uts46data$$$function__53__seg_52,
    impl_idna$uts46data$$$function__54__seg_53,
    impl_idna$uts46data$$$function__55__seg_54,
    impl_idna$uts46data$$$function__56__seg_55,
    impl_idna$uts46data$$$function__57__seg_56,
    impl_idna$uts46data$$$function__58__seg_57,
    impl_idna$uts46data$$$function__59__seg_58,
    impl_idna$uts46data$$$function__60__seg_59,
    impl_idna$uts46data$$$function__61__seg_60,
    impl_idna$uts46data$$$function__62__seg_61,
    impl_idna$uts46data$$$function__63__seg_62,
    impl_idna$uts46data$$$function__64__seg_63,
    impl_idna$uts46data$$$function__65__seg_64,
    impl_idna$uts46data$$$function__66__seg_65,
    impl_idna$uts46data$$$function__67__seg_66,
    impl_idna$uts46data$$$function__68__seg_67,
    impl_idna$uts46data$$$function__69__seg_68,
    impl_idna$uts46data$$$function__70__seg_69,
    impl_idna$uts46data$$$function__71__seg_70,
    impl_idna$uts46data$$$function__72__seg_71,
    impl_idna$uts46data$$$function__73__seg_72,
    impl_idna$uts46data$$$function__74__seg_73,
    impl_idna$uts46data$$$function__75__seg_74,
    impl_idna$uts46data$$$function__76__seg_75,
    impl_idna$uts46data$$$function__77__seg_76,
    impl_idna$uts46data$$$function__78__seg_77,
    impl_idna$uts46data$$$function__79__seg_78,
    impl_idna$uts46data$$$function__80__seg_79,
    impl_idna$uts46data$$$function__81__seg_80,
    impl_idna$uts46data$$$function__82__seg_81,
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

    function_impl_code *current = functable_idna$uts46data;
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

    if (offset > sizeof(functable_idna$uts46data) || offset < 0) {
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
        functable_idna$uts46data[offset],
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
        module_idna$uts46data,
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
PyObject *modulecode_idna$uts46data(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("idna.uts46data");

    // Store the module for future use.
    module_idna$uts46data = module;

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
        PRINT_STRING("idna.uts46data: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("idna.uts46data: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initidna$uts46data\n");

    moduledict_idna$uts46data = MODULE_DICT(module_idna$uts46data);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_idna$uts46data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[182]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_idna$uts46data);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_idna$uts46data);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_9e0670ec1ab110896395deeadfbe4163;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_2);
    }
    frame_9e0670ec1ab110896395deeadfbe4163 = MAKE_MODULE_FRAME(codeobj_9e0670ec1ab110896395deeadfbe4163, module_idna$uts46data);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e0670ec1ab110896395deeadfbe4163);
    assert(Py_REFCNT(frame_9e0670ec1ab110896395deeadfbe4163) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[86], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[88],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[88]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[90],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[90]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[91],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[91]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_dict_key_1 = mod_consts[94];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_subscript_value_3 = mod_consts[95];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = mod_consts[96];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_9 = MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        tmp_dict_key_2 = mod_consts[94];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[95];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_8 = mod_consts[96];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_10 = MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_3 = mod_consts[94];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[95];
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_3);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_12 = mod_consts[96];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_11 = MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_15;
        tmp_dict_key_4 = mod_consts[94];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[95];
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_4);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_16 = mod_consts[96];
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_subscript_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_12 = MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_19;
        tmp_dict_key_5 = mod_consts[94];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = mod_consts[95];
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_20;
            PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_5);
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto tuple_build_exception_5;
            }
            tmp_subscript_value_20 = mod_consts[96];
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_20);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_subscript_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_13 = MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_23;
        tmp_dict_key_6 = mod_consts[94];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[95];
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_23);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_24;
            PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_6);
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_24 = mod_consts[96];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_24);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_subscript_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_27;
        tmp_dict_key_7 = mod_consts[94];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = mod_consts[95];
        tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_27);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_28;
            PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_7);
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_28 = mod_consts[96];
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_28);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_subscript_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_26);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_subscript_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_15 = MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_31;
        tmp_dict_key_8 = mod_consts[94];
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = mod_consts[95];
        tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_31);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_32;
            PyTuple_SET_ITEM(tmp_subscript_value_30, 0, tmp_tuple_element_8);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 739;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_32 = mod_consts[96];
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_32);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 739;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_30, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_subscript_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_16 = MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_35;
        tmp_dict_key_9 = mod_consts[94];
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_35 = mod_consts[95];
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_35);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_36;
            PyTuple_SET_ITEM(tmp_subscript_value_34, 0, tmp_tuple_element_9);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 843;

                goto tuple_build_exception_9;
            }
            tmp_subscript_value_36 = mod_consts[96];
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_36);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 843;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_34);
        Py_DECREF(tmp_subscript_value_34);
        if (tmp_subscript_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_33);
        Py_DECREF(tmp_subscript_value_33);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_39;
        tmp_dict_key_10 = mod_consts[94];
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = mod_consts[95];
        tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_39);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_40;
            PyTuple_SET_ITEM(tmp_subscript_value_38, 0, tmp_tuple_element_10);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 947;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_40 = mod_consts[96];
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_40);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 947;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_subscript_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_38);
        Py_DECREF(tmp_subscript_value_38);
        if (tmp_subscript_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_37);
        Py_DECREF(tmp_subscript_value_37);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_43;
        tmp_dict_key_11 = mod_consts[94];
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = mod_consts[95];
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_43);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_44;
            PyTuple_SET_ITEM(tmp_subscript_value_42, 0, tmp_tuple_element_11);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1051;

                goto tuple_build_exception_11;
            }
            tmp_subscript_value_44 = mod_consts[96];
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_44);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1051;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_subscript_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_42);
        Py_DECREF(tmp_subscript_value_42);
        if (tmp_subscript_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_41);
        Py_DECREF(tmp_subscript_value_41);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_19 = MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_47;
        tmp_dict_key_12 = mod_consts[94];
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_47 = mod_consts[95];
        tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_47);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_48;
            PyTuple_SET_ITEM(tmp_subscript_value_46, 0, tmp_tuple_element_12);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto tuple_build_exception_12;
            }
            tmp_subscript_value_48 = mod_consts[96];
            tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_48);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_46, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_subscript_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_subscript_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_46);
        Py_DECREF(tmp_subscript_value_46);
        if (tmp_subscript_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_45);
        Py_DECREF(tmp_subscript_value_45);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_51;
        tmp_dict_key_13 = mod_consts[94];
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_51 = mod_consts[95];
        tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_51);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_52;
            PyTuple_SET_ITEM(tmp_subscript_value_50, 0, tmp_tuple_element_13);
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1259;

                goto tuple_build_exception_13;
            }
            tmp_subscript_value_52 = mod_consts[96];
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_52);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1259;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_50, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_subscript_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_subscript_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_50);
        Py_DECREF(tmp_subscript_value_50);
        if (tmp_subscript_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_49);
        Py_DECREF(tmp_subscript_value_49);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_55;
        tmp_dict_key_14 = mod_consts[94];
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_55 = mod_consts[95];
        tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_55);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_54 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_56;
            PyTuple_SET_ITEM(tmp_subscript_value_54, 0, tmp_tuple_element_14);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1363;

                goto tuple_build_exception_14;
            }
            tmp_subscript_value_56 = mod_consts[96];
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_56);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1363;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_54, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_subscript_value_54);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_subscript_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_54);
        Py_DECREF(tmp_subscript_value_54);
        if (tmp_subscript_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_53);
        Py_DECREF(tmp_subscript_value_53);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_58;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_59;
        tmp_dict_key_15 = mod_consts[94];
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_59 = mod_consts[95];
        tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_59);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_58 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_60;
            PyTuple_SET_ITEM(tmp_subscript_value_58, 0, tmp_tuple_element_15);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1467;

                goto tuple_build_exception_15;
            }
            tmp_subscript_value_60 = mod_consts[96];
            tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_60);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1467;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_58, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_subscript_value_58);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_subscript_value_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_58);
        Py_DECREF(tmp_subscript_value_58);
        if (tmp_subscript_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_57);
        Py_DECREF(tmp_subscript_value_57);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_23 = MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_62;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_63;
        tmp_dict_key_16 = mod_consts[94];
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_63 = mod_consts[95];
        tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_63);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_64;
            PyTuple_SET_ITEM(tmp_subscript_value_62, 0, tmp_tuple_element_16);
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1571;

                goto tuple_build_exception_16;
            }
            tmp_subscript_value_64 = mod_consts[96];
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_64);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1571;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_62, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_subscript_value_62);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_subscript_value_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_62);
        Py_DECREF(tmp_subscript_value_62);
        if (tmp_subscript_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_61);
        Py_DECREF(tmp_subscript_value_61);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));


        tmp_assign_source_24 = MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_65;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_66;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_67;
        tmp_dict_key_17 = mod_consts[94];
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_67 = mod_consts[95];
        tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_67);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_66 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_68;
            PyTuple_SET_ITEM(tmp_subscript_value_66, 0, tmp_tuple_element_17);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1675;

                goto tuple_build_exception_17;
            }
            tmp_subscript_value_68 = mod_consts[96];
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_68);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1675;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_66, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_subscript_value_66);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_subscript_value_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_66);
        Py_DECREF(tmp_subscript_value_66);
        if (tmp_subscript_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_65);
        Py_DECREF(tmp_subscript_value_65);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_70;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_71;
        tmp_dict_key_18 = mod_consts[94];
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_71 = mod_consts[95];
        tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_71);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_70 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_72;
            PyTuple_SET_ITEM(tmp_subscript_value_70, 0, tmp_tuple_element_18);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1779;

                goto tuple_build_exception_18;
            }
            tmp_subscript_value_72 = mod_consts[96];
            tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_72);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1779;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_70, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_subscript_value_70);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_subscript_value_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_70);
        Py_DECREF(tmp_subscript_value_70);
        if (tmp_subscript_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_69);
        Py_DECREF(tmp_subscript_value_69);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_73;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_74;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_75;
        tmp_dict_key_19 = mod_consts[94];
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_75 = mod_consts[95];
        tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_75);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_74 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_76;
            PyTuple_SET_ITEM(tmp_subscript_value_74, 0, tmp_tuple_element_19);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1883;

                goto tuple_build_exception_19;
            }
            tmp_subscript_value_76 = mod_consts[96];
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_76);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1883;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_74, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_subscript_value_74);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_subscript_value_73 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_74);
        Py_DECREF(tmp_subscript_value_74);
        if (tmp_subscript_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_73);
        Py_DECREF(tmp_subscript_value_73);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_77;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_subscript_value_78;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_79;
        tmp_dict_key_20 = mod_consts[94];
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_79 = mod_consts[95];
        tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_79);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_78 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_80;
            PyTuple_SET_ITEM(tmp_subscript_value_78, 0, tmp_tuple_element_20);
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1987;

                goto tuple_build_exception_20;
            }
            tmp_subscript_value_80 = mod_consts[96];
            tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_80);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1987;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_78, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_subscript_value_78);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_subscript_value_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_78);
        Py_DECREF(tmp_subscript_value_78);
        if (tmp_subscript_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_77);
        Py_DECREF(tmp_subscript_value_77);
        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        Py_DECREF(tmp_dict_value_20);
        assert(!(tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_81;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_82;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_83;
        tmp_dict_key_21 = mod_consts[94];
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_83 = mod_consts[95];
        tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_83);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_82 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_84;
            PyTuple_SET_ITEM(tmp_subscript_value_82, 0, tmp_tuple_element_21);
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2091;

                goto tuple_build_exception_21;
            }
            tmp_subscript_value_84 = mod_consts[96];
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_84);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2091;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_82, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_subscript_value_82);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_subscript_value_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_82);
        Py_DECREF(tmp_subscript_value_82);
        if (tmp_subscript_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_81);
        Py_DECREF(tmp_subscript_value_81);
        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_assign_source_29 = MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_86;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_87;
        tmp_dict_key_22 = mod_consts[94];
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_87 = mod_consts[95];
        tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_87);
        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_86 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_88;
            PyTuple_SET_ITEM(tmp_subscript_value_86, 0, tmp_tuple_element_22);
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2195;

                goto tuple_build_exception_22;
            }
            tmp_subscript_value_88 = mod_consts[96];
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_88);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2195;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_86, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_subscript_value_86);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_subscript_value_85 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_86);
        Py_DECREF(tmp_subscript_value_86);
        if (tmp_subscript_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_85);
        Py_DECREF(tmp_subscript_value_85);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));


        tmp_assign_source_30 = MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_90;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_91;
        tmp_dict_key_23 = mod_consts[94];
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_91 = mod_consts[95];
        tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_91);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_90 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_92;
            PyTuple_SET_ITEM(tmp_subscript_value_90, 0, tmp_tuple_element_23);
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2299;

                goto tuple_build_exception_23;
            }
            tmp_subscript_value_92 = mod_consts[96];
            tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_92);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2299;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_90, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_subscript_value_90);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_subscript_value_89 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_90);
        Py_DECREF(tmp_subscript_value_90);
        if (tmp_subscript_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_89);
        Py_DECREF(tmp_subscript_value_89);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_94;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_95;
        tmp_dict_key_24 = mod_consts[94];
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_95 = mod_consts[95];
        tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_95, tmp_subscript_value_95);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_94 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_subscript_value_96;
            PyTuple_SET_ITEM(tmp_subscript_value_94, 0, tmp_tuple_element_24);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2403;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_96 = mod_consts[96];
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_96);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2403;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_94, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_subscript_value_94);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_subscript_value_93 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_94);
        Py_DECREF(tmp_subscript_value_94);
        if (tmp_subscript_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_93);
        Py_DECREF(tmp_subscript_value_93);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));


        tmp_assign_source_32 = MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_subscript_value_98;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_99;
        tmp_dict_key_25 = mod_consts[94];
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_99 = mod_consts[95];
        tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_99, tmp_subscript_value_99);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_98 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_subscript_value_100;
            PyTuple_SET_ITEM(tmp_subscript_value_98, 0, tmp_tuple_element_25);
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2507;

                goto tuple_build_exception_25;
            }
            tmp_subscript_value_100 = mod_consts[96];
            tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_100);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2507;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_98, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_subscript_value_98);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_subscript_value_97 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_98);
        Py_DECREF(tmp_subscript_value_98);
        if (tmp_subscript_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_97, tmp_subscript_value_97);
        Py_DECREF(tmp_subscript_value_97);
        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        Py_DECREF(tmp_dict_value_25);
        assert(!(tmp_res != 0));


        tmp_assign_source_33 = MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_102;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_103;
        tmp_dict_key_26 = mod_consts[94];
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_103 = mod_consts[95];
        tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_103);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_102 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_104;
            PyObject *tmp_subscript_value_104;
            PyTuple_SET_ITEM(tmp_subscript_value_102, 0, tmp_tuple_element_26);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2611;

                goto tuple_build_exception_26;
            }
            tmp_subscript_value_104 = mod_consts[96];
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_104, tmp_subscript_value_104);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2611;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_102, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_subscript_value_102);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_subscript_value_101 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_102);
        Py_DECREF(tmp_subscript_value_102);
        if (tmp_subscript_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_101, tmp_subscript_value_101);
        Py_DECREF(tmp_subscript_value_101);
        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_annotations_26 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));


        tmp_assign_source_34 = MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_105;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_106;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_subscript_value_107;
        tmp_dict_key_27 = mod_consts[94];
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_107 = mod_consts[95];
        tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_107);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_106 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_subscript_value_108;
            PyTuple_SET_ITEM(tmp_subscript_value_106, 0, tmp_tuple_element_27);
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2715;

                goto tuple_build_exception_27;
            }
            tmp_subscript_value_108 = mod_consts[96];
            tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_108, tmp_subscript_value_108);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2715;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_106, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_subscript_value_106);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_subscript_value_105 = LOOKUP_SUBSCRIPT(tmp_expression_value_106, tmp_subscript_value_106);
        Py_DECREF(tmp_subscript_value_106);
        if (tmp_subscript_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_105, tmp_subscript_value_105);
        Py_DECREF(tmp_subscript_value_105);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));


        tmp_assign_source_35 = MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_109;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_subscript_value_110;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_111;
        tmp_dict_key_28 = mod_consts[94];
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_111 = mod_consts[95];
        tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_111, tmp_subscript_value_111);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_110 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_112;
            PyTuple_SET_ITEM(tmp_subscript_value_110, 0, tmp_tuple_element_28);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2819;

                goto tuple_build_exception_28;
            }
            tmp_subscript_value_112 = mod_consts[96];
            tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_112, tmp_subscript_value_112);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2819;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_110, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_subscript_value_110);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_subscript_value_109 = LOOKUP_SUBSCRIPT(tmp_expression_value_110, tmp_subscript_value_110);
        Py_DECREF(tmp_subscript_value_110);
        if (tmp_subscript_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_109, tmp_subscript_value_109);
        Py_DECREF(tmp_subscript_value_109);
        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
        Py_DECREF(tmp_dict_value_28);
        assert(!(tmp_res != 0));


        tmp_assign_source_36 = MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_subscript_value_113;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_subscript_value_114;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_115;
        tmp_dict_key_29 = mod_consts[94];
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_115 = mod_consts[95];
        tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_115, tmp_subscript_value_115);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_114 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_116;
            PyObject *tmp_subscript_value_116;
            PyTuple_SET_ITEM(tmp_subscript_value_114, 0, tmp_tuple_element_29);
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2923;

                goto tuple_build_exception_29;
            }
            tmp_subscript_value_116 = mod_consts[96];
            tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_116, tmp_subscript_value_116);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2923;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_114, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_subscript_value_114);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_subscript_value_113 = LOOKUP_SUBSCRIPT(tmp_expression_value_114, tmp_subscript_value_114);
        Py_DECREF(tmp_subscript_value_114);
        if (tmp_subscript_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_113, tmp_subscript_value_113);
        Py_DECREF(tmp_subscript_value_113);
        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_annotations_29 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
        Py_DECREF(tmp_dict_value_29);
        assert(!(tmp_res != 0));


        tmp_assign_source_37 = MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_subscript_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_118;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_119;
        tmp_dict_key_30 = mod_consts[94];
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_119 = mod_consts[95];
        tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_119, tmp_subscript_value_119);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_118 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_subscript_value_120;
            PyTuple_SET_ITEM(tmp_subscript_value_118, 0, tmp_tuple_element_30);
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3027;

                goto tuple_build_exception_30;
            }
            tmp_subscript_value_120 = mod_consts[96];
            tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_120, tmp_subscript_value_120);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3027;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_118, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_subscript_value_118);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_subscript_value_117 = LOOKUP_SUBSCRIPT(tmp_expression_value_118, tmp_subscript_value_118);
        Py_DECREF(tmp_subscript_value_118);
        if (tmp_subscript_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_117, tmp_subscript_value_117);
        Py_DECREF(tmp_subscript_value_117);
        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_annotations_30 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
        Py_DECREF(tmp_dict_value_30);
        assert(!(tmp_res != 0));


        tmp_assign_source_38 = MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_121;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_subscript_value_122;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_subscript_value_123;
        tmp_dict_key_31 = mod_consts[94];
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_123 = mod_consts[95];
        tmp_tuple_element_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_123, tmp_subscript_value_123);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_122 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_124;
            PyObject *tmp_subscript_value_124;
            PyTuple_SET_ITEM(tmp_subscript_value_122, 0, tmp_tuple_element_31);
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_124 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3131;

                goto tuple_build_exception_31;
            }
            tmp_subscript_value_124 = mod_consts[96];
            tmp_tuple_element_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_124, tmp_subscript_value_124);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3131;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_122, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_subscript_value_122);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_subscript_value_121 = LOOKUP_SUBSCRIPT(tmp_expression_value_122, tmp_subscript_value_122);
        Py_DECREF(tmp_subscript_value_122);
        if (tmp_subscript_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_121, tmp_subscript_value_121);
        Py_DECREF(tmp_subscript_value_121);
        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_annotations_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
        Py_DECREF(tmp_dict_value_31);
        assert(!(tmp_res != 0));


        tmp_assign_source_39 = MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_32;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_subscript_value_125;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_126;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_127;
        tmp_dict_key_32 = mod_consts[94];
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_127 = mod_consts[95];
        tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_127, tmp_subscript_value_127);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_126 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_128;
            PyObject *tmp_subscript_value_128;
            PyTuple_SET_ITEM(tmp_subscript_value_126, 0, tmp_tuple_element_32);
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3235;

                goto tuple_build_exception_32;
            }
            tmp_subscript_value_128 = mod_consts[96];
            tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_128, tmp_subscript_value_128);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3235;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_126, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_subscript_value_126);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_subscript_value_125 = LOOKUP_SUBSCRIPT(tmp_expression_value_126, tmp_subscript_value_126);
        Py_DECREF(tmp_subscript_value_126);
        if (tmp_subscript_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_125, tmp_subscript_value_125);
        Py_DECREF(tmp_subscript_value_125);
        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_annotations_32 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
        Py_DECREF(tmp_dict_value_32);
        assert(!(tmp_res != 0));


        tmp_assign_source_40 = MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_33;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_subscript_value_129;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_subscript_value_130;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_subscript_value_131;
        tmp_dict_key_33 = mod_consts[94];
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_131 = mod_consts[95];
        tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_131, tmp_subscript_value_131);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_130 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_subscript_value_132;
            PyTuple_SET_ITEM(tmp_subscript_value_130, 0, tmp_tuple_element_33);
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3339;

                goto tuple_build_exception_33;
            }
            tmp_subscript_value_132 = mod_consts[96];
            tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_132, tmp_subscript_value_132);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3339;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_130, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_subscript_value_130);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_subscript_value_129 = LOOKUP_SUBSCRIPT(tmp_expression_value_130, tmp_subscript_value_130);
        Py_DECREF(tmp_subscript_value_130);
        if (tmp_subscript_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_129, tmp_subscript_value_129);
        Py_DECREF(tmp_subscript_value_129);
        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_annotations_33 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
        Py_DECREF(tmp_dict_value_33);
        assert(!(tmp_res != 0));


        tmp_assign_source_41 = MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(tmp_annotations_33);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_34;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_133;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_subscript_value_134;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_subscript_value_135;
        tmp_dict_key_34 = mod_consts[94];
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_135 = mod_consts[95];
        tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_135, tmp_subscript_value_135);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_134 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_136;
            PyObject *tmp_subscript_value_136;
            PyTuple_SET_ITEM(tmp_subscript_value_134, 0, tmp_tuple_element_34);
            tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_136 == NULL)) {
                tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3443;

                goto tuple_build_exception_34;
            }
            tmp_subscript_value_136 = mod_consts[96];
            tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_136, tmp_subscript_value_136);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3443;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_134, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_subscript_value_134);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_subscript_value_133 = LOOKUP_SUBSCRIPT(tmp_expression_value_134, tmp_subscript_value_134);
        Py_DECREF(tmp_subscript_value_134);
        if (tmp_subscript_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_133, tmp_subscript_value_133);
        Py_DECREF(tmp_subscript_value_133);
        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_annotations_34 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
        Py_DECREF(tmp_dict_value_34);
        assert(!(tmp_res != 0));


        tmp_assign_source_42 = MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(tmp_annotations_34);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_35;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_subscript_value_137;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_subscript_value_138;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_139;
        tmp_dict_key_35 = mod_consts[94];
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_139 = mod_consts[95];
        tmp_tuple_element_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_139, tmp_subscript_value_139);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_138 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_140;
            PyObject *tmp_subscript_value_140;
            PyTuple_SET_ITEM(tmp_subscript_value_138, 0, tmp_tuple_element_35);
            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_140 == NULL)) {
                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3547;

                goto tuple_build_exception_35;
            }
            tmp_subscript_value_140 = mod_consts[96];
            tmp_tuple_element_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_140, tmp_subscript_value_140);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3547;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_138, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_subscript_value_138);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_subscript_value_137 = LOOKUP_SUBSCRIPT(tmp_expression_value_138, tmp_subscript_value_138);
        Py_DECREF(tmp_subscript_value_138);
        if (tmp_subscript_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_137, tmp_subscript_value_137);
        Py_DECREF(tmp_subscript_value_137);
        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_annotations_35 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
        Py_DECREF(tmp_dict_value_35);
        assert(!(tmp_res != 0));


        tmp_assign_source_43 = MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(tmp_annotations_35);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_36;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_subscript_value_141;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_subscript_value_142;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_subscript_value_143;
        tmp_dict_key_36 = mod_consts[94];
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_143 = mod_consts[95];
        tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_143, tmp_subscript_value_143);
        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_142 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_subscript_value_144;
            PyTuple_SET_ITEM(tmp_subscript_value_142, 0, tmp_tuple_element_36);
            tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_144 == NULL)) {
                tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3651;

                goto tuple_build_exception_36;
            }
            tmp_subscript_value_144 = mod_consts[96];
            tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_144, tmp_subscript_value_144);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3651;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_142, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_subscript_value_142);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_subscript_value_141 = LOOKUP_SUBSCRIPT(tmp_expression_value_142, tmp_subscript_value_142);
        Py_DECREF(tmp_subscript_value_142);
        if (tmp_subscript_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_141, tmp_subscript_value_141);
        Py_DECREF(tmp_subscript_value_141);
        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_annotations_36 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
        Py_DECREF(tmp_dict_value_36);
        assert(!(tmp_res != 0));


        tmp_assign_source_44 = MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(tmp_annotations_36);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_37;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_145;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_subscript_value_146;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_subscript_value_147;
        tmp_dict_key_37 = mod_consts[94];
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_147 = mod_consts[95];
        tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_147, tmp_subscript_value_147);
        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_146 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_148;
            PyObject *tmp_subscript_value_148;
            PyTuple_SET_ITEM(tmp_subscript_value_146, 0, tmp_tuple_element_37);
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3755;

                goto tuple_build_exception_37;
            }
            tmp_subscript_value_148 = mod_consts[96];
            tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_148, tmp_subscript_value_148);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3755;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_146, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_37;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_37:;
        Py_DECREF(tmp_subscript_value_146);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_37:;
        tmp_subscript_value_145 = LOOKUP_SUBSCRIPT(tmp_expression_value_146, tmp_subscript_value_146);
        Py_DECREF(tmp_subscript_value_146);
        if (tmp_subscript_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_145, tmp_subscript_value_145);
        Py_DECREF(tmp_subscript_value_145);
        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_annotations_37 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
        Py_DECREF(tmp_dict_value_37);
        assert(!(tmp_res != 0));


        tmp_assign_source_45 = MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(tmp_annotations_37);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_38;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_subscript_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_subscript_value_150;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_151;
        tmp_dict_key_38 = mod_consts[94];
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_151 = mod_consts[95];
        tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_151, tmp_subscript_value_151);
        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_150 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_152;
            PyObject *tmp_subscript_value_152;
            PyTuple_SET_ITEM(tmp_subscript_value_150, 0, tmp_tuple_element_38);
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3859;

                goto tuple_build_exception_38;
            }
            tmp_subscript_value_152 = mod_consts[96];
            tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_152, tmp_subscript_value_152);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3859;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_150, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_38;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_subscript_value_150);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_38:;
        tmp_subscript_value_149 = LOOKUP_SUBSCRIPT(tmp_expression_value_150, tmp_subscript_value_150);
        Py_DECREF(tmp_subscript_value_150);
        if (tmp_subscript_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_149, tmp_subscript_value_149);
        Py_DECREF(tmp_subscript_value_149);
        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_annotations_38 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
        Py_DECREF(tmp_dict_value_38);
        assert(!(tmp_res != 0));


        tmp_assign_source_46 = MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(tmp_annotations_38);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_39;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_subscript_value_153;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_subscript_value_154;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_subscript_value_155;
        tmp_dict_key_39 = mod_consts[94];
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_155 = mod_consts[95];
        tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_155, tmp_subscript_value_155);
        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_154 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_156;
            PyObject *tmp_subscript_value_156;
            PyTuple_SET_ITEM(tmp_subscript_value_154, 0, tmp_tuple_element_39);
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_156 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3963;

                goto tuple_build_exception_39;
            }
            tmp_subscript_value_156 = mod_consts[96];
            tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_156, tmp_subscript_value_156);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3963;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_154, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_39:;
        Py_DECREF(tmp_subscript_value_154);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_subscript_value_153 = LOOKUP_SUBSCRIPT(tmp_expression_value_154, tmp_subscript_value_154);
        Py_DECREF(tmp_subscript_value_154);
        if (tmp_subscript_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_153, tmp_subscript_value_153);
        Py_DECREF(tmp_subscript_value_153);
        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_annotations_39 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
        Py_DECREF(tmp_dict_value_39);
        assert(!(tmp_res != 0));


        tmp_assign_source_47 = MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(tmp_annotations_39);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_40;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_subscript_value_157;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_subscript_value_158;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_subscript_value_159;
        tmp_dict_key_40 = mod_consts[94];
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_159 = mod_consts[95];
        tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_159, tmp_subscript_value_159);
        if (tmp_tuple_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_158 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_160;
            PyObject *tmp_subscript_value_160;
            PyTuple_SET_ITEM(tmp_subscript_value_158, 0, tmp_tuple_element_40);
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4067;

                goto tuple_build_exception_40;
            }
            tmp_subscript_value_160 = mod_consts[96];
            tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_160, tmp_subscript_value_160);
            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4067;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_158, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_40;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_40:;
        Py_DECREF(tmp_subscript_value_158);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_40:;
        tmp_subscript_value_157 = LOOKUP_SUBSCRIPT(tmp_expression_value_158, tmp_subscript_value_158);
        Py_DECREF(tmp_subscript_value_158);
        if (tmp_subscript_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_157, tmp_subscript_value_157);
        Py_DECREF(tmp_subscript_value_157);
        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_annotations_40 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
        Py_DECREF(tmp_dict_value_40);
        assert(!(tmp_res != 0));


        tmp_assign_source_48 = MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(tmp_annotations_40);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_annotations_41;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_subscript_value_161;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_subscript_value_162;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_subscript_value_163;
        tmp_dict_key_41 = mod_consts[94];
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_163 = mod_consts[95];
        tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_163, tmp_subscript_value_163);
        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_162 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_164;
            PyObject *tmp_subscript_value_164;
            PyTuple_SET_ITEM(tmp_subscript_value_162, 0, tmp_tuple_element_41);
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4171;

                goto tuple_build_exception_41;
            }
            tmp_subscript_value_164 = mod_consts[96];
            tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_164, tmp_subscript_value_164);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4171;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_162, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_41;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_41:;
        Py_DECREF(tmp_subscript_value_162);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_41:;
        tmp_subscript_value_161 = LOOKUP_SUBSCRIPT(tmp_expression_value_162, tmp_subscript_value_162);
        Py_DECREF(tmp_subscript_value_162);
        if (tmp_subscript_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_161, tmp_subscript_value_161);
        Py_DECREF(tmp_subscript_value_161);
        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_annotations_41 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
        Py_DECREF(tmp_dict_value_41);
        assert(!(tmp_res != 0));


        tmp_assign_source_49 = MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(tmp_annotations_41);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_42;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_subscript_value_165;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_subscript_value_166;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_subscript_value_167;
        tmp_dict_key_42 = mod_consts[94];
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_167 = mod_consts[95];
        tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_167, tmp_subscript_value_167);
        if (tmp_tuple_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_166 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_168;
            PyObject *tmp_subscript_value_168;
            PyTuple_SET_ITEM(tmp_subscript_value_166, 0, tmp_tuple_element_42);
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4275;

                goto tuple_build_exception_42;
            }
            tmp_subscript_value_168 = mod_consts[96];
            tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_168, tmp_subscript_value_168);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4275;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_166, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_42;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_42:;
        Py_DECREF(tmp_subscript_value_166);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_42:;
        tmp_subscript_value_165 = LOOKUP_SUBSCRIPT(tmp_expression_value_166, tmp_subscript_value_166);
        Py_DECREF(tmp_subscript_value_166);
        if (tmp_subscript_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_165, tmp_subscript_value_165);
        Py_DECREF(tmp_subscript_value_165);
        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_annotations_42 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
        Py_DECREF(tmp_dict_value_42);
        assert(!(tmp_res != 0));


        tmp_assign_source_50 = MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(tmp_annotations_42);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_annotations_43;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_subscript_value_169;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_subscript_value_170;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_subscript_value_171;
        tmp_dict_key_43 = mod_consts[94];
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_171 = mod_consts[95];
        tmp_tuple_element_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_171, tmp_subscript_value_171);
        if (tmp_tuple_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_170 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_172;
            PyObject *tmp_subscript_value_172;
            PyTuple_SET_ITEM(tmp_subscript_value_170, 0, tmp_tuple_element_43);
            tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_172 == NULL)) {
                tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_172 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4379;

                goto tuple_build_exception_43;
            }
            tmp_subscript_value_172 = mod_consts[96];
            tmp_tuple_element_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_172, tmp_subscript_value_172);
            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4379;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_170, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_43:;
        Py_DECREF(tmp_subscript_value_170);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_subscript_value_169 = LOOKUP_SUBSCRIPT(tmp_expression_value_170, tmp_subscript_value_170);
        Py_DECREF(tmp_subscript_value_170);
        if (tmp_subscript_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_169, tmp_subscript_value_169);
        Py_DECREF(tmp_subscript_value_169);
        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_annotations_43 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
        Py_DECREF(tmp_dict_value_43);
        assert(!(tmp_res != 0));


        tmp_assign_source_51 = MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(tmp_annotations_43);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_annotations_44;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_subscript_value_173;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_subscript_value_174;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_subscript_value_175;
        tmp_dict_key_44 = mod_consts[94];
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_175 = mod_consts[95];
        tmp_tuple_element_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_175, tmp_subscript_value_175);
        if (tmp_tuple_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_174 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_176;
            PyObject *tmp_subscript_value_176;
            PyTuple_SET_ITEM(tmp_subscript_value_174, 0, tmp_tuple_element_44);
            tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_176 == NULL)) {
                tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_176 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4483;

                goto tuple_build_exception_44;
            }
            tmp_subscript_value_176 = mod_consts[96];
            tmp_tuple_element_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_176, tmp_subscript_value_176);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4483;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_174, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_44;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_44:;
        Py_DECREF(tmp_subscript_value_174);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_44:;
        tmp_subscript_value_173 = LOOKUP_SUBSCRIPT(tmp_expression_value_174, tmp_subscript_value_174);
        Py_DECREF(tmp_subscript_value_174);
        if (tmp_subscript_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_173, tmp_subscript_value_173);
        Py_DECREF(tmp_subscript_value_173);
        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_annotations_44 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
        Py_DECREF(tmp_dict_value_44);
        assert(!(tmp_res != 0));


        tmp_assign_source_52 = MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(tmp_annotations_44);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_annotations_45;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_subscript_value_177;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_subscript_value_178;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_179;
        tmp_dict_key_45 = mod_consts[94];
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_179 = mod_consts[95];
        tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_179, tmp_subscript_value_179);
        if (tmp_tuple_element_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_178 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_180;
            PyObject *tmp_subscript_value_180;
            PyTuple_SET_ITEM(tmp_subscript_value_178, 0, tmp_tuple_element_45);
            tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_180 == NULL)) {
                tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_180 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4587;

                goto tuple_build_exception_45;
            }
            tmp_subscript_value_180 = mod_consts[96];
            tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_180, tmp_subscript_value_180);
            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4587;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_178, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_45;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_45:;
        Py_DECREF(tmp_subscript_value_178);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_45:;
        tmp_subscript_value_177 = LOOKUP_SUBSCRIPT(tmp_expression_value_178, tmp_subscript_value_178);
        Py_DECREF(tmp_subscript_value_178);
        if (tmp_subscript_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_177, tmp_subscript_value_177);
        Py_DECREF(tmp_subscript_value_177);
        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_annotations_45 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
        Py_DECREF(tmp_dict_value_45);
        assert(!(tmp_res != 0));


        tmp_assign_source_53 = MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(tmp_annotations_45);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_46;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_subscript_value_181;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_subscript_value_182;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_subscript_value_183;
        tmp_dict_key_46 = mod_consts[94];
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_183 = mod_consts[95];
        tmp_tuple_element_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_183, tmp_subscript_value_183);
        if (tmp_tuple_element_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_182 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_184;
            PyObject *tmp_subscript_value_184;
            PyTuple_SET_ITEM(tmp_subscript_value_182, 0, tmp_tuple_element_46);
            tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_184 == NULL)) {
                tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_184 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4691;

                goto tuple_build_exception_46;
            }
            tmp_subscript_value_184 = mod_consts[96];
            tmp_tuple_element_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_184, tmp_subscript_value_184);
            if (tmp_tuple_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4691;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_182, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_46;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_46:;
        Py_DECREF(tmp_subscript_value_182);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_46:;
        tmp_subscript_value_181 = LOOKUP_SUBSCRIPT(tmp_expression_value_182, tmp_subscript_value_182);
        Py_DECREF(tmp_subscript_value_182);
        if (tmp_subscript_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_181, tmp_subscript_value_181);
        Py_DECREF(tmp_subscript_value_181);
        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_annotations_46 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
        Py_DECREF(tmp_dict_value_46);
        assert(!(tmp_res != 0));


        tmp_assign_source_54 = MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(tmp_annotations_46);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_annotations_47;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_185;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_subscript_value_186;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_subscript_value_187;
        tmp_dict_key_47 = mod_consts[94];
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_187 = mod_consts[95];
        tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_187, tmp_subscript_value_187);
        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_186 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_188;
            PyObject *tmp_subscript_value_188;
            PyTuple_SET_ITEM(tmp_subscript_value_186, 0, tmp_tuple_element_47);
            tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_188 == NULL)) {
                tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_188 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4795;

                goto tuple_build_exception_47;
            }
            tmp_subscript_value_188 = mod_consts[96];
            tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_188, tmp_subscript_value_188);
            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4795;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_186, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_47;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_47:;
        Py_DECREF(tmp_subscript_value_186);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_47:;
        tmp_subscript_value_185 = LOOKUP_SUBSCRIPT(tmp_expression_value_186, tmp_subscript_value_186);
        Py_DECREF(tmp_subscript_value_186);
        if (tmp_subscript_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_185, tmp_subscript_value_185);
        Py_DECREF(tmp_subscript_value_185);
        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_annotations_47 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
        Py_DECREF(tmp_dict_value_47);
        assert(!(tmp_res != 0));


        tmp_assign_source_55 = MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(tmp_annotations_47);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_48;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_189;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_subscript_value_190;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_191;
        tmp_dict_key_48 = mod_consts[94];
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_191 = mod_consts[95];
        tmp_tuple_element_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_191, tmp_subscript_value_191);
        if (tmp_tuple_element_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_190 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_192;
            PyObject *tmp_subscript_value_192;
            PyTuple_SET_ITEM(tmp_subscript_value_190, 0, tmp_tuple_element_48);
            tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_192 == NULL)) {
                tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_192 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4899;

                goto tuple_build_exception_48;
            }
            tmp_subscript_value_192 = mod_consts[96];
            tmp_tuple_element_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_192, tmp_subscript_value_192);
            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4899;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_190, 1, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_48;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_48:;
        Py_DECREF(tmp_subscript_value_190);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_48:;
        tmp_subscript_value_189 = LOOKUP_SUBSCRIPT(tmp_expression_value_190, tmp_subscript_value_190);
        Py_DECREF(tmp_subscript_value_190);
        if (tmp_subscript_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_189, tmp_subscript_value_189);
        Py_DECREF(tmp_subscript_value_189);
        if (tmp_dict_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_annotations_48 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_48, tmp_dict_value_48);
        Py_DECREF(tmp_dict_value_48);
        assert(!(tmp_res != 0));


        tmp_assign_source_56 = MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(tmp_annotations_48);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_49;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_subscript_value_193;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_subscript_value_194;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_subscript_value_195;
        tmp_dict_key_49 = mod_consts[94];
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_195 = mod_consts[95];
        tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_195, tmp_subscript_value_195);
        if (tmp_tuple_element_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_194 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_196;
            PyObject *tmp_subscript_value_196;
            PyTuple_SET_ITEM(tmp_subscript_value_194, 0, tmp_tuple_element_49);
            tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_196 == NULL)) {
                tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_196 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5003;

                goto tuple_build_exception_49;
            }
            tmp_subscript_value_196 = mod_consts[96];
            tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_196, tmp_subscript_value_196);
            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5003;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_194, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_49;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_49:;
        Py_DECREF(tmp_subscript_value_194);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_49:;
        tmp_subscript_value_193 = LOOKUP_SUBSCRIPT(tmp_expression_value_194, tmp_subscript_value_194);
        Py_DECREF(tmp_subscript_value_194);
        if (tmp_subscript_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_193, tmp_subscript_value_193);
        Py_DECREF(tmp_subscript_value_193);
        if (tmp_dict_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_annotations_49 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_49, tmp_dict_value_49);
        Py_DECREF(tmp_dict_value_49);
        assert(!(tmp_res != 0));


        tmp_assign_source_57 = MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(tmp_annotations_49);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_50;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_197;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_subscript_value_198;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_199;
        tmp_dict_key_50 = mod_consts[94];
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_199 = mod_consts[95];
        tmp_tuple_element_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_199, tmp_subscript_value_199);
        if (tmp_tuple_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_198 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_200;
            PyObject *tmp_subscript_value_200;
            PyTuple_SET_ITEM(tmp_subscript_value_198, 0, tmp_tuple_element_50);
            tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_200 == NULL)) {
                tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_200 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5107;

                goto tuple_build_exception_50;
            }
            tmp_subscript_value_200 = mod_consts[96];
            tmp_tuple_element_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_200, tmp_subscript_value_200);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5107;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_198, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_50;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_50:;
        Py_DECREF(tmp_subscript_value_198);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_50:;
        tmp_subscript_value_197 = LOOKUP_SUBSCRIPT(tmp_expression_value_198, tmp_subscript_value_198);
        Py_DECREF(tmp_subscript_value_198);
        if (tmp_subscript_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_197, tmp_subscript_value_197);
        Py_DECREF(tmp_subscript_value_197);
        if (tmp_dict_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_annotations_50 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_50, tmp_dict_value_50);
        Py_DECREF(tmp_dict_value_50);
        assert(!(tmp_res != 0));


        tmp_assign_source_58 = MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(tmp_annotations_50);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_51;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_subscript_value_201;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_subscript_value_202;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_203;
        tmp_dict_key_51 = mod_consts[94];
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_203 = mod_consts[95];
        tmp_tuple_element_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_203, tmp_subscript_value_203);
        if (tmp_tuple_element_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_202 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_204;
            PyObject *tmp_subscript_value_204;
            PyTuple_SET_ITEM(tmp_subscript_value_202, 0, tmp_tuple_element_51);
            tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_204 == NULL)) {
                tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_204 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5211;

                goto tuple_build_exception_51;
            }
            tmp_subscript_value_204 = mod_consts[96];
            tmp_tuple_element_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_204, tmp_subscript_value_204);
            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5211;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_202, 1, tmp_tuple_element_51);
        }
        goto tuple_build_noexception_51;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_51:;
        Py_DECREF(tmp_subscript_value_202);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_51:;
        tmp_subscript_value_201 = LOOKUP_SUBSCRIPT(tmp_expression_value_202, tmp_subscript_value_202);
        Py_DECREF(tmp_subscript_value_202);
        if (tmp_subscript_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_201, tmp_subscript_value_201);
        Py_DECREF(tmp_subscript_value_201);
        if (tmp_dict_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_annotations_51 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_51, tmp_dict_value_51);
        Py_DECREF(tmp_dict_value_51);
        assert(!(tmp_res != 0));


        tmp_assign_source_59 = MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(tmp_annotations_51);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_52;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_subscript_value_205;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_subscript_value_206;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_207;
        tmp_dict_key_52 = mod_consts[94];
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_207 = mod_consts[95];
        tmp_tuple_element_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_207, tmp_subscript_value_207);
        if (tmp_tuple_element_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_206 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_208;
            PyObject *tmp_subscript_value_208;
            PyTuple_SET_ITEM(tmp_subscript_value_206, 0, tmp_tuple_element_52);
            tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_208 == NULL)) {
                tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_208 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5315;

                goto tuple_build_exception_52;
            }
            tmp_subscript_value_208 = mod_consts[96];
            tmp_tuple_element_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_208, tmp_subscript_value_208);
            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5315;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_206, 1, tmp_tuple_element_52);
        }
        goto tuple_build_noexception_52;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_52:;
        Py_DECREF(tmp_subscript_value_206);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_52:;
        tmp_subscript_value_205 = LOOKUP_SUBSCRIPT(tmp_expression_value_206, tmp_subscript_value_206);
        Py_DECREF(tmp_subscript_value_206);
        if (tmp_subscript_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_205, tmp_subscript_value_205);
        Py_DECREF(tmp_subscript_value_205);
        if (tmp_dict_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_annotations_52 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_52, tmp_dict_value_52);
        Py_DECREF(tmp_dict_value_52);
        assert(!(tmp_res != 0));


        tmp_assign_source_60 = MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(tmp_annotations_52);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_53;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_209;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_subscript_value_210;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_211;
        tmp_dict_key_53 = mod_consts[94];
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_211 = mod_consts[95];
        tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_211, tmp_subscript_value_211);
        if (tmp_tuple_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_210 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_212;
            PyObject *tmp_subscript_value_212;
            PyTuple_SET_ITEM(tmp_subscript_value_210, 0, tmp_tuple_element_53);
            tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_212 == NULL)) {
                tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_212 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5419;

                goto tuple_build_exception_53;
            }
            tmp_subscript_value_212 = mod_consts[96];
            tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_212, tmp_subscript_value_212);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5419;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_210, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_subscript_value_210);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_subscript_value_209 = LOOKUP_SUBSCRIPT(tmp_expression_value_210, tmp_subscript_value_210);
        Py_DECREF(tmp_subscript_value_210);
        if (tmp_subscript_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_209, tmp_subscript_value_209);
        Py_DECREF(tmp_subscript_value_209);
        if (tmp_dict_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_annotations_53 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_53, tmp_dict_value_53);
        Py_DECREF(tmp_dict_value_53);
        assert(!(tmp_res != 0));


        tmp_assign_source_61 = MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(tmp_annotations_53);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_annotations_54;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_subscript_value_213;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_subscript_value_214;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_subscript_value_215;
        tmp_dict_key_54 = mod_consts[94];
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_215 = mod_consts[95];
        tmp_tuple_element_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_215, tmp_subscript_value_215);
        if (tmp_tuple_element_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_214 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_216;
            PyObject *tmp_subscript_value_216;
            PyTuple_SET_ITEM(tmp_subscript_value_214, 0, tmp_tuple_element_54);
            tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_216 == NULL)) {
                tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_216 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5523;

                goto tuple_build_exception_54;
            }
            tmp_subscript_value_216 = mod_consts[96];
            tmp_tuple_element_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_216, tmp_subscript_value_216);
            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5523;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_214, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_subscript_value_214);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_subscript_value_213 = LOOKUP_SUBSCRIPT(tmp_expression_value_214, tmp_subscript_value_214);
        Py_DECREF(tmp_subscript_value_214);
        if (tmp_subscript_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_213, tmp_subscript_value_213);
        Py_DECREF(tmp_subscript_value_213);
        if (tmp_dict_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_annotations_54 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_54, tmp_dict_value_54);
        Py_DECREF(tmp_dict_value_54);
        assert(!(tmp_res != 0));


        tmp_assign_source_62 = MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(tmp_annotations_54);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_55;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_subscript_value_217;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_subscript_value_218;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_subscript_value_219;
        tmp_dict_key_55 = mod_consts[94];
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_219 = mod_consts[95];
        tmp_tuple_element_55 = LOOKUP_SUBSCRIPT(tmp_expression_value_219, tmp_subscript_value_219);
        if (tmp_tuple_element_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_218 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_220;
            PyObject *tmp_subscript_value_220;
            PyTuple_SET_ITEM(tmp_subscript_value_218, 0, tmp_tuple_element_55);
            tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_220 == NULL)) {
                tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_220 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5627;

                goto tuple_build_exception_55;
            }
            tmp_subscript_value_220 = mod_consts[96];
            tmp_tuple_element_55 = LOOKUP_SUBSCRIPT(tmp_expression_value_220, tmp_subscript_value_220);
            if (tmp_tuple_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5627;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_218, 1, tmp_tuple_element_55);
        }
        goto tuple_build_noexception_55;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_55:;
        Py_DECREF(tmp_subscript_value_218);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_55:;
        tmp_subscript_value_217 = LOOKUP_SUBSCRIPT(tmp_expression_value_218, tmp_subscript_value_218);
        Py_DECREF(tmp_subscript_value_218);
        if (tmp_subscript_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_55 = LOOKUP_SUBSCRIPT(tmp_expression_value_217, tmp_subscript_value_217);
        Py_DECREF(tmp_subscript_value_217);
        if (tmp_dict_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_annotations_55 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_55, tmp_dict_value_55);
        Py_DECREF(tmp_dict_value_55);
        assert(!(tmp_res != 0));


        tmp_assign_source_63 = MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(tmp_annotations_55);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_56;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_subscript_value_221;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_subscript_value_222;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_subscript_value_223;
        tmp_dict_key_56 = mod_consts[94];
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_223 = mod_consts[95];
        tmp_tuple_element_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_223, tmp_subscript_value_223);
        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_222 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_224;
            PyObject *tmp_subscript_value_224;
            PyTuple_SET_ITEM(tmp_subscript_value_222, 0, tmp_tuple_element_56);
            tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_224 == NULL)) {
                tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_224 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5731;

                goto tuple_build_exception_56;
            }
            tmp_subscript_value_224 = mod_consts[96];
            tmp_tuple_element_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_224, tmp_subscript_value_224);
            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5731;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_222, 1, tmp_tuple_element_56);
        }
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_56:;
        Py_DECREF(tmp_subscript_value_222);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        tmp_subscript_value_221 = LOOKUP_SUBSCRIPT(tmp_expression_value_222, tmp_subscript_value_222);
        Py_DECREF(tmp_subscript_value_222);
        if (tmp_subscript_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_221, tmp_subscript_value_221);
        Py_DECREF(tmp_subscript_value_221);
        if (tmp_dict_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_annotations_56 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_56, tmp_dict_value_56);
        Py_DECREF(tmp_dict_value_56);
        assert(!(tmp_res != 0));


        tmp_assign_source_64 = MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(tmp_annotations_56);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_annotations_57;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_subscript_value_225;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_subscript_value_226;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_subscript_value_227;
        tmp_dict_key_57 = mod_consts[94];
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_226 == NULL)) {
            tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_227 = mod_consts[95];
        tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_227, tmp_subscript_value_227);
        if (tmp_tuple_element_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_226 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_228;
            PyObject *tmp_subscript_value_228;
            PyTuple_SET_ITEM(tmp_subscript_value_226, 0, tmp_tuple_element_57);
            tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_228 == NULL)) {
                tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_228 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5835;

                goto tuple_build_exception_57;
            }
            tmp_subscript_value_228 = mod_consts[96];
            tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_228, tmp_subscript_value_228);
            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5835;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_226, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_subscript_value_226);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_subscript_value_225 = LOOKUP_SUBSCRIPT(tmp_expression_value_226, tmp_subscript_value_226);
        Py_DECREF(tmp_subscript_value_226);
        if (tmp_subscript_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_225, tmp_subscript_value_225);
        Py_DECREF(tmp_subscript_value_225);
        if (tmp_dict_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_annotations_57 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_57, tmp_dict_key_57, tmp_dict_value_57);
        Py_DECREF(tmp_dict_value_57);
        assert(!(tmp_res != 0));


        tmp_assign_source_65 = MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(tmp_annotations_57);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_58;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_subscript_value_229;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_subscript_value_230;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_subscript_value_231;
        tmp_dict_key_58 = mod_consts[94];
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_231 == NULL)) {
            tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_231 = mod_consts[95];
        tmp_tuple_element_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_231, tmp_subscript_value_231);
        if (tmp_tuple_element_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_230 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_232;
            PyObject *tmp_subscript_value_232;
            PyTuple_SET_ITEM(tmp_subscript_value_230, 0, tmp_tuple_element_58);
            tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_232 == NULL)) {
                tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_232 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5939;

                goto tuple_build_exception_58;
            }
            tmp_subscript_value_232 = mod_consts[96];
            tmp_tuple_element_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_232, tmp_subscript_value_232);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5939;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_230, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_58;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_58:;
        Py_DECREF(tmp_subscript_value_230);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_58:;
        tmp_subscript_value_229 = LOOKUP_SUBSCRIPT(tmp_expression_value_230, tmp_subscript_value_230);
        Py_DECREF(tmp_subscript_value_230);
        if (tmp_subscript_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_229, tmp_subscript_value_229);
        Py_DECREF(tmp_subscript_value_229);
        if (tmp_dict_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_annotations_58 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_58, tmp_dict_key_58, tmp_dict_value_58);
        Py_DECREF(tmp_dict_value_58);
        assert(!(tmp_res != 0));


        tmp_assign_source_66 = MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(tmp_annotations_58);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_annotations_59;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_subscript_value_233;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_subscript_value_234;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_subscript_value_235;
        tmp_dict_key_59 = mod_consts[94];
        tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_233 == NULL)) {
            tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_235 == NULL)) {
            tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_235 = mod_consts[95];
        tmp_tuple_element_59 = LOOKUP_SUBSCRIPT(tmp_expression_value_235, tmp_subscript_value_235);
        if (tmp_tuple_element_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_234 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_236;
            PyObject *tmp_subscript_value_236;
            PyTuple_SET_ITEM(tmp_subscript_value_234, 0, tmp_tuple_element_59);
            tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_236 == NULL)) {
                tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_236 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6043;

                goto tuple_build_exception_59;
            }
            tmp_subscript_value_236 = mod_consts[96];
            tmp_tuple_element_59 = LOOKUP_SUBSCRIPT(tmp_expression_value_236, tmp_subscript_value_236);
            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6043;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_234, 1, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_59;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_59:;
        Py_DECREF(tmp_subscript_value_234);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_59:;
        tmp_subscript_value_233 = LOOKUP_SUBSCRIPT(tmp_expression_value_234, tmp_subscript_value_234);
        Py_DECREF(tmp_subscript_value_234);
        if (tmp_subscript_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_59 = LOOKUP_SUBSCRIPT(tmp_expression_value_233, tmp_subscript_value_233);
        Py_DECREF(tmp_subscript_value_233);
        if (tmp_dict_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_annotations_59 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_59, tmp_dict_key_59, tmp_dict_value_59);
        Py_DECREF(tmp_dict_value_59);
        assert(!(tmp_res != 0));


        tmp_assign_source_67 = MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(tmp_annotations_59);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_60;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_subscript_value_237;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_subscript_value_238;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_subscript_value_239;
        tmp_dict_key_60 = mod_consts[94];
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_239 == NULL)) {
            tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_239 = mod_consts[95];
        tmp_tuple_element_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_239, tmp_subscript_value_239);
        if (tmp_tuple_element_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_238 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_240;
            PyObject *tmp_subscript_value_240;
            PyTuple_SET_ITEM(tmp_subscript_value_238, 0, tmp_tuple_element_60);
            tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_240 == NULL)) {
                tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_240 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6147;

                goto tuple_build_exception_60;
            }
            tmp_subscript_value_240 = mod_consts[96];
            tmp_tuple_element_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_240, tmp_subscript_value_240);
            if (tmp_tuple_element_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6147;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_238, 1, tmp_tuple_element_60);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_subscript_value_238);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_subscript_value_237 = LOOKUP_SUBSCRIPT(tmp_expression_value_238, tmp_subscript_value_238);
        Py_DECREF(tmp_subscript_value_238);
        if (tmp_subscript_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_237, tmp_subscript_value_237);
        Py_DECREF(tmp_subscript_value_237);
        if (tmp_dict_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_annotations_60 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_60, tmp_dict_key_60, tmp_dict_value_60);
        Py_DECREF(tmp_dict_value_60);
        assert(!(tmp_res != 0));


        tmp_assign_source_68 = MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(tmp_annotations_60);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_61;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_subscript_value_241;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_subscript_value_242;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_subscript_value_243;
        tmp_dict_key_61 = mod_consts[94];
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_243 = mod_consts[95];
        tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_243, tmp_subscript_value_243);
        if (tmp_tuple_element_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_242 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_244;
            PyObject *tmp_subscript_value_244;
            PyTuple_SET_ITEM(tmp_subscript_value_242, 0, tmp_tuple_element_61);
            tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_244 == NULL)) {
                tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_244 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6251;

                goto tuple_build_exception_61;
            }
            tmp_subscript_value_244 = mod_consts[96];
            tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_244, tmp_subscript_value_244);
            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6251;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_242, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_61;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_61:;
        Py_DECREF(tmp_subscript_value_242);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_61:;
        tmp_subscript_value_241 = LOOKUP_SUBSCRIPT(tmp_expression_value_242, tmp_subscript_value_242);
        Py_DECREF(tmp_subscript_value_242);
        if (tmp_subscript_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_241, tmp_subscript_value_241);
        Py_DECREF(tmp_subscript_value_241);
        if (tmp_dict_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_annotations_61 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_61, tmp_dict_key_61, tmp_dict_value_61);
        Py_DECREF(tmp_dict_value_61);
        assert(!(tmp_res != 0));


        tmp_assign_source_69 = MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(tmp_annotations_61);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_annotations_62;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_subscript_value_245;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_subscript_value_246;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_subscript_value_247;
        tmp_dict_key_62 = mod_consts[94];
        tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_245 == NULL)) {
            tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_246 == NULL)) {
            tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_247 == NULL)) {
            tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_247 = mod_consts[95];
        tmp_tuple_element_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_247, tmp_subscript_value_247);
        if (tmp_tuple_element_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_246 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_248;
            PyObject *tmp_subscript_value_248;
            PyTuple_SET_ITEM(tmp_subscript_value_246, 0, tmp_tuple_element_62);
            tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_248 == NULL)) {
                tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_248 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6355;

                goto tuple_build_exception_62;
            }
            tmp_subscript_value_248 = mod_consts[96];
            tmp_tuple_element_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_248, tmp_subscript_value_248);
            if (tmp_tuple_element_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6355;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_246, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_62;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_62:;
        Py_DECREF(tmp_subscript_value_246);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_62:;
        tmp_subscript_value_245 = LOOKUP_SUBSCRIPT(tmp_expression_value_246, tmp_subscript_value_246);
        Py_DECREF(tmp_subscript_value_246);
        if (tmp_subscript_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_245, tmp_subscript_value_245);
        Py_DECREF(tmp_subscript_value_245);
        if (tmp_dict_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_annotations_62 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_62, tmp_dict_key_62, tmp_dict_value_62);
        Py_DECREF(tmp_dict_value_62);
        assert(!(tmp_res != 0));


        tmp_assign_source_70 = MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(tmp_annotations_62);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_annotations_63;
        PyObject *tmp_dict_key_63;
        PyObject *tmp_dict_value_63;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_subscript_value_249;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_subscript_value_250;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_subscript_value_251;
        tmp_dict_key_63 = mod_consts[94];
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_250 == NULL)) {
            tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_251 == NULL)) {
            tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_251 = mod_consts[95];
        tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_251, tmp_subscript_value_251);
        if (tmp_tuple_element_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_250 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_252;
            PyObject *tmp_subscript_value_252;
            PyTuple_SET_ITEM(tmp_subscript_value_250, 0, tmp_tuple_element_63);
            tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_252 == NULL)) {
                tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_252 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6459;

                goto tuple_build_exception_63;
            }
            tmp_subscript_value_252 = mod_consts[96];
            tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_252, tmp_subscript_value_252);
            if (tmp_tuple_element_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6459;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_250, 1, tmp_tuple_element_63);
        }
        goto tuple_build_noexception_63;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_63:;
        Py_DECREF(tmp_subscript_value_250);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_63:;
        tmp_subscript_value_249 = LOOKUP_SUBSCRIPT(tmp_expression_value_250, tmp_subscript_value_250);
        Py_DECREF(tmp_subscript_value_250);
        if (tmp_subscript_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_249, tmp_subscript_value_249);
        Py_DECREF(tmp_subscript_value_249);
        if (tmp_dict_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_annotations_63 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_63, tmp_dict_key_63, tmp_dict_value_63);
        Py_DECREF(tmp_dict_value_63);
        assert(!(tmp_res != 0));


        tmp_assign_source_71 = MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(tmp_annotations_63);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_annotations_64;
        PyObject *tmp_dict_key_64;
        PyObject *tmp_dict_value_64;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_subscript_value_253;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_subscript_value_254;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_subscript_value_255;
        tmp_dict_key_64 = mod_consts[94];
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_254 == NULL)) {
            tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_255 == NULL)) {
            tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_255 = mod_consts[95];
        tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_255, tmp_subscript_value_255);
        if (tmp_tuple_element_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_254 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_256;
            PyObject *tmp_subscript_value_256;
            PyTuple_SET_ITEM(tmp_subscript_value_254, 0, tmp_tuple_element_64);
            tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_256 == NULL)) {
                tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_256 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6563;

                goto tuple_build_exception_64;
            }
            tmp_subscript_value_256 = mod_consts[96];
            tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_256, tmp_subscript_value_256);
            if (tmp_tuple_element_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6563;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_254, 1, tmp_tuple_element_64);
        }
        goto tuple_build_noexception_64;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_64:;
        Py_DECREF(tmp_subscript_value_254);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_64:;
        tmp_subscript_value_253 = LOOKUP_SUBSCRIPT(tmp_expression_value_254, tmp_subscript_value_254);
        Py_DECREF(tmp_subscript_value_254);
        if (tmp_subscript_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_253, tmp_subscript_value_253);
        Py_DECREF(tmp_subscript_value_253);
        if (tmp_dict_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_annotations_64 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_64, tmp_dict_key_64, tmp_dict_value_64);
        Py_DECREF(tmp_dict_value_64);
        assert(!(tmp_res != 0));


        tmp_assign_source_72 = MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(tmp_annotations_64);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_annotations_65;
        PyObject *tmp_dict_key_65;
        PyObject *tmp_dict_value_65;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_subscript_value_257;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_subscript_value_258;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_subscript_value_259;
        tmp_dict_key_65 = mod_consts[94];
        tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_257 == NULL)) {
            tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_258 == NULL)) {
            tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_259 == NULL)) {
            tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_259 = mod_consts[95];
        tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_259, tmp_subscript_value_259);
        if (tmp_tuple_element_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_258 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_260;
            PyObject *tmp_subscript_value_260;
            PyTuple_SET_ITEM(tmp_subscript_value_258, 0, tmp_tuple_element_65);
            tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_260 == NULL)) {
                tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_260 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6667;

                goto tuple_build_exception_65;
            }
            tmp_subscript_value_260 = mod_consts[96];
            tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_260, tmp_subscript_value_260);
            if (tmp_tuple_element_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6667;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_258, 1, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_65;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_65:;
        Py_DECREF(tmp_subscript_value_258);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_65:;
        tmp_subscript_value_257 = LOOKUP_SUBSCRIPT(tmp_expression_value_258, tmp_subscript_value_258);
        Py_DECREF(tmp_subscript_value_258);
        if (tmp_subscript_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_257, tmp_subscript_value_257);
        Py_DECREF(tmp_subscript_value_257);
        if (tmp_dict_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_annotations_65 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_65, tmp_dict_key_65, tmp_dict_value_65);
        Py_DECREF(tmp_dict_value_65);
        assert(!(tmp_res != 0));


        tmp_assign_source_73 = MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(tmp_annotations_65);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_annotations_66;
        PyObject *tmp_dict_key_66;
        PyObject *tmp_dict_value_66;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_subscript_value_261;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_subscript_value_262;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_subscript_value_263;
        tmp_dict_key_66 = mod_consts[94];
        tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_261 == NULL)) {
            tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_262 == NULL)) {
            tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_263 = mod_consts[95];
        tmp_tuple_element_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_263, tmp_subscript_value_263);
        if (tmp_tuple_element_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_262 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_264;
            PyObject *tmp_subscript_value_264;
            PyTuple_SET_ITEM(tmp_subscript_value_262, 0, tmp_tuple_element_66);
            tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_264 == NULL)) {
                tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_264 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6771;

                goto tuple_build_exception_66;
            }
            tmp_subscript_value_264 = mod_consts[96];
            tmp_tuple_element_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_264, tmp_subscript_value_264);
            if (tmp_tuple_element_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6771;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_262, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_66;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_66:;
        Py_DECREF(tmp_subscript_value_262);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_66:;
        tmp_subscript_value_261 = LOOKUP_SUBSCRIPT(tmp_expression_value_262, tmp_subscript_value_262);
        Py_DECREF(tmp_subscript_value_262);
        if (tmp_subscript_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_261, tmp_subscript_value_261);
        Py_DECREF(tmp_subscript_value_261);
        if (tmp_dict_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_annotations_66 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_66, tmp_dict_key_66, tmp_dict_value_66);
        Py_DECREF(tmp_dict_value_66);
        assert(!(tmp_res != 0));


        tmp_assign_source_74 = MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(tmp_annotations_66);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_annotations_67;
        PyObject *tmp_dict_key_67;
        PyObject *tmp_dict_value_67;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_subscript_value_265;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_subscript_value_266;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_subscript_value_267;
        tmp_dict_key_67 = mod_consts[94];
        tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_265 == NULL)) {
            tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_267 == NULL)) {
            tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_267 = mod_consts[95];
        tmp_tuple_element_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_267, tmp_subscript_value_267);
        if (tmp_tuple_element_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_266 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_268;
            PyObject *tmp_subscript_value_268;
            PyTuple_SET_ITEM(tmp_subscript_value_266, 0, tmp_tuple_element_67);
            tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_268 == NULL)) {
                tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_268 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6875;

                goto tuple_build_exception_67;
            }
            tmp_subscript_value_268 = mod_consts[96];
            tmp_tuple_element_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_268, tmp_subscript_value_268);
            if (tmp_tuple_element_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6875;

                goto tuple_build_exception_67;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_266, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_67;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_67:;
        Py_DECREF(tmp_subscript_value_266);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_67:;
        tmp_subscript_value_265 = LOOKUP_SUBSCRIPT(tmp_expression_value_266, tmp_subscript_value_266);
        Py_DECREF(tmp_subscript_value_266);
        if (tmp_subscript_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_265, tmp_subscript_value_265);
        Py_DECREF(tmp_subscript_value_265);
        if (tmp_dict_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_annotations_67 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_67, tmp_dict_key_67, tmp_dict_value_67);
        Py_DECREF(tmp_dict_value_67);
        assert(!(tmp_res != 0));


        tmp_assign_source_75 = MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(tmp_annotations_67);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_68;
        PyObject *tmp_dict_key_68;
        PyObject *tmp_dict_value_68;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_subscript_value_269;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_subscript_value_270;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_subscript_value_271;
        tmp_dict_key_68 = mod_consts[94];
        tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_269 == NULL)) {
            tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_270 == NULL)) {
            tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_271 == NULL)) {
            tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_271 = mod_consts[95];
        tmp_tuple_element_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_271, tmp_subscript_value_271);
        if (tmp_tuple_element_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_270 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_272;
            PyObject *tmp_subscript_value_272;
            PyTuple_SET_ITEM(tmp_subscript_value_270, 0, tmp_tuple_element_68);
            tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_272 == NULL)) {
                tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_272 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6979;

                goto tuple_build_exception_68;
            }
            tmp_subscript_value_272 = mod_consts[96];
            tmp_tuple_element_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_272, tmp_subscript_value_272);
            if (tmp_tuple_element_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6979;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_270, 1, tmp_tuple_element_68);
        }
        goto tuple_build_noexception_68;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_68:;
        Py_DECREF(tmp_subscript_value_270);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_68:;
        tmp_subscript_value_269 = LOOKUP_SUBSCRIPT(tmp_expression_value_270, tmp_subscript_value_270);
        Py_DECREF(tmp_subscript_value_270);
        if (tmp_subscript_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_269, tmp_subscript_value_269);
        Py_DECREF(tmp_subscript_value_269);
        if (tmp_dict_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_annotations_68 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_68, tmp_dict_key_68, tmp_dict_value_68);
        Py_DECREF(tmp_dict_value_68);
        assert(!(tmp_res != 0));


        tmp_assign_source_76 = MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(tmp_annotations_68);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_annotations_69;
        PyObject *tmp_dict_key_69;
        PyObject *tmp_dict_value_69;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_subscript_value_273;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_subscript_value_274;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_subscript_value_275;
        tmp_dict_key_69 = mod_consts[94];
        tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_273 == NULL)) {
            tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_275 == NULL)) {
            tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_275 = mod_consts[95];
        tmp_tuple_element_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_275, tmp_subscript_value_275);
        if (tmp_tuple_element_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_274 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_276;
            PyObject *tmp_subscript_value_276;
            PyTuple_SET_ITEM(tmp_subscript_value_274, 0, tmp_tuple_element_69);
            tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_276 == NULL)) {
                tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_276 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7083;

                goto tuple_build_exception_69;
            }
            tmp_subscript_value_276 = mod_consts[96];
            tmp_tuple_element_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_276, tmp_subscript_value_276);
            if (tmp_tuple_element_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7083;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_274, 1, tmp_tuple_element_69);
        }
        goto tuple_build_noexception_69;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_69:;
        Py_DECREF(tmp_subscript_value_274);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_69:;
        tmp_subscript_value_273 = LOOKUP_SUBSCRIPT(tmp_expression_value_274, tmp_subscript_value_274);
        Py_DECREF(tmp_subscript_value_274);
        if (tmp_subscript_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_273, tmp_subscript_value_273);
        Py_DECREF(tmp_subscript_value_273);
        if (tmp_dict_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_annotations_69 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_69, tmp_dict_key_69, tmp_dict_value_69);
        Py_DECREF(tmp_dict_value_69);
        assert(!(tmp_res != 0));


        tmp_assign_source_77 = MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(tmp_annotations_69);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_annotations_70;
        PyObject *tmp_dict_key_70;
        PyObject *tmp_dict_value_70;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_subscript_value_277;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_subscript_value_278;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_subscript_value_279;
        tmp_dict_key_70 = mod_consts[94];
        tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_277 == NULL)) {
            tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_279 == NULL)) {
            tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_279 = mod_consts[95];
        tmp_tuple_element_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_279, tmp_subscript_value_279);
        if (tmp_tuple_element_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_278 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_280;
            PyObject *tmp_subscript_value_280;
            PyTuple_SET_ITEM(tmp_subscript_value_278, 0, tmp_tuple_element_70);
            tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_280 == NULL)) {
                tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_280 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7187;

                goto tuple_build_exception_70;
            }
            tmp_subscript_value_280 = mod_consts[96];
            tmp_tuple_element_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_280, tmp_subscript_value_280);
            if (tmp_tuple_element_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7187;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_278, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_70;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_70:;
        Py_DECREF(tmp_subscript_value_278);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_70:;
        tmp_subscript_value_277 = LOOKUP_SUBSCRIPT(tmp_expression_value_278, tmp_subscript_value_278);
        Py_DECREF(tmp_subscript_value_278);
        if (tmp_subscript_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_277, tmp_subscript_value_277);
        Py_DECREF(tmp_subscript_value_277);
        if (tmp_dict_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_annotations_70 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_70, tmp_dict_key_70, tmp_dict_value_70);
        Py_DECREF(tmp_dict_value_70);
        assert(!(tmp_res != 0));


        tmp_assign_source_78 = MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(tmp_annotations_70);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_annotations_71;
        PyObject *tmp_dict_key_71;
        PyObject *tmp_dict_value_71;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_subscript_value_281;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_subscript_value_282;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_subscript_value_283;
        tmp_dict_key_71 = mod_consts[94];
        tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_281 == NULL)) {
            tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_282 == NULL)) {
            tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_283 == NULL)) {
            tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_283 = mod_consts[95];
        tmp_tuple_element_71 = LOOKUP_SUBSCRIPT(tmp_expression_value_283, tmp_subscript_value_283);
        if (tmp_tuple_element_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_282 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_284;
            PyObject *tmp_subscript_value_284;
            PyTuple_SET_ITEM(tmp_subscript_value_282, 0, tmp_tuple_element_71);
            tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_284 == NULL)) {
                tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_284 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7291;

                goto tuple_build_exception_71;
            }
            tmp_subscript_value_284 = mod_consts[96];
            tmp_tuple_element_71 = LOOKUP_SUBSCRIPT(tmp_expression_value_284, tmp_subscript_value_284);
            if (tmp_tuple_element_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7291;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_282, 1, tmp_tuple_element_71);
        }
        goto tuple_build_noexception_71;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_71:;
        Py_DECREF(tmp_subscript_value_282);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_71:;
        tmp_subscript_value_281 = LOOKUP_SUBSCRIPT(tmp_expression_value_282, tmp_subscript_value_282);
        Py_DECREF(tmp_subscript_value_282);
        if (tmp_subscript_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_71 = LOOKUP_SUBSCRIPT(tmp_expression_value_281, tmp_subscript_value_281);
        Py_DECREF(tmp_subscript_value_281);
        if (tmp_dict_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_annotations_71 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_71, tmp_dict_key_71, tmp_dict_value_71);
        Py_DECREF(tmp_dict_value_71);
        assert(!(tmp_res != 0));


        tmp_assign_source_79 = MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(tmp_annotations_71);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_annotations_72;
        PyObject *tmp_dict_key_72;
        PyObject *tmp_dict_value_72;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_subscript_value_285;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_subscript_value_286;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_subscript_value_287;
        tmp_dict_key_72 = mod_consts[94];
        tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_285 == NULL)) {
            tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_287 == NULL)) {
            tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_287 = mod_consts[95];
        tmp_tuple_element_72 = LOOKUP_SUBSCRIPT(tmp_expression_value_287, tmp_subscript_value_287);
        if (tmp_tuple_element_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_286 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_288;
            PyObject *tmp_subscript_value_288;
            PyTuple_SET_ITEM(tmp_subscript_value_286, 0, tmp_tuple_element_72);
            tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_288 == NULL)) {
                tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_288 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7395;

                goto tuple_build_exception_72;
            }
            tmp_subscript_value_288 = mod_consts[96];
            tmp_tuple_element_72 = LOOKUP_SUBSCRIPT(tmp_expression_value_288, tmp_subscript_value_288);
            if (tmp_tuple_element_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7395;

                goto tuple_build_exception_72;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_286, 1, tmp_tuple_element_72);
        }
        goto tuple_build_noexception_72;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_72:;
        Py_DECREF(tmp_subscript_value_286);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_72:;
        tmp_subscript_value_285 = LOOKUP_SUBSCRIPT(tmp_expression_value_286, tmp_subscript_value_286);
        Py_DECREF(tmp_subscript_value_286);
        if (tmp_subscript_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_72 = LOOKUP_SUBSCRIPT(tmp_expression_value_285, tmp_subscript_value_285);
        Py_DECREF(tmp_subscript_value_285);
        if (tmp_dict_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_annotations_72 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_72, tmp_dict_key_72, tmp_dict_value_72);
        Py_DECREF(tmp_dict_value_72);
        assert(!(tmp_res != 0));


        tmp_assign_source_80 = MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(tmp_annotations_72);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_annotations_73;
        PyObject *tmp_dict_key_73;
        PyObject *tmp_dict_value_73;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_subscript_value_289;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_subscript_value_290;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_subscript_value_291;
        tmp_dict_key_73 = mod_consts[94];
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_290 == NULL)) {
            tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_291 == NULL)) {
            tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_291 = mod_consts[95];
        tmp_tuple_element_73 = LOOKUP_SUBSCRIPT(tmp_expression_value_291, tmp_subscript_value_291);
        if (tmp_tuple_element_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_290 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_292;
            PyObject *tmp_subscript_value_292;
            PyTuple_SET_ITEM(tmp_subscript_value_290, 0, tmp_tuple_element_73);
            tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_292 == NULL)) {
                tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_292 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7499;

                goto tuple_build_exception_73;
            }
            tmp_subscript_value_292 = mod_consts[96];
            tmp_tuple_element_73 = LOOKUP_SUBSCRIPT(tmp_expression_value_292, tmp_subscript_value_292);
            if (tmp_tuple_element_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7499;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_290, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_73;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_73:;
        Py_DECREF(tmp_subscript_value_290);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_73:;
        tmp_subscript_value_289 = LOOKUP_SUBSCRIPT(tmp_expression_value_290, tmp_subscript_value_290);
        Py_DECREF(tmp_subscript_value_290);
        if (tmp_subscript_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_73 = LOOKUP_SUBSCRIPT(tmp_expression_value_289, tmp_subscript_value_289);
        Py_DECREF(tmp_subscript_value_289);
        if (tmp_dict_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_annotations_73 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_73, tmp_dict_key_73, tmp_dict_value_73);
        Py_DECREF(tmp_dict_value_73);
        assert(!(tmp_res != 0));


        tmp_assign_source_81 = MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(tmp_annotations_73);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_annotations_74;
        PyObject *tmp_dict_key_74;
        PyObject *tmp_dict_value_74;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_subscript_value_293;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_subscript_value_294;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_subscript_value_295;
        tmp_dict_key_74 = mod_consts[94];
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_294 == NULL)) {
            tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_295 == NULL)) {
            tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_295 = mod_consts[95];
        tmp_tuple_element_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_295, tmp_subscript_value_295);
        if (tmp_tuple_element_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_294 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_296;
            PyObject *tmp_subscript_value_296;
            PyTuple_SET_ITEM(tmp_subscript_value_294, 0, tmp_tuple_element_74);
            tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_296 == NULL)) {
                tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_296 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7603;

                goto tuple_build_exception_74;
            }
            tmp_subscript_value_296 = mod_consts[96];
            tmp_tuple_element_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_296, tmp_subscript_value_296);
            if (tmp_tuple_element_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7603;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_294, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_74;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_74:;
        Py_DECREF(tmp_subscript_value_294);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_74:;
        tmp_subscript_value_293 = LOOKUP_SUBSCRIPT(tmp_expression_value_294, tmp_subscript_value_294);
        Py_DECREF(tmp_subscript_value_294);
        if (tmp_subscript_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_293, tmp_subscript_value_293);
        Py_DECREF(tmp_subscript_value_293);
        if (tmp_dict_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_annotations_74 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_74, tmp_dict_key_74, tmp_dict_value_74);
        Py_DECREF(tmp_dict_value_74);
        assert(!(tmp_res != 0));


        tmp_assign_source_82 = MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(tmp_annotations_74);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_annotations_75;
        PyObject *tmp_dict_key_75;
        PyObject *tmp_dict_value_75;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_subscript_value_297;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_subscript_value_298;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_subscript_value_299;
        tmp_dict_key_75 = mod_consts[94];
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_299 == NULL)) {
            tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_299 = mod_consts[95];
        tmp_tuple_element_75 = LOOKUP_SUBSCRIPT(tmp_expression_value_299, tmp_subscript_value_299);
        if (tmp_tuple_element_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_298 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_300;
            PyObject *tmp_subscript_value_300;
            PyTuple_SET_ITEM(tmp_subscript_value_298, 0, tmp_tuple_element_75);
            tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_300 == NULL)) {
                tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_300 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7707;

                goto tuple_build_exception_75;
            }
            tmp_subscript_value_300 = mod_consts[96];
            tmp_tuple_element_75 = LOOKUP_SUBSCRIPT(tmp_expression_value_300, tmp_subscript_value_300);
            if (tmp_tuple_element_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7707;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_298, 1, tmp_tuple_element_75);
        }
        goto tuple_build_noexception_75;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_75:;
        Py_DECREF(tmp_subscript_value_298);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_75:;
        tmp_subscript_value_297 = LOOKUP_SUBSCRIPT(tmp_expression_value_298, tmp_subscript_value_298);
        Py_DECREF(tmp_subscript_value_298);
        if (tmp_subscript_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_75 = LOOKUP_SUBSCRIPT(tmp_expression_value_297, tmp_subscript_value_297);
        Py_DECREF(tmp_subscript_value_297);
        if (tmp_dict_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_annotations_75 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_75, tmp_dict_key_75, tmp_dict_value_75);
        Py_DECREF(tmp_dict_value_75);
        assert(!(tmp_res != 0));


        tmp_assign_source_83 = MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(tmp_annotations_75);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_annotations_76;
        PyObject *tmp_dict_key_76;
        PyObject *tmp_dict_value_76;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_subscript_value_301;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_subscript_value_302;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_subscript_value_303;
        tmp_dict_key_76 = mod_consts[94];
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_303 = mod_consts[95];
        tmp_tuple_element_76 = LOOKUP_SUBSCRIPT(tmp_expression_value_303, tmp_subscript_value_303);
        if (tmp_tuple_element_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_302 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_304;
            PyObject *tmp_subscript_value_304;
            PyTuple_SET_ITEM(tmp_subscript_value_302, 0, tmp_tuple_element_76);
            tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_304 == NULL)) {
                tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_304 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7811;

                goto tuple_build_exception_76;
            }
            tmp_subscript_value_304 = mod_consts[96];
            tmp_tuple_element_76 = LOOKUP_SUBSCRIPT(tmp_expression_value_304, tmp_subscript_value_304);
            if (tmp_tuple_element_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7811;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_302, 1, tmp_tuple_element_76);
        }
        goto tuple_build_noexception_76;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_76:;
        Py_DECREF(tmp_subscript_value_302);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_76:;
        tmp_subscript_value_301 = LOOKUP_SUBSCRIPT(tmp_expression_value_302, tmp_subscript_value_302);
        Py_DECREF(tmp_subscript_value_302);
        if (tmp_subscript_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_76 = LOOKUP_SUBSCRIPT(tmp_expression_value_301, tmp_subscript_value_301);
        Py_DECREF(tmp_subscript_value_301);
        if (tmp_dict_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_annotations_76 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_76, tmp_dict_key_76, tmp_dict_value_76);
        Py_DECREF(tmp_dict_value_76);
        assert(!(tmp_res != 0));


        tmp_assign_source_84 = MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(tmp_annotations_76);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_annotations_77;
        PyObject *tmp_dict_key_77;
        PyObject *tmp_dict_value_77;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_subscript_value_305;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_subscript_value_306;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_subscript_value_307;
        tmp_dict_key_77 = mod_consts[94];
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_307 == NULL)) {
            tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_307 = mod_consts[95];
        tmp_tuple_element_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_307, tmp_subscript_value_307);
        if (tmp_tuple_element_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_306 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_308;
            PyObject *tmp_subscript_value_308;
            PyTuple_SET_ITEM(tmp_subscript_value_306, 0, tmp_tuple_element_77);
            tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_308 == NULL)) {
                tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_308 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7915;

                goto tuple_build_exception_77;
            }
            tmp_subscript_value_308 = mod_consts[96];
            tmp_tuple_element_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_308, tmp_subscript_value_308);
            if (tmp_tuple_element_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7915;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_306, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_77;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_77:;
        Py_DECREF(tmp_subscript_value_306);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_77:;
        tmp_subscript_value_305 = LOOKUP_SUBSCRIPT(tmp_expression_value_306, tmp_subscript_value_306);
        Py_DECREF(tmp_subscript_value_306);
        if (tmp_subscript_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_305, tmp_subscript_value_305);
        Py_DECREF(tmp_subscript_value_305);
        if (tmp_dict_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_annotations_77 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_77, tmp_dict_value_77);
        Py_DECREF(tmp_dict_value_77);
        assert(!(tmp_res != 0));


        tmp_assign_source_85 = MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(tmp_annotations_77);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_annotations_78;
        PyObject *tmp_dict_key_78;
        PyObject *tmp_dict_value_78;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_subscript_value_309;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_subscript_value_310;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_subscript_value_311;
        tmp_dict_key_78 = mod_consts[94];
        tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_309 == NULL)) {
            tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_310 == NULL)) {
            tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_311 == NULL)) {
            tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_311 = mod_consts[95];
        tmp_tuple_element_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_311, tmp_subscript_value_311);
        if (tmp_tuple_element_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_310 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_312;
            PyObject *tmp_subscript_value_312;
            PyTuple_SET_ITEM(tmp_subscript_value_310, 0, tmp_tuple_element_78);
            tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_312 == NULL)) {
                tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_312 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8019;

                goto tuple_build_exception_78;
            }
            tmp_subscript_value_312 = mod_consts[96];
            tmp_tuple_element_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_312, tmp_subscript_value_312);
            if (tmp_tuple_element_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8019;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_310, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_78;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_78:;
        Py_DECREF(tmp_subscript_value_310);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_78:;
        tmp_subscript_value_309 = LOOKUP_SUBSCRIPT(tmp_expression_value_310, tmp_subscript_value_310);
        Py_DECREF(tmp_subscript_value_310);
        if (tmp_subscript_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_309, tmp_subscript_value_309);
        Py_DECREF(tmp_subscript_value_309);
        if (tmp_dict_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_annotations_78 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_78, tmp_dict_key_78, tmp_dict_value_78);
        Py_DECREF(tmp_dict_value_78);
        assert(!(tmp_res != 0));


        tmp_assign_source_86 = MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(tmp_annotations_78);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_annotations_79;
        PyObject *tmp_dict_key_79;
        PyObject *tmp_dict_value_79;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_subscript_value_313;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_subscript_value_314;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_subscript_value_315;
        tmp_dict_key_79 = mod_consts[94];
        tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_313 == NULL)) {
            tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_314 == NULL)) {
            tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_315 == NULL)) {
            tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_315 = mod_consts[95];
        tmp_tuple_element_79 = LOOKUP_SUBSCRIPT(tmp_expression_value_315, tmp_subscript_value_315);
        if (tmp_tuple_element_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_314 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_316;
            PyObject *tmp_subscript_value_316;
            PyTuple_SET_ITEM(tmp_subscript_value_314, 0, tmp_tuple_element_79);
            tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_316 == NULL)) {
                tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_316 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8123;

                goto tuple_build_exception_79;
            }
            tmp_subscript_value_316 = mod_consts[96];
            tmp_tuple_element_79 = LOOKUP_SUBSCRIPT(tmp_expression_value_316, tmp_subscript_value_316);
            if (tmp_tuple_element_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8123;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_314, 1, tmp_tuple_element_79);
        }
        goto tuple_build_noexception_79;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_79:;
        Py_DECREF(tmp_subscript_value_314);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_79:;
        tmp_subscript_value_313 = LOOKUP_SUBSCRIPT(tmp_expression_value_314, tmp_subscript_value_314);
        Py_DECREF(tmp_subscript_value_314);
        if (tmp_subscript_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_79 = LOOKUP_SUBSCRIPT(tmp_expression_value_313, tmp_subscript_value_313);
        Py_DECREF(tmp_subscript_value_313);
        if (tmp_dict_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_annotations_79 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_79, tmp_dict_key_79, tmp_dict_value_79);
        Py_DECREF(tmp_dict_value_79);
        assert(!(tmp_res != 0));


        tmp_assign_source_87 = MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(tmp_annotations_79);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_annotations_80;
        PyObject *tmp_dict_key_80;
        PyObject *tmp_dict_value_80;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_subscript_value_317;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_subscript_value_318;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_subscript_value_319;
        tmp_dict_key_80 = mod_consts[94];
        tmp_expression_value_317 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_317 == NULL)) {
            tmp_expression_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_318 == NULL)) {
            tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_319 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_319 == NULL)) {
            tmp_expression_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_319 = mod_consts[95];
        tmp_tuple_element_80 = LOOKUP_SUBSCRIPT(tmp_expression_value_319, tmp_subscript_value_319);
        if (tmp_tuple_element_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_318 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_320;
            PyObject *tmp_subscript_value_320;
            PyTuple_SET_ITEM(tmp_subscript_value_318, 0, tmp_tuple_element_80);
            tmp_expression_value_320 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_320 == NULL)) {
                tmp_expression_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_320 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8227;

                goto tuple_build_exception_80;
            }
            tmp_subscript_value_320 = mod_consts[96];
            tmp_tuple_element_80 = LOOKUP_SUBSCRIPT(tmp_expression_value_320, tmp_subscript_value_320);
            if (tmp_tuple_element_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8227;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_318, 1, tmp_tuple_element_80);
        }
        goto tuple_build_noexception_80;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_80:;
        Py_DECREF(tmp_subscript_value_318);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_80:;
        tmp_subscript_value_317 = LOOKUP_SUBSCRIPT(tmp_expression_value_318, tmp_subscript_value_318);
        Py_DECREF(tmp_subscript_value_318);
        if (tmp_subscript_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_80 = LOOKUP_SUBSCRIPT(tmp_expression_value_317, tmp_subscript_value_317);
        Py_DECREF(tmp_subscript_value_317);
        if (tmp_dict_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_annotations_80 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_80, tmp_dict_key_80, tmp_dict_value_80);
        Py_DECREF(tmp_dict_value_80);
        assert(!(tmp_res != 0));


        tmp_assign_source_88 = MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(tmp_annotations_80);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_annotations_81;
        PyObject *tmp_dict_key_81;
        PyObject *tmp_dict_value_81;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_subscript_value_321;
        PyObject *tmp_expression_value_322;
        PyObject *tmp_subscript_value_322;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_323;
        PyObject *tmp_subscript_value_323;
        tmp_dict_key_81 = mod_consts[94];
        tmp_expression_value_321 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_321 == NULL)) {
            tmp_expression_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_322 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_322 == NULL)) {
            tmp_expression_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_323 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_323 == NULL)) {
            tmp_expression_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_323 = mod_consts[95];
        tmp_tuple_element_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_323, tmp_subscript_value_323);
        if (tmp_tuple_element_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_322 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_324;
            PyObject *tmp_subscript_value_324;
            PyTuple_SET_ITEM(tmp_subscript_value_322, 0, tmp_tuple_element_81);
            tmp_expression_value_324 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_324 == NULL)) {
                tmp_expression_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_324 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8331;

                goto tuple_build_exception_81;
            }
            tmp_subscript_value_324 = mod_consts[96];
            tmp_tuple_element_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_324, tmp_subscript_value_324);
            if (tmp_tuple_element_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8331;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_322, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_81;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_81:;
        Py_DECREF(tmp_subscript_value_322);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_81:;
        tmp_subscript_value_321 = LOOKUP_SUBSCRIPT(tmp_expression_value_322, tmp_subscript_value_322);
        Py_DECREF(tmp_subscript_value_322);
        if (tmp_subscript_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_81 = LOOKUP_SUBSCRIPT(tmp_expression_value_321, tmp_subscript_value_321);
        Py_DECREF(tmp_subscript_value_321);
        if (tmp_dict_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_annotations_81 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_81, tmp_dict_key_81, tmp_dict_value_81);
        Py_DECREF(tmp_dict_value_81);
        assert(!(tmp_res != 0));


        tmp_assign_source_89 = MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(tmp_annotations_81);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_annotations_82;
        PyObject *tmp_dict_key_82;
        PyObject *tmp_dict_value_82;
        PyObject *tmp_expression_value_325;
        PyObject *tmp_subscript_value_325;
        PyObject *tmp_expression_value_326;
        PyObject *tmp_subscript_value_326;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_327;
        PyObject *tmp_subscript_value_327;
        tmp_dict_key_82 = mod_consts[94];
        tmp_expression_value_325 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_325 == NULL)) {
            tmp_expression_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_326 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_326 == NULL)) {
            tmp_expression_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_327 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_327 == NULL)) {
            tmp_expression_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_327 = mod_consts[95];
        tmp_tuple_element_82 = LOOKUP_SUBSCRIPT(tmp_expression_value_327, tmp_subscript_value_327);
        if (tmp_tuple_element_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_326 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_328;
            PyObject *tmp_subscript_value_328;
            PyTuple_SET_ITEM(tmp_subscript_value_326, 0, tmp_tuple_element_82);
            tmp_expression_value_328 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_328 == NULL)) {
                tmp_expression_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_328 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8435;

                goto tuple_build_exception_82;
            }
            tmp_subscript_value_328 = mod_consts[96];
            tmp_tuple_element_82 = LOOKUP_SUBSCRIPT(tmp_expression_value_328, tmp_subscript_value_328);
            if (tmp_tuple_element_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8435;

                goto tuple_build_exception_82;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_326, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_82;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_82:;
        Py_DECREF(tmp_subscript_value_326);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_82:;
        tmp_subscript_value_325 = LOOKUP_SUBSCRIPT(tmp_expression_value_326, tmp_subscript_value_326);
        Py_DECREF(tmp_subscript_value_326);
        if (tmp_subscript_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_82 = LOOKUP_SUBSCRIPT(tmp_expression_value_325, tmp_subscript_value_325);
        Py_DECREF(tmp_subscript_value_325);
        if (tmp_dict_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_annotations_82 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_82, tmp_dict_key_82, tmp_dict_value_82);
        Py_DECREF(tmp_dict_value_82);
        assert(!(tmp_res != 0));


        tmp_assign_source_90 = MAKE_FUNCTION_idna$uts46data$$$function__82__seg_81(tmp_annotations_82);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        PyObject *tmp_add_expr_left_26;
        PyObject *tmp_add_expr_right_26;
        PyObject *tmp_add_expr_left_27;
        PyObject *tmp_add_expr_right_27;
        PyObject *tmp_add_expr_left_28;
        PyObject *tmp_add_expr_right_28;
        PyObject *tmp_add_expr_left_29;
        PyObject *tmp_add_expr_right_29;
        PyObject *tmp_add_expr_left_30;
        PyObject *tmp_add_expr_right_30;
        PyObject *tmp_add_expr_left_31;
        PyObject *tmp_add_expr_right_31;
        PyObject *tmp_add_expr_left_32;
        PyObject *tmp_add_expr_right_32;
        PyObject *tmp_add_expr_left_33;
        PyObject *tmp_add_expr_right_33;
        PyObject *tmp_add_expr_left_34;
        PyObject *tmp_add_expr_right_34;
        PyObject *tmp_add_expr_left_35;
        PyObject *tmp_add_expr_right_35;
        PyObject *tmp_add_expr_left_36;
        PyObject *tmp_add_expr_right_36;
        PyObject *tmp_add_expr_left_37;
        PyObject *tmp_add_expr_right_37;
        PyObject *tmp_add_expr_left_38;
        PyObject *tmp_add_expr_right_38;
        PyObject *tmp_add_expr_left_39;
        PyObject *tmp_add_expr_right_39;
        PyObject *tmp_add_expr_left_40;
        PyObject *tmp_add_expr_right_40;
        PyObject *tmp_add_expr_left_41;
        PyObject *tmp_add_expr_right_41;
        PyObject *tmp_add_expr_left_42;
        PyObject *tmp_add_expr_right_42;
        PyObject *tmp_add_expr_left_43;
        PyObject *tmp_add_expr_right_43;
        PyObject *tmp_add_expr_left_44;
        PyObject *tmp_add_expr_right_44;
        PyObject *tmp_add_expr_left_45;
        PyObject *tmp_add_expr_right_45;
        PyObject *tmp_add_expr_left_46;
        PyObject *tmp_add_expr_right_46;
        PyObject *tmp_add_expr_left_47;
        PyObject *tmp_add_expr_right_47;
        PyObject *tmp_add_expr_left_48;
        PyObject *tmp_add_expr_right_48;
        PyObject *tmp_add_expr_left_49;
        PyObject *tmp_add_expr_right_49;
        PyObject *tmp_add_expr_left_50;
        PyObject *tmp_add_expr_right_50;
        PyObject *tmp_add_expr_left_51;
        PyObject *tmp_add_expr_right_51;
        PyObject *tmp_add_expr_left_52;
        PyObject *tmp_add_expr_right_52;
        PyObject *tmp_add_expr_left_53;
        PyObject *tmp_add_expr_right_53;
        PyObject *tmp_add_expr_left_54;
        PyObject *tmp_add_expr_right_54;
        PyObject *tmp_add_expr_left_55;
        PyObject *tmp_add_expr_right_55;
        PyObject *tmp_add_expr_left_56;
        PyObject *tmp_add_expr_right_56;
        PyObject *tmp_add_expr_left_57;
        PyObject *tmp_add_expr_right_57;
        PyObject *tmp_add_expr_left_58;
        PyObject *tmp_add_expr_right_58;
        PyObject *tmp_add_expr_left_59;
        PyObject *tmp_add_expr_right_59;
        PyObject *tmp_add_expr_left_60;
        PyObject *tmp_add_expr_right_60;
        PyObject *tmp_add_expr_left_61;
        PyObject *tmp_add_expr_right_61;
        PyObject *tmp_add_expr_left_62;
        PyObject *tmp_add_expr_right_62;
        PyObject *tmp_add_expr_left_63;
        PyObject *tmp_add_expr_right_63;
        PyObject *tmp_add_expr_left_64;
        PyObject *tmp_add_expr_right_64;
        PyObject *tmp_add_expr_left_65;
        PyObject *tmp_add_expr_right_65;
        PyObject *tmp_add_expr_left_66;
        PyObject *tmp_add_expr_right_66;
        PyObject *tmp_add_expr_left_67;
        PyObject *tmp_add_expr_right_67;
        PyObject *tmp_add_expr_left_68;
        PyObject *tmp_add_expr_right_68;
        PyObject *tmp_add_expr_left_69;
        PyObject *tmp_add_expr_right_69;
        PyObject *tmp_add_expr_left_70;
        PyObject *tmp_add_expr_right_70;
        PyObject *tmp_add_expr_left_71;
        PyObject *tmp_add_expr_right_71;
        PyObject *tmp_add_expr_left_72;
        PyObject *tmp_add_expr_right_72;
        PyObject *tmp_add_expr_left_73;
        PyObject *tmp_add_expr_right_73;
        PyObject *tmp_add_expr_left_74;
        PyObject *tmp_add_expr_right_74;
        PyObject *tmp_add_expr_left_75;
        PyObject *tmp_add_expr_right_75;
        PyObject *tmp_add_expr_left_76;
        PyObject *tmp_add_expr_right_76;
        PyObject *tmp_add_expr_left_77;
        PyObject *tmp_add_expr_right_77;
        PyObject *tmp_add_expr_left_78;
        PyObject *tmp_add_expr_right_78;
        PyObject *tmp_add_expr_left_79;
        PyObject *tmp_add_expr_right_79;
        PyObject *tmp_add_expr_left_80;
        PyObject *tmp_add_expr_right_80;
        PyObject *tmp_add_expr_left_81;
        PyObject *tmp_add_expr_right_81;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_called_value_80;
        PyObject *tmp_called_value_81;
        PyObject *tmp_called_value_82;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8518;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8518;
        tmp_add_expr_left_81 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_add_expr_left_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8518;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_81);

            exception_lineno = 8519;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8519;
        tmp_add_expr_right_81 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_add_expr_right_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_81);

            exception_lineno = 8519;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_80 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_81, tmp_add_expr_right_81);
        Py_DECREF(tmp_add_expr_left_81);
        Py_DECREF(tmp_add_expr_right_81);
        if (tmp_add_expr_left_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8519;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_80);

            exception_lineno = 8520;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8520;
        tmp_add_expr_right_80 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_add_expr_right_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_80);

            exception_lineno = 8520;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_80, tmp_add_expr_right_80);
        Py_DECREF(tmp_add_expr_left_80);
        Py_DECREF(tmp_add_expr_right_80);
        if (tmp_add_expr_left_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8520;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_79);

            exception_lineno = 8521;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8521;
        tmp_add_expr_right_79 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_add_expr_right_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_79);

            exception_lineno = 8521;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_78 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_79, tmp_add_expr_right_79);
        Py_DECREF(tmp_add_expr_left_79);
        Py_DECREF(tmp_add_expr_right_79);
        if (tmp_add_expr_left_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8521;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_78);

            exception_lineno = 8522;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8522;
        tmp_add_expr_right_78 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_add_expr_right_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_78);

            exception_lineno = 8522;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_77 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_78, tmp_add_expr_right_78);
        Py_DECREF(tmp_add_expr_left_78);
        Py_DECREF(tmp_add_expr_right_78);
        if (tmp_add_expr_left_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8522;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_77);

            exception_lineno = 8523;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8523;
        tmp_add_expr_right_77 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_add_expr_right_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_77);

            exception_lineno = 8523;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_76 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_77, tmp_add_expr_right_77);
        Py_DECREF(tmp_add_expr_left_77);
        Py_DECREF(tmp_add_expr_right_77);
        if (tmp_add_expr_left_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8523;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_76);

            exception_lineno = 8524;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8524;
        tmp_add_expr_right_76 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_add_expr_right_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_76);

            exception_lineno = 8524;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_75 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_76, tmp_add_expr_right_76);
        Py_DECREF(tmp_add_expr_left_76);
        Py_DECREF(tmp_add_expr_right_76);
        if (tmp_add_expr_left_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8524;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_75);

            exception_lineno = 8525;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8525;
        tmp_add_expr_right_75 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_add_expr_right_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_75);

            exception_lineno = 8525;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_74 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_75, tmp_add_expr_right_75);
        Py_DECREF(tmp_add_expr_left_75);
        Py_DECREF(tmp_add_expr_right_75);
        if (tmp_add_expr_left_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8525;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_74);

            exception_lineno = 8526;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8526;
        tmp_add_expr_right_74 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_add_expr_right_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_74);

            exception_lineno = 8526;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_74, tmp_add_expr_right_74);
        Py_DECREF(tmp_add_expr_left_74);
        Py_DECREF(tmp_add_expr_right_74);
        if (tmp_add_expr_left_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8526;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_73);

            exception_lineno = 8527;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8527;
        tmp_add_expr_right_73 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_add_expr_right_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_73);

            exception_lineno = 8527;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_72 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_73, tmp_add_expr_right_73);
        Py_DECREF(tmp_add_expr_left_73);
        Py_DECREF(tmp_add_expr_right_73);
        if (tmp_add_expr_left_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8527;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_72);

            exception_lineno = 8528;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8528;
        tmp_add_expr_right_72 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        if (tmp_add_expr_right_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_72);

            exception_lineno = 8528;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_71 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_72, tmp_add_expr_right_72);
        Py_DECREF(tmp_add_expr_left_72);
        Py_DECREF(tmp_add_expr_right_72);
        if (tmp_add_expr_left_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8528;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_71);

            exception_lineno = 8529;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8529;
        tmp_add_expr_right_71 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_add_expr_right_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_71);

            exception_lineno = 8529;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_70 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_71, tmp_add_expr_right_71);
        Py_DECREF(tmp_add_expr_left_71);
        Py_DECREF(tmp_add_expr_right_71);
        if (tmp_add_expr_left_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8529;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_70);

            exception_lineno = 8530;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8530;
        tmp_add_expr_right_70 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_add_expr_right_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_70);

            exception_lineno = 8530;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_69 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_70, tmp_add_expr_right_70);
        Py_DECREF(tmp_add_expr_left_70);
        Py_DECREF(tmp_add_expr_right_70);
        if (tmp_add_expr_left_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8530;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_69);

            exception_lineno = 8531;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8531;
        tmp_add_expr_right_69 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_add_expr_right_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_69);

            exception_lineno = 8531;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_68 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_69, tmp_add_expr_right_69);
        Py_DECREF(tmp_add_expr_left_69);
        Py_DECREF(tmp_add_expr_right_69);
        if (tmp_add_expr_left_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8531;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_68);

            exception_lineno = 8532;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8532;
        tmp_add_expr_right_68 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
        if (tmp_add_expr_right_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_68);

            exception_lineno = 8532;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_67 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_68, tmp_add_expr_right_68);
        Py_DECREF(tmp_add_expr_left_68);
        Py_DECREF(tmp_add_expr_right_68);
        if (tmp_add_expr_left_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8532;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_67);

            exception_lineno = 8533;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8533;
        tmp_add_expr_right_67 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_add_expr_right_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_67);

            exception_lineno = 8533;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_67, tmp_add_expr_right_67);
        Py_DECREF(tmp_add_expr_left_67);
        Py_DECREF(tmp_add_expr_right_67);
        if (tmp_add_expr_left_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8533;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_66);

            exception_lineno = 8534;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8534;
        tmp_add_expr_right_66 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        if (tmp_add_expr_right_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_66);

            exception_lineno = 8534;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_66, tmp_add_expr_right_66);
        Py_DECREF(tmp_add_expr_left_66);
        Py_DECREF(tmp_add_expr_right_66);
        if (tmp_add_expr_left_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8534;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_65);

            exception_lineno = 8535;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8535;
        tmp_add_expr_right_65 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
        if (tmp_add_expr_right_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_65);

            exception_lineno = 8535;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_64 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_65, tmp_add_expr_right_65);
        Py_DECREF(tmp_add_expr_left_65);
        Py_DECREF(tmp_add_expr_right_65);
        if (tmp_add_expr_left_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8535;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_64);

            exception_lineno = 8536;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8536;
        tmp_add_expr_right_64 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        if (tmp_add_expr_right_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_64);

            exception_lineno = 8536;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_63 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_64, tmp_add_expr_right_64);
        Py_DECREF(tmp_add_expr_left_64);
        Py_DECREF(tmp_add_expr_right_64);
        if (tmp_add_expr_left_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8536;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_63);

            exception_lineno = 8537;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8537;
        tmp_add_expr_right_63 = CALL_FUNCTION_NO_ARGS(tmp_called_value_20);
        if (tmp_add_expr_right_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_63);

            exception_lineno = 8537;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_62 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_63, tmp_add_expr_right_63);
        Py_DECREF(tmp_add_expr_left_63);
        Py_DECREF(tmp_add_expr_right_63);
        if (tmp_add_expr_left_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8537;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_62);

            exception_lineno = 8538;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8538;
        tmp_add_expr_right_62 = CALL_FUNCTION_NO_ARGS(tmp_called_value_21);
        if (tmp_add_expr_right_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_62);

            exception_lineno = 8538;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_62, tmp_add_expr_right_62);
        Py_DECREF(tmp_add_expr_left_62);
        Py_DECREF(tmp_add_expr_right_62);
        if (tmp_add_expr_left_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8538;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_61);

            exception_lineno = 8539;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8539;
        tmp_add_expr_right_61 = CALL_FUNCTION_NO_ARGS(tmp_called_value_22);
        if (tmp_add_expr_right_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_61);

            exception_lineno = 8539;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_60 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_61, tmp_add_expr_right_61);
        Py_DECREF(tmp_add_expr_left_61);
        Py_DECREF(tmp_add_expr_right_61);
        if (tmp_add_expr_left_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8539;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_60);

            exception_lineno = 8540;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8540;
        tmp_add_expr_right_60 = CALL_FUNCTION_NO_ARGS(tmp_called_value_23);
        if (tmp_add_expr_right_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_60);

            exception_lineno = 8540;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_59 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_60, tmp_add_expr_right_60);
        Py_DECREF(tmp_add_expr_left_60);
        Py_DECREF(tmp_add_expr_right_60);
        if (tmp_add_expr_left_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8540;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_59);

            exception_lineno = 8541;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8541;
        tmp_add_expr_right_59 = CALL_FUNCTION_NO_ARGS(tmp_called_value_24);
        if (tmp_add_expr_right_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_59);

            exception_lineno = 8541;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_58 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_59, tmp_add_expr_right_59);
        Py_DECREF(tmp_add_expr_left_59);
        Py_DECREF(tmp_add_expr_right_59);
        if (tmp_add_expr_left_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8541;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_58);

            exception_lineno = 8542;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8542;
        tmp_add_expr_right_58 = CALL_FUNCTION_NO_ARGS(tmp_called_value_25);
        if (tmp_add_expr_right_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_58);

            exception_lineno = 8542;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_58, tmp_add_expr_right_58);
        Py_DECREF(tmp_add_expr_left_58);
        Py_DECREF(tmp_add_expr_right_58);
        if (tmp_add_expr_left_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8542;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_57);

            exception_lineno = 8543;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8543;
        tmp_add_expr_right_57 = CALL_FUNCTION_NO_ARGS(tmp_called_value_26);
        if (tmp_add_expr_right_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_57);

            exception_lineno = 8543;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_57, tmp_add_expr_right_57);
        Py_DECREF(tmp_add_expr_left_57);
        Py_DECREF(tmp_add_expr_right_57);
        if (tmp_add_expr_left_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8543;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_56);

            exception_lineno = 8544;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8544;
        tmp_add_expr_right_56 = CALL_FUNCTION_NO_ARGS(tmp_called_value_27);
        if (tmp_add_expr_right_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_56);

            exception_lineno = 8544;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_55 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_56, tmp_add_expr_right_56);
        Py_DECREF(tmp_add_expr_left_56);
        Py_DECREF(tmp_add_expr_right_56);
        if (tmp_add_expr_left_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8544;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_55);

            exception_lineno = 8545;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8545;
        tmp_add_expr_right_55 = CALL_FUNCTION_NO_ARGS(tmp_called_value_28);
        if (tmp_add_expr_right_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_55);

            exception_lineno = 8545;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_55, tmp_add_expr_right_55);
        Py_DECREF(tmp_add_expr_left_55);
        Py_DECREF(tmp_add_expr_right_55);
        if (tmp_add_expr_left_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8545;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_54);

            exception_lineno = 8546;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8546;
        tmp_add_expr_right_54 = CALL_FUNCTION_NO_ARGS(tmp_called_value_29);
        if (tmp_add_expr_right_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_54);

            exception_lineno = 8546;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_54, tmp_add_expr_right_54);
        Py_DECREF(tmp_add_expr_left_54);
        Py_DECREF(tmp_add_expr_right_54);
        if (tmp_add_expr_left_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8546;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_53);

            exception_lineno = 8547;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8547;
        tmp_add_expr_right_53 = CALL_FUNCTION_NO_ARGS(tmp_called_value_30);
        if (tmp_add_expr_right_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_53);

            exception_lineno = 8547;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_53, tmp_add_expr_right_53);
        Py_DECREF(tmp_add_expr_left_53);
        Py_DECREF(tmp_add_expr_right_53);
        if (tmp_add_expr_left_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8547;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_52);

            exception_lineno = 8548;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8548;
        tmp_add_expr_right_52 = CALL_FUNCTION_NO_ARGS(tmp_called_value_31);
        if (tmp_add_expr_right_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_52);

            exception_lineno = 8548;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_52, tmp_add_expr_right_52);
        Py_DECREF(tmp_add_expr_left_52);
        Py_DECREF(tmp_add_expr_right_52);
        if (tmp_add_expr_left_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8548;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_51);

            exception_lineno = 8549;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8549;
        tmp_add_expr_right_51 = CALL_FUNCTION_NO_ARGS(tmp_called_value_32);
        if (tmp_add_expr_right_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_51);

            exception_lineno = 8549;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_51, tmp_add_expr_right_51);
        Py_DECREF(tmp_add_expr_left_51);
        Py_DECREF(tmp_add_expr_right_51);
        if (tmp_add_expr_left_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8549;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_50);

            exception_lineno = 8550;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8550;
        tmp_add_expr_right_50 = CALL_FUNCTION_NO_ARGS(tmp_called_value_33);
        if (tmp_add_expr_right_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_50);

            exception_lineno = 8550;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_50, tmp_add_expr_right_50);
        Py_DECREF(tmp_add_expr_left_50);
        Py_DECREF(tmp_add_expr_right_50);
        if (tmp_add_expr_left_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8550;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_49);

            exception_lineno = 8551;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8551;
        tmp_add_expr_right_49 = CALL_FUNCTION_NO_ARGS(tmp_called_value_34);
        if (tmp_add_expr_right_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_49);

            exception_lineno = 8551;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_49, tmp_add_expr_right_49);
        Py_DECREF(tmp_add_expr_left_49);
        Py_DECREF(tmp_add_expr_right_49);
        if (tmp_add_expr_left_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8551;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_48);

            exception_lineno = 8552;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8552;
        tmp_add_expr_right_48 = CALL_FUNCTION_NO_ARGS(tmp_called_value_35);
        if (tmp_add_expr_right_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_48);

            exception_lineno = 8552;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_48, tmp_add_expr_right_48);
        Py_DECREF(tmp_add_expr_left_48);
        Py_DECREF(tmp_add_expr_right_48);
        if (tmp_add_expr_left_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8552;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_47);

            exception_lineno = 8553;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8553;
        tmp_add_expr_right_47 = CALL_FUNCTION_NO_ARGS(tmp_called_value_36);
        if (tmp_add_expr_right_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_47);

            exception_lineno = 8553;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_47, tmp_add_expr_right_47);
        Py_DECREF(tmp_add_expr_left_47);
        Py_DECREF(tmp_add_expr_right_47);
        if (tmp_add_expr_left_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8553;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_46);

            exception_lineno = 8554;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8554;
        tmp_add_expr_right_46 = CALL_FUNCTION_NO_ARGS(tmp_called_value_37);
        if (tmp_add_expr_right_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_46);

            exception_lineno = 8554;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_46, tmp_add_expr_right_46);
        Py_DECREF(tmp_add_expr_left_46);
        Py_DECREF(tmp_add_expr_right_46);
        if (tmp_add_expr_left_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8554;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_45);

            exception_lineno = 8555;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8555;
        tmp_add_expr_right_45 = CALL_FUNCTION_NO_ARGS(tmp_called_value_38);
        if (tmp_add_expr_right_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_45);

            exception_lineno = 8555;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_45, tmp_add_expr_right_45);
        Py_DECREF(tmp_add_expr_left_45);
        Py_DECREF(tmp_add_expr_right_45);
        if (tmp_add_expr_left_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8555;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 8556;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8556;
        tmp_add_expr_right_44 = CALL_FUNCTION_NO_ARGS(tmp_called_value_39);
        if (tmp_add_expr_right_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 8556;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_44, tmp_add_expr_right_44);
        Py_DECREF(tmp_add_expr_left_44);
        Py_DECREF(tmp_add_expr_right_44);
        if (tmp_add_expr_left_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8556;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 8557;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8557;
        tmp_add_expr_right_43 = CALL_FUNCTION_NO_ARGS(tmp_called_value_40);
        if (tmp_add_expr_right_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 8557;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_43, tmp_add_expr_right_43);
        Py_DECREF(tmp_add_expr_left_43);
        Py_DECREF(tmp_add_expr_right_43);
        if (tmp_add_expr_left_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8557;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 8558;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8558;
        tmp_add_expr_right_42 = CALL_FUNCTION_NO_ARGS(tmp_called_value_41);
        if (tmp_add_expr_right_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 8558;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_42, tmp_add_expr_right_42);
        Py_DECREF(tmp_add_expr_left_42);
        Py_DECREF(tmp_add_expr_right_42);
        if (tmp_add_expr_left_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8558;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_41);

            exception_lineno = 8559;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8559;
        tmp_add_expr_right_41 = CALL_FUNCTION_NO_ARGS(tmp_called_value_42);
        if (tmp_add_expr_right_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_41);

            exception_lineno = 8559;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_41, tmp_add_expr_right_41);
        Py_DECREF(tmp_add_expr_left_41);
        Py_DECREF(tmp_add_expr_right_41);
        if (tmp_add_expr_left_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8559;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 8560;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8560;
        tmp_add_expr_right_40 = CALL_FUNCTION_NO_ARGS(tmp_called_value_43);
        if (tmp_add_expr_right_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 8560;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_40, tmp_add_expr_right_40);
        Py_DECREF(tmp_add_expr_left_40);
        Py_DECREF(tmp_add_expr_right_40);
        if (tmp_add_expr_left_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8560;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 8561;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8561;
        tmp_add_expr_right_39 = CALL_FUNCTION_NO_ARGS(tmp_called_value_44);
        if (tmp_add_expr_right_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 8561;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_39, tmp_add_expr_right_39);
        Py_DECREF(tmp_add_expr_left_39);
        Py_DECREF(tmp_add_expr_right_39);
        if (tmp_add_expr_left_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8561;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_38);

            exception_lineno = 8562;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8562;
        tmp_add_expr_right_38 = CALL_FUNCTION_NO_ARGS(tmp_called_value_45);
        if (tmp_add_expr_right_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_38);

            exception_lineno = 8562;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_38, tmp_add_expr_right_38);
        Py_DECREF(tmp_add_expr_left_38);
        Py_DECREF(tmp_add_expr_right_38);
        if (tmp_add_expr_left_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8562;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 8563;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8563;
        tmp_add_expr_right_37 = CALL_FUNCTION_NO_ARGS(tmp_called_value_46);
        if (tmp_add_expr_right_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 8563;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_37, tmp_add_expr_right_37);
        Py_DECREF(tmp_add_expr_left_37);
        Py_DECREF(tmp_add_expr_right_37);
        if (tmp_add_expr_left_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8563;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 8564;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8564;
        tmp_add_expr_right_36 = CALL_FUNCTION_NO_ARGS(tmp_called_value_47);
        if (tmp_add_expr_right_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 8564;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_36, tmp_add_expr_right_36);
        Py_DECREF(tmp_add_expr_left_36);
        Py_DECREF(tmp_add_expr_right_36);
        if (tmp_add_expr_left_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8564;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_35);

            exception_lineno = 8565;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8565;
        tmp_add_expr_right_35 = CALL_FUNCTION_NO_ARGS(tmp_called_value_48);
        if (tmp_add_expr_right_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_35);

            exception_lineno = 8565;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_35, tmp_add_expr_right_35);
        Py_DECREF(tmp_add_expr_left_35);
        Py_DECREF(tmp_add_expr_right_35);
        if (tmp_add_expr_left_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8565;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_34);

            exception_lineno = 8566;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8566;
        tmp_add_expr_right_34 = CALL_FUNCTION_NO_ARGS(tmp_called_value_49);
        if (tmp_add_expr_right_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_34);

            exception_lineno = 8566;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_34, tmp_add_expr_right_34);
        Py_DECREF(tmp_add_expr_left_34);
        Py_DECREF(tmp_add_expr_right_34);
        if (tmp_add_expr_left_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8566;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_33);

            exception_lineno = 8567;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8567;
        tmp_add_expr_right_33 = CALL_FUNCTION_NO_ARGS(tmp_called_value_50);
        if (tmp_add_expr_right_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_33);

            exception_lineno = 8567;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_33, tmp_add_expr_right_33);
        Py_DECREF(tmp_add_expr_left_33);
        Py_DECREF(tmp_add_expr_right_33);
        if (tmp_add_expr_left_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8567;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_32);

            exception_lineno = 8568;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8568;
        tmp_add_expr_right_32 = CALL_FUNCTION_NO_ARGS(tmp_called_value_51);
        if (tmp_add_expr_right_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_32);

            exception_lineno = 8568;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_32, tmp_add_expr_right_32);
        Py_DECREF(tmp_add_expr_left_32);
        Py_DECREF(tmp_add_expr_right_32);
        if (tmp_add_expr_left_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8568;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_31);

            exception_lineno = 8569;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8569;
        tmp_add_expr_right_31 = CALL_FUNCTION_NO_ARGS(tmp_called_value_52);
        if (tmp_add_expr_right_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_31);

            exception_lineno = 8569;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_31, tmp_add_expr_right_31);
        Py_DECREF(tmp_add_expr_left_31);
        Py_DECREF(tmp_add_expr_right_31);
        if (tmp_add_expr_left_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8569;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 8570;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8570;
        tmp_add_expr_right_30 = CALL_FUNCTION_NO_ARGS(tmp_called_value_53);
        if (tmp_add_expr_right_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 8570;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_30, tmp_add_expr_right_30);
        Py_DECREF(tmp_add_expr_left_30);
        Py_DECREF(tmp_add_expr_right_30);
        if (tmp_add_expr_left_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8570;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 8571;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8571;
        tmp_add_expr_right_29 = CALL_FUNCTION_NO_ARGS(tmp_called_value_54);
        if (tmp_add_expr_right_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 8571;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_29, tmp_add_expr_right_29);
        Py_DECREF(tmp_add_expr_left_29);
        Py_DECREF(tmp_add_expr_right_29);
        if (tmp_add_expr_left_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8571;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_28);

            exception_lineno = 8572;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8572;
        tmp_add_expr_right_28 = CALL_FUNCTION_NO_ARGS(tmp_called_value_55);
        if (tmp_add_expr_right_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_28);

            exception_lineno = 8572;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_28, tmp_add_expr_right_28);
        Py_DECREF(tmp_add_expr_left_28);
        Py_DECREF(tmp_add_expr_right_28);
        if (tmp_add_expr_left_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8572;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_27);

            exception_lineno = 8573;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8573;
        tmp_add_expr_right_27 = CALL_FUNCTION_NO_ARGS(tmp_called_value_56);
        if (tmp_add_expr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_27);

            exception_lineno = 8573;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_27, tmp_add_expr_right_27);
        Py_DECREF(tmp_add_expr_left_27);
        Py_DECREF(tmp_add_expr_right_27);
        if (tmp_add_expr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8573;

            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 8574;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8574;
        tmp_add_expr_right_26 = CALL_FUNCTION_NO_ARGS(tmp_called_value_57);
        if (tmp_add_expr_right_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 8574;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
        Py_DECREF(tmp_add_expr_left_26);
        Py_DECREF(tmp_add_expr_right_26);
        if (tmp_add_expr_left_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8574;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 8575;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8575;
        tmp_add_expr_right_25 = CALL_FUNCTION_NO_ARGS(tmp_called_value_58);
        if (tmp_add_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 8575;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
        Py_DECREF(tmp_add_expr_left_25);
        Py_DECREF(tmp_add_expr_right_25);
        if (tmp_add_expr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8575;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_24);

            exception_lineno = 8576;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8576;
        tmp_add_expr_right_24 = CALL_FUNCTION_NO_ARGS(tmp_called_value_59);
        if (tmp_add_expr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_24);

            exception_lineno = 8576;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
        Py_DECREF(tmp_add_expr_left_24);
        Py_DECREF(tmp_add_expr_right_24);
        if (tmp_add_expr_left_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8576;

            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_23);

            exception_lineno = 8577;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8577;
        tmp_add_expr_right_23 = CALL_FUNCTION_NO_ARGS(tmp_called_value_60);
        if (tmp_add_expr_right_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_23);

            exception_lineno = 8577;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_23, tmp_add_expr_right_23);
        Py_DECREF(tmp_add_expr_left_23);
        Py_DECREF(tmp_add_expr_right_23);
        if (tmp_add_expr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8577;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 8578;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8578;
        tmp_add_expr_right_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_61);
        if (tmp_add_expr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 8578;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
        Py_DECREF(tmp_add_expr_left_22);
        Py_DECREF(tmp_add_expr_right_22);
        if (tmp_add_expr_left_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8578;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_21);

            exception_lineno = 8579;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8579;
        tmp_add_expr_right_21 = CALL_FUNCTION_NO_ARGS(tmp_called_value_62);
        if (tmp_add_expr_right_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_21);

            exception_lineno = 8579;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_21, tmp_add_expr_right_21);
        Py_DECREF(tmp_add_expr_left_21);
        Py_DECREF(tmp_add_expr_right_21);
        if (tmp_add_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8579;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 8580;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8580;
        tmp_add_expr_right_20 = CALL_FUNCTION_NO_ARGS(tmp_called_value_63);
        if (tmp_add_expr_right_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 8580;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        Py_DECREF(tmp_add_expr_left_20);
        Py_DECREF(tmp_add_expr_right_20);
        if (tmp_add_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8580;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 8581;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8581;
        tmp_add_expr_right_19 = CALL_FUNCTION_NO_ARGS(tmp_called_value_64);
        if (tmp_add_expr_right_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 8581;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        Py_DECREF(tmp_add_expr_right_19);
        if (tmp_add_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8581;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 8582;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8582;
        tmp_add_expr_right_18 = CALL_FUNCTION_NO_ARGS(tmp_called_value_65);
        if (tmp_add_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 8582;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        Py_DECREF(tmp_add_expr_left_18);
        Py_DECREF(tmp_add_expr_right_18);
        if (tmp_add_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8582;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 8583;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8583;
        tmp_add_expr_right_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_66);
        if (tmp_add_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 8583;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        Py_DECREF(tmp_add_expr_right_17);
        if (tmp_add_expr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8583;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 8584;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8584;
        tmp_add_expr_right_16 = CALL_FUNCTION_NO_ARGS(tmp_called_value_67);
        if (tmp_add_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 8584;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_add_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8584;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 8585;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8585;
        tmp_add_expr_right_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_68);
        if (tmp_add_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 8585;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8585;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 8586;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8586;
        tmp_add_expr_right_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_69);
        if (tmp_add_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 8586;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8586;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 8587;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8587;
        tmp_add_expr_right_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_70);
        if (tmp_add_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 8587;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_add_expr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8587;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 8588;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8588;
        tmp_add_expr_right_12 = CALL_FUNCTION_NO_ARGS(tmp_called_value_71);
        if (tmp_add_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 8588;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8588;

            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 8589;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8589;
        tmp_add_expr_right_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_72);
        if (tmp_add_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 8589;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8589;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 8590;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8590;
        tmp_add_expr_right_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_73);
        if (tmp_add_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 8590;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8590;

            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 8591;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8591;
        tmp_add_expr_right_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_74);
        if (tmp_add_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 8591;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_add_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8591;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 8592;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8592;
        tmp_add_expr_right_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_75);
        if (tmp_add_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 8592;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8592;

            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 8593;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8593;
        tmp_add_expr_right_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_76);
        if (tmp_add_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 8593;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8593;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 8594;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8594;
        tmp_add_expr_right_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_77);
        if (tmp_add_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 8594;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8594;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 8595;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8595;
        tmp_add_expr_right_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_78);
        if (tmp_add_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 8595;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8595;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 8596;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8596;
        tmp_add_expr_right_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_79);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 8596;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8596;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 8597;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8597;
        tmp_add_expr_right_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_80);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 8597;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8597;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 8598;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8598;
        tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_81);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 8598;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8598;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 8599;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8599;
        tmp_add_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_82);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 8599;

            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8599;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_91);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e0670ec1ab110896395deeadfbe4163, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e0670ec1ab110896395deeadfbe4163->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e0670ec1ab110896395deeadfbe4163, exception_lineno);
    }



    assertFrameObject(frame_9e0670ec1ab110896395deeadfbe4163);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("idna.uts46data", false);

    Py_INCREF(module_idna$uts46data);
    return module_idna$uts46data;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("idna$uts46data", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
