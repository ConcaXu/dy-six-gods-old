/* Generated code for Python module 'capstone.sysz_const'
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

/* The "module_capstone$sysz_const" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_capstone$sysz_const;
PyDictObject *moduledict_capstone$sysz_const;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[1439];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[1439];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("capstone.sysz_const"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 1439; i++) {
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
void checkModuleConstants_capstone$sysz_const(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 1439; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_12b9368c5b6e885f7b7c882a4f2e264b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[1436]); CHECK_OBJECT(module_filename_obj);
    codeobj_12b9368c5b6e885f7b7c882a4f2e264b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[1437], mod_consts[1437], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_capstone$sysz_const[] = {

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

    function_impl_code *current = functable_capstone$sysz_const;
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

    if (offset > sizeof(functable_capstone$sysz_const) || offset < 0) {
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
        functable_capstone$sysz_const[offset],
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
        module_capstone$sysz_const,
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
PyObject *modulecode_capstone$sysz_const(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("capstone.sysz_const");

    // Store the module for future use.
    module_capstone$sysz_const = module;

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
        PRINT_STRING("capstone.sysz_const: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("capstone.sysz_const: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcapstone$sysz_const\n");

    moduledict_capstone$sysz_const = MODULE_DICT(module_capstone$sysz_const);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_capstone$sysz_const,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_capstone$sysz_const,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[1438]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_capstone$sysz_const,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$sysz_const,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$sysz_const,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_capstone$sysz_const);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_capstone$sysz_const);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_12b9368c5b6e885f7b7c882a4f2e264b;
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
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_12b9368c5b6e885f7b7c882a4f2e264b = MAKE_MODULE_FRAME(codeobj_12b9368c5b6e885f7b7c882a4f2e264b, module_capstone$sysz_const);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12b9368c5b6e885f7b7c882a4f2e264b);
    assert(Py_REFCNT(frame_12b9368c5b6e885f7b7c882a4f2e264b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[2]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[2]);

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
        exception_tb = MAKE_TRACEBACK(frame_12b9368c5b6e885f7b7c882a4f2e264b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12b9368c5b6e885f7b7c882a4f2e264b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12b9368c5b6e885f7b7c882a4f2e264b, exception_lineno);
    }



    assertFrameObject(frame_12b9368c5b6e885f7b7c882a4f2e264b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[224];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[226];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[280];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[282];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[306];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[312];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[314];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[316];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[326];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[328];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[330];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[332];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[334];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[336];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[338];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[340];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[342];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[344];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[346];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[348];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[350];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[352];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[354];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[356];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[358];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[360];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[362];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[364];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[366];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[368];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[370];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[372];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[374];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[376];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[378];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[382];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[384];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[386];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[388];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[390];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[392];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[394];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[396];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[398];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[400];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[402];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[404];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[406];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[408];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[410];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[416];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[418];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[420];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[422];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[424];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[426];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[428];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[430];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[432];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[434];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[436];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[438];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[440];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[442];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[444];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[446];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[448];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[450];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[452];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[454];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[456];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[458];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[460];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[462];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[463], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[464];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[465], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[466];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[468];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[470];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[472];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[473], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[474];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[476];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[477], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[478];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[480];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[482];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[484];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[485], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[486];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[488];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[490];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[492];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[494];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[496];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[498];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[500];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[502];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[504];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[506];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[508];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[510];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[512];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[514];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[516];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[518];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[520];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[522];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[524];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[526];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[528];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[530];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[532];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[534];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[536];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[538];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[540];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[542];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[544];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[546];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[548];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[550];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[552];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[554];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[556];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[558];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[560];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[562];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[564];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[566];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[568];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[570];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[572];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[574];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[576];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[578];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[580];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[582];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[584];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[585], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[586];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[588];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[589], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[590];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[591], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[592];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[593], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[594];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[596];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[597], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[598];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[600];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[602];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[604];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[606];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[608];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[610];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[612];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[614];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[616];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[618];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[619], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[620];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[621], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[622];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[623], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[624];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[625], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[626];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[627], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[628];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[629], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[630];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[631], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[632];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[633], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[634];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[635], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        tmp_assign_source_347 = mod_consts[636];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        tmp_assign_source_348 = mod_consts[638];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        tmp_assign_source_349 = mod_consts[640];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[641], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        tmp_assign_source_350 = mod_consts[642];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        tmp_assign_source_351 = mod_consts[644];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        tmp_assign_source_352 = mod_consts[646];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        tmp_assign_source_353 = mod_consts[648];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[649], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        tmp_assign_source_354 = mod_consts[650];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[651], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        tmp_assign_source_355 = mod_consts[652];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[653], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        tmp_assign_source_356 = mod_consts[654];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[655], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        tmp_assign_source_357 = mod_consts[656];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[657], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        tmp_assign_source_358 = mod_consts[658];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[659], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        tmp_assign_source_359 = mod_consts[660];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[661], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        tmp_assign_source_360 = mod_consts[662];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[663], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        tmp_assign_source_361 = mod_consts[664];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[665], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        tmp_assign_source_362 = mod_consts[666];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[667], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        tmp_assign_source_363 = mod_consts[668];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[669], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        tmp_assign_source_364 = mod_consts[670];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[671], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        tmp_assign_source_365 = mod_consts[672];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[673], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        tmp_assign_source_366 = mod_consts[674];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[675], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        tmp_assign_source_367 = mod_consts[676];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[677], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        tmp_assign_source_368 = mod_consts[678];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[679], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        tmp_assign_source_369 = mod_consts[680];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[681], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        tmp_assign_source_370 = mod_consts[682];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[683], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        tmp_assign_source_371 = mod_consts[684];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[685], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        tmp_assign_source_372 = mod_consts[686];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[687], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        tmp_assign_source_373 = mod_consts[688];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[689], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        tmp_assign_source_374 = mod_consts[690];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[691], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        tmp_assign_source_375 = mod_consts[692];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[693], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        tmp_assign_source_376 = mod_consts[694];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[695], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        tmp_assign_source_377 = mod_consts[696];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[697], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        tmp_assign_source_378 = mod_consts[698];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[699], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        tmp_assign_source_379 = mod_consts[700];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[701], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        tmp_assign_source_380 = mod_consts[702];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[703], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = mod_consts[704];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[705], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        tmp_assign_source_382 = mod_consts[706];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[707], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        tmp_assign_source_383 = mod_consts[708];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[709], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        tmp_assign_source_384 = mod_consts[710];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[711], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        tmp_assign_source_385 = mod_consts[712];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[713], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        tmp_assign_source_386 = mod_consts[714];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[715], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        tmp_assign_source_387 = mod_consts[716];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[717], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        tmp_assign_source_388 = mod_consts[718];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[719], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        tmp_assign_source_389 = mod_consts[720];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[721], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        tmp_assign_source_390 = mod_consts[722];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[723], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        tmp_assign_source_391 = mod_consts[724];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[725], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        tmp_assign_source_392 = mod_consts[726];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[727], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        tmp_assign_source_393 = mod_consts[728];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[729], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = mod_consts[730];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[731], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        tmp_assign_source_395 = mod_consts[732];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[733], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        tmp_assign_source_396 = mod_consts[734];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[735], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        tmp_assign_source_397 = mod_consts[736];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[737], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        tmp_assign_source_398 = mod_consts[738];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[739], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        tmp_assign_source_399 = mod_consts[740];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[741], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        tmp_assign_source_400 = mod_consts[742];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[743], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        tmp_assign_source_401 = mod_consts[744];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[745], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        tmp_assign_source_402 = mod_consts[746];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[747], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        tmp_assign_source_403 = mod_consts[748];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[749], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        tmp_assign_source_404 = mod_consts[750];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[751], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        tmp_assign_source_405 = mod_consts[752];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[753], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        tmp_assign_source_406 = mod_consts[754];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[755], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        tmp_assign_source_407 = mod_consts[756];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[757], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        tmp_assign_source_408 = mod_consts[758];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[759], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        tmp_assign_source_409 = mod_consts[760];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[761], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        tmp_assign_source_410 = mod_consts[762];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[763], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        tmp_assign_source_411 = mod_consts[764];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[765], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        tmp_assign_source_412 = mod_consts[766];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[767], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        tmp_assign_source_413 = mod_consts[768];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[769], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        tmp_assign_source_414 = mod_consts[770];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[771], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        tmp_assign_source_415 = mod_consts[772];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[773], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        tmp_assign_source_416 = mod_consts[774];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[775], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        tmp_assign_source_417 = mod_consts[776];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[777], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        tmp_assign_source_418 = mod_consts[778];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[779], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        tmp_assign_source_419 = mod_consts[780];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[781], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        tmp_assign_source_420 = mod_consts[782];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[783], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        tmp_assign_source_421 = mod_consts[784];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[785], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        tmp_assign_source_422 = mod_consts[786];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[787], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        tmp_assign_source_423 = mod_consts[788];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[789], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        tmp_assign_source_424 = mod_consts[790];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[791], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        tmp_assign_source_425 = mod_consts[792];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[793], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        tmp_assign_source_426 = mod_consts[794];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[795], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        tmp_assign_source_427 = mod_consts[796];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[797], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        tmp_assign_source_428 = mod_consts[798];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[799], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        tmp_assign_source_429 = mod_consts[800];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[801], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        tmp_assign_source_430 = mod_consts[802];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[803], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        tmp_assign_source_431 = mod_consts[804];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[805], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        tmp_assign_source_432 = mod_consts[806];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[807], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        tmp_assign_source_433 = mod_consts[808];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[809], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        tmp_assign_source_434 = mod_consts[810];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[811], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        tmp_assign_source_435 = mod_consts[812];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[813], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        tmp_assign_source_436 = mod_consts[814];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[815], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        tmp_assign_source_437 = mod_consts[816];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[817], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        tmp_assign_source_438 = mod_consts[818];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[819], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        tmp_assign_source_439 = mod_consts[820];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[821], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        tmp_assign_source_440 = mod_consts[822];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[823], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        tmp_assign_source_441 = mod_consts[824];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[825], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        tmp_assign_source_442 = mod_consts[826];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[827], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        tmp_assign_source_443 = mod_consts[828];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[829], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        tmp_assign_source_444 = mod_consts[830];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[831], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        tmp_assign_source_445 = mod_consts[832];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[833], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        tmp_assign_source_446 = mod_consts[834];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[835], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        tmp_assign_source_447 = mod_consts[836];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[837], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        tmp_assign_source_448 = mod_consts[838];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[839], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        tmp_assign_source_449 = mod_consts[840];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[841], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        tmp_assign_source_450 = mod_consts[842];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[843], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        tmp_assign_source_451 = mod_consts[844];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[845], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        tmp_assign_source_452 = mod_consts[846];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[847], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        tmp_assign_source_453 = mod_consts[848];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[849], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        tmp_assign_source_454 = mod_consts[850];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[851], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        tmp_assign_source_455 = mod_consts[852];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[853], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        tmp_assign_source_456 = mod_consts[854];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[855], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        tmp_assign_source_457 = mod_consts[856];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[857], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        tmp_assign_source_458 = mod_consts[858];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[859], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        tmp_assign_source_459 = mod_consts[860];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[861], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        tmp_assign_source_460 = mod_consts[862];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[863], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        tmp_assign_source_461 = mod_consts[864];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[865], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        tmp_assign_source_462 = mod_consts[866];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[867], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        tmp_assign_source_463 = mod_consts[868];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[869], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        tmp_assign_source_464 = mod_consts[870];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[871], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        tmp_assign_source_465 = mod_consts[872];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[873], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        tmp_assign_source_466 = mod_consts[874];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[875], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        tmp_assign_source_467 = mod_consts[876];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[877], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        tmp_assign_source_468 = mod_consts[878];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[879], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        tmp_assign_source_469 = mod_consts[880];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[881], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        tmp_assign_source_470 = mod_consts[882];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[883], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        tmp_assign_source_471 = mod_consts[884];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[885], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        tmp_assign_source_472 = mod_consts[886];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[887], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        tmp_assign_source_473 = mod_consts[888];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[889], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        tmp_assign_source_474 = mod_consts[890];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[891], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        tmp_assign_source_475 = mod_consts[892];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[893], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        tmp_assign_source_476 = mod_consts[894];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[895], tmp_assign_source_476);
    }
    {
        PyObject *tmp_assign_source_477;
        tmp_assign_source_477 = mod_consts[896];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[897], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        tmp_assign_source_478 = mod_consts[898];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[899], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        tmp_assign_source_479 = mod_consts[900];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[901], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        tmp_assign_source_480 = mod_consts[902];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[903], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        tmp_assign_source_481 = mod_consts[904];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[905], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        tmp_assign_source_482 = mod_consts[906];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[907], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        tmp_assign_source_483 = mod_consts[908];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[909], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        tmp_assign_source_484 = mod_consts[910];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[911], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        tmp_assign_source_485 = mod_consts[912];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[913], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        tmp_assign_source_486 = mod_consts[914];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[915], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        tmp_assign_source_487 = mod_consts[916];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[917], tmp_assign_source_487);
    }
    {
        PyObject *tmp_assign_source_488;
        tmp_assign_source_488 = mod_consts[918];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[919], tmp_assign_source_488);
    }
    {
        PyObject *tmp_assign_source_489;
        tmp_assign_source_489 = mod_consts[920];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[921], tmp_assign_source_489);
    }
    {
        PyObject *tmp_assign_source_490;
        tmp_assign_source_490 = mod_consts[922];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[923], tmp_assign_source_490);
    }
    {
        PyObject *tmp_assign_source_491;
        tmp_assign_source_491 = mod_consts[924];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[925], tmp_assign_source_491);
    }
    {
        PyObject *tmp_assign_source_492;
        tmp_assign_source_492 = mod_consts[926];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[927], tmp_assign_source_492);
    }
    {
        PyObject *tmp_assign_source_493;
        tmp_assign_source_493 = mod_consts[928];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[929], tmp_assign_source_493);
    }
    {
        PyObject *tmp_assign_source_494;
        tmp_assign_source_494 = mod_consts[930];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[931], tmp_assign_source_494);
    }
    {
        PyObject *tmp_assign_source_495;
        tmp_assign_source_495 = mod_consts[932];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[933], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        tmp_assign_source_496 = mod_consts[934];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[935], tmp_assign_source_496);
    }
    {
        PyObject *tmp_assign_source_497;
        tmp_assign_source_497 = mod_consts[936];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[937], tmp_assign_source_497);
    }
    {
        PyObject *tmp_assign_source_498;
        tmp_assign_source_498 = mod_consts[938];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[939], tmp_assign_source_498);
    }
    {
        PyObject *tmp_assign_source_499;
        tmp_assign_source_499 = mod_consts[940];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[941], tmp_assign_source_499);
    }
    {
        PyObject *tmp_assign_source_500;
        tmp_assign_source_500 = mod_consts[942];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[943], tmp_assign_source_500);
    }
    {
        PyObject *tmp_assign_source_501;
        tmp_assign_source_501 = mod_consts[944];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[945], tmp_assign_source_501);
    }
    {
        PyObject *tmp_assign_source_502;
        tmp_assign_source_502 = mod_consts[946];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[947], tmp_assign_source_502);
    }
    {
        PyObject *tmp_assign_source_503;
        tmp_assign_source_503 = mod_consts[948];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[949], tmp_assign_source_503);
    }
    {
        PyObject *tmp_assign_source_504;
        tmp_assign_source_504 = mod_consts[950];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[951], tmp_assign_source_504);
    }
    {
        PyObject *tmp_assign_source_505;
        tmp_assign_source_505 = mod_consts[952];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[953], tmp_assign_source_505);
    }
    {
        PyObject *tmp_assign_source_506;
        tmp_assign_source_506 = mod_consts[954];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[955], tmp_assign_source_506);
    }
    {
        PyObject *tmp_assign_source_507;
        tmp_assign_source_507 = mod_consts[956];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[957], tmp_assign_source_507);
    }
    {
        PyObject *tmp_assign_source_508;
        tmp_assign_source_508 = mod_consts[958];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[959], tmp_assign_source_508);
    }
    {
        PyObject *tmp_assign_source_509;
        tmp_assign_source_509 = mod_consts[960];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[961], tmp_assign_source_509);
    }
    {
        PyObject *tmp_assign_source_510;
        tmp_assign_source_510 = mod_consts[962];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[963], tmp_assign_source_510);
    }
    {
        PyObject *tmp_assign_source_511;
        tmp_assign_source_511 = mod_consts[964];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[965], tmp_assign_source_511);
    }
    {
        PyObject *tmp_assign_source_512;
        tmp_assign_source_512 = mod_consts[966];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[967], tmp_assign_source_512);
    }
    {
        PyObject *tmp_assign_source_513;
        tmp_assign_source_513 = mod_consts[968];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[969], tmp_assign_source_513);
    }
    {
        PyObject *tmp_assign_source_514;
        tmp_assign_source_514 = mod_consts[970];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[971], tmp_assign_source_514);
    }
    {
        PyObject *tmp_assign_source_515;
        tmp_assign_source_515 = mod_consts[972];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[973], tmp_assign_source_515);
    }
    {
        PyObject *tmp_assign_source_516;
        tmp_assign_source_516 = mod_consts[974];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[975], tmp_assign_source_516);
    }
    {
        PyObject *tmp_assign_source_517;
        tmp_assign_source_517 = mod_consts[976];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[977], tmp_assign_source_517);
    }
    {
        PyObject *tmp_assign_source_518;
        tmp_assign_source_518 = mod_consts[978];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[979], tmp_assign_source_518);
    }
    {
        PyObject *tmp_assign_source_519;
        tmp_assign_source_519 = mod_consts[980];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[981], tmp_assign_source_519);
    }
    {
        PyObject *tmp_assign_source_520;
        tmp_assign_source_520 = mod_consts[982];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[983], tmp_assign_source_520);
    }
    {
        PyObject *tmp_assign_source_521;
        tmp_assign_source_521 = mod_consts[984];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[985], tmp_assign_source_521);
    }
    {
        PyObject *tmp_assign_source_522;
        tmp_assign_source_522 = mod_consts[986];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[987], tmp_assign_source_522);
    }
    {
        PyObject *tmp_assign_source_523;
        tmp_assign_source_523 = mod_consts[988];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[989], tmp_assign_source_523);
    }
    {
        PyObject *tmp_assign_source_524;
        tmp_assign_source_524 = mod_consts[990];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[991], tmp_assign_source_524);
    }
    {
        PyObject *tmp_assign_source_525;
        tmp_assign_source_525 = mod_consts[992];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[993], tmp_assign_source_525);
    }
    {
        PyObject *tmp_assign_source_526;
        tmp_assign_source_526 = mod_consts[994];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[995], tmp_assign_source_526);
    }
    {
        PyObject *tmp_assign_source_527;
        tmp_assign_source_527 = mod_consts[996];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[997], tmp_assign_source_527);
    }
    {
        PyObject *tmp_assign_source_528;
        tmp_assign_source_528 = mod_consts[998];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[999], tmp_assign_source_528);
    }
    {
        PyObject *tmp_assign_source_529;
        tmp_assign_source_529 = mod_consts[1000];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1001], tmp_assign_source_529);
    }
    {
        PyObject *tmp_assign_source_530;
        tmp_assign_source_530 = mod_consts[1002];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1003], tmp_assign_source_530);
    }
    {
        PyObject *tmp_assign_source_531;
        tmp_assign_source_531 = mod_consts[1004];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1005], tmp_assign_source_531);
    }
    {
        PyObject *tmp_assign_source_532;
        tmp_assign_source_532 = mod_consts[1006];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1007], tmp_assign_source_532);
    }
    {
        PyObject *tmp_assign_source_533;
        tmp_assign_source_533 = mod_consts[1008];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1009], tmp_assign_source_533);
    }
    {
        PyObject *tmp_assign_source_534;
        tmp_assign_source_534 = mod_consts[1010];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1011], tmp_assign_source_534);
    }
    {
        PyObject *tmp_assign_source_535;
        tmp_assign_source_535 = mod_consts[1012];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1013], tmp_assign_source_535);
    }
    {
        PyObject *tmp_assign_source_536;
        tmp_assign_source_536 = mod_consts[1014];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1015], tmp_assign_source_536);
    }
    {
        PyObject *tmp_assign_source_537;
        tmp_assign_source_537 = mod_consts[1016];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1017], tmp_assign_source_537);
    }
    {
        PyObject *tmp_assign_source_538;
        tmp_assign_source_538 = mod_consts[1018];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1019], tmp_assign_source_538);
    }
    {
        PyObject *tmp_assign_source_539;
        tmp_assign_source_539 = mod_consts[1020];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1021], tmp_assign_source_539);
    }
    {
        PyObject *tmp_assign_source_540;
        tmp_assign_source_540 = mod_consts[1022];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1023], tmp_assign_source_540);
    }
    {
        PyObject *tmp_assign_source_541;
        tmp_assign_source_541 = mod_consts[1024];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1025], tmp_assign_source_541);
    }
    {
        PyObject *tmp_assign_source_542;
        tmp_assign_source_542 = mod_consts[1026];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1027], tmp_assign_source_542);
    }
    {
        PyObject *tmp_assign_source_543;
        tmp_assign_source_543 = mod_consts[1028];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1029], tmp_assign_source_543);
    }
    {
        PyObject *tmp_assign_source_544;
        tmp_assign_source_544 = mod_consts[1030];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1031], tmp_assign_source_544);
    }
    {
        PyObject *tmp_assign_source_545;
        tmp_assign_source_545 = mod_consts[1032];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1033], tmp_assign_source_545);
    }
    {
        PyObject *tmp_assign_source_546;
        tmp_assign_source_546 = mod_consts[1034];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1035], tmp_assign_source_546);
    }
    {
        PyObject *tmp_assign_source_547;
        tmp_assign_source_547 = mod_consts[1036];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1037], tmp_assign_source_547);
    }
    {
        PyObject *tmp_assign_source_548;
        tmp_assign_source_548 = mod_consts[1038];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1039], tmp_assign_source_548);
    }
    {
        PyObject *tmp_assign_source_549;
        tmp_assign_source_549 = mod_consts[1040];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1041], tmp_assign_source_549);
    }
    {
        PyObject *tmp_assign_source_550;
        tmp_assign_source_550 = mod_consts[1042];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1043], tmp_assign_source_550);
    }
    {
        PyObject *tmp_assign_source_551;
        tmp_assign_source_551 = mod_consts[1044];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1045], tmp_assign_source_551);
    }
    {
        PyObject *tmp_assign_source_552;
        tmp_assign_source_552 = mod_consts[1046];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1047], tmp_assign_source_552);
    }
    {
        PyObject *tmp_assign_source_553;
        tmp_assign_source_553 = mod_consts[1048];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1049], tmp_assign_source_553);
    }
    {
        PyObject *tmp_assign_source_554;
        tmp_assign_source_554 = mod_consts[1050];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1051], tmp_assign_source_554);
    }
    {
        PyObject *tmp_assign_source_555;
        tmp_assign_source_555 = mod_consts[1052];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1053], tmp_assign_source_555);
    }
    {
        PyObject *tmp_assign_source_556;
        tmp_assign_source_556 = mod_consts[1054];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1055], tmp_assign_source_556);
    }
    {
        PyObject *tmp_assign_source_557;
        tmp_assign_source_557 = mod_consts[1056];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1057], tmp_assign_source_557);
    }
    {
        PyObject *tmp_assign_source_558;
        tmp_assign_source_558 = mod_consts[1058];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1059], tmp_assign_source_558);
    }
    {
        PyObject *tmp_assign_source_559;
        tmp_assign_source_559 = mod_consts[1060];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1061], tmp_assign_source_559);
    }
    {
        PyObject *tmp_assign_source_560;
        tmp_assign_source_560 = mod_consts[1062];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1063], tmp_assign_source_560);
    }
    {
        PyObject *tmp_assign_source_561;
        tmp_assign_source_561 = mod_consts[1064];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1065], tmp_assign_source_561);
    }
    {
        PyObject *tmp_assign_source_562;
        tmp_assign_source_562 = mod_consts[1066];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1067], tmp_assign_source_562);
    }
    {
        PyObject *tmp_assign_source_563;
        tmp_assign_source_563 = mod_consts[1068];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1069], tmp_assign_source_563);
    }
    {
        PyObject *tmp_assign_source_564;
        tmp_assign_source_564 = mod_consts[1070];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1071], tmp_assign_source_564);
    }
    {
        PyObject *tmp_assign_source_565;
        tmp_assign_source_565 = mod_consts[1072];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1073], tmp_assign_source_565);
    }
    {
        PyObject *tmp_assign_source_566;
        tmp_assign_source_566 = mod_consts[1074];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1075], tmp_assign_source_566);
    }
    {
        PyObject *tmp_assign_source_567;
        tmp_assign_source_567 = mod_consts[1076];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1077], tmp_assign_source_567);
    }
    {
        PyObject *tmp_assign_source_568;
        tmp_assign_source_568 = mod_consts[1078];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1079], tmp_assign_source_568);
    }
    {
        PyObject *tmp_assign_source_569;
        tmp_assign_source_569 = mod_consts[1080];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1081], tmp_assign_source_569);
    }
    {
        PyObject *tmp_assign_source_570;
        tmp_assign_source_570 = mod_consts[1082];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1083], tmp_assign_source_570);
    }
    {
        PyObject *tmp_assign_source_571;
        tmp_assign_source_571 = mod_consts[1084];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1085], tmp_assign_source_571);
    }
    {
        PyObject *tmp_assign_source_572;
        tmp_assign_source_572 = mod_consts[1086];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1087], tmp_assign_source_572);
    }
    {
        PyObject *tmp_assign_source_573;
        tmp_assign_source_573 = mod_consts[1088];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1089], tmp_assign_source_573);
    }
    {
        PyObject *tmp_assign_source_574;
        tmp_assign_source_574 = mod_consts[1090];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1091], tmp_assign_source_574);
    }
    {
        PyObject *tmp_assign_source_575;
        tmp_assign_source_575 = mod_consts[1092];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1093], tmp_assign_source_575);
    }
    {
        PyObject *tmp_assign_source_576;
        tmp_assign_source_576 = mod_consts[1094];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1095], tmp_assign_source_576);
    }
    {
        PyObject *tmp_assign_source_577;
        tmp_assign_source_577 = mod_consts[1096];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1097], tmp_assign_source_577);
    }
    {
        PyObject *tmp_assign_source_578;
        tmp_assign_source_578 = mod_consts[1098];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1099], tmp_assign_source_578);
    }
    {
        PyObject *tmp_assign_source_579;
        tmp_assign_source_579 = mod_consts[1100];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1101], tmp_assign_source_579);
    }
    {
        PyObject *tmp_assign_source_580;
        tmp_assign_source_580 = mod_consts[1102];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1103], tmp_assign_source_580);
    }
    {
        PyObject *tmp_assign_source_581;
        tmp_assign_source_581 = mod_consts[1104];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1105], tmp_assign_source_581);
    }
    {
        PyObject *tmp_assign_source_582;
        tmp_assign_source_582 = mod_consts[1106];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1107], tmp_assign_source_582);
    }
    {
        PyObject *tmp_assign_source_583;
        tmp_assign_source_583 = mod_consts[1108];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1109], tmp_assign_source_583);
    }
    {
        PyObject *tmp_assign_source_584;
        tmp_assign_source_584 = mod_consts[1110];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1111], tmp_assign_source_584);
    }
    {
        PyObject *tmp_assign_source_585;
        tmp_assign_source_585 = mod_consts[1112];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1113], tmp_assign_source_585);
    }
    {
        PyObject *tmp_assign_source_586;
        tmp_assign_source_586 = mod_consts[1114];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1115], tmp_assign_source_586);
    }
    {
        PyObject *tmp_assign_source_587;
        tmp_assign_source_587 = mod_consts[1116];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1117], tmp_assign_source_587);
    }
    {
        PyObject *tmp_assign_source_588;
        tmp_assign_source_588 = mod_consts[1118];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1119], tmp_assign_source_588);
    }
    {
        PyObject *tmp_assign_source_589;
        tmp_assign_source_589 = mod_consts[1120];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1121], tmp_assign_source_589);
    }
    {
        PyObject *tmp_assign_source_590;
        tmp_assign_source_590 = mod_consts[1122];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1123], tmp_assign_source_590);
    }
    {
        PyObject *tmp_assign_source_591;
        tmp_assign_source_591 = mod_consts[1124];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1125], tmp_assign_source_591);
    }
    {
        PyObject *tmp_assign_source_592;
        tmp_assign_source_592 = mod_consts[1126];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1127], tmp_assign_source_592);
    }
    {
        PyObject *tmp_assign_source_593;
        tmp_assign_source_593 = mod_consts[1128];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1129], tmp_assign_source_593);
    }
    {
        PyObject *tmp_assign_source_594;
        tmp_assign_source_594 = mod_consts[1130];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1131], tmp_assign_source_594);
    }
    {
        PyObject *tmp_assign_source_595;
        tmp_assign_source_595 = mod_consts[1132];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1133], tmp_assign_source_595);
    }
    {
        PyObject *tmp_assign_source_596;
        tmp_assign_source_596 = mod_consts[1134];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1135], tmp_assign_source_596);
    }
    {
        PyObject *tmp_assign_source_597;
        tmp_assign_source_597 = mod_consts[1136];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1137], tmp_assign_source_597);
    }
    {
        PyObject *tmp_assign_source_598;
        tmp_assign_source_598 = mod_consts[1138];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1139], tmp_assign_source_598);
    }
    {
        PyObject *tmp_assign_source_599;
        tmp_assign_source_599 = mod_consts[1140];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1141], tmp_assign_source_599);
    }
    {
        PyObject *tmp_assign_source_600;
        tmp_assign_source_600 = mod_consts[1142];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1143], tmp_assign_source_600);
    }
    {
        PyObject *tmp_assign_source_601;
        tmp_assign_source_601 = mod_consts[1144];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1145], tmp_assign_source_601);
    }
    {
        PyObject *tmp_assign_source_602;
        tmp_assign_source_602 = mod_consts[1146];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1147], tmp_assign_source_602);
    }
    {
        PyObject *tmp_assign_source_603;
        tmp_assign_source_603 = mod_consts[1148];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1149], tmp_assign_source_603);
    }
    {
        PyObject *tmp_assign_source_604;
        tmp_assign_source_604 = mod_consts[1150];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1151], tmp_assign_source_604);
    }
    {
        PyObject *tmp_assign_source_605;
        tmp_assign_source_605 = mod_consts[1152];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1153], tmp_assign_source_605);
    }
    {
        PyObject *tmp_assign_source_606;
        tmp_assign_source_606 = mod_consts[1154];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1155], tmp_assign_source_606);
    }
    {
        PyObject *tmp_assign_source_607;
        tmp_assign_source_607 = mod_consts[1156];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1157], tmp_assign_source_607);
    }
    {
        PyObject *tmp_assign_source_608;
        tmp_assign_source_608 = mod_consts[1158];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1159], tmp_assign_source_608);
    }
    {
        PyObject *tmp_assign_source_609;
        tmp_assign_source_609 = mod_consts[1160];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1161], tmp_assign_source_609);
    }
    {
        PyObject *tmp_assign_source_610;
        tmp_assign_source_610 = mod_consts[1162];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1163], tmp_assign_source_610);
    }
    {
        PyObject *tmp_assign_source_611;
        tmp_assign_source_611 = mod_consts[1164];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1165], tmp_assign_source_611);
    }
    {
        PyObject *tmp_assign_source_612;
        tmp_assign_source_612 = mod_consts[1166];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1167], tmp_assign_source_612);
    }
    {
        PyObject *tmp_assign_source_613;
        tmp_assign_source_613 = mod_consts[1168];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1169], tmp_assign_source_613);
    }
    {
        PyObject *tmp_assign_source_614;
        tmp_assign_source_614 = mod_consts[1170];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1171], tmp_assign_source_614);
    }
    {
        PyObject *tmp_assign_source_615;
        tmp_assign_source_615 = mod_consts[1172];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1173], tmp_assign_source_615);
    }
    {
        PyObject *tmp_assign_source_616;
        tmp_assign_source_616 = mod_consts[1174];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1175], tmp_assign_source_616);
    }
    {
        PyObject *tmp_assign_source_617;
        tmp_assign_source_617 = mod_consts[1176];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1177], tmp_assign_source_617);
    }
    {
        PyObject *tmp_assign_source_618;
        tmp_assign_source_618 = mod_consts[1178];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1179], tmp_assign_source_618);
    }
    {
        PyObject *tmp_assign_source_619;
        tmp_assign_source_619 = mod_consts[1180];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1181], tmp_assign_source_619);
    }
    {
        PyObject *tmp_assign_source_620;
        tmp_assign_source_620 = mod_consts[1182];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1183], tmp_assign_source_620);
    }
    {
        PyObject *tmp_assign_source_621;
        tmp_assign_source_621 = mod_consts[1184];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1185], tmp_assign_source_621);
    }
    {
        PyObject *tmp_assign_source_622;
        tmp_assign_source_622 = mod_consts[1186];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1187], tmp_assign_source_622);
    }
    {
        PyObject *tmp_assign_source_623;
        tmp_assign_source_623 = mod_consts[1188];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1189], tmp_assign_source_623);
    }
    {
        PyObject *tmp_assign_source_624;
        tmp_assign_source_624 = mod_consts[1190];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1191], tmp_assign_source_624);
    }
    {
        PyObject *tmp_assign_source_625;
        tmp_assign_source_625 = mod_consts[1192];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1193], tmp_assign_source_625);
    }
    {
        PyObject *tmp_assign_source_626;
        tmp_assign_source_626 = mod_consts[1194];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1195], tmp_assign_source_626);
    }
    {
        PyObject *tmp_assign_source_627;
        tmp_assign_source_627 = mod_consts[1196];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1197], tmp_assign_source_627);
    }
    {
        PyObject *tmp_assign_source_628;
        tmp_assign_source_628 = mod_consts[1198];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1199], tmp_assign_source_628);
    }
    {
        PyObject *tmp_assign_source_629;
        tmp_assign_source_629 = mod_consts[1200];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1201], tmp_assign_source_629);
    }
    {
        PyObject *tmp_assign_source_630;
        tmp_assign_source_630 = mod_consts[1202];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1203], tmp_assign_source_630);
    }
    {
        PyObject *tmp_assign_source_631;
        tmp_assign_source_631 = mod_consts[1204];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1205], tmp_assign_source_631);
    }
    {
        PyObject *tmp_assign_source_632;
        tmp_assign_source_632 = mod_consts[1206];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1207], tmp_assign_source_632);
    }
    {
        PyObject *tmp_assign_source_633;
        tmp_assign_source_633 = mod_consts[1208];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1209], tmp_assign_source_633);
    }
    {
        PyObject *tmp_assign_source_634;
        tmp_assign_source_634 = mod_consts[1210];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1211], tmp_assign_source_634);
    }
    {
        PyObject *tmp_assign_source_635;
        tmp_assign_source_635 = mod_consts[1212];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1213], tmp_assign_source_635);
    }
    {
        PyObject *tmp_assign_source_636;
        tmp_assign_source_636 = mod_consts[1214];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1215], tmp_assign_source_636);
    }
    {
        PyObject *tmp_assign_source_637;
        tmp_assign_source_637 = mod_consts[1216];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1217], tmp_assign_source_637);
    }
    {
        PyObject *tmp_assign_source_638;
        tmp_assign_source_638 = mod_consts[1218];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1219], tmp_assign_source_638);
    }
    {
        PyObject *tmp_assign_source_639;
        tmp_assign_source_639 = mod_consts[1220];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1221], tmp_assign_source_639);
    }
    {
        PyObject *tmp_assign_source_640;
        tmp_assign_source_640 = mod_consts[1222];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1223], tmp_assign_source_640);
    }
    {
        PyObject *tmp_assign_source_641;
        tmp_assign_source_641 = mod_consts[1224];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1225], tmp_assign_source_641);
    }
    {
        PyObject *tmp_assign_source_642;
        tmp_assign_source_642 = mod_consts[1226];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1227], tmp_assign_source_642);
    }
    {
        PyObject *tmp_assign_source_643;
        tmp_assign_source_643 = mod_consts[1228];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1229], tmp_assign_source_643);
    }
    {
        PyObject *tmp_assign_source_644;
        tmp_assign_source_644 = mod_consts[1230];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1231], tmp_assign_source_644);
    }
    {
        PyObject *tmp_assign_source_645;
        tmp_assign_source_645 = mod_consts[1232];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1233], tmp_assign_source_645);
    }
    {
        PyObject *tmp_assign_source_646;
        tmp_assign_source_646 = mod_consts[1234];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1235], tmp_assign_source_646);
    }
    {
        PyObject *tmp_assign_source_647;
        tmp_assign_source_647 = mod_consts[1236];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1237], tmp_assign_source_647);
    }
    {
        PyObject *tmp_assign_source_648;
        tmp_assign_source_648 = mod_consts[1238];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1239], tmp_assign_source_648);
    }
    {
        PyObject *tmp_assign_source_649;
        tmp_assign_source_649 = mod_consts[1240];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1241], tmp_assign_source_649);
    }
    {
        PyObject *tmp_assign_source_650;
        tmp_assign_source_650 = mod_consts[1242];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1243], tmp_assign_source_650);
    }
    {
        PyObject *tmp_assign_source_651;
        tmp_assign_source_651 = mod_consts[1244];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1245], tmp_assign_source_651);
    }
    {
        PyObject *tmp_assign_source_652;
        tmp_assign_source_652 = mod_consts[1246];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1247], tmp_assign_source_652);
    }
    {
        PyObject *tmp_assign_source_653;
        tmp_assign_source_653 = mod_consts[1248];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1249], tmp_assign_source_653);
    }
    {
        PyObject *tmp_assign_source_654;
        tmp_assign_source_654 = mod_consts[1250];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1251], tmp_assign_source_654);
    }
    {
        PyObject *tmp_assign_source_655;
        tmp_assign_source_655 = mod_consts[1252];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1253], tmp_assign_source_655);
    }
    {
        PyObject *tmp_assign_source_656;
        tmp_assign_source_656 = mod_consts[1254];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1255], tmp_assign_source_656);
    }
    {
        PyObject *tmp_assign_source_657;
        tmp_assign_source_657 = mod_consts[1256];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1257], tmp_assign_source_657);
    }
    {
        PyObject *tmp_assign_source_658;
        tmp_assign_source_658 = mod_consts[1258];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1259], tmp_assign_source_658);
    }
    {
        PyObject *tmp_assign_source_659;
        tmp_assign_source_659 = mod_consts[1260];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1261], tmp_assign_source_659);
    }
    {
        PyObject *tmp_assign_source_660;
        tmp_assign_source_660 = mod_consts[1262];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1263], tmp_assign_source_660);
    }
    {
        PyObject *tmp_assign_source_661;
        tmp_assign_source_661 = mod_consts[1264];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1265], tmp_assign_source_661);
    }
    {
        PyObject *tmp_assign_source_662;
        tmp_assign_source_662 = mod_consts[1266];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1267], tmp_assign_source_662);
    }
    {
        PyObject *tmp_assign_source_663;
        tmp_assign_source_663 = mod_consts[1268];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1269], tmp_assign_source_663);
    }
    {
        PyObject *tmp_assign_source_664;
        tmp_assign_source_664 = mod_consts[1270];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1271], tmp_assign_source_664);
    }
    {
        PyObject *tmp_assign_source_665;
        tmp_assign_source_665 = mod_consts[1272];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1273], tmp_assign_source_665);
    }
    {
        PyObject *tmp_assign_source_666;
        tmp_assign_source_666 = mod_consts[1274];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1275], tmp_assign_source_666);
    }
    {
        PyObject *tmp_assign_source_667;
        tmp_assign_source_667 = mod_consts[1276];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1277], tmp_assign_source_667);
    }
    {
        PyObject *tmp_assign_source_668;
        tmp_assign_source_668 = mod_consts[1278];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1279], tmp_assign_source_668);
    }
    {
        PyObject *tmp_assign_source_669;
        tmp_assign_source_669 = mod_consts[1280];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1281], tmp_assign_source_669);
    }
    {
        PyObject *tmp_assign_source_670;
        tmp_assign_source_670 = mod_consts[1282];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1283], tmp_assign_source_670);
    }
    {
        PyObject *tmp_assign_source_671;
        tmp_assign_source_671 = mod_consts[1284];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1285], tmp_assign_source_671);
    }
    {
        PyObject *tmp_assign_source_672;
        tmp_assign_source_672 = mod_consts[1286];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1287], tmp_assign_source_672);
    }
    {
        PyObject *tmp_assign_source_673;
        tmp_assign_source_673 = mod_consts[1288];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1289], tmp_assign_source_673);
    }
    {
        PyObject *tmp_assign_source_674;
        tmp_assign_source_674 = mod_consts[1290];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1291], tmp_assign_source_674);
    }
    {
        PyObject *tmp_assign_source_675;
        tmp_assign_source_675 = mod_consts[1292];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1293], tmp_assign_source_675);
    }
    {
        PyObject *tmp_assign_source_676;
        tmp_assign_source_676 = mod_consts[1294];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1295], tmp_assign_source_676);
    }
    {
        PyObject *tmp_assign_source_677;
        tmp_assign_source_677 = mod_consts[1296];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1297], tmp_assign_source_677);
    }
    {
        PyObject *tmp_assign_source_678;
        tmp_assign_source_678 = mod_consts[1298];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1299], tmp_assign_source_678);
    }
    {
        PyObject *tmp_assign_source_679;
        tmp_assign_source_679 = mod_consts[1300];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1301], tmp_assign_source_679);
    }
    {
        PyObject *tmp_assign_source_680;
        tmp_assign_source_680 = mod_consts[1302];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1303], tmp_assign_source_680);
    }
    {
        PyObject *tmp_assign_source_681;
        tmp_assign_source_681 = mod_consts[1304];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1305], tmp_assign_source_681);
    }
    {
        PyObject *tmp_assign_source_682;
        tmp_assign_source_682 = mod_consts[1306];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1307], tmp_assign_source_682);
    }
    {
        PyObject *tmp_assign_source_683;
        tmp_assign_source_683 = mod_consts[1308];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1309], tmp_assign_source_683);
    }
    {
        PyObject *tmp_assign_source_684;
        tmp_assign_source_684 = mod_consts[1310];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1311], tmp_assign_source_684);
    }
    {
        PyObject *tmp_assign_source_685;
        tmp_assign_source_685 = mod_consts[1312];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1313], tmp_assign_source_685);
    }
    {
        PyObject *tmp_assign_source_686;
        tmp_assign_source_686 = mod_consts[1314];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1315], tmp_assign_source_686);
    }
    {
        PyObject *tmp_assign_source_687;
        tmp_assign_source_687 = mod_consts[1316];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1317], tmp_assign_source_687);
    }
    {
        PyObject *tmp_assign_source_688;
        tmp_assign_source_688 = mod_consts[1318];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1319], tmp_assign_source_688);
    }
    {
        PyObject *tmp_assign_source_689;
        tmp_assign_source_689 = mod_consts[1320];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1321], tmp_assign_source_689);
    }
    {
        PyObject *tmp_assign_source_690;
        tmp_assign_source_690 = mod_consts[1322];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1323], tmp_assign_source_690);
    }
    {
        PyObject *tmp_assign_source_691;
        tmp_assign_source_691 = mod_consts[1324];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1325], tmp_assign_source_691);
    }
    {
        PyObject *tmp_assign_source_692;
        tmp_assign_source_692 = mod_consts[1326];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1327], tmp_assign_source_692);
    }
    {
        PyObject *tmp_assign_source_693;
        tmp_assign_source_693 = mod_consts[1328];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1329], tmp_assign_source_693);
    }
    {
        PyObject *tmp_assign_source_694;
        tmp_assign_source_694 = mod_consts[1330];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1331], tmp_assign_source_694);
    }
    {
        PyObject *tmp_assign_source_695;
        tmp_assign_source_695 = mod_consts[1332];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1333], tmp_assign_source_695);
    }
    {
        PyObject *tmp_assign_source_696;
        tmp_assign_source_696 = mod_consts[1334];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1335], tmp_assign_source_696);
    }
    {
        PyObject *tmp_assign_source_697;
        tmp_assign_source_697 = mod_consts[1336];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1337], tmp_assign_source_697);
    }
    {
        PyObject *tmp_assign_source_698;
        tmp_assign_source_698 = mod_consts[1338];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1339], tmp_assign_source_698);
    }
    {
        PyObject *tmp_assign_source_699;
        tmp_assign_source_699 = mod_consts[1340];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1341], tmp_assign_source_699);
    }
    {
        PyObject *tmp_assign_source_700;
        tmp_assign_source_700 = mod_consts[1342];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1343], tmp_assign_source_700);
    }
    {
        PyObject *tmp_assign_source_701;
        tmp_assign_source_701 = mod_consts[1344];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1345], tmp_assign_source_701);
    }
    {
        PyObject *tmp_assign_source_702;
        tmp_assign_source_702 = mod_consts[1346];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1347], tmp_assign_source_702);
    }
    {
        PyObject *tmp_assign_source_703;
        tmp_assign_source_703 = mod_consts[1348];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1349], tmp_assign_source_703);
    }
    {
        PyObject *tmp_assign_source_704;
        tmp_assign_source_704 = mod_consts[1350];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1351], tmp_assign_source_704);
    }
    {
        PyObject *tmp_assign_source_705;
        tmp_assign_source_705 = mod_consts[1352];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1353], tmp_assign_source_705);
    }
    {
        PyObject *tmp_assign_source_706;
        tmp_assign_source_706 = mod_consts[1354];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1355], tmp_assign_source_706);
    }
    {
        PyObject *tmp_assign_source_707;
        tmp_assign_source_707 = mod_consts[1356];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1357], tmp_assign_source_707);
    }
    {
        PyObject *tmp_assign_source_708;
        tmp_assign_source_708 = mod_consts[1358];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1359], tmp_assign_source_708);
    }
    {
        PyObject *tmp_assign_source_709;
        tmp_assign_source_709 = mod_consts[1360];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1361], tmp_assign_source_709);
    }
    {
        PyObject *tmp_assign_source_710;
        tmp_assign_source_710 = mod_consts[1362];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1363], tmp_assign_source_710);
    }
    {
        PyObject *tmp_assign_source_711;
        tmp_assign_source_711 = mod_consts[1364];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1365], tmp_assign_source_711);
    }
    {
        PyObject *tmp_assign_source_712;
        tmp_assign_source_712 = mod_consts[1366];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1367], tmp_assign_source_712);
    }
    {
        PyObject *tmp_assign_source_713;
        tmp_assign_source_713 = mod_consts[1368];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1369], tmp_assign_source_713);
    }
    {
        PyObject *tmp_assign_source_714;
        tmp_assign_source_714 = mod_consts[1370];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1371], tmp_assign_source_714);
    }
    {
        PyObject *tmp_assign_source_715;
        tmp_assign_source_715 = mod_consts[1372];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1373], tmp_assign_source_715);
    }
    {
        PyObject *tmp_assign_source_716;
        tmp_assign_source_716 = mod_consts[1374];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1375], tmp_assign_source_716);
    }
    {
        PyObject *tmp_assign_source_717;
        tmp_assign_source_717 = mod_consts[1376];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1377], tmp_assign_source_717);
    }
    {
        PyObject *tmp_assign_source_718;
        tmp_assign_source_718 = mod_consts[1378];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1379], tmp_assign_source_718);
    }
    {
        PyObject *tmp_assign_source_719;
        tmp_assign_source_719 = mod_consts[1380];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1381], tmp_assign_source_719);
    }
    {
        PyObject *tmp_assign_source_720;
        tmp_assign_source_720 = mod_consts[1382];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1383], tmp_assign_source_720);
    }
    {
        PyObject *tmp_assign_source_721;
        tmp_assign_source_721 = mod_consts[1384];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1385], tmp_assign_source_721);
    }
    {
        PyObject *tmp_assign_source_722;
        tmp_assign_source_722 = mod_consts[1386];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1387], tmp_assign_source_722);
    }
    {
        PyObject *tmp_assign_source_723;
        tmp_assign_source_723 = mod_consts[1388];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1389], tmp_assign_source_723);
    }
    {
        PyObject *tmp_assign_source_724;
        tmp_assign_source_724 = mod_consts[1390];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1391], tmp_assign_source_724);
    }
    {
        PyObject *tmp_assign_source_725;
        tmp_assign_source_725 = mod_consts[1392];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1393], tmp_assign_source_725);
    }
    {
        PyObject *tmp_assign_source_726;
        tmp_assign_source_726 = mod_consts[1394];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1395], tmp_assign_source_726);
    }
    {
        PyObject *tmp_assign_source_727;
        tmp_assign_source_727 = mod_consts[1396];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1397], tmp_assign_source_727);
    }
    {
        PyObject *tmp_assign_source_728;
        tmp_assign_source_728 = mod_consts[1398];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1399], tmp_assign_source_728);
    }
    {
        PyObject *tmp_assign_source_729;
        tmp_assign_source_729 = mod_consts[1400];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1401], tmp_assign_source_729);
    }
    {
        PyObject *tmp_assign_source_730;
        tmp_assign_source_730 = mod_consts[1402];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1403], tmp_assign_source_730);
    }
    {
        PyObject *tmp_assign_source_731;
        tmp_assign_source_731 = mod_consts[1404];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1405], tmp_assign_source_731);
    }
    {
        PyObject *tmp_assign_source_732;
        tmp_assign_source_732 = mod_consts[1406];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1407], tmp_assign_source_732);
    }
    {
        PyObject *tmp_assign_source_733;
        tmp_assign_source_733 = mod_consts[1408];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1409], tmp_assign_source_733);
    }
    {
        PyObject *tmp_assign_source_734;
        tmp_assign_source_734 = mod_consts[1410];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1411], tmp_assign_source_734);
    }
    {
        PyObject *tmp_assign_source_735;
        tmp_assign_source_735 = mod_consts[1412];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1413], tmp_assign_source_735);
    }
    {
        PyObject *tmp_assign_source_736;
        tmp_assign_source_736 = mod_consts[1414];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1415], tmp_assign_source_736);
    }
    {
        PyObject *tmp_assign_source_737;
        tmp_assign_source_737 = mod_consts[1416];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1417], tmp_assign_source_737);
    }
    {
        PyObject *tmp_assign_source_738;
        tmp_assign_source_738 = mod_consts[1418];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1419], tmp_assign_source_738);
    }
    {
        PyObject *tmp_assign_source_739;
        tmp_assign_source_739 = mod_consts[1420];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1421], tmp_assign_source_739);
    }
    {
        PyObject *tmp_assign_source_740;
        tmp_assign_source_740 = mod_consts[1422];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1423], tmp_assign_source_740);
    }
    {
        PyObject *tmp_assign_source_741;
        tmp_assign_source_741 = mod_consts[1424];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1425], tmp_assign_source_741);
    }
    {
        PyObject *tmp_assign_source_742;
        tmp_assign_source_742 = mod_consts[1426];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1427], tmp_assign_source_742);
    }
    {
        PyObject *tmp_assign_source_743;
        tmp_assign_source_743 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1428], tmp_assign_source_743);
    }
    {
        PyObject *tmp_assign_source_744;
        tmp_assign_source_744 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1429], tmp_assign_source_744);
    }
    {
        PyObject *tmp_assign_source_745;
        tmp_assign_source_745 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1430], tmp_assign_source_745);
    }
    {
        PyObject *tmp_assign_source_746;
        tmp_assign_source_746 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1431], tmp_assign_source_746);
    }
    {
        PyObject *tmp_assign_source_747;
        tmp_assign_source_747 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1432], tmp_assign_source_747);
    }
    {
        PyObject *tmp_assign_source_748;
        tmp_assign_source_748 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1433], tmp_assign_source_748);
    }
    {
        PyObject *tmp_assign_source_749;
        tmp_assign_source_749 = mod_consts[326];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1434], tmp_assign_source_749);
    }
    {
        PyObject *tmp_assign_source_750;
        tmp_assign_source_750 = mod_consts[328];
        UPDATE_STRING_DICT0(moduledict_capstone$sysz_const, (Nuitka_StringObject *)mod_consts[1435], tmp_assign_source_750);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("capstone.sysz_const", false);

    Py_INCREF(module_capstone$sysz_const);
    return module_capstone$sysz_const;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$sysz_const, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("capstone$sysz_const", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
