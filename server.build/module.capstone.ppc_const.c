/* Generated code for Python module 'capstone.ppc_const'
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

/* The "module_capstone$ppc_const" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_capstone$ppc_const;
PyDictObject *moduledict_capstone$ppc_const;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[2478];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[2478];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("capstone.ppc_const"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 2478; i++) {
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
void checkModuleConstants_capstone$ppc_const(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 2478; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8e81a731968357f12871d742bd7437a5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[2475]); CHECK_OBJECT(module_filename_obj);
    codeobj_8e81a731968357f12871d742bd7437a5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[2476], mod_consts[2476], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_capstone$ppc_const[] = {

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

    function_impl_code *current = functable_capstone$ppc_const;
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

    if (offset > sizeof(functable_capstone$ppc_const) || offset < 0) {
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
        functable_capstone$ppc_const[offset],
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
        module_capstone$ppc_const,
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
PyObject *modulecode_capstone$ppc_const(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("capstone.ppc_const");

    // Store the module for future use.
    module_capstone$ppc_const = module;

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
        PRINT_STRING("capstone.ppc_const: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("capstone.ppc_const: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcapstone$ppc_const\n");

    moduledict_capstone$ppc_const = MODULE_DICT(module_capstone$ppc_const);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_capstone$ppc_const,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_capstone$ppc_const,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2477]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_capstone$ppc_const,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$ppc_const,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$ppc_const,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_capstone$ppc_const);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_capstone$ppc_const);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8e81a731968357f12871d742bd7437a5;
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
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_8e81a731968357f12871d742bd7437a5 = MAKE_MODULE_FRAME(codeobj_8e81a731968357f12871d742bd7437a5, module_capstone$ppc_const);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e81a731968357f12871d742bd7437a5);
    assert(Py_REFCNT(frame_8e81a731968357f12871d742bd7437a5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2]);

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
        exception_tb = MAKE_TRACEBACK(frame_8e81a731968357f12871d742bd7437a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e81a731968357f12871d742bd7437a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e81a731968357f12871d742bd7437a5, exception_lineno);
    }



    assertFrameObject(frame_8e81a731968357f12871d742bd7437a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[257];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[321];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[323];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[325];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[401];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[403];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[415];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[417];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[419];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[421];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[423];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[431];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[433];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[435];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[437];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[439];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[441];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[443];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[445];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[463], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[465], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[473], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[477], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[485], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[504], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[506], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[508], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[510], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[512], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[514], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[516], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[522], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[524], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[526], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[528], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[530], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[534], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[538], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[542], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[558], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        tmp_assign_source_347 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[560], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        tmp_assign_source_348 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        tmp_assign_source_349 = mod_consts[257];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        tmp_assign_source_350 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        tmp_assign_source_351 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[564], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        tmp_assign_source_352 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        tmp_assign_source_353 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        tmp_assign_source_354 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        tmp_assign_source_355 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        tmp_assign_source_356 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        tmp_assign_source_357 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[570], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        tmp_assign_source_358 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        tmp_assign_source_359 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[572], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        tmp_assign_source_360 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        tmp_assign_source_361 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        tmp_assign_source_362 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        tmp_assign_source_363 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        tmp_assign_source_364 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        tmp_assign_source_365 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        tmp_assign_source_366 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        tmp_assign_source_367 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        tmp_assign_source_368 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        tmp_assign_source_369 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        tmp_assign_source_370 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        tmp_assign_source_371 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[584], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        tmp_assign_source_372 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[585], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        tmp_assign_source_373 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        tmp_assign_source_374 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        tmp_assign_source_375 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        tmp_assign_source_376 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[589], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        tmp_assign_source_377 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        tmp_assign_source_378 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[591], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        tmp_assign_source_379 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        tmp_assign_source_380 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[593], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        tmp_assign_source_382 = mod_consts[321];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        tmp_assign_source_383 = mod_consts[323];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        tmp_assign_source_384 = mod_consts[325];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[597], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        tmp_assign_source_385 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[598], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        tmp_assign_source_386 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        tmp_assign_source_387 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        tmp_assign_source_388 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        tmp_assign_source_389 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[602], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        tmp_assign_source_390 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        tmp_assign_source_391 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[604], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        tmp_assign_source_392 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        tmp_assign_source_393 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[606], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        tmp_assign_source_395 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        tmp_assign_source_396 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        tmp_assign_source_397 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        tmp_assign_source_398 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        tmp_assign_source_399 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        tmp_assign_source_400 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        tmp_assign_source_401 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[614], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        tmp_assign_source_402 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        tmp_assign_source_403 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        tmp_assign_source_404 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        tmp_assign_source_405 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        tmp_assign_source_406 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[619], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        tmp_assign_source_407 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        tmp_assign_source_408 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[621], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        tmp_assign_source_409 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        tmp_assign_source_410 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[623], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        tmp_assign_source_411 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        tmp_assign_source_412 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[625], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        tmp_assign_source_413 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[626], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        tmp_assign_source_414 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[627], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        tmp_assign_source_415 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        tmp_assign_source_416 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[629], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        tmp_assign_source_417 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        tmp_assign_source_418 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[631], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        tmp_assign_source_419 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        tmp_assign_source_420 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[633], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        tmp_assign_source_421 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        tmp_assign_source_422 = mod_consts[401];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[635], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        tmp_assign_source_423 = mod_consts[403];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[636], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        tmp_assign_source_424 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        tmp_assign_source_425 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[638], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        tmp_assign_source_426 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        tmp_assign_source_427 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        tmp_assign_source_428 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[641], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        tmp_assign_source_429 = mod_consts[415];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[642], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        tmp_assign_source_430 = mod_consts[417];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        tmp_assign_source_431 = mod_consts[419];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[644], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        tmp_assign_source_432 = mod_consts[421];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        tmp_assign_source_433 = mod_consts[423];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[646], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        tmp_assign_source_434 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        tmp_assign_source_435 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[648], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        tmp_assign_source_436 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[649], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        tmp_assign_source_437 = mod_consts[431];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[650], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        tmp_assign_source_438 = mod_consts[433];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[651], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        tmp_assign_source_439 = mod_consts[435];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[652], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        tmp_assign_source_440 = mod_consts[437];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[653], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        tmp_assign_source_441 = mod_consts[439];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[654], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        tmp_assign_source_442 = mod_consts[441];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[655], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        tmp_assign_source_443 = mod_consts[443];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[656], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        tmp_assign_source_444 = mod_consts[445];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[657], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        tmp_assign_source_445 = mod_consts[658];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[659], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        tmp_assign_source_446 = mod_consts[660];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[661], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        tmp_assign_source_447 = mod_consts[662];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[663], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        tmp_assign_source_448 = mod_consts[664];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[665], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        tmp_assign_source_449 = mod_consts[666];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[667], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        tmp_assign_source_450 = mod_consts[668];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[669], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        tmp_assign_source_451 = mod_consts[670];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[671], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        tmp_assign_source_452 = mod_consts[672];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[673], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        tmp_assign_source_453 = mod_consts[674];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[675], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        tmp_assign_source_454 = mod_consts[676];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[677], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        tmp_assign_source_455 = mod_consts[678];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[679], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        tmp_assign_source_456 = mod_consts[680];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[681], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        tmp_assign_source_457 = mod_consts[682];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[683], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        tmp_assign_source_458 = mod_consts[684];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[685], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        tmp_assign_source_459 = mod_consts[686];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[687], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        tmp_assign_source_460 = mod_consts[688];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[689], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        tmp_assign_source_461 = mod_consts[690];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[691], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        tmp_assign_source_462 = mod_consts[692];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[693], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        tmp_assign_source_463 = mod_consts[694];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[695], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        tmp_assign_source_464 = mod_consts[696];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[697], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        tmp_assign_source_465 = mod_consts[698];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[699], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        tmp_assign_source_466 = mod_consts[700];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[701], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        tmp_assign_source_467 = mod_consts[702];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[703], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        tmp_assign_source_468 = mod_consts[704];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[705], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        tmp_assign_source_469 = mod_consts[706];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[707], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        tmp_assign_source_470 = mod_consts[708];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[709], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        tmp_assign_source_471 = mod_consts[710];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[711], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        tmp_assign_source_472 = mod_consts[712];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[713], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        tmp_assign_source_473 = mod_consts[714];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[715], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        tmp_assign_source_474 = mod_consts[716];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[717], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        tmp_assign_source_475 = mod_consts[718];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[719], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        tmp_assign_source_476 = mod_consts[720];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[721], tmp_assign_source_476);
    }
    {
        PyObject *tmp_assign_source_477;
        tmp_assign_source_477 = mod_consts[722];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[723], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        tmp_assign_source_478 = mod_consts[724];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[725], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        tmp_assign_source_479 = mod_consts[726];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[727], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        tmp_assign_source_480 = mod_consts[728];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[729], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        tmp_assign_source_481 = mod_consts[730];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[731], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        tmp_assign_source_482 = mod_consts[732];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[733], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        tmp_assign_source_483 = mod_consts[734];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[735], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        tmp_assign_source_484 = mod_consts[736];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[737], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        tmp_assign_source_485 = mod_consts[738];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[739], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        tmp_assign_source_486 = mod_consts[740];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[741], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        tmp_assign_source_487 = mod_consts[742];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[743], tmp_assign_source_487);
    }
    {
        PyObject *tmp_assign_source_488;
        tmp_assign_source_488 = mod_consts[744];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[745], tmp_assign_source_488);
    }
    {
        PyObject *tmp_assign_source_489;
        tmp_assign_source_489 = mod_consts[746];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[747], tmp_assign_source_489);
    }
    {
        PyObject *tmp_assign_source_490;
        tmp_assign_source_490 = mod_consts[748];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[749], tmp_assign_source_490);
    }
    {
        PyObject *tmp_assign_source_491;
        tmp_assign_source_491 = mod_consts[750];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[751], tmp_assign_source_491);
    }
    {
        PyObject *tmp_assign_source_492;
        tmp_assign_source_492 = mod_consts[752];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[753], tmp_assign_source_492);
    }
    {
        PyObject *tmp_assign_source_493;
        tmp_assign_source_493 = mod_consts[754];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[755], tmp_assign_source_493);
    }
    {
        PyObject *tmp_assign_source_494;
        tmp_assign_source_494 = mod_consts[756];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[757], tmp_assign_source_494);
    }
    {
        PyObject *tmp_assign_source_495;
        tmp_assign_source_495 = mod_consts[758];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[759], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        tmp_assign_source_496 = mod_consts[760];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[761], tmp_assign_source_496);
    }
    {
        PyObject *tmp_assign_source_497;
        tmp_assign_source_497 = mod_consts[762];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[763], tmp_assign_source_497);
    }
    {
        PyObject *tmp_assign_source_498;
        tmp_assign_source_498 = mod_consts[764];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[765], tmp_assign_source_498);
    }
    {
        PyObject *tmp_assign_source_499;
        tmp_assign_source_499 = mod_consts[766];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[767], tmp_assign_source_499);
    }
    {
        PyObject *tmp_assign_source_500;
        tmp_assign_source_500 = mod_consts[768];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[769], tmp_assign_source_500);
    }
    {
        PyObject *tmp_assign_source_501;
        tmp_assign_source_501 = mod_consts[770];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[771], tmp_assign_source_501);
    }
    {
        PyObject *tmp_assign_source_502;
        tmp_assign_source_502 = mod_consts[772];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[773], tmp_assign_source_502);
    }
    {
        PyObject *tmp_assign_source_503;
        tmp_assign_source_503 = mod_consts[774];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[775], tmp_assign_source_503);
    }
    {
        PyObject *tmp_assign_source_504;
        tmp_assign_source_504 = mod_consts[776];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[777], tmp_assign_source_504);
    }
    {
        PyObject *tmp_assign_source_505;
        tmp_assign_source_505 = mod_consts[778];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[779], tmp_assign_source_505);
    }
    {
        PyObject *tmp_assign_source_506;
        tmp_assign_source_506 = mod_consts[780];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[781], tmp_assign_source_506);
    }
    {
        PyObject *tmp_assign_source_507;
        tmp_assign_source_507 = mod_consts[782];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[783], tmp_assign_source_507);
    }
    {
        PyObject *tmp_assign_source_508;
        tmp_assign_source_508 = mod_consts[784];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[785], tmp_assign_source_508);
    }
    {
        PyObject *tmp_assign_source_509;
        tmp_assign_source_509 = mod_consts[786];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[787], tmp_assign_source_509);
    }
    {
        PyObject *tmp_assign_source_510;
        tmp_assign_source_510 = mod_consts[788];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[789], tmp_assign_source_510);
    }
    {
        PyObject *tmp_assign_source_511;
        tmp_assign_source_511 = mod_consts[790];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[791], tmp_assign_source_511);
    }
    {
        PyObject *tmp_assign_source_512;
        tmp_assign_source_512 = mod_consts[792];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[793], tmp_assign_source_512);
    }
    {
        PyObject *tmp_assign_source_513;
        tmp_assign_source_513 = mod_consts[794];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[795], tmp_assign_source_513);
    }
    {
        PyObject *tmp_assign_source_514;
        tmp_assign_source_514 = mod_consts[796];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[797], tmp_assign_source_514);
    }
    {
        PyObject *tmp_assign_source_515;
        tmp_assign_source_515 = mod_consts[798];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[799], tmp_assign_source_515);
    }
    {
        PyObject *tmp_assign_source_516;
        tmp_assign_source_516 = mod_consts[800];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[801], tmp_assign_source_516);
    }
    {
        PyObject *tmp_assign_source_517;
        tmp_assign_source_517 = mod_consts[802];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[803], tmp_assign_source_517);
    }
    {
        PyObject *tmp_assign_source_518;
        tmp_assign_source_518 = mod_consts[804];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[805], tmp_assign_source_518);
    }
    {
        PyObject *tmp_assign_source_519;
        tmp_assign_source_519 = mod_consts[806];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[807], tmp_assign_source_519);
    }
    {
        PyObject *tmp_assign_source_520;
        tmp_assign_source_520 = mod_consts[808];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[809], tmp_assign_source_520);
    }
    {
        PyObject *tmp_assign_source_521;
        tmp_assign_source_521 = mod_consts[810];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[811], tmp_assign_source_521);
    }
    {
        PyObject *tmp_assign_source_522;
        tmp_assign_source_522 = mod_consts[812];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[813], tmp_assign_source_522);
    }
    {
        PyObject *tmp_assign_source_523;
        tmp_assign_source_523 = mod_consts[814];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[815], tmp_assign_source_523);
    }
    {
        PyObject *tmp_assign_source_524;
        tmp_assign_source_524 = mod_consts[816];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[817], tmp_assign_source_524);
    }
    {
        PyObject *tmp_assign_source_525;
        tmp_assign_source_525 = mod_consts[818];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[819], tmp_assign_source_525);
    }
    {
        PyObject *tmp_assign_source_526;
        tmp_assign_source_526 = mod_consts[820];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[821], tmp_assign_source_526);
    }
    {
        PyObject *tmp_assign_source_527;
        tmp_assign_source_527 = mod_consts[822];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[823], tmp_assign_source_527);
    }
    {
        PyObject *tmp_assign_source_528;
        tmp_assign_source_528 = mod_consts[824];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[825], tmp_assign_source_528);
    }
    {
        PyObject *tmp_assign_source_529;
        tmp_assign_source_529 = mod_consts[826];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[827], tmp_assign_source_529);
    }
    {
        PyObject *tmp_assign_source_530;
        tmp_assign_source_530 = mod_consts[828];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[829], tmp_assign_source_530);
    }
    {
        PyObject *tmp_assign_source_531;
        tmp_assign_source_531 = mod_consts[830];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[831], tmp_assign_source_531);
    }
    {
        PyObject *tmp_assign_source_532;
        tmp_assign_source_532 = mod_consts[832];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[833], tmp_assign_source_532);
    }
    {
        PyObject *tmp_assign_source_533;
        tmp_assign_source_533 = mod_consts[834];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[835], tmp_assign_source_533);
    }
    {
        PyObject *tmp_assign_source_534;
        tmp_assign_source_534 = mod_consts[836];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[837], tmp_assign_source_534);
    }
    {
        PyObject *tmp_assign_source_535;
        tmp_assign_source_535 = mod_consts[838];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[839], tmp_assign_source_535);
    }
    {
        PyObject *tmp_assign_source_536;
        tmp_assign_source_536 = mod_consts[840];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[841], tmp_assign_source_536);
    }
    {
        PyObject *tmp_assign_source_537;
        tmp_assign_source_537 = mod_consts[842];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[843], tmp_assign_source_537);
    }
    {
        PyObject *tmp_assign_source_538;
        tmp_assign_source_538 = mod_consts[844];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[845], tmp_assign_source_538);
    }
    {
        PyObject *tmp_assign_source_539;
        tmp_assign_source_539 = mod_consts[846];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[847], tmp_assign_source_539);
    }
    {
        PyObject *tmp_assign_source_540;
        tmp_assign_source_540 = mod_consts[848];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[849], tmp_assign_source_540);
    }
    {
        PyObject *tmp_assign_source_541;
        tmp_assign_source_541 = mod_consts[850];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[851], tmp_assign_source_541);
    }
    {
        PyObject *tmp_assign_source_542;
        tmp_assign_source_542 = mod_consts[852];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[853], tmp_assign_source_542);
    }
    {
        PyObject *tmp_assign_source_543;
        tmp_assign_source_543 = mod_consts[854];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[855], tmp_assign_source_543);
    }
    {
        PyObject *tmp_assign_source_544;
        tmp_assign_source_544 = mod_consts[856];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[857], tmp_assign_source_544);
    }
    {
        PyObject *tmp_assign_source_545;
        tmp_assign_source_545 = mod_consts[858];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[859], tmp_assign_source_545);
    }
    {
        PyObject *tmp_assign_source_546;
        tmp_assign_source_546 = mod_consts[860];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[861], tmp_assign_source_546);
    }
    {
        PyObject *tmp_assign_source_547;
        tmp_assign_source_547 = mod_consts[862];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[863], tmp_assign_source_547);
    }
    {
        PyObject *tmp_assign_source_548;
        tmp_assign_source_548 = mod_consts[864];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[865], tmp_assign_source_548);
    }
    {
        PyObject *tmp_assign_source_549;
        tmp_assign_source_549 = mod_consts[866];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[867], tmp_assign_source_549);
    }
    {
        PyObject *tmp_assign_source_550;
        tmp_assign_source_550 = mod_consts[868];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[869], tmp_assign_source_550);
    }
    {
        PyObject *tmp_assign_source_551;
        tmp_assign_source_551 = mod_consts[870];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[871], tmp_assign_source_551);
    }
    {
        PyObject *tmp_assign_source_552;
        tmp_assign_source_552 = mod_consts[872];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[873], tmp_assign_source_552);
    }
    {
        PyObject *tmp_assign_source_553;
        tmp_assign_source_553 = mod_consts[874];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[875], tmp_assign_source_553);
    }
    {
        PyObject *tmp_assign_source_554;
        tmp_assign_source_554 = mod_consts[876];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[877], tmp_assign_source_554);
    }
    {
        PyObject *tmp_assign_source_555;
        tmp_assign_source_555 = mod_consts[878];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[879], tmp_assign_source_555);
    }
    {
        PyObject *tmp_assign_source_556;
        tmp_assign_source_556 = mod_consts[880];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[881], tmp_assign_source_556);
    }
    {
        PyObject *tmp_assign_source_557;
        tmp_assign_source_557 = mod_consts[882];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[883], tmp_assign_source_557);
    }
    {
        PyObject *tmp_assign_source_558;
        tmp_assign_source_558 = mod_consts[884];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[885], tmp_assign_source_558);
    }
    {
        PyObject *tmp_assign_source_559;
        tmp_assign_source_559 = mod_consts[886];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[887], tmp_assign_source_559);
    }
    {
        PyObject *tmp_assign_source_560;
        tmp_assign_source_560 = mod_consts[888];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[889], tmp_assign_source_560);
    }
    {
        PyObject *tmp_assign_source_561;
        tmp_assign_source_561 = mod_consts[890];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[891], tmp_assign_source_561);
    }
    {
        PyObject *tmp_assign_source_562;
        tmp_assign_source_562 = mod_consts[892];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[893], tmp_assign_source_562);
    }
    {
        PyObject *tmp_assign_source_563;
        tmp_assign_source_563 = mod_consts[894];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[895], tmp_assign_source_563);
    }
    {
        PyObject *tmp_assign_source_564;
        tmp_assign_source_564 = mod_consts[896];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[897], tmp_assign_source_564);
    }
    {
        PyObject *tmp_assign_source_565;
        tmp_assign_source_565 = mod_consts[898];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[899], tmp_assign_source_565);
    }
    {
        PyObject *tmp_assign_source_566;
        tmp_assign_source_566 = mod_consts[900];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[901], tmp_assign_source_566);
    }
    {
        PyObject *tmp_assign_source_567;
        tmp_assign_source_567 = mod_consts[902];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[903], tmp_assign_source_567);
    }
    {
        PyObject *tmp_assign_source_568;
        tmp_assign_source_568 = mod_consts[904];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[905], tmp_assign_source_568);
    }
    {
        PyObject *tmp_assign_source_569;
        tmp_assign_source_569 = mod_consts[906];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[907], tmp_assign_source_569);
    }
    {
        PyObject *tmp_assign_source_570;
        tmp_assign_source_570 = mod_consts[908];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[909], tmp_assign_source_570);
    }
    {
        PyObject *tmp_assign_source_571;
        tmp_assign_source_571 = mod_consts[910];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[911], tmp_assign_source_571);
    }
    {
        PyObject *tmp_assign_source_572;
        tmp_assign_source_572 = mod_consts[912];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[913], tmp_assign_source_572);
    }
    {
        PyObject *tmp_assign_source_573;
        tmp_assign_source_573 = mod_consts[914];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[915], tmp_assign_source_573);
    }
    {
        PyObject *tmp_assign_source_574;
        tmp_assign_source_574 = mod_consts[916];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[917], tmp_assign_source_574);
    }
    {
        PyObject *tmp_assign_source_575;
        tmp_assign_source_575 = mod_consts[918];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[919], tmp_assign_source_575);
    }
    {
        PyObject *tmp_assign_source_576;
        tmp_assign_source_576 = mod_consts[920];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[921], tmp_assign_source_576);
    }
    {
        PyObject *tmp_assign_source_577;
        tmp_assign_source_577 = mod_consts[922];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[923], tmp_assign_source_577);
    }
    {
        PyObject *tmp_assign_source_578;
        tmp_assign_source_578 = mod_consts[924];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[925], tmp_assign_source_578);
    }
    {
        PyObject *tmp_assign_source_579;
        tmp_assign_source_579 = mod_consts[926];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[927], tmp_assign_source_579);
    }
    {
        PyObject *tmp_assign_source_580;
        tmp_assign_source_580 = mod_consts[928];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[929], tmp_assign_source_580);
    }
    {
        PyObject *tmp_assign_source_581;
        tmp_assign_source_581 = mod_consts[930];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[931], tmp_assign_source_581);
    }
    {
        PyObject *tmp_assign_source_582;
        tmp_assign_source_582 = mod_consts[932];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[933], tmp_assign_source_582);
    }
    {
        PyObject *tmp_assign_source_583;
        tmp_assign_source_583 = mod_consts[934];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[935], tmp_assign_source_583);
    }
    {
        PyObject *tmp_assign_source_584;
        tmp_assign_source_584 = mod_consts[936];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[937], tmp_assign_source_584);
    }
    {
        PyObject *tmp_assign_source_585;
        tmp_assign_source_585 = mod_consts[938];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[939], tmp_assign_source_585);
    }
    {
        PyObject *tmp_assign_source_586;
        tmp_assign_source_586 = mod_consts[940];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[941], tmp_assign_source_586);
    }
    {
        PyObject *tmp_assign_source_587;
        tmp_assign_source_587 = mod_consts[942];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[943], tmp_assign_source_587);
    }
    {
        PyObject *tmp_assign_source_588;
        tmp_assign_source_588 = mod_consts[944];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[945], tmp_assign_source_588);
    }
    {
        PyObject *tmp_assign_source_589;
        tmp_assign_source_589 = mod_consts[946];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[947], tmp_assign_source_589);
    }
    {
        PyObject *tmp_assign_source_590;
        tmp_assign_source_590 = mod_consts[948];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[949], tmp_assign_source_590);
    }
    {
        PyObject *tmp_assign_source_591;
        tmp_assign_source_591 = mod_consts[950];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[951], tmp_assign_source_591);
    }
    {
        PyObject *tmp_assign_source_592;
        tmp_assign_source_592 = mod_consts[952];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[953], tmp_assign_source_592);
    }
    {
        PyObject *tmp_assign_source_593;
        tmp_assign_source_593 = mod_consts[954];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[955], tmp_assign_source_593);
    }
    {
        PyObject *tmp_assign_source_594;
        tmp_assign_source_594 = mod_consts[956];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[957], tmp_assign_source_594);
    }
    {
        PyObject *tmp_assign_source_595;
        tmp_assign_source_595 = mod_consts[958];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[959], tmp_assign_source_595);
    }
    {
        PyObject *tmp_assign_source_596;
        tmp_assign_source_596 = mod_consts[960];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[961], tmp_assign_source_596);
    }
    {
        PyObject *tmp_assign_source_597;
        tmp_assign_source_597 = mod_consts[962];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[963], tmp_assign_source_597);
    }
    {
        PyObject *tmp_assign_source_598;
        tmp_assign_source_598 = mod_consts[964];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[965], tmp_assign_source_598);
    }
    {
        PyObject *tmp_assign_source_599;
        tmp_assign_source_599 = mod_consts[966];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[967], tmp_assign_source_599);
    }
    {
        PyObject *tmp_assign_source_600;
        tmp_assign_source_600 = mod_consts[968];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[969], tmp_assign_source_600);
    }
    {
        PyObject *tmp_assign_source_601;
        tmp_assign_source_601 = mod_consts[970];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[971], tmp_assign_source_601);
    }
    {
        PyObject *tmp_assign_source_602;
        tmp_assign_source_602 = mod_consts[972];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[973], tmp_assign_source_602);
    }
    {
        PyObject *tmp_assign_source_603;
        tmp_assign_source_603 = mod_consts[974];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[975], tmp_assign_source_603);
    }
    {
        PyObject *tmp_assign_source_604;
        tmp_assign_source_604 = mod_consts[976];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[977], tmp_assign_source_604);
    }
    {
        PyObject *tmp_assign_source_605;
        tmp_assign_source_605 = mod_consts[978];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[979], tmp_assign_source_605);
    }
    {
        PyObject *tmp_assign_source_606;
        tmp_assign_source_606 = mod_consts[980];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[981], tmp_assign_source_606);
    }
    {
        PyObject *tmp_assign_source_607;
        tmp_assign_source_607 = mod_consts[982];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[983], tmp_assign_source_607);
    }
    {
        PyObject *tmp_assign_source_608;
        tmp_assign_source_608 = mod_consts[984];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[985], tmp_assign_source_608);
    }
    {
        PyObject *tmp_assign_source_609;
        tmp_assign_source_609 = mod_consts[986];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[987], tmp_assign_source_609);
    }
    {
        PyObject *tmp_assign_source_610;
        tmp_assign_source_610 = mod_consts[988];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[989], tmp_assign_source_610);
    }
    {
        PyObject *tmp_assign_source_611;
        tmp_assign_source_611 = mod_consts[990];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[991], tmp_assign_source_611);
    }
    {
        PyObject *tmp_assign_source_612;
        tmp_assign_source_612 = mod_consts[992];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[993], tmp_assign_source_612);
    }
    {
        PyObject *tmp_assign_source_613;
        tmp_assign_source_613 = mod_consts[994];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[995], tmp_assign_source_613);
    }
    {
        PyObject *tmp_assign_source_614;
        tmp_assign_source_614 = mod_consts[996];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[997], tmp_assign_source_614);
    }
    {
        PyObject *tmp_assign_source_615;
        tmp_assign_source_615 = mod_consts[998];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[999], tmp_assign_source_615);
    }
    {
        PyObject *tmp_assign_source_616;
        tmp_assign_source_616 = mod_consts[1000];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1001], tmp_assign_source_616);
    }
    {
        PyObject *tmp_assign_source_617;
        tmp_assign_source_617 = mod_consts[1002];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1003], tmp_assign_source_617);
    }
    {
        PyObject *tmp_assign_source_618;
        tmp_assign_source_618 = mod_consts[1004];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1005], tmp_assign_source_618);
    }
    {
        PyObject *tmp_assign_source_619;
        tmp_assign_source_619 = mod_consts[1006];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1007], tmp_assign_source_619);
    }
    {
        PyObject *tmp_assign_source_620;
        tmp_assign_source_620 = mod_consts[1008];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1009], tmp_assign_source_620);
    }
    {
        PyObject *tmp_assign_source_621;
        tmp_assign_source_621 = mod_consts[1010];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1011], tmp_assign_source_621);
    }
    {
        PyObject *tmp_assign_source_622;
        tmp_assign_source_622 = mod_consts[1012];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1013], tmp_assign_source_622);
    }
    {
        PyObject *tmp_assign_source_623;
        tmp_assign_source_623 = mod_consts[1014];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1015], tmp_assign_source_623);
    }
    {
        PyObject *tmp_assign_source_624;
        tmp_assign_source_624 = mod_consts[1016];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1017], tmp_assign_source_624);
    }
    {
        PyObject *tmp_assign_source_625;
        tmp_assign_source_625 = mod_consts[1018];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1019], tmp_assign_source_625);
    }
    {
        PyObject *tmp_assign_source_626;
        tmp_assign_source_626 = mod_consts[1020];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1021], tmp_assign_source_626);
    }
    {
        PyObject *tmp_assign_source_627;
        tmp_assign_source_627 = mod_consts[1022];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1023], tmp_assign_source_627);
    }
    {
        PyObject *tmp_assign_source_628;
        tmp_assign_source_628 = mod_consts[1024];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1025], tmp_assign_source_628);
    }
    {
        PyObject *tmp_assign_source_629;
        tmp_assign_source_629 = mod_consts[1026];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1027], tmp_assign_source_629);
    }
    {
        PyObject *tmp_assign_source_630;
        tmp_assign_source_630 = mod_consts[1028];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1029], tmp_assign_source_630);
    }
    {
        PyObject *tmp_assign_source_631;
        tmp_assign_source_631 = mod_consts[1030];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1031], tmp_assign_source_631);
    }
    {
        PyObject *tmp_assign_source_632;
        tmp_assign_source_632 = mod_consts[1032];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1033], tmp_assign_source_632);
    }
    {
        PyObject *tmp_assign_source_633;
        tmp_assign_source_633 = mod_consts[1034];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1035], tmp_assign_source_633);
    }
    {
        PyObject *tmp_assign_source_634;
        tmp_assign_source_634 = mod_consts[1036];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1037], tmp_assign_source_634);
    }
    {
        PyObject *tmp_assign_source_635;
        tmp_assign_source_635 = mod_consts[1038];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1039], tmp_assign_source_635);
    }
    {
        PyObject *tmp_assign_source_636;
        tmp_assign_source_636 = mod_consts[1040];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1041], tmp_assign_source_636);
    }
    {
        PyObject *tmp_assign_source_637;
        tmp_assign_source_637 = mod_consts[1042];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1043], tmp_assign_source_637);
    }
    {
        PyObject *tmp_assign_source_638;
        tmp_assign_source_638 = mod_consts[1044];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1045], tmp_assign_source_638);
    }
    {
        PyObject *tmp_assign_source_639;
        tmp_assign_source_639 = mod_consts[1046];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1047], tmp_assign_source_639);
    }
    {
        PyObject *tmp_assign_source_640;
        tmp_assign_source_640 = mod_consts[1048];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1049], tmp_assign_source_640);
    }
    {
        PyObject *tmp_assign_source_641;
        tmp_assign_source_641 = mod_consts[1050];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1051], tmp_assign_source_641);
    }
    {
        PyObject *tmp_assign_source_642;
        tmp_assign_source_642 = mod_consts[1052];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1053], tmp_assign_source_642);
    }
    {
        PyObject *tmp_assign_source_643;
        tmp_assign_source_643 = mod_consts[1054];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1055], tmp_assign_source_643);
    }
    {
        PyObject *tmp_assign_source_644;
        tmp_assign_source_644 = mod_consts[1056];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1057], tmp_assign_source_644);
    }
    {
        PyObject *tmp_assign_source_645;
        tmp_assign_source_645 = mod_consts[1058];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1059], tmp_assign_source_645);
    }
    {
        PyObject *tmp_assign_source_646;
        tmp_assign_source_646 = mod_consts[1060];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1061], tmp_assign_source_646);
    }
    {
        PyObject *tmp_assign_source_647;
        tmp_assign_source_647 = mod_consts[1062];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1063], tmp_assign_source_647);
    }
    {
        PyObject *tmp_assign_source_648;
        tmp_assign_source_648 = mod_consts[1064];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1065], tmp_assign_source_648);
    }
    {
        PyObject *tmp_assign_source_649;
        tmp_assign_source_649 = mod_consts[1066];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1067], tmp_assign_source_649);
    }
    {
        PyObject *tmp_assign_source_650;
        tmp_assign_source_650 = mod_consts[1068];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1069], tmp_assign_source_650);
    }
    {
        PyObject *tmp_assign_source_651;
        tmp_assign_source_651 = mod_consts[1070];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1071], tmp_assign_source_651);
    }
    {
        PyObject *tmp_assign_source_652;
        tmp_assign_source_652 = mod_consts[1072];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1073], tmp_assign_source_652);
    }
    {
        PyObject *tmp_assign_source_653;
        tmp_assign_source_653 = mod_consts[1074];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1075], tmp_assign_source_653);
    }
    {
        PyObject *tmp_assign_source_654;
        tmp_assign_source_654 = mod_consts[1076];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1077], tmp_assign_source_654);
    }
    {
        PyObject *tmp_assign_source_655;
        tmp_assign_source_655 = mod_consts[1078];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1079], tmp_assign_source_655);
    }
    {
        PyObject *tmp_assign_source_656;
        tmp_assign_source_656 = mod_consts[1080];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1081], tmp_assign_source_656);
    }
    {
        PyObject *tmp_assign_source_657;
        tmp_assign_source_657 = mod_consts[1082];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1083], tmp_assign_source_657);
    }
    {
        PyObject *tmp_assign_source_658;
        tmp_assign_source_658 = mod_consts[1084];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1085], tmp_assign_source_658);
    }
    {
        PyObject *tmp_assign_source_659;
        tmp_assign_source_659 = mod_consts[1086];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1087], tmp_assign_source_659);
    }
    {
        PyObject *tmp_assign_source_660;
        tmp_assign_source_660 = mod_consts[1088];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1089], tmp_assign_source_660);
    }
    {
        PyObject *tmp_assign_source_661;
        tmp_assign_source_661 = mod_consts[1090];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1091], tmp_assign_source_661);
    }
    {
        PyObject *tmp_assign_source_662;
        tmp_assign_source_662 = mod_consts[1092];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1093], tmp_assign_source_662);
    }
    {
        PyObject *tmp_assign_source_663;
        tmp_assign_source_663 = mod_consts[1094];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1095], tmp_assign_source_663);
    }
    {
        PyObject *tmp_assign_source_664;
        tmp_assign_source_664 = mod_consts[1096];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1097], tmp_assign_source_664);
    }
    {
        PyObject *tmp_assign_source_665;
        tmp_assign_source_665 = mod_consts[1098];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1099], tmp_assign_source_665);
    }
    {
        PyObject *tmp_assign_source_666;
        tmp_assign_source_666 = mod_consts[1100];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1101], tmp_assign_source_666);
    }
    {
        PyObject *tmp_assign_source_667;
        tmp_assign_source_667 = mod_consts[1102];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1103], tmp_assign_source_667);
    }
    {
        PyObject *tmp_assign_source_668;
        tmp_assign_source_668 = mod_consts[1104];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1105], tmp_assign_source_668);
    }
    {
        PyObject *tmp_assign_source_669;
        tmp_assign_source_669 = mod_consts[1106];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1107], tmp_assign_source_669);
    }
    {
        PyObject *tmp_assign_source_670;
        tmp_assign_source_670 = mod_consts[1108];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1109], tmp_assign_source_670);
    }
    {
        PyObject *tmp_assign_source_671;
        tmp_assign_source_671 = mod_consts[1110];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1111], tmp_assign_source_671);
    }
    {
        PyObject *tmp_assign_source_672;
        tmp_assign_source_672 = mod_consts[1112];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1113], tmp_assign_source_672);
    }
    {
        PyObject *tmp_assign_source_673;
        tmp_assign_source_673 = mod_consts[1114];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1115], tmp_assign_source_673);
    }
    {
        PyObject *tmp_assign_source_674;
        tmp_assign_source_674 = mod_consts[1116];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1117], tmp_assign_source_674);
    }
    {
        PyObject *tmp_assign_source_675;
        tmp_assign_source_675 = mod_consts[1118];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1119], tmp_assign_source_675);
    }
    {
        PyObject *tmp_assign_source_676;
        tmp_assign_source_676 = mod_consts[1120];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1121], tmp_assign_source_676);
    }
    {
        PyObject *tmp_assign_source_677;
        tmp_assign_source_677 = mod_consts[1122];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1123], tmp_assign_source_677);
    }
    {
        PyObject *tmp_assign_source_678;
        tmp_assign_source_678 = mod_consts[1124];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1125], tmp_assign_source_678);
    }
    {
        PyObject *tmp_assign_source_679;
        tmp_assign_source_679 = mod_consts[1126];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1127], tmp_assign_source_679);
    }
    {
        PyObject *tmp_assign_source_680;
        tmp_assign_source_680 = mod_consts[1128];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1129], tmp_assign_source_680);
    }
    {
        PyObject *tmp_assign_source_681;
        tmp_assign_source_681 = mod_consts[1130];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1131], tmp_assign_source_681);
    }
    {
        PyObject *tmp_assign_source_682;
        tmp_assign_source_682 = mod_consts[1132];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1133], tmp_assign_source_682);
    }
    {
        PyObject *tmp_assign_source_683;
        tmp_assign_source_683 = mod_consts[1134];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1135], tmp_assign_source_683);
    }
    {
        PyObject *tmp_assign_source_684;
        tmp_assign_source_684 = mod_consts[1136];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1137], tmp_assign_source_684);
    }
    {
        PyObject *tmp_assign_source_685;
        tmp_assign_source_685 = mod_consts[1138];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1139], tmp_assign_source_685);
    }
    {
        PyObject *tmp_assign_source_686;
        tmp_assign_source_686 = mod_consts[1140];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1141], tmp_assign_source_686);
    }
    {
        PyObject *tmp_assign_source_687;
        tmp_assign_source_687 = mod_consts[1142];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1143], tmp_assign_source_687);
    }
    {
        PyObject *tmp_assign_source_688;
        tmp_assign_source_688 = mod_consts[1144];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1145], tmp_assign_source_688);
    }
    {
        PyObject *tmp_assign_source_689;
        tmp_assign_source_689 = mod_consts[1146];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1147], tmp_assign_source_689);
    }
    {
        PyObject *tmp_assign_source_690;
        tmp_assign_source_690 = mod_consts[1148];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1149], tmp_assign_source_690);
    }
    {
        PyObject *tmp_assign_source_691;
        tmp_assign_source_691 = mod_consts[1150];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1151], tmp_assign_source_691);
    }
    {
        PyObject *tmp_assign_source_692;
        tmp_assign_source_692 = mod_consts[1152];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1153], tmp_assign_source_692);
    }
    {
        PyObject *tmp_assign_source_693;
        tmp_assign_source_693 = mod_consts[1154];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1155], tmp_assign_source_693);
    }
    {
        PyObject *tmp_assign_source_694;
        tmp_assign_source_694 = mod_consts[1156];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1157], tmp_assign_source_694);
    }
    {
        PyObject *tmp_assign_source_695;
        tmp_assign_source_695 = mod_consts[1158];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1159], tmp_assign_source_695);
    }
    {
        PyObject *tmp_assign_source_696;
        tmp_assign_source_696 = mod_consts[1160];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1161], tmp_assign_source_696);
    }
    {
        PyObject *tmp_assign_source_697;
        tmp_assign_source_697 = mod_consts[1162];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1163], tmp_assign_source_697);
    }
    {
        PyObject *tmp_assign_source_698;
        tmp_assign_source_698 = mod_consts[1164];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1165], tmp_assign_source_698);
    }
    {
        PyObject *tmp_assign_source_699;
        tmp_assign_source_699 = mod_consts[1166];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1167], tmp_assign_source_699);
    }
    {
        PyObject *tmp_assign_source_700;
        tmp_assign_source_700 = mod_consts[1168];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1169], tmp_assign_source_700);
    }
    {
        PyObject *tmp_assign_source_701;
        tmp_assign_source_701 = mod_consts[1170];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1171], tmp_assign_source_701);
    }
    {
        PyObject *tmp_assign_source_702;
        tmp_assign_source_702 = mod_consts[1172];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1173], tmp_assign_source_702);
    }
    {
        PyObject *tmp_assign_source_703;
        tmp_assign_source_703 = mod_consts[1174];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1175], tmp_assign_source_703);
    }
    {
        PyObject *tmp_assign_source_704;
        tmp_assign_source_704 = mod_consts[1176];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1177], tmp_assign_source_704);
    }
    {
        PyObject *tmp_assign_source_705;
        tmp_assign_source_705 = mod_consts[1178];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1179], tmp_assign_source_705);
    }
    {
        PyObject *tmp_assign_source_706;
        tmp_assign_source_706 = mod_consts[1180];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1181], tmp_assign_source_706);
    }
    {
        PyObject *tmp_assign_source_707;
        tmp_assign_source_707 = mod_consts[1182];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1183], tmp_assign_source_707);
    }
    {
        PyObject *tmp_assign_source_708;
        tmp_assign_source_708 = mod_consts[1184];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1185], tmp_assign_source_708);
    }
    {
        PyObject *tmp_assign_source_709;
        tmp_assign_source_709 = mod_consts[1186];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1187], tmp_assign_source_709);
    }
    {
        PyObject *tmp_assign_source_710;
        tmp_assign_source_710 = mod_consts[1188];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1189], tmp_assign_source_710);
    }
    {
        PyObject *tmp_assign_source_711;
        tmp_assign_source_711 = mod_consts[1190];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1191], tmp_assign_source_711);
    }
    {
        PyObject *tmp_assign_source_712;
        tmp_assign_source_712 = mod_consts[1192];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1193], tmp_assign_source_712);
    }
    {
        PyObject *tmp_assign_source_713;
        tmp_assign_source_713 = mod_consts[1194];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1195], tmp_assign_source_713);
    }
    {
        PyObject *tmp_assign_source_714;
        tmp_assign_source_714 = mod_consts[1196];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1197], tmp_assign_source_714);
    }
    {
        PyObject *tmp_assign_source_715;
        tmp_assign_source_715 = mod_consts[1198];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1199], tmp_assign_source_715);
    }
    {
        PyObject *tmp_assign_source_716;
        tmp_assign_source_716 = mod_consts[1200];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1201], tmp_assign_source_716);
    }
    {
        PyObject *tmp_assign_source_717;
        tmp_assign_source_717 = mod_consts[1202];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1203], tmp_assign_source_717);
    }
    {
        PyObject *tmp_assign_source_718;
        tmp_assign_source_718 = mod_consts[1204];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1205], tmp_assign_source_718);
    }
    {
        PyObject *tmp_assign_source_719;
        tmp_assign_source_719 = mod_consts[1206];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1207], tmp_assign_source_719);
    }
    {
        PyObject *tmp_assign_source_720;
        tmp_assign_source_720 = mod_consts[1208];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1209], tmp_assign_source_720);
    }
    {
        PyObject *tmp_assign_source_721;
        tmp_assign_source_721 = mod_consts[1210];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1211], tmp_assign_source_721);
    }
    {
        PyObject *tmp_assign_source_722;
        tmp_assign_source_722 = mod_consts[1212];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1213], tmp_assign_source_722);
    }
    {
        PyObject *tmp_assign_source_723;
        tmp_assign_source_723 = mod_consts[1214];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1215], tmp_assign_source_723);
    }
    {
        PyObject *tmp_assign_source_724;
        tmp_assign_source_724 = mod_consts[1216];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1217], tmp_assign_source_724);
    }
    {
        PyObject *tmp_assign_source_725;
        tmp_assign_source_725 = mod_consts[1218];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1219], tmp_assign_source_725);
    }
    {
        PyObject *tmp_assign_source_726;
        tmp_assign_source_726 = mod_consts[1220];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1221], tmp_assign_source_726);
    }
    {
        PyObject *tmp_assign_source_727;
        tmp_assign_source_727 = mod_consts[1222];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1223], tmp_assign_source_727);
    }
    {
        PyObject *tmp_assign_source_728;
        tmp_assign_source_728 = mod_consts[1224];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1225], tmp_assign_source_728);
    }
    {
        PyObject *tmp_assign_source_729;
        tmp_assign_source_729 = mod_consts[1226];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1227], tmp_assign_source_729);
    }
    {
        PyObject *tmp_assign_source_730;
        tmp_assign_source_730 = mod_consts[1228];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1229], tmp_assign_source_730);
    }
    {
        PyObject *tmp_assign_source_731;
        tmp_assign_source_731 = mod_consts[1230];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1231], tmp_assign_source_731);
    }
    {
        PyObject *tmp_assign_source_732;
        tmp_assign_source_732 = mod_consts[1232];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1233], tmp_assign_source_732);
    }
    {
        PyObject *tmp_assign_source_733;
        tmp_assign_source_733 = mod_consts[1234];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1235], tmp_assign_source_733);
    }
    {
        PyObject *tmp_assign_source_734;
        tmp_assign_source_734 = mod_consts[1236];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1237], tmp_assign_source_734);
    }
    {
        PyObject *tmp_assign_source_735;
        tmp_assign_source_735 = mod_consts[1238];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1239], tmp_assign_source_735);
    }
    {
        PyObject *tmp_assign_source_736;
        tmp_assign_source_736 = mod_consts[1240];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1241], tmp_assign_source_736);
    }
    {
        PyObject *tmp_assign_source_737;
        tmp_assign_source_737 = mod_consts[1242];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1243], tmp_assign_source_737);
    }
    {
        PyObject *tmp_assign_source_738;
        tmp_assign_source_738 = mod_consts[1244];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1245], tmp_assign_source_738);
    }
    {
        PyObject *tmp_assign_source_739;
        tmp_assign_source_739 = mod_consts[1246];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1247], tmp_assign_source_739);
    }
    {
        PyObject *tmp_assign_source_740;
        tmp_assign_source_740 = mod_consts[1248];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1249], tmp_assign_source_740);
    }
    {
        PyObject *tmp_assign_source_741;
        tmp_assign_source_741 = mod_consts[1250];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1251], tmp_assign_source_741);
    }
    {
        PyObject *tmp_assign_source_742;
        tmp_assign_source_742 = mod_consts[1252];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1253], tmp_assign_source_742);
    }
    {
        PyObject *tmp_assign_source_743;
        tmp_assign_source_743 = mod_consts[1254];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1255], tmp_assign_source_743);
    }
    {
        PyObject *tmp_assign_source_744;
        tmp_assign_source_744 = mod_consts[1256];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1257], tmp_assign_source_744);
    }
    {
        PyObject *tmp_assign_source_745;
        tmp_assign_source_745 = mod_consts[1258];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1259], tmp_assign_source_745);
    }
    {
        PyObject *tmp_assign_source_746;
        tmp_assign_source_746 = mod_consts[1260];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1261], tmp_assign_source_746);
    }
    {
        PyObject *tmp_assign_source_747;
        tmp_assign_source_747 = mod_consts[1262];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1263], tmp_assign_source_747);
    }
    {
        PyObject *tmp_assign_source_748;
        tmp_assign_source_748 = mod_consts[1264];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1265], tmp_assign_source_748);
    }
    {
        PyObject *tmp_assign_source_749;
        tmp_assign_source_749 = mod_consts[1266];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1267], tmp_assign_source_749);
    }
    {
        PyObject *tmp_assign_source_750;
        tmp_assign_source_750 = mod_consts[1268];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1269], tmp_assign_source_750);
    }
    {
        PyObject *tmp_assign_source_751;
        tmp_assign_source_751 = mod_consts[1270];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1271], tmp_assign_source_751);
    }
    {
        PyObject *tmp_assign_source_752;
        tmp_assign_source_752 = mod_consts[1272];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1273], tmp_assign_source_752);
    }
    {
        PyObject *tmp_assign_source_753;
        tmp_assign_source_753 = mod_consts[1274];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1275], tmp_assign_source_753);
    }
    {
        PyObject *tmp_assign_source_754;
        tmp_assign_source_754 = mod_consts[1276];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1277], tmp_assign_source_754);
    }
    {
        PyObject *tmp_assign_source_755;
        tmp_assign_source_755 = mod_consts[1278];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1279], tmp_assign_source_755);
    }
    {
        PyObject *tmp_assign_source_756;
        tmp_assign_source_756 = mod_consts[1280];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1281], tmp_assign_source_756);
    }
    {
        PyObject *tmp_assign_source_757;
        tmp_assign_source_757 = mod_consts[1282];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1283], tmp_assign_source_757);
    }
    {
        PyObject *tmp_assign_source_758;
        tmp_assign_source_758 = mod_consts[1284];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1285], tmp_assign_source_758);
    }
    {
        PyObject *tmp_assign_source_759;
        tmp_assign_source_759 = mod_consts[1286];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1287], tmp_assign_source_759);
    }
    {
        PyObject *tmp_assign_source_760;
        tmp_assign_source_760 = mod_consts[1288];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1289], tmp_assign_source_760);
    }
    {
        PyObject *tmp_assign_source_761;
        tmp_assign_source_761 = mod_consts[1290];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1291], tmp_assign_source_761);
    }
    {
        PyObject *tmp_assign_source_762;
        tmp_assign_source_762 = mod_consts[1292];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1293], tmp_assign_source_762);
    }
    {
        PyObject *tmp_assign_source_763;
        tmp_assign_source_763 = mod_consts[1294];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1295], tmp_assign_source_763);
    }
    {
        PyObject *tmp_assign_source_764;
        tmp_assign_source_764 = mod_consts[1296];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1297], tmp_assign_source_764);
    }
    {
        PyObject *tmp_assign_source_765;
        tmp_assign_source_765 = mod_consts[1298];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1299], tmp_assign_source_765);
    }
    {
        PyObject *tmp_assign_source_766;
        tmp_assign_source_766 = mod_consts[1300];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1301], tmp_assign_source_766);
    }
    {
        PyObject *tmp_assign_source_767;
        tmp_assign_source_767 = mod_consts[1302];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1303], tmp_assign_source_767);
    }
    {
        PyObject *tmp_assign_source_768;
        tmp_assign_source_768 = mod_consts[1304];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1305], tmp_assign_source_768);
    }
    {
        PyObject *tmp_assign_source_769;
        tmp_assign_source_769 = mod_consts[1306];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1307], tmp_assign_source_769);
    }
    {
        PyObject *tmp_assign_source_770;
        tmp_assign_source_770 = mod_consts[1308];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1309], tmp_assign_source_770);
    }
    {
        PyObject *tmp_assign_source_771;
        tmp_assign_source_771 = mod_consts[1310];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1311], tmp_assign_source_771);
    }
    {
        PyObject *tmp_assign_source_772;
        tmp_assign_source_772 = mod_consts[1312];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1313], tmp_assign_source_772);
    }
    {
        PyObject *tmp_assign_source_773;
        tmp_assign_source_773 = mod_consts[1314];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1315], tmp_assign_source_773);
    }
    {
        PyObject *tmp_assign_source_774;
        tmp_assign_source_774 = mod_consts[1316];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1317], tmp_assign_source_774);
    }
    {
        PyObject *tmp_assign_source_775;
        tmp_assign_source_775 = mod_consts[1318];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1319], tmp_assign_source_775);
    }
    {
        PyObject *tmp_assign_source_776;
        tmp_assign_source_776 = mod_consts[1320];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1321], tmp_assign_source_776);
    }
    {
        PyObject *tmp_assign_source_777;
        tmp_assign_source_777 = mod_consts[1322];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1323], tmp_assign_source_777);
    }
    {
        PyObject *tmp_assign_source_778;
        tmp_assign_source_778 = mod_consts[1324];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1325], tmp_assign_source_778);
    }
    {
        PyObject *tmp_assign_source_779;
        tmp_assign_source_779 = mod_consts[1326];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1327], tmp_assign_source_779);
    }
    {
        PyObject *tmp_assign_source_780;
        tmp_assign_source_780 = mod_consts[1328];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1329], tmp_assign_source_780);
    }
    {
        PyObject *tmp_assign_source_781;
        tmp_assign_source_781 = mod_consts[1330];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1331], tmp_assign_source_781);
    }
    {
        PyObject *tmp_assign_source_782;
        tmp_assign_source_782 = mod_consts[1332];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1333], tmp_assign_source_782);
    }
    {
        PyObject *tmp_assign_source_783;
        tmp_assign_source_783 = mod_consts[1334];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1335], tmp_assign_source_783);
    }
    {
        PyObject *tmp_assign_source_784;
        tmp_assign_source_784 = mod_consts[1336];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1337], tmp_assign_source_784);
    }
    {
        PyObject *tmp_assign_source_785;
        tmp_assign_source_785 = mod_consts[1338];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1339], tmp_assign_source_785);
    }
    {
        PyObject *tmp_assign_source_786;
        tmp_assign_source_786 = mod_consts[1340];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1341], tmp_assign_source_786);
    }
    {
        PyObject *tmp_assign_source_787;
        tmp_assign_source_787 = mod_consts[1342];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1343], tmp_assign_source_787);
    }
    {
        PyObject *tmp_assign_source_788;
        tmp_assign_source_788 = mod_consts[1344];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1345], tmp_assign_source_788);
    }
    {
        PyObject *tmp_assign_source_789;
        tmp_assign_source_789 = mod_consts[1346];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1347], tmp_assign_source_789);
    }
    {
        PyObject *tmp_assign_source_790;
        tmp_assign_source_790 = mod_consts[1348];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1349], tmp_assign_source_790);
    }
    {
        PyObject *tmp_assign_source_791;
        tmp_assign_source_791 = mod_consts[1350];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1351], tmp_assign_source_791);
    }
    {
        PyObject *tmp_assign_source_792;
        tmp_assign_source_792 = mod_consts[1352];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1353], tmp_assign_source_792);
    }
    {
        PyObject *tmp_assign_source_793;
        tmp_assign_source_793 = mod_consts[1354];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1355], tmp_assign_source_793);
    }
    {
        PyObject *tmp_assign_source_794;
        tmp_assign_source_794 = mod_consts[1356];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1357], tmp_assign_source_794);
    }
    {
        PyObject *tmp_assign_source_795;
        tmp_assign_source_795 = mod_consts[1358];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1359], tmp_assign_source_795);
    }
    {
        PyObject *tmp_assign_source_796;
        tmp_assign_source_796 = mod_consts[1360];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1361], tmp_assign_source_796);
    }
    {
        PyObject *tmp_assign_source_797;
        tmp_assign_source_797 = mod_consts[1362];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1363], tmp_assign_source_797);
    }
    {
        PyObject *tmp_assign_source_798;
        tmp_assign_source_798 = mod_consts[1364];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1365], tmp_assign_source_798);
    }
    {
        PyObject *tmp_assign_source_799;
        tmp_assign_source_799 = mod_consts[1366];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1367], tmp_assign_source_799);
    }
    {
        PyObject *tmp_assign_source_800;
        tmp_assign_source_800 = mod_consts[1368];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1369], tmp_assign_source_800);
    }
    {
        PyObject *tmp_assign_source_801;
        tmp_assign_source_801 = mod_consts[1370];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1371], tmp_assign_source_801);
    }
    {
        PyObject *tmp_assign_source_802;
        tmp_assign_source_802 = mod_consts[1372];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1373], tmp_assign_source_802);
    }
    {
        PyObject *tmp_assign_source_803;
        tmp_assign_source_803 = mod_consts[1374];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1375], tmp_assign_source_803);
    }
    {
        PyObject *tmp_assign_source_804;
        tmp_assign_source_804 = mod_consts[1376];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1377], tmp_assign_source_804);
    }
    {
        PyObject *tmp_assign_source_805;
        tmp_assign_source_805 = mod_consts[1378];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1379], tmp_assign_source_805);
    }
    {
        PyObject *tmp_assign_source_806;
        tmp_assign_source_806 = mod_consts[1380];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1381], tmp_assign_source_806);
    }
    {
        PyObject *tmp_assign_source_807;
        tmp_assign_source_807 = mod_consts[1382];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1383], tmp_assign_source_807);
    }
    {
        PyObject *tmp_assign_source_808;
        tmp_assign_source_808 = mod_consts[1384];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1385], tmp_assign_source_808);
    }
    {
        PyObject *tmp_assign_source_809;
        tmp_assign_source_809 = mod_consts[1386];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1387], tmp_assign_source_809);
    }
    {
        PyObject *tmp_assign_source_810;
        tmp_assign_source_810 = mod_consts[1388];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1389], tmp_assign_source_810);
    }
    {
        PyObject *tmp_assign_source_811;
        tmp_assign_source_811 = mod_consts[1390];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1391], tmp_assign_source_811);
    }
    {
        PyObject *tmp_assign_source_812;
        tmp_assign_source_812 = mod_consts[1392];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1393], tmp_assign_source_812);
    }
    {
        PyObject *tmp_assign_source_813;
        tmp_assign_source_813 = mod_consts[1394];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1395], tmp_assign_source_813);
    }
    {
        PyObject *tmp_assign_source_814;
        tmp_assign_source_814 = mod_consts[1396];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1397], tmp_assign_source_814);
    }
    {
        PyObject *tmp_assign_source_815;
        tmp_assign_source_815 = mod_consts[1398];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1399], tmp_assign_source_815);
    }
    {
        PyObject *tmp_assign_source_816;
        tmp_assign_source_816 = mod_consts[1400];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1401], tmp_assign_source_816);
    }
    {
        PyObject *tmp_assign_source_817;
        tmp_assign_source_817 = mod_consts[1402];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1403], tmp_assign_source_817);
    }
    {
        PyObject *tmp_assign_source_818;
        tmp_assign_source_818 = mod_consts[1404];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1405], tmp_assign_source_818);
    }
    {
        PyObject *tmp_assign_source_819;
        tmp_assign_source_819 = mod_consts[1406];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1407], tmp_assign_source_819);
    }
    {
        PyObject *tmp_assign_source_820;
        tmp_assign_source_820 = mod_consts[1408];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1409], tmp_assign_source_820);
    }
    {
        PyObject *tmp_assign_source_821;
        tmp_assign_source_821 = mod_consts[1410];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1411], tmp_assign_source_821);
    }
    {
        PyObject *tmp_assign_source_822;
        tmp_assign_source_822 = mod_consts[1412];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1413], tmp_assign_source_822);
    }
    {
        PyObject *tmp_assign_source_823;
        tmp_assign_source_823 = mod_consts[1414];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1415], tmp_assign_source_823);
    }
    {
        PyObject *tmp_assign_source_824;
        tmp_assign_source_824 = mod_consts[1416];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1417], tmp_assign_source_824);
    }
    {
        PyObject *tmp_assign_source_825;
        tmp_assign_source_825 = mod_consts[1418];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1419], tmp_assign_source_825);
    }
    {
        PyObject *tmp_assign_source_826;
        tmp_assign_source_826 = mod_consts[1420];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1421], tmp_assign_source_826);
    }
    {
        PyObject *tmp_assign_source_827;
        tmp_assign_source_827 = mod_consts[1422];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1423], tmp_assign_source_827);
    }
    {
        PyObject *tmp_assign_source_828;
        tmp_assign_source_828 = mod_consts[1424];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1425], tmp_assign_source_828);
    }
    {
        PyObject *tmp_assign_source_829;
        tmp_assign_source_829 = mod_consts[1426];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1427], tmp_assign_source_829);
    }
    {
        PyObject *tmp_assign_source_830;
        tmp_assign_source_830 = mod_consts[1428];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1429], tmp_assign_source_830);
    }
    {
        PyObject *tmp_assign_source_831;
        tmp_assign_source_831 = mod_consts[1430];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1431], tmp_assign_source_831);
    }
    {
        PyObject *tmp_assign_source_832;
        tmp_assign_source_832 = mod_consts[1432];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1433], tmp_assign_source_832);
    }
    {
        PyObject *tmp_assign_source_833;
        tmp_assign_source_833 = mod_consts[1434];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1435], tmp_assign_source_833);
    }
    {
        PyObject *tmp_assign_source_834;
        tmp_assign_source_834 = mod_consts[1436];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1437], tmp_assign_source_834);
    }
    {
        PyObject *tmp_assign_source_835;
        tmp_assign_source_835 = mod_consts[1438];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1439], tmp_assign_source_835);
    }
    {
        PyObject *tmp_assign_source_836;
        tmp_assign_source_836 = mod_consts[1440];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1441], tmp_assign_source_836);
    }
    {
        PyObject *tmp_assign_source_837;
        tmp_assign_source_837 = mod_consts[1442];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1443], tmp_assign_source_837);
    }
    {
        PyObject *tmp_assign_source_838;
        tmp_assign_source_838 = mod_consts[1444];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1445], tmp_assign_source_838);
    }
    {
        PyObject *tmp_assign_source_839;
        tmp_assign_source_839 = mod_consts[1446];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1447], tmp_assign_source_839);
    }
    {
        PyObject *tmp_assign_source_840;
        tmp_assign_source_840 = mod_consts[1448];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1449], tmp_assign_source_840);
    }
    {
        PyObject *tmp_assign_source_841;
        tmp_assign_source_841 = mod_consts[1450];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1451], tmp_assign_source_841);
    }
    {
        PyObject *tmp_assign_source_842;
        tmp_assign_source_842 = mod_consts[1452];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1453], tmp_assign_source_842);
    }
    {
        PyObject *tmp_assign_source_843;
        tmp_assign_source_843 = mod_consts[1454];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1455], tmp_assign_source_843);
    }
    {
        PyObject *tmp_assign_source_844;
        tmp_assign_source_844 = mod_consts[1456];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1457], tmp_assign_source_844);
    }
    {
        PyObject *tmp_assign_source_845;
        tmp_assign_source_845 = mod_consts[1458];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1459], tmp_assign_source_845);
    }
    {
        PyObject *tmp_assign_source_846;
        tmp_assign_source_846 = mod_consts[1460];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1461], tmp_assign_source_846);
    }
    {
        PyObject *tmp_assign_source_847;
        tmp_assign_source_847 = mod_consts[1462];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1463], tmp_assign_source_847);
    }
    {
        PyObject *tmp_assign_source_848;
        tmp_assign_source_848 = mod_consts[1464];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1465], tmp_assign_source_848);
    }
    {
        PyObject *tmp_assign_source_849;
        tmp_assign_source_849 = mod_consts[1466];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1467], tmp_assign_source_849);
    }
    {
        PyObject *tmp_assign_source_850;
        tmp_assign_source_850 = mod_consts[1468];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1469], tmp_assign_source_850);
    }
    {
        PyObject *tmp_assign_source_851;
        tmp_assign_source_851 = mod_consts[1470];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1471], tmp_assign_source_851);
    }
    {
        PyObject *tmp_assign_source_852;
        tmp_assign_source_852 = mod_consts[1472];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1473], tmp_assign_source_852);
    }
    {
        PyObject *tmp_assign_source_853;
        tmp_assign_source_853 = mod_consts[1474];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1475], tmp_assign_source_853);
    }
    {
        PyObject *tmp_assign_source_854;
        tmp_assign_source_854 = mod_consts[1476];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1477], tmp_assign_source_854);
    }
    {
        PyObject *tmp_assign_source_855;
        tmp_assign_source_855 = mod_consts[1478];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1479], tmp_assign_source_855);
    }
    {
        PyObject *tmp_assign_source_856;
        tmp_assign_source_856 = mod_consts[1480];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1481], tmp_assign_source_856);
    }
    {
        PyObject *tmp_assign_source_857;
        tmp_assign_source_857 = mod_consts[1482];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1483], tmp_assign_source_857);
    }
    {
        PyObject *tmp_assign_source_858;
        tmp_assign_source_858 = mod_consts[1484];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1485], tmp_assign_source_858);
    }
    {
        PyObject *tmp_assign_source_859;
        tmp_assign_source_859 = mod_consts[1486];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1487], tmp_assign_source_859);
    }
    {
        PyObject *tmp_assign_source_860;
        tmp_assign_source_860 = mod_consts[1488];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1489], tmp_assign_source_860);
    }
    {
        PyObject *tmp_assign_source_861;
        tmp_assign_source_861 = mod_consts[1490];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1491], tmp_assign_source_861);
    }
    {
        PyObject *tmp_assign_source_862;
        tmp_assign_source_862 = mod_consts[1492];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1493], tmp_assign_source_862);
    }
    {
        PyObject *tmp_assign_source_863;
        tmp_assign_source_863 = mod_consts[1494];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1495], tmp_assign_source_863);
    }
    {
        PyObject *tmp_assign_source_864;
        tmp_assign_source_864 = mod_consts[1496];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1497], tmp_assign_source_864);
    }
    {
        PyObject *tmp_assign_source_865;
        tmp_assign_source_865 = mod_consts[1498];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1499], tmp_assign_source_865);
    }
    {
        PyObject *tmp_assign_source_866;
        tmp_assign_source_866 = mod_consts[1500];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1501], tmp_assign_source_866);
    }
    {
        PyObject *tmp_assign_source_867;
        tmp_assign_source_867 = mod_consts[1502];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1503], tmp_assign_source_867);
    }
    {
        PyObject *tmp_assign_source_868;
        tmp_assign_source_868 = mod_consts[1504];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1505], tmp_assign_source_868);
    }
    {
        PyObject *tmp_assign_source_869;
        tmp_assign_source_869 = mod_consts[1506];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1507], tmp_assign_source_869);
    }
    {
        PyObject *tmp_assign_source_870;
        tmp_assign_source_870 = mod_consts[1508];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1509], tmp_assign_source_870);
    }
    {
        PyObject *tmp_assign_source_871;
        tmp_assign_source_871 = mod_consts[1510];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1511], tmp_assign_source_871);
    }
    {
        PyObject *tmp_assign_source_872;
        tmp_assign_source_872 = mod_consts[1512];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1513], tmp_assign_source_872);
    }
    {
        PyObject *tmp_assign_source_873;
        tmp_assign_source_873 = mod_consts[1514];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1515], tmp_assign_source_873);
    }
    {
        PyObject *tmp_assign_source_874;
        tmp_assign_source_874 = mod_consts[1516];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1517], tmp_assign_source_874);
    }
    {
        PyObject *tmp_assign_source_875;
        tmp_assign_source_875 = mod_consts[1518];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1519], tmp_assign_source_875);
    }
    {
        PyObject *tmp_assign_source_876;
        tmp_assign_source_876 = mod_consts[1520];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1521], tmp_assign_source_876);
    }
    {
        PyObject *tmp_assign_source_877;
        tmp_assign_source_877 = mod_consts[1522];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1523], tmp_assign_source_877);
    }
    {
        PyObject *tmp_assign_source_878;
        tmp_assign_source_878 = mod_consts[1524];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1525], tmp_assign_source_878);
    }
    {
        PyObject *tmp_assign_source_879;
        tmp_assign_source_879 = mod_consts[1526];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1527], tmp_assign_source_879);
    }
    {
        PyObject *tmp_assign_source_880;
        tmp_assign_source_880 = mod_consts[1528];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1529], tmp_assign_source_880);
    }
    {
        PyObject *tmp_assign_source_881;
        tmp_assign_source_881 = mod_consts[1530];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1531], tmp_assign_source_881);
    }
    {
        PyObject *tmp_assign_source_882;
        tmp_assign_source_882 = mod_consts[1532];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1533], tmp_assign_source_882);
    }
    {
        PyObject *tmp_assign_source_883;
        tmp_assign_source_883 = mod_consts[1534];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1535], tmp_assign_source_883);
    }
    {
        PyObject *tmp_assign_source_884;
        tmp_assign_source_884 = mod_consts[1536];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1537], tmp_assign_source_884);
    }
    {
        PyObject *tmp_assign_source_885;
        tmp_assign_source_885 = mod_consts[1538];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1539], tmp_assign_source_885);
    }
    {
        PyObject *tmp_assign_source_886;
        tmp_assign_source_886 = mod_consts[1540];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1541], tmp_assign_source_886);
    }
    {
        PyObject *tmp_assign_source_887;
        tmp_assign_source_887 = mod_consts[1542];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1543], tmp_assign_source_887);
    }
    {
        PyObject *tmp_assign_source_888;
        tmp_assign_source_888 = mod_consts[1544];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1545], tmp_assign_source_888);
    }
    {
        PyObject *tmp_assign_source_889;
        tmp_assign_source_889 = mod_consts[1546];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1547], tmp_assign_source_889);
    }
    {
        PyObject *tmp_assign_source_890;
        tmp_assign_source_890 = mod_consts[1548];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1549], tmp_assign_source_890);
    }
    {
        PyObject *tmp_assign_source_891;
        tmp_assign_source_891 = mod_consts[1550];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1551], tmp_assign_source_891);
    }
    {
        PyObject *tmp_assign_source_892;
        tmp_assign_source_892 = mod_consts[1552];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1553], tmp_assign_source_892);
    }
    {
        PyObject *tmp_assign_source_893;
        tmp_assign_source_893 = mod_consts[1554];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1555], tmp_assign_source_893);
    }
    {
        PyObject *tmp_assign_source_894;
        tmp_assign_source_894 = mod_consts[1556];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1557], tmp_assign_source_894);
    }
    {
        PyObject *tmp_assign_source_895;
        tmp_assign_source_895 = mod_consts[1558];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1559], tmp_assign_source_895);
    }
    {
        PyObject *tmp_assign_source_896;
        tmp_assign_source_896 = mod_consts[1560];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1561], tmp_assign_source_896);
    }
    {
        PyObject *tmp_assign_source_897;
        tmp_assign_source_897 = mod_consts[1562];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1563], tmp_assign_source_897);
    }
    {
        PyObject *tmp_assign_source_898;
        tmp_assign_source_898 = mod_consts[1564];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1565], tmp_assign_source_898);
    }
    {
        PyObject *tmp_assign_source_899;
        tmp_assign_source_899 = mod_consts[1566];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1567], tmp_assign_source_899);
    }
    {
        PyObject *tmp_assign_source_900;
        tmp_assign_source_900 = mod_consts[1568];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1569], tmp_assign_source_900);
    }
    {
        PyObject *tmp_assign_source_901;
        tmp_assign_source_901 = mod_consts[1570];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1571], tmp_assign_source_901);
    }
    {
        PyObject *tmp_assign_source_902;
        tmp_assign_source_902 = mod_consts[1572];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1573], tmp_assign_source_902);
    }
    {
        PyObject *tmp_assign_source_903;
        tmp_assign_source_903 = mod_consts[1574];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1575], tmp_assign_source_903);
    }
    {
        PyObject *tmp_assign_source_904;
        tmp_assign_source_904 = mod_consts[1576];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1577], tmp_assign_source_904);
    }
    {
        PyObject *tmp_assign_source_905;
        tmp_assign_source_905 = mod_consts[1578];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1579], tmp_assign_source_905);
    }
    {
        PyObject *tmp_assign_source_906;
        tmp_assign_source_906 = mod_consts[1580];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1581], tmp_assign_source_906);
    }
    {
        PyObject *tmp_assign_source_907;
        tmp_assign_source_907 = mod_consts[1582];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1583], tmp_assign_source_907);
    }
    {
        PyObject *tmp_assign_source_908;
        tmp_assign_source_908 = mod_consts[1584];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1585], tmp_assign_source_908);
    }
    {
        PyObject *tmp_assign_source_909;
        tmp_assign_source_909 = mod_consts[1586];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1587], tmp_assign_source_909);
    }
    {
        PyObject *tmp_assign_source_910;
        tmp_assign_source_910 = mod_consts[1588];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1589], tmp_assign_source_910);
    }
    {
        PyObject *tmp_assign_source_911;
        tmp_assign_source_911 = mod_consts[1590];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1591], tmp_assign_source_911);
    }
    {
        PyObject *tmp_assign_source_912;
        tmp_assign_source_912 = mod_consts[1592];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1593], tmp_assign_source_912);
    }
    {
        PyObject *tmp_assign_source_913;
        tmp_assign_source_913 = mod_consts[1594];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1595], tmp_assign_source_913);
    }
    {
        PyObject *tmp_assign_source_914;
        tmp_assign_source_914 = mod_consts[1596];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1597], tmp_assign_source_914);
    }
    {
        PyObject *tmp_assign_source_915;
        tmp_assign_source_915 = mod_consts[1598];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1599], tmp_assign_source_915);
    }
    {
        PyObject *tmp_assign_source_916;
        tmp_assign_source_916 = mod_consts[1600];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1601], tmp_assign_source_916);
    }
    {
        PyObject *tmp_assign_source_917;
        tmp_assign_source_917 = mod_consts[1602];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1603], tmp_assign_source_917);
    }
    {
        PyObject *tmp_assign_source_918;
        tmp_assign_source_918 = mod_consts[1604];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1605], tmp_assign_source_918);
    }
    {
        PyObject *tmp_assign_source_919;
        tmp_assign_source_919 = mod_consts[1606];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1607], tmp_assign_source_919);
    }
    {
        PyObject *tmp_assign_source_920;
        tmp_assign_source_920 = mod_consts[1608];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1609], tmp_assign_source_920);
    }
    {
        PyObject *tmp_assign_source_921;
        tmp_assign_source_921 = mod_consts[1610];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1611], tmp_assign_source_921);
    }
    {
        PyObject *tmp_assign_source_922;
        tmp_assign_source_922 = mod_consts[1612];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1613], tmp_assign_source_922);
    }
    {
        PyObject *tmp_assign_source_923;
        tmp_assign_source_923 = mod_consts[1614];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1615], tmp_assign_source_923);
    }
    {
        PyObject *tmp_assign_source_924;
        tmp_assign_source_924 = mod_consts[1616];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1617], tmp_assign_source_924);
    }
    {
        PyObject *tmp_assign_source_925;
        tmp_assign_source_925 = mod_consts[1618];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1619], tmp_assign_source_925);
    }
    {
        PyObject *tmp_assign_source_926;
        tmp_assign_source_926 = mod_consts[1620];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1621], tmp_assign_source_926);
    }
    {
        PyObject *tmp_assign_source_927;
        tmp_assign_source_927 = mod_consts[1622];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1623], tmp_assign_source_927);
    }
    {
        PyObject *tmp_assign_source_928;
        tmp_assign_source_928 = mod_consts[1624];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1625], tmp_assign_source_928);
    }
    {
        PyObject *tmp_assign_source_929;
        tmp_assign_source_929 = mod_consts[1626];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1627], tmp_assign_source_929);
    }
    {
        PyObject *tmp_assign_source_930;
        tmp_assign_source_930 = mod_consts[1628];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1629], tmp_assign_source_930);
    }
    {
        PyObject *tmp_assign_source_931;
        tmp_assign_source_931 = mod_consts[1630];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1631], tmp_assign_source_931);
    }
    {
        PyObject *tmp_assign_source_932;
        tmp_assign_source_932 = mod_consts[1632];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1633], tmp_assign_source_932);
    }
    {
        PyObject *tmp_assign_source_933;
        tmp_assign_source_933 = mod_consts[1634];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1635], tmp_assign_source_933);
    }
    {
        PyObject *tmp_assign_source_934;
        tmp_assign_source_934 = mod_consts[1636];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1637], tmp_assign_source_934);
    }
    {
        PyObject *tmp_assign_source_935;
        tmp_assign_source_935 = mod_consts[1638];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1639], tmp_assign_source_935);
    }
    {
        PyObject *tmp_assign_source_936;
        tmp_assign_source_936 = mod_consts[1640];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1641], tmp_assign_source_936);
    }
    {
        PyObject *tmp_assign_source_937;
        tmp_assign_source_937 = mod_consts[1642];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1643], tmp_assign_source_937);
    }
    {
        PyObject *tmp_assign_source_938;
        tmp_assign_source_938 = mod_consts[1644];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1645], tmp_assign_source_938);
    }
    {
        PyObject *tmp_assign_source_939;
        tmp_assign_source_939 = mod_consts[1646];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1647], tmp_assign_source_939);
    }
    {
        PyObject *tmp_assign_source_940;
        tmp_assign_source_940 = mod_consts[1648];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1649], tmp_assign_source_940);
    }
    {
        PyObject *tmp_assign_source_941;
        tmp_assign_source_941 = mod_consts[1650];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1651], tmp_assign_source_941);
    }
    {
        PyObject *tmp_assign_source_942;
        tmp_assign_source_942 = mod_consts[1652];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1653], tmp_assign_source_942);
    }
    {
        PyObject *tmp_assign_source_943;
        tmp_assign_source_943 = mod_consts[1654];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1655], tmp_assign_source_943);
    }
    {
        PyObject *tmp_assign_source_944;
        tmp_assign_source_944 = mod_consts[1656];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1657], tmp_assign_source_944);
    }
    {
        PyObject *tmp_assign_source_945;
        tmp_assign_source_945 = mod_consts[1658];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1659], tmp_assign_source_945);
    }
    {
        PyObject *tmp_assign_source_946;
        tmp_assign_source_946 = mod_consts[1660];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1661], tmp_assign_source_946);
    }
    {
        PyObject *tmp_assign_source_947;
        tmp_assign_source_947 = mod_consts[1662];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1663], tmp_assign_source_947);
    }
    {
        PyObject *tmp_assign_source_948;
        tmp_assign_source_948 = mod_consts[1664];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1665], tmp_assign_source_948);
    }
    {
        PyObject *tmp_assign_source_949;
        tmp_assign_source_949 = mod_consts[1666];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1667], tmp_assign_source_949);
    }
    {
        PyObject *tmp_assign_source_950;
        tmp_assign_source_950 = mod_consts[1668];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1669], tmp_assign_source_950);
    }
    {
        PyObject *tmp_assign_source_951;
        tmp_assign_source_951 = mod_consts[1670];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1671], tmp_assign_source_951);
    }
    {
        PyObject *tmp_assign_source_952;
        tmp_assign_source_952 = mod_consts[1672];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1673], tmp_assign_source_952);
    }
    {
        PyObject *tmp_assign_source_953;
        tmp_assign_source_953 = mod_consts[1674];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1675], tmp_assign_source_953);
    }
    {
        PyObject *tmp_assign_source_954;
        tmp_assign_source_954 = mod_consts[1676];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1677], tmp_assign_source_954);
    }
    {
        PyObject *tmp_assign_source_955;
        tmp_assign_source_955 = mod_consts[1678];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1679], tmp_assign_source_955);
    }
    {
        PyObject *tmp_assign_source_956;
        tmp_assign_source_956 = mod_consts[1680];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1681], tmp_assign_source_956);
    }
    {
        PyObject *tmp_assign_source_957;
        tmp_assign_source_957 = mod_consts[1682];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1683], tmp_assign_source_957);
    }
    {
        PyObject *tmp_assign_source_958;
        tmp_assign_source_958 = mod_consts[1684];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1685], tmp_assign_source_958);
    }
    {
        PyObject *tmp_assign_source_959;
        tmp_assign_source_959 = mod_consts[1686];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1687], tmp_assign_source_959);
    }
    {
        PyObject *tmp_assign_source_960;
        tmp_assign_source_960 = mod_consts[1688];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1689], tmp_assign_source_960);
    }
    {
        PyObject *tmp_assign_source_961;
        tmp_assign_source_961 = mod_consts[1690];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1691], tmp_assign_source_961);
    }
    {
        PyObject *tmp_assign_source_962;
        tmp_assign_source_962 = mod_consts[1692];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1693], tmp_assign_source_962);
    }
    {
        PyObject *tmp_assign_source_963;
        tmp_assign_source_963 = mod_consts[1694];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1695], tmp_assign_source_963);
    }
    {
        PyObject *tmp_assign_source_964;
        tmp_assign_source_964 = mod_consts[1696];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1697], tmp_assign_source_964);
    }
    {
        PyObject *tmp_assign_source_965;
        tmp_assign_source_965 = mod_consts[1698];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1699], tmp_assign_source_965);
    }
    {
        PyObject *tmp_assign_source_966;
        tmp_assign_source_966 = mod_consts[1700];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1701], tmp_assign_source_966);
    }
    {
        PyObject *tmp_assign_source_967;
        tmp_assign_source_967 = mod_consts[1702];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1703], tmp_assign_source_967);
    }
    {
        PyObject *tmp_assign_source_968;
        tmp_assign_source_968 = mod_consts[1704];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1705], tmp_assign_source_968);
    }
    {
        PyObject *tmp_assign_source_969;
        tmp_assign_source_969 = mod_consts[1706];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1707], tmp_assign_source_969);
    }
    {
        PyObject *tmp_assign_source_970;
        tmp_assign_source_970 = mod_consts[1708];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1709], tmp_assign_source_970);
    }
    {
        PyObject *tmp_assign_source_971;
        tmp_assign_source_971 = mod_consts[1710];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1711], tmp_assign_source_971);
    }
    {
        PyObject *tmp_assign_source_972;
        tmp_assign_source_972 = mod_consts[1712];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1713], tmp_assign_source_972);
    }
    {
        PyObject *tmp_assign_source_973;
        tmp_assign_source_973 = mod_consts[1714];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1715], tmp_assign_source_973);
    }
    {
        PyObject *tmp_assign_source_974;
        tmp_assign_source_974 = mod_consts[1716];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1717], tmp_assign_source_974);
    }
    {
        PyObject *tmp_assign_source_975;
        tmp_assign_source_975 = mod_consts[1718];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1719], tmp_assign_source_975);
    }
    {
        PyObject *tmp_assign_source_976;
        tmp_assign_source_976 = mod_consts[1720];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1721], tmp_assign_source_976);
    }
    {
        PyObject *tmp_assign_source_977;
        tmp_assign_source_977 = mod_consts[1722];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1723], tmp_assign_source_977);
    }
    {
        PyObject *tmp_assign_source_978;
        tmp_assign_source_978 = mod_consts[1724];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1725], tmp_assign_source_978);
    }
    {
        PyObject *tmp_assign_source_979;
        tmp_assign_source_979 = mod_consts[1726];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1727], tmp_assign_source_979);
    }
    {
        PyObject *tmp_assign_source_980;
        tmp_assign_source_980 = mod_consts[1728];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1729], tmp_assign_source_980);
    }
    {
        PyObject *tmp_assign_source_981;
        tmp_assign_source_981 = mod_consts[1730];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1731], tmp_assign_source_981);
    }
    {
        PyObject *tmp_assign_source_982;
        tmp_assign_source_982 = mod_consts[1732];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1733], tmp_assign_source_982);
    }
    {
        PyObject *tmp_assign_source_983;
        tmp_assign_source_983 = mod_consts[1734];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1735], tmp_assign_source_983);
    }
    {
        PyObject *tmp_assign_source_984;
        tmp_assign_source_984 = mod_consts[1736];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1737], tmp_assign_source_984);
    }
    {
        PyObject *tmp_assign_source_985;
        tmp_assign_source_985 = mod_consts[1738];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1739], tmp_assign_source_985);
    }
    {
        PyObject *tmp_assign_source_986;
        tmp_assign_source_986 = mod_consts[1740];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1741], tmp_assign_source_986);
    }
    {
        PyObject *tmp_assign_source_987;
        tmp_assign_source_987 = mod_consts[1742];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1743], tmp_assign_source_987);
    }
    {
        PyObject *tmp_assign_source_988;
        tmp_assign_source_988 = mod_consts[1744];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1745], tmp_assign_source_988);
    }
    {
        PyObject *tmp_assign_source_989;
        tmp_assign_source_989 = mod_consts[1746];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1747], tmp_assign_source_989);
    }
    {
        PyObject *tmp_assign_source_990;
        tmp_assign_source_990 = mod_consts[1748];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1749], tmp_assign_source_990);
    }
    {
        PyObject *tmp_assign_source_991;
        tmp_assign_source_991 = mod_consts[1750];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1751], tmp_assign_source_991);
    }
    {
        PyObject *tmp_assign_source_992;
        tmp_assign_source_992 = mod_consts[1752];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1753], tmp_assign_source_992);
    }
    {
        PyObject *tmp_assign_source_993;
        tmp_assign_source_993 = mod_consts[1754];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1755], tmp_assign_source_993);
    }
    {
        PyObject *tmp_assign_source_994;
        tmp_assign_source_994 = mod_consts[1756];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1757], tmp_assign_source_994);
    }
    {
        PyObject *tmp_assign_source_995;
        tmp_assign_source_995 = mod_consts[1758];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1759], tmp_assign_source_995);
    }
    {
        PyObject *tmp_assign_source_996;
        tmp_assign_source_996 = mod_consts[1760];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1761], tmp_assign_source_996);
    }
    {
        PyObject *tmp_assign_source_997;
        tmp_assign_source_997 = mod_consts[1762];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1763], tmp_assign_source_997);
    }
    {
        PyObject *tmp_assign_source_998;
        tmp_assign_source_998 = mod_consts[1764];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1765], tmp_assign_source_998);
    }
    {
        PyObject *tmp_assign_source_999;
        tmp_assign_source_999 = mod_consts[1766];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1767], tmp_assign_source_999);
    }
    {
        PyObject *tmp_assign_source_1000;
        tmp_assign_source_1000 = mod_consts[1768];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1769], tmp_assign_source_1000);
    }
    {
        PyObject *tmp_assign_source_1001;
        tmp_assign_source_1001 = mod_consts[1770];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1771], tmp_assign_source_1001);
    }
    {
        PyObject *tmp_assign_source_1002;
        tmp_assign_source_1002 = mod_consts[1772];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1773], tmp_assign_source_1002);
    }
    {
        PyObject *tmp_assign_source_1003;
        tmp_assign_source_1003 = mod_consts[1774];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1775], tmp_assign_source_1003);
    }
    {
        PyObject *tmp_assign_source_1004;
        tmp_assign_source_1004 = mod_consts[1776];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1777], tmp_assign_source_1004);
    }
    {
        PyObject *tmp_assign_source_1005;
        tmp_assign_source_1005 = mod_consts[1778];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1779], tmp_assign_source_1005);
    }
    {
        PyObject *tmp_assign_source_1006;
        tmp_assign_source_1006 = mod_consts[1780];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1781], tmp_assign_source_1006);
    }
    {
        PyObject *tmp_assign_source_1007;
        tmp_assign_source_1007 = mod_consts[1782];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1783], tmp_assign_source_1007);
    }
    {
        PyObject *tmp_assign_source_1008;
        tmp_assign_source_1008 = mod_consts[1784];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1785], tmp_assign_source_1008);
    }
    {
        PyObject *tmp_assign_source_1009;
        tmp_assign_source_1009 = mod_consts[1786];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1787], tmp_assign_source_1009);
    }
    {
        PyObject *tmp_assign_source_1010;
        tmp_assign_source_1010 = mod_consts[1788];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1789], tmp_assign_source_1010);
    }
    {
        PyObject *tmp_assign_source_1011;
        tmp_assign_source_1011 = mod_consts[1790];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1791], tmp_assign_source_1011);
    }
    {
        PyObject *tmp_assign_source_1012;
        tmp_assign_source_1012 = mod_consts[1792];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1793], tmp_assign_source_1012);
    }
    {
        PyObject *tmp_assign_source_1013;
        tmp_assign_source_1013 = mod_consts[1794];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1795], tmp_assign_source_1013);
    }
    {
        PyObject *tmp_assign_source_1014;
        tmp_assign_source_1014 = mod_consts[1796];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1797], tmp_assign_source_1014);
    }
    {
        PyObject *tmp_assign_source_1015;
        tmp_assign_source_1015 = mod_consts[1798];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1799], tmp_assign_source_1015);
    }
    {
        PyObject *tmp_assign_source_1016;
        tmp_assign_source_1016 = mod_consts[1800];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1801], tmp_assign_source_1016);
    }
    {
        PyObject *tmp_assign_source_1017;
        tmp_assign_source_1017 = mod_consts[1802];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1803], tmp_assign_source_1017);
    }
    {
        PyObject *tmp_assign_source_1018;
        tmp_assign_source_1018 = mod_consts[1804];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1805], tmp_assign_source_1018);
    }
    {
        PyObject *tmp_assign_source_1019;
        tmp_assign_source_1019 = mod_consts[1806];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1807], tmp_assign_source_1019);
    }
    {
        PyObject *tmp_assign_source_1020;
        tmp_assign_source_1020 = mod_consts[1808];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1809], tmp_assign_source_1020);
    }
    {
        PyObject *tmp_assign_source_1021;
        tmp_assign_source_1021 = mod_consts[1810];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1811], tmp_assign_source_1021);
    }
    {
        PyObject *tmp_assign_source_1022;
        tmp_assign_source_1022 = mod_consts[1812];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1813], tmp_assign_source_1022);
    }
    {
        PyObject *tmp_assign_source_1023;
        tmp_assign_source_1023 = mod_consts[1814];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1815], tmp_assign_source_1023);
    }
    {
        PyObject *tmp_assign_source_1024;
        tmp_assign_source_1024 = mod_consts[1816];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1817], tmp_assign_source_1024);
    }
    {
        PyObject *tmp_assign_source_1025;
        tmp_assign_source_1025 = mod_consts[1818];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1819], tmp_assign_source_1025);
    }
    {
        PyObject *tmp_assign_source_1026;
        tmp_assign_source_1026 = mod_consts[1820];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1821], tmp_assign_source_1026);
    }
    {
        PyObject *tmp_assign_source_1027;
        tmp_assign_source_1027 = mod_consts[1822];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1823], tmp_assign_source_1027);
    }
    {
        PyObject *tmp_assign_source_1028;
        tmp_assign_source_1028 = mod_consts[1824];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1825], tmp_assign_source_1028);
    }
    {
        PyObject *tmp_assign_source_1029;
        tmp_assign_source_1029 = mod_consts[1826];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1827], tmp_assign_source_1029);
    }
    {
        PyObject *tmp_assign_source_1030;
        tmp_assign_source_1030 = mod_consts[1828];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1829], tmp_assign_source_1030);
    }
    {
        PyObject *tmp_assign_source_1031;
        tmp_assign_source_1031 = mod_consts[1830];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1831], tmp_assign_source_1031);
    }
    {
        PyObject *tmp_assign_source_1032;
        tmp_assign_source_1032 = mod_consts[1832];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1833], tmp_assign_source_1032);
    }
    {
        PyObject *tmp_assign_source_1033;
        tmp_assign_source_1033 = mod_consts[1834];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1835], tmp_assign_source_1033);
    }
    {
        PyObject *tmp_assign_source_1034;
        tmp_assign_source_1034 = mod_consts[1836];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1837], tmp_assign_source_1034);
    }
    {
        PyObject *tmp_assign_source_1035;
        tmp_assign_source_1035 = mod_consts[1838];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1839], tmp_assign_source_1035);
    }
    {
        PyObject *tmp_assign_source_1036;
        tmp_assign_source_1036 = mod_consts[1840];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1841], tmp_assign_source_1036);
    }
    {
        PyObject *tmp_assign_source_1037;
        tmp_assign_source_1037 = mod_consts[1842];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1843], tmp_assign_source_1037);
    }
    {
        PyObject *tmp_assign_source_1038;
        tmp_assign_source_1038 = mod_consts[1844];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1845], tmp_assign_source_1038);
    }
    {
        PyObject *tmp_assign_source_1039;
        tmp_assign_source_1039 = mod_consts[1846];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1847], tmp_assign_source_1039);
    }
    {
        PyObject *tmp_assign_source_1040;
        tmp_assign_source_1040 = mod_consts[1848];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1849], tmp_assign_source_1040);
    }
    {
        PyObject *tmp_assign_source_1041;
        tmp_assign_source_1041 = mod_consts[1850];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1851], tmp_assign_source_1041);
    }
    {
        PyObject *tmp_assign_source_1042;
        tmp_assign_source_1042 = mod_consts[1852];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1853], tmp_assign_source_1042);
    }
    {
        PyObject *tmp_assign_source_1043;
        tmp_assign_source_1043 = mod_consts[1854];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1855], tmp_assign_source_1043);
    }
    {
        PyObject *tmp_assign_source_1044;
        tmp_assign_source_1044 = mod_consts[1856];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1857], tmp_assign_source_1044);
    }
    {
        PyObject *tmp_assign_source_1045;
        tmp_assign_source_1045 = mod_consts[1858];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1859], tmp_assign_source_1045);
    }
    {
        PyObject *tmp_assign_source_1046;
        tmp_assign_source_1046 = mod_consts[1860];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1861], tmp_assign_source_1046);
    }
    {
        PyObject *tmp_assign_source_1047;
        tmp_assign_source_1047 = mod_consts[1862];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1863], tmp_assign_source_1047);
    }
    {
        PyObject *tmp_assign_source_1048;
        tmp_assign_source_1048 = mod_consts[1864];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1865], tmp_assign_source_1048);
    }
    {
        PyObject *tmp_assign_source_1049;
        tmp_assign_source_1049 = mod_consts[1866];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1867], tmp_assign_source_1049);
    }
    {
        PyObject *tmp_assign_source_1050;
        tmp_assign_source_1050 = mod_consts[1868];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1869], tmp_assign_source_1050);
    }
    {
        PyObject *tmp_assign_source_1051;
        tmp_assign_source_1051 = mod_consts[1870];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1871], tmp_assign_source_1051);
    }
    {
        PyObject *tmp_assign_source_1052;
        tmp_assign_source_1052 = mod_consts[1872];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1873], tmp_assign_source_1052);
    }
    {
        PyObject *tmp_assign_source_1053;
        tmp_assign_source_1053 = mod_consts[1874];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1875], tmp_assign_source_1053);
    }
    {
        PyObject *tmp_assign_source_1054;
        tmp_assign_source_1054 = mod_consts[1876];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1877], tmp_assign_source_1054);
    }
    {
        PyObject *tmp_assign_source_1055;
        tmp_assign_source_1055 = mod_consts[1878];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1879], tmp_assign_source_1055);
    }
    {
        PyObject *tmp_assign_source_1056;
        tmp_assign_source_1056 = mod_consts[1880];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1881], tmp_assign_source_1056);
    }
    {
        PyObject *tmp_assign_source_1057;
        tmp_assign_source_1057 = mod_consts[1882];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1883], tmp_assign_source_1057);
    }
    {
        PyObject *tmp_assign_source_1058;
        tmp_assign_source_1058 = mod_consts[1884];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1885], tmp_assign_source_1058);
    }
    {
        PyObject *tmp_assign_source_1059;
        tmp_assign_source_1059 = mod_consts[1886];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1887], tmp_assign_source_1059);
    }
    {
        PyObject *tmp_assign_source_1060;
        tmp_assign_source_1060 = mod_consts[1888];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1889], tmp_assign_source_1060);
    }
    {
        PyObject *tmp_assign_source_1061;
        tmp_assign_source_1061 = mod_consts[1890];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1891], tmp_assign_source_1061);
    }
    {
        PyObject *tmp_assign_source_1062;
        tmp_assign_source_1062 = mod_consts[1892];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1893], tmp_assign_source_1062);
    }
    {
        PyObject *tmp_assign_source_1063;
        tmp_assign_source_1063 = mod_consts[1894];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1895], tmp_assign_source_1063);
    }
    {
        PyObject *tmp_assign_source_1064;
        tmp_assign_source_1064 = mod_consts[1896];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1897], tmp_assign_source_1064);
    }
    {
        PyObject *tmp_assign_source_1065;
        tmp_assign_source_1065 = mod_consts[1898];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1899], tmp_assign_source_1065);
    }
    {
        PyObject *tmp_assign_source_1066;
        tmp_assign_source_1066 = mod_consts[1900];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1901], tmp_assign_source_1066);
    }
    {
        PyObject *tmp_assign_source_1067;
        tmp_assign_source_1067 = mod_consts[1902];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1903], tmp_assign_source_1067);
    }
    {
        PyObject *tmp_assign_source_1068;
        tmp_assign_source_1068 = mod_consts[1904];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1905], tmp_assign_source_1068);
    }
    {
        PyObject *tmp_assign_source_1069;
        tmp_assign_source_1069 = mod_consts[1906];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1907], tmp_assign_source_1069);
    }
    {
        PyObject *tmp_assign_source_1070;
        tmp_assign_source_1070 = mod_consts[1908];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1909], tmp_assign_source_1070);
    }
    {
        PyObject *tmp_assign_source_1071;
        tmp_assign_source_1071 = mod_consts[1910];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1911], tmp_assign_source_1071);
    }
    {
        PyObject *tmp_assign_source_1072;
        tmp_assign_source_1072 = mod_consts[1912];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1913], tmp_assign_source_1072);
    }
    {
        PyObject *tmp_assign_source_1073;
        tmp_assign_source_1073 = mod_consts[1914];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1915], tmp_assign_source_1073);
    }
    {
        PyObject *tmp_assign_source_1074;
        tmp_assign_source_1074 = mod_consts[1916];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1917], tmp_assign_source_1074);
    }
    {
        PyObject *tmp_assign_source_1075;
        tmp_assign_source_1075 = mod_consts[1918];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1919], tmp_assign_source_1075);
    }
    {
        PyObject *tmp_assign_source_1076;
        tmp_assign_source_1076 = mod_consts[1920];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1921], tmp_assign_source_1076);
    }
    {
        PyObject *tmp_assign_source_1077;
        tmp_assign_source_1077 = mod_consts[1922];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1923], tmp_assign_source_1077);
    }
    {
        PyObject *tmp_assign_source_1078;
        tmp_assign_source_1078 = mod_consts[1924];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1925], tmp_assign_source_1078);
    }
    {
        PyObject *tmp_assign_source_1079;
        tmp_assign_source_1079 = mod_consts[1926];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1927], tmp_assign_source_1079);
    }
    {
        PyObject *tmp_assign_source_1080;
        tmp_assign_source_1080 = mod_consts[1928];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1929], tmp_assign_source_1080);
    }
    {
        PyObject *tmp_assign_source_1081;
        tmp_assign_source_1081 = mod_consts[1930];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1931], tmp_assign_source_1081);
    }
    {
        PyObject *tmp_assign_source_1082;
        tmp_assign_source_1082 = mod_consts[1932];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1933], tmp_assign_source_1082);
    }
    {
        PyObject *tmp_assign_source_1083;
        tmp_assign_source_1083 = mod_consts[1934];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1935], tmp_assign_source_1083);
    }
    {
        PyObject *tmp_assign_source_1084;
        tmp_assign_source_1084 = mod_consts[1936];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1937], tmp_assign_source_1084);
    }
    {
        PyObject *tmp_assign_source_1085;
        tmp_assign_source_1085 = mod_consts[1938];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1939], tmp_assign_source_1085);
    }
    {
        PyObject *tmp_assign_source_1086;
        tmp_assign_source_1086 = mod_consts[1940];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1941], tmp_assign_source_1086);
    }
    {
        PyObject *tmp_assign_source_1087;
        tmp_assign_source_1087 = mod_consts[1942];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1943], tmp_assign_source_1087);
    }
    {
        PyObject *tmp_assign_source_1088;
        tmp_assign_source_1088 = mod_consts[1944];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1945], tmp_assign_source_1088);
    }
    {
        PyObject *tmp_assign_source_1089;
        tmp_assign_source_1089 = mod_consts[1946];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1947], tmp_assign_source_1089);
    }
    {
        PyObject *tmp_assign_source_1090;
        tmp_assign_source_1090 = mod_consts[1948];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1949], tmp_assign_source_1090);
    }
    {
        PyObject *tmp_assign_source_1091;
        tmp_assign_source_1091 = mod_consts[1950];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1951], tmp_assign_source_1091);
    }
    {
        PyObject *tmp_assign_source_1092;
        tmp_assign_source_1092 = mod_consts[1952];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1953], tmp_assign_source_1092);
    }
    {
        PyObject *tmp_assign_source_1093;
        tmp_assign_source_1093 = mod_consts[1954];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1955], tmp_assign_source_1093);
    }
    {
        PyObject *tmp_assign_source_1094;
        tmp_assign_source_1094 = mod_consts[1956];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1957], tmp_assign_source_1094);
    }
    {
        PyObject *tmp_assign_source_1095;
        tmp_assign_source_1095 = mod_consts[1958];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1959], tmp_assign_source_1095);
    }
    {
        PyObject *tmp_assign_source_1096;
        tmp_assign_source_1096 = mod_consts[1960];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1961], tmp_assign_source_1096);
    }
    {
        PyObject *tmp_assign_source_1097;
        tmp_assign_source_1097 = mod_consts[1962];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1963], tmp_assign_source_1097);
    }
    {
        PyObject *tmp_assign_source_1098;
        tmp_assign_source_1098 = mod_consts[1964];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1965], tmp_assign_source_1098);
    }
    {
        PyObject *tmp_assign_source_1099;
        tmp_assign_source_1099 = mod_consts[1966];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1967], tmp_assign_source_1099);
    }
    {
        PyObject *tmp_assign_source_1100;
        tmp_assign_source_1100 = mod_consts[1968];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1969], tmp_assign_source_1100);
    }
    {
        PyObject *tmp_assign_source_1101;
        tmp_assign_source_1101 = mod_consts[1970];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1971], tmp_assign_source_1101);
    }
    {
        PyObject *tmp_assign_source_1102;
        tmp_assign_source_1102 = mod_consts[1972];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1973], tmp_assign_source_1102);
    }
    {
        PyObject *tmp_assign_source_1103;
        tmp_assign_source_1103 = mod_consts[1974];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1975], tmp_assign_source_1103);
    }
    {
        PyObject *tmp_assign_source_1104;
        tmp_assign_source_1104 = mod_consts[1976];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1977], tmp_assign_source_1104);
    }
    {
        PyObject *tmp_assign_source_1105;
        tmp_assign_source_1105 = mod_consts[1978];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1979], tmp_assign_source_1105);
    }
    {
        PyObject *tmp_assign_source_1106;
        tmp_assign_source_1106 = mod_consts[1980];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1981], tmp_assign_source_1106);
    }
    {
        PyObject *tmp_assign_source_1107;
        tmp_assign_source_1107 = mod_consts[1982];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1983], tmp_assign_source_1107);
    }
    {
        PyObject *tmp_assign_source_1108;
        tmp_assign_source_1108 = mod_consts[1984];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1985], tmp_assign_source_1108);
    }
    {
        PyObject *tmp_assign_source_1109;
        tmp_assign_source_1109 = mod_consts[1986];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1987], tmp_assign_source_1109);
    }
    {
        PyObject *tmp_assign_source_1110;
        tmp_assign_source_1110 = mod_consts[1988];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1989], tmp_assign_source_1110);
    }
    {
        PyObject *tmp_assign_source_1111;
        tmp_assign_source_1111 = mod_consts[1990];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1991], tmp_assign_source_1111);
    }
    {
        PyObject *tmp_assign_source_1112;
        tmp_assign_source_1112 = mod_consts[1992];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1993], tmp_assign_source_1112);
    }
    {
        PyObject *tmp_assign_source_1113;
        tmp_assign_source_1113 = mod_consts[1994];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1995], tmp_assign_source_1113);
    }
    {
        PyObject *tmp_assign_source_1114;
        tmp_assign_source_1114 = mod_consts[1996];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1997], tmp_assign_source_1114);
    }
    {
        PyObject *tmp_assign_source_1115;
        tmp_assign_source_1115 = mod_consts[1998];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[1999], tmp_assign_source_1115);
    }
    {
        PyObject *tmp_assign_source_1116;
        tmp_assign_source_1116 = mod_consts[2000];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2001], tmp_assign_source_1116);
    }
    {
        PyObject *tmp_assign_source_1117;
        tmp_assign_source_1117 = mod_consts[2002];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2003], tmp_assign_source_1117);
    }
    {
        PyObject *tmp_assign_source_1118;
        tmp_assign_source_1118 = mod_consts[2004];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2005], tmp_assign_source_1118);
    }
    {
        PyObject *tmp_assign_source_1119;
        tmp_assign_source_1119 = mod_consts[2006];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2007], tmp_assign_source_1119);
    }
    {
        PyObject *tmp_assign_source_1120;
        tmp_assign_source_1120 = mod_consts[2008];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2009], tmp_assign_source_1120);
    }
    {
        PyObject *tmp_assign_source_1121;
        tmp_assign_source_1121 = mod_consts[2010];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2011], tmp_assign_source_1121);
    }
    {
        PyObject *tmp_assign_source_1122;
        tmp_assign_source_1122 = mod_consts[2012];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2013], tmp_assign_source_1122);
    }
    {
        PyObject *tmp_assign_source_1123;
        tmp_assign_source_1123 = mod_consts[2014];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2015], tmp_assign_source_1123);
    }
    {
        PyObject *tmp_assign_source_1124;
        tmp_assign_source_1124 = mod_consts[2016];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2017], tmp_assign_source_1124);
    }
    {
        PyObject *tmp_assign_source_1125;
        tmp_assign_source_1125 = mod_consts[2018];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2019], tmp_assign_source_1125);
    }
    {
        PyObject *tmp_assign_source_1126;
        tmp_assign_source_1126 = mod_consts[2020];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2021], tmp_assign_source_1126);
    }
    {
        PyObject *tmp_assign_source_1127;
        tmp_assign_source_1127 = mod_consts[2022];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2023], tmp_assign_source_1127);
    }
    {
        PyObject *tmp_assign_source_1128;
        tmp_assign_source_1128 = mod_consts[2024];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2025], tmp_assign_source_1128);
    }
    {
        PyObject *tmp_assign_source_1129;
        tmp_assign_source_1129 = mod_consts[2026];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2027], tmp_assign_source_1129);
    }
    {
        PyObject *tmp_assign_source_1130;
        tmp_assign_source_1130 = mod_consts[2028];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2029], tmp_assign_source_1130);
    }
    {
        PyObject *tmp_assign_source_1131;
        tmp_assign_source_1131 = mod_consts[2030];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2031], tmp_assign_source_1131);
    }
    {
        PyObject *tmp_assign_source_1132;
        tmp_assign_source_1132 = mod_consts[2032];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2033], tmp_assign_source_1132);
    }
    {
        PyObject *tmp_assign_source_1133;
        tmp_assign_source_1133 = mod_consts[2034];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2035], tmp_assign_source_1133);
    }
    {
        PyObject *tmp_assign_source_1134;
        tmp_assign_source_1134 = mod_consts[2036];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2037], tmp_assign_source_1134);
    }
    {
        PyObject *tmp_assign_source_1135;
        tmp_assign_source_1135 = mod_consts[2038];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2039], tmp_assign_source_1135);
    }
    {
        PyObject *tmp_assign_source_1136;
        tmp_assign_source_1136 = mod_consts[2040];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2041], tmp_assign_source_1136);
    }
    {
        PyObject *tmp_assign_source_1137;
        tmp_assign_source_1137 = mod_consts[2042];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2043], tmp_assign_source_1137);
    }
    {
        PyObject *tmp_assign_source_1138;
        tmp_assign_source_1138 = mod_consts[2044];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2045], tmp_assign_source_1138);
    }
    {
        PyObject *tmp_assign_source_1139;
        tmp_assign_source_1139 = mod_consts[2046];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2047], tmp_assign_source_1139);
    }
    {
        PyObject *tmp_assign_source_1140;
        tmp_assign_source_1140 = mod_consts[2048];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2049], tmp_assign_source_1140);
    }
    {
        PyObject *tmp_assign_source_1141;
        tmp_assign_source_1141 = mod_consts[2050];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2051], tmp_assign_source_1141);
    }
    {
        PyObject *tmp_assign_source_1142;
        tmp_assign_source_1142 = mod_consts[2052];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2053], tmp_assign_source_1142);
    }
    {
        PyObject *tmp_assign_source_1143;
        tmp_assign_source_1143 = mod_consts[2054];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2055], tmp_assign_source_1143);
    }
    {
        PyObject *tmp_assign_source_1144;
        tmp_assign_source_1144 = mod_consts[2056];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2057], tmp_assign_source_1144);
    }
    {
        PyObject *tmp_assign_source_1145;
        tmp_assign_source_1145 = mod_consts[2058];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2059], tmp_assign_source_1145);
    }
    {
        PyObject *tmp_assign_source_1146;
        tmp_assign_source_1146 = mod_consts[2060];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2061], tmp_assign_source_1146);
    }
    {
        PyObject *tmp_assign_source_1147;
        tmp_assign_source_1147 = mod_consts[2062];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2063], tmp_assign_source_1147);
    }
    {
        PyObject *tmp_assign_source_1148;
        tmp_assign_source_1148 = mod_consts[2064];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2065], tmp_assign_source_1148);
    }
    {
        PyObject *tmp_assign_source_1149;
        tmp_assign_source_1149 = mod_consts[2066];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2067], tmp_assign_source_1149);
    }
    {
        PyObject *tmp_assign_source_1150;
        tmp_assign_source_1150 = mod_consts[2068];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2069], tmp_assign_source_1150);
    }
    {
        PyObject *tmp_assign_source_1151;
        tmp_assign_source_1151 = mod_consts[2070];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2071], tmp_assign_source_1151);
    }
    {
        PyObject *tmp_assign_source_1152;
        tmp_assign_source_1152 = mod_consts[2072];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2073], tmp_assign_source_1152);
    }
    {
        PyObject *tmp_assign_source_1153;
        tmp_assign_source_1153 = mod_consts[2074];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2075], tmp_assign_source_1153);
    }
    {
        PyObject *tmp_assign_source_1154;
        tmp_assign_source_1154 = mod_consts[2076];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2077], tmp_assign_source_1154);
    }
    {
        PyObject *tmp_assign_source_1155;
        tmp_assign_source_1155 = mod_consts[2078];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2079], tmp_assign_source_1155);
    }
    {
        PyObject *tmp_assign_source_1156;
        tmp_assign_source_1156 = mod_consts[2080];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2081], tmp_assign_source_1156);
    }
    {
        PyObject *tmp_assign_source_1157;
        tmp_assign_source_1157 = mod_consts[2082];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2083], tmp_assign_source_1157);
    }
    {
        PyObject *tmp_assign_source_1158;
        tmp_assign_source_1158 = mod_consts[2084];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2085], tmp_assign_source_1158);
    }
    {
        PyObject *tmp_assign_source_1159;
        tmp_assign_source_1159 = mod_consts[2086];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2087], tmp_assign_source_1159);
    }
    {
        PyObject *tmp_assign_source_1160;
        tmp_assign_source_1160 = mod_consts[2088];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2089], tmp_assign_source_1160);
    }
    {
        PyObject *tmp_assign_source_1161;
        tmp_assign_source_1161 = mod_consts[2090];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2091], tmp_assign_source_1161);
    }
    {
        PyObject *tmp_assign_source_1162;
        tmp_assign_source_1162 = mod_consts[2092];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2093], tmp_assign_source_1162);
    }
    {
        PyObject *tmp_assign_source_1163;
        tmp_assign_source_1163 = mod_consts[2094];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2095], tmp_assign_source_1163);
    }
    {
        PyObject *tmp_assign_source_1164;
        tmp_assign_source_1164 = mod_consts[2096];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2097], tmp_assign_source_1164);
    }
    {
        PyObject *tmp_assign_source_1165;
        tmp_assign_source_1165 = mod_consts[2098];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2099], tmp_assign_source_1165);
    }
    {
        PyObject *tmp_assign_source_1166;
        tmp_assign_source_1166 = mod_consts[2100];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2101], tmp_assign_source_1166);
    }
    {
        PyObject *tmp_assign_source_1167;
        tmp_assign_source_1167 = mod_consts[2102];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2103], tmp_assign_source_1167);
    }
    {
        PyObject *tmp_assign_source_1168;
        tmp_assign_source_1168 = mod_consts[2104];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2105], tmp_assign_source_1168);
    }
    {
        PyObject *tmp_assign_source_1169;
        tmp_assign_source_1169 = mod_consts[2106];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2107], tmp_assign_source_1169);
    }
    {
        PyObject *tmp_assign_source_1170;
        tmp_assign_source_1170 = mod_consts[2108];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2109], tmp_assign_source_1170);
    }
    {
        PyObject *tmp_assign_source_1171;
        tmp_assign_source_1171 = mod_consts[2110];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2111], tmp_assign_source_1171);
    }
    {
        PyObject *tmp_assign_source_1172;
        tmp_assign_source_1172 = mod_consts[2112];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2113], tmp_assign_source_1172);
    }
    {
        PyObject *tmp_assign_source_1173;
        tmp_assign_source_1173 = mod_consts[2114];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2115], tmp_assign_source_1173);
    }
    {
        PyObject *tmp_assign_source_1174;
        tmp_assign_source_1174 = mod_consts[2116];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2117], tmp_assign_source_1174);
    }
    {
        PyObject *tmp_assign_source_1175;
        tmp_assign_source_1175 = mod_consts[2118];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2119], tmp_assign_source_1175);
    }
    {
        PyObject *tmp_assign_source_1176;
        tmp_assign_source_1176 = mod_consts[2120];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2121], tmp_assign_source_1176);
    }
    {
        PyObject *tmp_assign_source_1177;
        tmp_assign_source_1177 = mod_consts[2122];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2123], tmp_assign_source_1177);
    }
    {
        PyObject *tmp_assign_source_1178;
        tmp_assign_source_1178 = mod_consts[2124];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2125], tmp_assign_source_1178);
    }
    {
        PyObject *tmp_assign_source_1179;
        tmp_assign_source_1179 = mod_consts[2126];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2127], tmp_assign_source_1179);
    }
    {
        PyObject *tmp_assign_source_1180;
        tmp_assign_source_1180 = mod_consts[2128];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2129], tmp_assign_source_1180);
    }
    {
        PyObject *tmp_assign_source_1181;
        tmp_assign_source_1181 = mod_consts[2130];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2131], tmp_assign_source_1181);
    }
    {
        PyObject *tmp_assign_source_1182;
        tmp_assign_source_1182 = mod_consts[2132];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2133], tmp_assign_source_1182);
    }
    {
        PyObject *tmp_assign_source_1183;
        tmp_assign_source_1183 = mod_consts[2134];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2135], tmp_assign_source_1183);
    }
    {
        PyObject *tmp_assign_source_1184;
        tmp_assign_source_1184 = mod_consts[2136];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2137], tmp_assign_source_1184);
    }
    {
        PyObject *tmp_assign_source_1185;
        tmp_assign_source_1185 = mod_consts[2138];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2139], tmp_assign_source_1185);
    }
    {
        PyObject *tmp_assign_source_1186;
        tmp_assign_source_1186 = mod_consts[2140];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2141], tmp_assign_source_1186);
    }
    {
        PyObject *tmp_assign_source_1187;
        tmp_assign_source_1187 = mod_consts[2142];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2143], tmp_assign_source_1187);
    }
    {
        PyObject *tmp_assign_source_1188;
        tmp_assign_source_1188 = mod_consts[2144];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2145], tmp_assign_source_1188);
    }
    {
        PyObject *tmp_assign_source_1189;
        tmp_assign_source_1189 = mod_consts[2146];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2147], tmp_assign_source_1189);
    }
    {
        PyObject *tmp_assign_source_1190;
        tmp_assign_source_1190 = mod_consts[2148];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2149], tmp_assign_source_1190);
    }
    {
        PyObject *tmp_assign_source_1191;
        tmp_assign_source_1191 = mod_consts[2150];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2151], tmp_assign_source_1191);
    }
    {
        PyObject *tmp_assign_source_1192;
        tmp_assign_source_1192 = mod_consts[2152];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2153], tmp_assign_source_1192);
    }
    {
        PyObject *tmp_assign_source_1193;
        tmp_assign_source_1193 = mod_consts[2154];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2155], tmp_assign_source_1193);
    }
    {
        PyObject *tmp_assign_source_1194;
        tmp_assign_source_1194 = mod_consts[2156];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2157], tmp_assign_source_1194);
    }
    {
        PyObject *tmp_assign_source_1195;
        tmp_assign_source_1195 = mod_consts[2158];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2159], tmp_assign_source_1195);
    }
    {
        PyObject *tmp_assign_source_1196;
        tmp_assign_source_1196 = mod_consts[2160];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2161], tmp_assign_source_1196);
    }
    {
        PyObject *tmp_assign_source_1197;
        tmp_assign_source_1197 = mod_consts[2162];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2163], tmp_assign_source_1197);
    }
    {
        PyObject *tmp_assign_source_1198;
        tmp_assign_source_1198 = mod_consts[2164];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2165], tmp_assign_source_1198);
    }
    {
        PyObject *tmp_assign_source_1199;
        tmp_assign_source_1199 = mod_consts[2166];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2167], tmp_assign_source_1199);
    }
    {
        PyObject *tmp_assign_source_1200;
        tmp_assign_source_1200 = mod_consts[2168];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2169], tmp_assign_source_1200);
    }
    {
        PyObject *tmp_assign_source_1201;
        tmp_assign_source_1201 = mod_consts[2170];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2171], tmp_assign_source_1201);
    }
    {
        PyObject *tmp_assign_source_1202;
        tmp_assign_source_1202 = mod_consts[2172];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2173], tmp_assign_source_1202);
    }
    {
        PyObject *tmp_assign_source_1203;
        tmp_assign_source_1203 = mod_consts[2174];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2175], tmp_assign_source_1203);
    }
    {
        PyObject *tmp_assign_source_1204;
        tmp_assign_source_1204 = mod_consts[2176];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2177], tmp_assign_source_1204);
    }
    {
        PyObject *tmp_assign_source_1205;
        tmp_assign_source_1205 = mod_consts[2178];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2179], tmp_assign_source_1205);
    }
    {
        PyObject *tmp_assign_source_1206;
        tmp_assign_source_1206 = mod_consts[2180];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2181], tmp_assign_source_1206);
    }
    {
        PyObject *tmp_assign_source_1207;
        tmp_assign_source_1207 = mod_consts[2182];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2183], tmp_assign_source_1207);
    }
    {
        PyObject *tmp_assign_source_1208;
        tmp_assign_source_1208 = mod_consts[2184];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2185], tmp_assign_source_1208);
    }
    {
        PyObject *tmp_assign_source_1209;
        tmp_assign_source_1209 = mod_consts[2186];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2187], tmp_assign_source_1209);
    }
    {
        PyObject *tmp_assign_source_1210;
        tmp_assign_source_1210 = mod_consts[2188];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2189], tmp_assign_source_1210);
    }
    {
        PyObject *tmp_assign_source_1211;
        tmp_assign_source_1211 = mod_consts[2190];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2191], tmp_assign_source_1211);
    }
    {
        PyObject *tmp_assign_source_1212;
        tmp_assign_source_1212 = mod_consts[2192];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2193], tmp_assign_source_1212);
    }
    {
        PyObject *tmp_assign_source_1213;
        tmp_assign_source_1213 = mod_consts[2194];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2195], tmp_assign_source_1213);
    }
    {
        PyObject *tmp_assign_source_1214;
        tmp_assign_source_1214 = mod_consts[2196];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2197], tmp_assign_source_1214);
    }
    {
        PyObject *tmp_assign_source_1215;
        tmp_assign_source_1215 = mod_consts[2198];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2199], tmp_assign_source_1215);
    }
    {
        PyObject *tmp_assign_source_1216;
        tmp_assign_source_1216 = mod_consts[2200];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2201], tmp_assign_source_1216);
    }
    {
        PyObject *tmp_assign_source_1217;
        tmp_assign_source_1217 = mod_consts[2202];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2203], tmp_assign_source_1217);
    }
    {
        PyObject *tmp_assign_source_1218;
        tmp_assign_source_1218 = mod_consts[2204];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2205], tmp_assign_source_1218);
    }
    {
        PyObject *tmp_assign_source_1219;
        tmp_assign_source_1219 = mod_consts[2206];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2207], tmp_assign_source_1219);
    }
    {
        PyObject *tmp_assign_source_1220;
        tmp_assign_source_1220 = mod_consts[2208];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2209], tmp_assign_source_1220);
    }
    {
        PyObject *tmp_assign_source_1221;
        tmp_assign_source_1221 = mod_consts[2210];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2211], tmp_assign_source_1221);
    }
    {
        PyObject *tmp_assign_source_1222;
        tmp_assign_source_1222 = mod_consts[2212];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2213], tmp_assign_source_1222);
    }
    {
        PyObject *tmp_assign_source_1223;
        tmp_assign_source_1223 = mod_consts[2214];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2215], tmp_assign_source_1223);
    }
    {
        PyObject *tmp_assign_source_1224;
        tmp_assign_source_1224 = mod_consts[2216];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2217], tmp_assign_source_1224);
    }
    {
        PyObject *tmp_assign_source_1225;
        tmp_assign_source_1225 = mod_consts[2218];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2219], tmp_assign_source_1225);
    }
    {
        PyObject *tmp_assign_source_1226;
        tmp_assign_source_1226 = mod_consts[2220];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2221], tmp_assign_source_1226);
    }
    {
        PyObject *tmp_assign_source_1227;
        tmp_assign_source_1227 = mod_consts[2222];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2223], tmp_assign_source_1227);
    }
    {
        PyObject *tmp_assign_source_1228;
        tmp_assign_source_1228 = mod_consts[2224];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2225], tmp_assign_source_1228);
    }
    {
        PyObject *tmp_assign_source_1229;
        tmp_assign_source_1229 = mod_consts[2226];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2227], tmp_assign_source_1229);
    }
    {
        PyObject *tmp_assign_source_1230;
        tmp_assign_source_1230 = mod_consts[2228];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2229], tmp_assign_source_1230);
    }
    {
        PyObject *tmp_assign_source_1231;
        tmp_assign_source_1231 = mod_consts[2230];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2231], tmp_assign_source_1231);
    }
    {
        PyObject *tmp_assign_source_1232;
        tmp_assign_source_1232 = mod_consts[2232];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2233], tmp_assign_source_1232);
    }
    {
        PyObject *tmp_assign_source_1233;
        tmp_assign_source_1233 = mod_consts[2234];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2235], tmp_assign_source_1233);
    }
    {
        PyObject *tmp_assign_source_1234;
        tmp_assign_source_1234 = mod_consts[2236];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2237], tmp_assign_source_1234);
    }
    {
        PyObject *tmp_assign_source_1235;
        tmp_assign_source_1235 = mod_consts[2238];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2239], tmp_assign_source_1235);
    }
    {
        PyObject *tmp_assign_source_1236;
        tmp_assign_source_1236 = mod_consts[2240];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2241], tmp_assign_source_1236);
    }
    {
        PyObject *tmp_assign_source_1237;
        tmp_assign_source_1237 = mod_consts[2242];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2243], tmp_assign_source_1237);
    }
    {
        PyObject *tmp_assign_source_1238;
        tmp_assign_source_1238 = mod_consts[2244];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2245], tmp_assign_source_1238);
    }
    {
        PyObject *tmp_assign_source_1239;
        tmp_assign_source_1239 = mod_consts[2246];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2247], tmp_assign_source_1239);
    }
    {
        PyObject *tmp_assign_source_1240;
        tmp_assign_source_1240 = mod_consts[2248];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2249], tmp_assign_source_1240);
    }
    {
        PyObject *tmp_assign_source_1241;
        tmp_assign_source_1241 = mod_consts[2250];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2251], tmp_assign_source_1241);
    }
    {
        PyObject *tmp_assign_source_1242;
        tmp_assign_source_1242 = mod_consts[2252];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2253], tmp_assign_source_1242);
    }
    {
        PyObject *tmp_assign_source_1243;
        tmp_assign_source_1243 = mod_consts[2254];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2255], tmp_assign_source_1243);
    }
    {
        PyObject *tmp_assign_source_1244;
        tmp_assign_source_1244 = mod_consts[2256];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2257], tmp_assign_source_1244);
    }
    {
        PyObject *tmp_assign_source_1245;
        tmp_assign_source_1245 = mod_consts[2258];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2259], tmp_assign_source_1245);
    }
    {
        PyObject *tmp_assign_source_1246;
        tmp_assign_source_1246 = mod_consts[2260];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2261], tmp_assign_source_1246);
    }
    {
        PyObject *tmp_assign_source_1247;
        tmp_assign_source_1247 = mod_consts[2262];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2263], tmp_assign_source_1247);
    }
    {
        PyObject *tmp_assign_source_1248;
        tmp_assign_source_1248 = mod_consts[2264];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2265], tmp_assign_source_1248);
    }
    {
        PyObject *tmp_assign_source_1249;
        tmp_assign_source_1249 = mod_consts[2266];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2267], tmp_assign_source_1249);
    }
    {
        PyObject *tmp_assign_source_1250;
        tmp_assign_source_1250 = mod_consts[2268];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2269], tmp_assign_source_1250);
    }
    {
        PyObject *tmp_assign_source_1251;
        tmp_assign_source_1251 = mod_consts[2270];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2271], tmp_assign_source_1251);
    }
    {
        PyObject *tmp_assign_source_1252;
        tmp_assign_source_1252 = mod_consts[2272];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2273], tmp_assign_source_1252);
    }
    {
        PyObject *tmp_assign_source_1253;
        tmp_assign_source_1253 = mod_consts[2274];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2275], tmp_assign_source_1253);
    }
    {
        PyObject *tmp_assign_source_1254;
        tmp_assign_source_1254 = mod_consts[2276];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2277], tmp_assign_source_1254);
    }
    {
        PyObject *tmp_assign_source_1255;
        tmp_assign_source_1255 = mod_consts[2278];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2279], tmp_assign_source_1255);
    }
    {
        PyObject *tmp_assign_source_1256;
        tmp_assign_source_1256 = mod_consts[2280];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2281], tmp_assign_source_1256);
    }
    {
        PyObject *tmp_assign_source_1257;
        tmp_assign_source_1257 = mod_consts[2282];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2283], tmp_assign_source_1257);
    }
    {
        PyObject *tmp_assign_source_1258;
        tmp_assign_source_1258 = mod_consts[2284];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2285], tmp_assign_source_1258);
    }
    {
        PyObject *tmp_assign_source_1259;
        tmp_assign_source_1259 = mod_consts[2286];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2287], tmp_assign_source_1259);
    }
    {
        PyObject *tmp_assign_source_1260;
        tmp_assign_source_1260 = mod_consts[2288];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2289], tmp_assign_source_1260);
    }
    {
        PyObject *tmp_assign_source_1261;
        tmp_assign_source_1261 = mod_consts[2290];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2291], tmp_assign_source_1261);
    }
    {
        PyObject *tmp_assign_source_1262;
        tmp_assign_source_1262 = mod_consts[2292];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2293], tmp_assign_source_1262);
    }
    {
        PyObject *tmp_assign_source_1263;
        tmp_assign_source_1263 = mod_consts[2294];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2295], tmp_assign_source_1263);
    }
    {
        PyObject *tmp_assign_source_1264;
        tmp_assign_source_1264 = mod_consts[2296];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2297], tmp_assign_source_1264);
    }
    {
        PyObject *tmp_assign_source_1265;
        tmp_assign_source_1265 = mod_consts[2298];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2299], tmp_assign_source_1265);
    }
    {
        PyObject *tmp_assign_source_1266;
        tmp_assign_source_1266 = mod_consts[2300];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2301], tmp_assign_source_1266);
    }
    {
        PyObject *tmp_assign_source_1267;
        tmp_assign_source_1267 = mod_consts[2302];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2303], tmp_assign_source_1267);
    }
    {
        PyObject *tmp_assign_source_1268;
        tmp_assign_source_1268 = mod_consts[2304];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2305], tmp_assign_source_1268);
    }
    {
        PyObject *tmp_assign_source_1269;
        tmp_assign_source_1269 = mod_consts[2306];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2307], tmp_assign_source_1269);
    }
    {
        PyObject *tmp_assign_source_1270;
        tmp_assign_source_1270 = mod_consts[2308];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2309], tmp_assign_source_1270);
    }
    {
        PyObject *tmp_assign_source_1271;
        tmp_assign_source_1271 = mod_consts[2310];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2311], tmp_assign_source_1271);
    }
    {
        PyObject *tmp_assign_source_1272;
        tmp_assign_source_1272 = mod_consts[2312];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2313], tmp_assign_source_1272);
    }
    {
        PyObject *tmp_assign_source_1273;
        tmp_assign_source_1273 = mod_consts[2314];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2315], tmp_assign_source_1273);
    }
    {
        PyObject *tmp_assign_source_1274;
        tmp_assign_source_1274 = mod_consts[2316];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2317], tmp_assign_source_1274);
    }
    {
        PyObject *tmp_assign_source_1275;
        tmp_assign_source_1275 = mod_consts[2318];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2319], tmp_assign_source_1275);
    }
    {
        PyObject *tmp_assign_source_1276;
        tmp_assign_source_1276 = mod_consts[2320];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2321], tmp_assign_source_1276);
    }
    {
        PyObject *tmp_assign_source_1277;
        tmp_assign_source_1277 = mod_consts[2322];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2323], tmp_assign_source_1277);
    }
    {
        PyObject *tmp_assign_source_1278;
        tmp_assign_source_1278 = mod_consts[2324];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2325], tmp_assign_source_1278);
    }
    {
        PyObject *tmp_assign_source_1279;
        tmp_assign_source_1279 = mod_consts[2326];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2327], tmp_assign_source_1279);
    }
    {
        PyObject *tmp_assign_source_1280;
        tmp_assign_source_1280 = mod_consts[2328];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2329], tmp_assign_source_1280);
    }
    {
        PyObject *tmp_assign_source_1281;
        tmp_assign_source_1281 = mod_consts[2330];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2331], tmp_assign_source_1281);
    }
    {
        PyObject *tmp_assign_source_1282;
        tmp_assign_source_1282 = mod_consts[2332];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2333], tmp_assign_source_1282);
    }
    {
        PyObject *tmp_assign_source_1283;
        tmp_assign_source_1283 = mod_consts[2334];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2335], tmp_assign_source_1283);
    }
    {
        PyObject *tmp_assign_source_1284;
        tmp_assign_source_1284 = mod_consts[2336];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2337], tmp_assign_source_1284);
    }
    {
        PyObject *tmp_assign_source_1285;
        tmp_assign_source_1285 = mod_consts[2338];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2339], tmp_assign_source_1285);
    }
    {
        PyObject *tmp_assign_source_1286;
        tmp_assign_source_1286 = mod_consts[2340];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2341], tmp_assign_source_1286);
    }
    {
        PyObject *tmp_assign_source_1287;
        tmp_assign_source_1287 = mod_consts[2342];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2343], tmp_assign_source_1287);
    }
    {
        PyObject *tmp_assign_source_1288;
        tmp_assign_source_1288 = mod_consts[2344];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2345], tmp_assign_source_1288);
    }
    {
        PyObject *tmp_assign_source_1289;
        tmp_assign_source_1289 = mod_consts[2346];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2347], tmp_assign_source_1289);
    }
    {
        PyObject *tmp_assign_source_1290;
        tmp_assign_source_1290 = mod_consts[2348];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2349], tmp_assign_source_1290);
    }
    {
        PyObject *tmp_assign_source_1291;
        tmp_assign_source_1291 = mod_consts[2350];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2351], tmp_assign_source_1291);
    }
    {
        PyObject *tmp_assign_source_1292;
        tmp_assign_source_1292 = mod_consts[2352];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2353], tmp_assign_source_1292);
    }
    {
        PyObject *tmp_assign_source_1293;
        tmp_assign_source_1293 = mod_consts[2354];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2355], tmp_assign_source_1293);
    }
    {
        PyObject *tmp_assign_source_1294;
        tmp_assign_source_1294 = mod_consts[2356];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2357], tmp_assign_source_1294);
    }
    {
        PyObject *tmp_assign_source_1295;
        tmp_assign_source_1295 = mod_consts[2358];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2359], tmp_assign_source_1295);
    }
    {
        PyObject *tmp_assign_source_1296;
        tmp_assign_source_1296 = mod_consts[2360];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2361], tmp_assign_source_1296);
    }
    {
        PyObject *tmp_assign_source_1297;
        tmp_assign_source_1297 = mod_consts[2362];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2363], tmp_assign_source_1297);
    }
    {
        PyObject *tmp_assign_source_1298;
        tmp_assign_source_1298 = mod_consts[2364];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2365], tmp_assign_source_1298);
    }
    {
        PyObject *tmp_assign_source_1299;
        tmp_assign_source_1299 = mod_consts[2366];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2367], tmp_assign_source_1299);
    }
    {
        PyObject *tmp_assign_source_1300;
        tmp_assign_source_1300 = mod_consts[2368];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2369], tmp_assign_source_1300);
    }
    {
        PyObject *tmp_assign_source_1301;
        tmp_assign_source_1301 = mod_consts[2370];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2371], tmp_assign_source_1301);
    }
    {
        PyObject *tmp_assign_source_1302;
        tmp_assign_source_1302 = mod_consts[2372];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2373], tmp_assign_source_1302);
    }
    {
        PyObject *tmp_assign_source_1303;
        tmp_assign_source_1303 = mod_consts[2374];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2375], tmp_assign_source_1303);
    }
    {
        PyObject *tmp_assign_source_1304;
        tmp_assign_source_1304 = mod_consts[2376];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2377], tmp_assign_source_1304);
    }
    {
        PyObject *tmp_assign_source_1305;
        tmp_assign_source_1305 = mod_consts[2378];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2379], tmp_assign_source_1305);
    }
    {
        PyObject *tmp_assign_source_1306;
        tmp_assign_source_1306 = mod_consts[2380];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2381], tmp_assign_source_1306);
    }
    {
        PyObject *tmp_assign_source_1307;
        tmp_assign_source_1307 = mod_consts[2382];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2383], tmp_assign_source_1307);
    }
    {
        PyObject *tmp_assign_source_1308;
        tmp_assign_source_1308 = mod_consts[2384];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2385], tmp_assign_source_1308);
    }
    {
        PyObject *tmp_assign_source_1309;
        tmp_assign_source_1309 = mod_consts[2386];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2387], tmp_assign_source_1309);
    }
    {
        PyObject *tmp_assign_source_1310;
        tmp_assign_source_1310 = mod_consts[2388];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2389], tmp_assign_source_1310);
    }
    {
        PyObject *tmp_assign_source_1311;
        tmp_assign_source_1311 = mod_consts[2390];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2391], tmp_assign_source_1311);
    }
    {
        PyObject *tmp_assign_source_1312;
        tmp_assign_source_1312 = mod_consts[2392];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2393], tmp_assign_source_1312);
    }
    {
        PyObject *tmp_assign_source_1313;
        tmp_assign_source_1313 = mod_consts[2394];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2395], tmp_assign_source_1313);
    }
    {
        PyObject *tmp_assign_source_1314;
        tmp_assign_source_1314 = mod_consts[2396];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2397], tmp_assign_source_1314);
    }
    {
        PyObject *tmp_assign_source_1315;
        tmp_assign_source_1315 = mod_consts[2398];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2399], tmp_assign_source_1315);
    }
    {
        PyObject *tmp_assign_source_1316;
        tmp_assign_source_1316 = mod_consts[2400];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2401], tmp_assign_source_1316);
    }
    {
        PyObject *tmp_assign_source_1317;
        tmp_assign_source_1317 = mod_consts[2402];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2403], tmp_assign_source_1317);
    }
    {
        PyObject *tmp_assign_source_1318;
        tmp_assign_source_1318 = mod_consts[2404];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2405], tmp_assign_source_1318);
    }
    {
        PyObject *tmp_assign_source_1319;
        tmp_assign_source_1319 = mod_consts[2406];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2407], tmp_assign_source_1319);
    }
    {
        PyObject *tmp_assign_source_1320;
        tmp_assign_source_1320 = mod_consts[2408];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2409], tmp_assign_source_1320);
    }
    {
        PyObject *tmp_assign_source_1321;
        tmp_assign_source_1321 = mod_consts[2410];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2411], tmp_assign_source_1321);
    }
    {
        PyObject *tmp_assign_source_1322;
        tmp_assign_source_1322 = mod_consts[2412];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2413], tmp_assign_source_1322);
    }
    {
        PyObject *tmp_assign_source_1323;
        tmp_assign_source_1323 = mod_consts[2414];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2415], tmp_assign_source_1323);
    }
    {
        PyObject *tmp_assign_source_1324;
        tmp_assign_source_1324 = mod_consts[2416];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2417], tmp_assign_source_1324);
    }
    {
        PyObject *tmp_assign_source_1325;
        tmp_assign_source_1325 = mod_consts[2418];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2419], tmp_assign_source_1325);
    }
    {
        PyObject *tmp_assign_source_1326;
        tmp_assign_source_1326 = mod_consts[2420];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2421], tmp_assign_source_1326);
    }
    {
        PyObject *tmp_assign_source_1327;
        tmp_assign_source_1327 = mod_consts[2422];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2423], tmp_assign_source_1327);
    }
    {
        PyObject *tmp_assign_source_1328;
        tmp_assign_source_1328 = mod_consts[2424];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2425], tmp_assign_source_1328);
    }
    {
        PyObject *tmp_assign_source_1329;
        tmp_assign_source_1329 = mod_consts[2426];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2427], tmp_assign_source_1329);
    }
    {
        PyObject *tmp_assign_source_1330;
        tmp_assign_source_1330 = mod_consts[2428];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2429], tmp_assign_source_1330);
    }
    {
        PyObject *tmp_assign_source_1331;
        tmp_assign_source_1331 = mod_consts[2430];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2431], tmp_assign_source_1331);
    }
    {
        PyObject *tmp_assign_source_1332;
        tmp_assign_source_1332 = mod_consts[2432];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2433], tmp_assign_source_1332);
    }
    {
        PyObject *tmp_assign_source_1333;
        tmp_assign_source_1333 = mod_consts[2434];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2435], tmp_assign_source_1333);
    }
    {
        PyObject *tmp_assign_source_1334;
        tmp_assign_source_1334 = mod_consts[2436];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2437], tmp_assign_source_1334);
    }
    {
        PyObject *tmp_assign_source_1335;
        tmp_assign_source_1335 = mod_consts[2438];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2439], tmp_assign_source_1335);
    }
    {
        PyObject *tmp_assign_source_1336;
        tmp_assign_source_1336 = mod_consts[2440];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2441], tmp_assign_source_1336);
    }
    {
        PyObject *tmp_assign_source_1337;
        tmp_assign_source_1337 = mod_consts[2442];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2443], tmp_assign_source_1337);
    }
    {
        PyObject *tmp_assign_source_1338;
        tmp_assign_source_1338 = mod_consts[2444];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2445], tmp_assign_source_1338);
    }
    {
        PyObject *tmp_assign_source_1339;
        tmp_assign_source_1339 = mod_consts[2446];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2447], tmp_assign_source_1339);
    }
    {
        PyObject *tmp_assign_source_1340;
        tmp_assign_source_1340 = mod_consts[2448];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2449], tmp_assign_source_1340);
    }
    {
        PyObject *tmp_assign_source_1341;
        tmp_assign_source_1341 = mod_consts[2450];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2451], tmp_assign_source_1341);
    }
    {
        PyObject *tmp_assign_source_1342;
        tmp_assign_source_1342 = mod_consts[2452];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2453], tmp_assign_source_1342);
    }
    {
        PyObject *tmp_assign_source_1343;
        tmp_assign_source_1343 = mod_consts[2454];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2455], tmp_assign_source_1343);
    }
    {
        PyObject *tmp_assign_source_1344;
        tmp_assign_source_1344 = mod_consts[2456];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2457], tmp_assign_source_1344);
    }
    {
        PyObject *tmp_assign_source_1345;
        tmp_assign_source_1345 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2458], tmp_assign_source_1345);
    }
    {
        PyObject *tmp_assign_source_1346;
        tmp_assign_source_1346 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2459], tmp_assign_source_1346);
    }
    {
        PyObject *tmp_assign_source_1347;
        tmp_assign_source_1347 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2460], tmp_assign_source_1347);
    }
    {
        PyObject *tmp_assign_source_1348;
        tmp_assign_source_1348 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2461], tmp_assign_source_1348);
    }
    {
        PyObject *tmp_assign_source_1349;
        tmp_assign_source_1349 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2462], tmp_assign_source_1349);
    }
    {
        PyObject *tmp_assign_source_1350;
        tmp_assign_source_1350 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2463], tmp_assign_source_1350);
    }
    {
        PyObject *tmp_assign_source_1351;
        tmp_assign_source_1351 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2464], tmp_assign_source_1351);
    }
    {
        PyObject *tmp_assign_source_1352;
        tmp_assign_source_1352 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2465], tmp_assign_source_1352);
    }
    {
        PyObject *tmp_assign_source_1353;
        tmp_assign_source_1353 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2466], tmp_assign_source_1353);
    }
    {
        PyObject *tmp_assign_source_1354;
        tmp_assign_source_1354 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2467], tmp_assign_source_1354);
    }
    {
        PyObject *tmp_assign_source_1355;
        tmp_assign_source_1355 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2468], tmp_assign_source_1355);
    }
    {
        PyObject *tmp_assign_source_1356;
        tmp_assign_source_1356 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2469], tmp_assign_source_1356);
    }
    {
        PyObject *tmp_assign_source_1357;
        tmp_assign_source_1357 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2470], tmp_assign_source_1357);
    }
    {
        PyObject *tmp_assign_source_1358;
        tmp_assign_source_1358 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2471], tmp_assign_source_1358);
    }
    {
        PyObject *tmp_assign_source_1359;
        tmp_assign_source_1359 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2472], tmp_assign_source_1359);
    }
    {
        PyObject *tmp_assign_source_1360;
        tmp_assign_source_1360 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2473], tmp_assign_source_1360);
    }
    {
        PyObject *tmp_assign_source_1361;
        tmp_assign_source_1361 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_capstone$ppc_const, (Nuitka_StringObject *)mod_consts[2474], tmp_assign_source_1361);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("capstone.ppc_const", false);

    Py_INCREF(module_capstone$ppc_const);
    return module_capstone$ppc_const;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$ppc_const, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("capstone$ppc_const", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
