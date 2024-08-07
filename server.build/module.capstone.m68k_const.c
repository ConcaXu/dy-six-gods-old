/* Generated code for Python module 'capstone.m68k_const'
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

/* The "module_capstone$m68k_const" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_capstone$m68k_const;
PyDictObject *moduledict_capstone$m68k_const;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[860];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[860];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("capstone.m68k_const"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 860; i++) {
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
void checkModuleConstants_capstone$m68k_const(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 860; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6cd9c9793625286a99be5a88be8840bf;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[857]); CHECK_OBJECT(module_filename_obj);
    codeobj_6cd9c9793625286a99be5a88be8840bf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[858], mod_consts[858], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_capstone$m68k_const[] = {

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

    function_impl_code *current = functable_capstone$m68k_const;
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

    if (offset > sizeof(functable_capstone$m68k_const) || offset < 0) {
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
        functable_capstone$m68k_const[offset],
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
        module_capstone$m68k_const,
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
PyObject *modulecode_capstone$m68k_const(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("capstone.m68k_const");

    // Store the module for future use.
    module_capstone$m68k_const = module;

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
        PRINT_STRING("capstone.m68k_const: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("capstone.m68k_const: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcapstone$m68k_const\n");

    moduledict_capstone$m68k_const = MODULE_DICT(module_capstone$m68k_const);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_capstone$m68k_const,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_capstone$m68k_const,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[859]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_capstone$m68k_const,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$m68k_const,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$m68k_const,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_capstone$m68k_const);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_capstone$m68k_const);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_6cd9c9793625286a99be5a88be8840bf;
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
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_6cd9c9793625286a99be5a88be8840bf = MAKE_MODULE_FRAME(codeobj_6cd9c9793625286a99be5a88be8840bf, module_capstone$m68k_const);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6cd9c9793625286a99be5a88be8840bf);
    assert(Py_REFCNT(frame_6cd9c9793625286a99be5a88be8840bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6cd9c9793625286a99be5a88be8840bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cd9c9793625286a99be5a88be8840bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cd9c9793625286a99be5a88be8840bf, exception_lineno);
    }



    assertFrameObject(frame_6cd9c9793625286a99be5a88be8840bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[233];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[241];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[257];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[297];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[299];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[301];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[305];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[321];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[323];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[325];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[401];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[403];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[415];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[417];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[419];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[421];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[423];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[431];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[433];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[435];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[437];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[439];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[441];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[443];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[445];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[447];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[449];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[451];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[453];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[455];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[457];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[459];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[461];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[463];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[465];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[467];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[469];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[471];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[473];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[475];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[477];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[479];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[481];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[483];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[485];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[487];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[489];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[491];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[493];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[495];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[497];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[499];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[501];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[503];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[504], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[505];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[506], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[507];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[508], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[509];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[510], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[511];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[512], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[513];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[514], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[515];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[516], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[517];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[519];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[521];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[522], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[523];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[524], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[525];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[526], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[527];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[528], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[529];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[530], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[531];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[533];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[534], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[535];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[537];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[538], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[539];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[541];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[542], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[543];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[545];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[547];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[549];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[551];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[553];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[555];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[557];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[558], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[559];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[560], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[561];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[563];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[564], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[565];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[567];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[569];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[570], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[571];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[572], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[573];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[575];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[577];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[579];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[581];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[583];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[584], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[585];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[587];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[589];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[591];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[593];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[595];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[597];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[598], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        tmp_assign_source_347 = mod_consts[599];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        tmp_assign_source_348 = mod_consts[601];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[602], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        tmp_assign_source_349 = mod_consts[603];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[604], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        tmp_assign_source_350 = mod_consts[605];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[606], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        tmp_assign_source_351 = mod_consts[607];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        tmp_assign_source_352 = mod_consts[609];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        tmp_assign_source_353 = mod_consts[611];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        tmp_assign_source_354 = mod_consts[613];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[614], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        tmp_assign_source_355 = mod_consts[615];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        tmp_assign_source_356 = mod_consts[617];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        tmp_assign_source_357 = mod_consts[619];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        tmp_assign_source_358 = mod_consts[621];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        tmp_assign_source_359 = mod_consts[623];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        tmp_assign_source_360 = mod_consts[625];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[626], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        tmp_assign_source_361 = mod_consts[627];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        tmp_assign_source_362 = mod_consts[629];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        tmp_assign_source_363 = mod_consts[631];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        tmp_assign_source_364 = mod_consts[633];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        tmp_assign_source_365 = mod_consts[635];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[636], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        tmp_assign_source_366 = mod_consts[637];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[638], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        tmp_assign_source_367 = mod_consts[639];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        tmp_assign_source_368 = mod_consts[641];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[642], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        tmp_assign_source_369 = mod_consts[643];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[644], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        tmp_assign_source_370 = mod_consts[645];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[646], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        tmp_assign_source_371 = mod_consts[647];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[648], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        tmp_assign_source_372 = mod_consts[649];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[650], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        tmp_assign_source_373 = mod_consts[651];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[652], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        tmp_assign_source_374 = mod_consts[653];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[654], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        tmp_assign_source_375 = mod_consts[655];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[656], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        tmp_assign_source_376 = mod_consts[657];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[658], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        tmp_assign_source_377 = mod_consts[659];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[660], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        tmp_assign_source_378 = mod_consts[661];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[662], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        tmp_assign_source_379 = mod_consts[663];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[664], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        tmp_assign_source_380 = mod_consts[665];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[666], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = mod_consts[667];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[668], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        tmp_assign_source_382 = mod_consts[669];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[670], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        tmp_assign_source_383 = mod_consts[671];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[672], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        tmp_assign_source_384 = mod_consts[673];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[674], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        tmp_assign_source_385 = mod_consts[675];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[676], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        tmp_assign_source_386 = mod_consts[677];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[678], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        tmp_assign_source_387 = mod_consts[679];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[680], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        tmp_assign_source_388 = mod_consts[681];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[682], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        tmp_assign_source_389 = mod_consts[683];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[684], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        tmp_assign_source_390 = mod_consts[685];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[686], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        tmp_assign_source_391 = mod_consts[687];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[688], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        tmp_assign_source_392 = mod_consts[689];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[690], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        tmp_assign_source_393 = mod_consts[691];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[692], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = mod_consts[693];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[694], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        tmp_assign_source_395 = mod_consts[695];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[696], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        tmp_assign_source_396 = mod_consts[697];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[698], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        tmp_assign_source_397 = mod_consts[699];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[700], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        tmp_assign_source_398 = mod_consts[701];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[702], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        tmp_assign_source_399 = mod_consts[703];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[704], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        tmp_assign_source_400 = mod_consts[705];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[706], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        tmp_assign_source_401 = mod_consts[707];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[708], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        tmp_assign_source_402 = mod_consts[709];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[710], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        tmp_assign_source_403 = mod_consts[711];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[712], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        tmp_assign_source_404 = mod_consts[713];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[714], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        tmp_assign_source_405 = mod_consts[715];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[716], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        tmp_assign_source_406 = mod_consts[717];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[718], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        tmp_assign_source_407 = mod_consts[719];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[720], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        tmp_assign_source_408 = mod_consts[721];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[722], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        tmp_assign_source_409 = mod_consts[723];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[724], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        tmp_assign_source_410 = mod_consts[725];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[726], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        tmp_assign_source_411 = mod_consts[727];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[728], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        tmp_assign_source_412 = mod_consts[729];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[730], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        tmp_assign_source_413 = mod_consts[731];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[732], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        tmp_assign_source_414 = mod_consts[733];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[734], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        tmp_assign_source_415 = mod_consts[735];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[736], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        tmp_assign_source_416 = mod_consts[737];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[738], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        tmp_assign_source_417 = mod_consts[739];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[740], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        tmp_assign_source_418 = mod_consts[741];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[742], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        tmp_assign_source_419 = mod_consts[743];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[744], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        tmp_assign_source_420 = mod_consts[745];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[746], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        tmp_assign_source_421 = mod_consts[747];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[748], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        tmp_assign_source_422 = mod_consts[749];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[750], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        tmp_assign_source_423 = mod_consts[751];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[752], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        tmp_assign_source_424 = mod_consts[753];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[754], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        tmp_assign_source_425 = mod_consts[755];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[756], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        tmp_assign_source_426 = mod_consts[757];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[758], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        tmp_assign_source_427 = mod_consts[759];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[760], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        tmp_assign_source_428 = mod_consts[761];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[762], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        tmp_assign_source_429 = mod_consts[763];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[764], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        tmp_assign_source_430 = mod_consts[765];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[766], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        tmp_assign_source_431 = mod_consts[767];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[768], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        tmp_assign_source_432 = mod_consts[769];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[770], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        tmp_assign_source_433 = mod_consts[771];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[772], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        tmp_assign_source_434 = mod_consts[773];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[774], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        tmp_assign_source_435 = mod_consts[775];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[776], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        tmp_assign_source_436 = mod_consts[777];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[778], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        tmp_assign_source_437 = mod_consts[779];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[780], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        tmp_assign_source_438 = mod_consts[781];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[782], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        tmp_assign_source_439 = mod_consts[783];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[784], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        tmp_assign_source_440 = mod_consts[785];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[786], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        tmp_assign_source_441 = mod_consts[787];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[788], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        tmp_assign_source_442 = mod_consts[789];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[790], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        tmp_assign_source_443 = mod_consts[791];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[792], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        tmp_assign_source_444 = mod_consts[793];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[794], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        tmp_assign_source_445 = mod_consts[795];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[796], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        tmp_assign_source_446 = mod_consts[797];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[798], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        tmp_assign_source_447 = mod_consts[799];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[800], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        tmp_assign_source_448 = mod_consts[801];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[802], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        tmp_assign_source_449 = mod_consts[803];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[804], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        tmp_assign_source_450 = mod_consts[805];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[806], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        tmp_assign_source_451 = mod_consts[807];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[808], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        tmp_assign_source_452 = mod_consts[809];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[810], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        tmp_assign_source_453 = mod_consts[811];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[812], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        tmp_assign_source_454 = mod_consts[813];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[814], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        tmp_assign_source_455 = mod_consts[815];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[816], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        tmp_assign_source_456 = mod_consts[817];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[818], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        tmp_assign_source_457 = mod_consts[819];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[820], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        tmp_assign_source_458 = mod_consts[821];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[822], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        tmp_assign_source_459 = mod_consts[823];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[824], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        tmp_assign_source_460 = mod_consts[825];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[826], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        tmp_assign_source_461 = mod_consts[827];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[828], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        tmp_assign_source_462 = mod_consts[829];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[830], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        tmp_assign_source_463 = mod_consts[831];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[832], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        tmp_assign_source_464 = mod_consts[833];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[834], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        tmp_assign_source_465 = mod_consts[835];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[836], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        tmp_assign_source_466 = mod_consts[837];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[838], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        tmp_assign_source_467 = mod_consts[839];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[840], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        tmp_assign_source_468 = mod_consts[841];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[842], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        tmp_assign_source_469 = mod_consts[843];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[844], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        tmp_assign_source_470 = mod_consts[845];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[846], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        tmp_assign_source_471 = mod_consts[847];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[848], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        tmp_assign_source_472 = mod_consts[849];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[850], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        tmp_assign_source_473 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[851], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        tmp_assign_source_474 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[852], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        tmp_assign_source_475 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[853], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        tmp_assign_source_476 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[854], tmp_assign_source_476);
    }
    {
        PyObject *tmp_assign_source_477;
        tmp_assign_source_477 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[855], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        tmp_assign_source_478 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_capstone$m68k_const, (Nuitka_StringObject *)mod_consts[856], tmp_assign_source_478);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("capstone.m68k_const", false);

    Py_INCREF(module_capstone$m68k_const);
    return module_capstone$m68k_const;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$m68k_const, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("capstone$m68k_const", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
