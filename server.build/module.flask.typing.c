/* Generated code for Python module 'flask.typing'
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

/* The "module_flask$typing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flask$typing;
PyDictObject *moduledict_flask$typing;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[51];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[51];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flask.typing"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 51; i++) {
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
void checkModuleConstants_flask$typing(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 51; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a95aa85c64fc86bee8e4377239162ae2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[48]); CHECK_OBJECT(module_filename_obj);
    codeobj_a95aa85c64fc86bee8e4377239162ae2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[49], mod_consts[49], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_flask$typing[] = {

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

    function_impl_code *current = functable_flask$typing;
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

    if (offset > sizeof(functable_flask$typing) || offset < 0) {
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
        functable_flask$typing[offset],
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
        module_flask$typing,
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
PyObject *modulecode_flask$typing(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flask.typing");

    // Store the module for future use.
    module_flask$typing = module;

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
        PRINT_STRING("flask.typing: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("flask.typing: Calling createModuleConstants().\n");
        createModuleConstants();

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflask$typing\n");

    moduledict_flask$typing = MODULE_DICT(module_flask$typing);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flask$typing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flask$typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[50]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flask$typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flask$typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flask$typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flask$typing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flask$typing);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a95aa85c64fc86bee8e4377239162ae2;
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
        UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_a95aa85c64fc86bee8e4377239162ae2 = MAKE_MODULE_FRAME(codeobj_a95aa85c64fc86bee8e4377239162ae2, module_flask$typing);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a95aa85c64fc86bee8e4377239162ae2);
    assert(Py_REFCNT(frame_a95aa85c64fc86bee8e4377239162ae2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[2]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[2]);

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
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[6]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[9];
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_5;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyBytes_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_5 == NULL));
            tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 3, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_7 == NULL));
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[12]);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_8 == NULL));
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_3);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 4, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[13]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 5, tmp_tuple_element_1);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_12 == NULL));
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[13]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_5 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[8]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_8;
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_3);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_16 == NULL));
            tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[10]);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_3);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[15]);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_8 = mod_consts[16];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_6, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_expression_value_13);
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_13);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_20 == NULL));
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[8]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[18];
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_6;
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_4);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_22 == NULL));
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[12]);
            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_5);
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_4);
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_24 == NULL));
            tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[19]);
            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_4;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_26 == NULL));
            tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[15]);
            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_23);

                exception_lineno = 30;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_12);
            goto tuple_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_23);

                exception_lineno = 30;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_9, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_expression_value_19);
        Py_DECREF(tmp_subscript_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_19);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_7;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_28 == NULL));
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[8]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_27);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_tuple_element_10;
            PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_7);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_30 == NULL));
            tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[15]);
            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_29);

                exception_lineno = 36;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            assert(!(tmp_tuple_element_8 == NULL));
            PyTuple_SET_ITEM0(tmp_subscript_value_14, 1, tmp_tuple_element_8);
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_7);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_32 == NULL));
            tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[15]);
            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_31);

                exception_lineno = 37;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_9);
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 2, tmp_tuple_element_7);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_34 == NULL));
            tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[15]);
            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_33);

                exception_lineno = 38;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 2, tmp_tuple_element_10);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_16);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_subscript_value_13, 4, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_expression_value_27);
        Py_DECREF(tmp_subscript_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_27);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_35 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_a95aa85c64fc86bee8e4377239162ae2->m_frame.f_lineno = 45;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[24], 0), mod_consts[25]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_17;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_37 == NULL));
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[27]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_list_element_1;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_39 == NULL));
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[8]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_41 == NULL));
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[29]);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_38);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_expression_value_40);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_tuple_element_12, 0, tmp_list_element_1);
        tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_expression_value_38);
        Py_DECREF(tmp_expression_value_40);
        Py_DECREF(tmp_subscript_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_40);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_38);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_list_element_2;
            PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_11);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_43 == NULL));
            tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[29]);
            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_9;
            }
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_42);

                exception_lineno = 50;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_13 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_13, 0, tmp_list_element_2);
            tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_44;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_21;
                PyTuple_SET_ITEM(tmp_subscript_value_20, 0, tmp_tuple_element_13);
                tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_45 == NULL)) {
                    tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_45 == NULL));
                tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[30]);
                if (tmp_expression_value_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;

                    goto tuple_build_exception_10;
                }
                tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[26]);

                if (unlikely(tmp_subscript_value_21 == NULL)) {
                    tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                }

                if (tmp_subscript_value_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_44);

                    exception_lineno = 50;

                    goto tuple_build_exception_10;
                }
                tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_44);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_20);
            goto tuple_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_expression_value_38);
        Py_DECREF(tmp_subscript_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_38);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_23;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_47 == NULL));
        tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[8]);
        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_49 == NULL));
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[29]);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_46);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = DEEP_COPY_TUPLE_GUIDED(mod_consts[32], "li");
        tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_48);
        Py_DECREF(tmp_subscript_value_23);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_46);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_15;
            PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_14);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_51 == NULL));
            tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[29]);
            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_15 = MAKE_LIST_EMPTY(0);
            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_52;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_25;
                PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_15);
                tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_53 == NULL)) {
                    tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_53 == NULL));
                tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[30]);
                if (tmp_expression_value_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;

                    goto tuple_build_exception_12;
                }
                tmp_subscript_value_25 = Py_None;
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_52);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;

                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_24);
            goto tuple_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_expression_value_46);
        Py_DECREF(tmp_subscript_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_46);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_tuple_element_17;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_55 == NULL));
        tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[8]);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_57 == NULL));
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[29]);
        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_54);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = MAKE_LIST_EMPTY(0);
        tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_28;
            PyTuple_SET_ITEM(tmp_subscript_value_27, 0, tmp_tuple_element_17);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_59 == NULL));
            tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[27]);
            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_13;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_58);

                exception_lineno = 56;

                goto tuple_build_exception_13;
            }
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_27, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_expression_value_54);
        Py_DECREF(tmp_expression_value_56);
        Py_DECREF(tmp_subscript_value_27);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_56);
        Py_DECREF(tmp_subscript_value_27);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_54);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_tuple_element_18;
            PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_16);
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_61 == NULL));
            tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[29]);
            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_14;
            }
            tmp_tuple_element_18 = MAKE_LIST_EMPTY(0);
            tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_62;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_64;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_subscript_value_31;
                PyTuple_SET_ITEM(tmp_subscript_value_29, 0, tmp_tuple_element_18);
                tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_63 == NULL)) {
                    tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_63 == NULL));
                tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[30]);
                if (tmp_expression_value_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto tuple_build_exception_15;
                }
                tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_65 == NULL)) {
                    tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_65 == NULL));
                tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[27]);
                if (tmp_expression_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_62);

                    exception_lineno = 57;

                    goto tuple_build_exception_15;
                }
                tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[22]);

                if (unlikely(tmp_subscript_value_31 == NULL)) {
                    tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                }

                if (tmp_subscript_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_62);
                    Py_DECREF(tmp_expression_value_64);

                    exception_lineno = 57;

                    goto tuple_build_exception_15;
                }
                tmp_subscript_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_64);
                if (tmp_subscript_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_62);

                    exception_lineno = 57;

                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_62);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_29);
            goto tuple_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_expression_value_54);
        Py_DECREF(tmp_subscript_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_54);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_tuple_element_19;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_67 == NULL));
        tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[29]);
        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = MAKE_LIST_EMPTY(0);
        tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_20;
            PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_19);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_69 == NULL));
            tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[35]);
            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_16;
            }
            tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_70;
                PyTuple_SET_ITEM0(tmp_subscript_value_33, 0, tmp_tuple_element_20);
                tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_70 == NULL)) {
                    tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_70 == NULL));
                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[11]);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_expression_value_68);
            Py_DECREF(tmp_subscript_value_33);
            goto tuple_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_68);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_expression_value_66);
        Py_DECREF(tmp_subscript_value_32);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_32);
        Py_DECREF(tmp_expression_value_66);
        Py_DECREF(tmp_subscript_value_32);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_list_element_3;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_36;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_72 == NULL));
        tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[8]);
        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_74 == NULL));
        tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[29]);
        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_71);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_76 == NULL));
        tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[27]);
        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_expression_value_73);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_36 = PyExc_BaseException;
        tmp_list_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_36);
        Py_DECREF(tmp_expression_value_75);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_expression_value_73);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_tuple_element_22, 0, tmp_list_element_3);
        tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_35, 0, tmp_tuple_element_22);
        tmp_tuple_element_22 = Py_None;
        PyTuple_SET_ITEM0(tmp_subscript_value_35, 1, tmp_tuple_element_22);
        tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_35);
        Py_DECREF(tmp_expression_value_73);
        Py_DECREF(tmp_subscript_value_35);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_71);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_list_element_4;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_38;
            PyTuple_SET_ITEM(tmp_subscript_value_34, 0, tmp_tuple_element_21);
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_78 == NULL));
            tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[29]);
            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_18;
            }
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_80 == NULL));
            tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[27]);
            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_77);

                exception_lineno = 62;

                goto tuple_build_exception_18;
            }
            tmp_subscript_value_38 = PyExc_BaseException;
            tmp_list_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_77);

                exception_lineno = 62;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_23 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_tuple_element_23, 0, tmp_list_element_4);
            tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_81;
                PyObject *tmp_expression_value_82;
                PyObject *tmp_subscript_value_39;
                PyTuple_SET_ITEM(tmp_subscript_value_37, 0, tmp_tuple_element_23);
                tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_82 == NULL)) {
                    tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_82 == NULL));
                tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[30]);
                if (tmp_expression_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_19;
                }
                tmp_subscript_value_39 = Py_None;
                tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_39);
                Py_DECREF(tmp_expression_value_81);
                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_37, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_37);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_expression_value_71);
        Py_DECREF(tmp_subscript_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_71);
        Py_DECREF(tmp_subscript_value_34);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_tuple_element_24;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_84 == NULL));
        tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[29]);
        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_24 = MAKE_LIST_EMPTY(0);
        tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_tuple_element_25;
            PyTuple_SET_ITEM(tmp_subscript_value_40, 0, tmp_tuple_element_24);
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_86 == NULL));
            tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[35]);
            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_20;
            }
            tmp_tuple_element_25 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_41 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_87;
                PyTuple_SET_ITEM0(tmp_subscript_value_41, 0, tmp_tuple_element_25);
                tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_87 == NULL)) {
                    tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_87 == NULL));
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[11]);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;

                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_41, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_41);
            goto tuple_build_exception_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_40, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_expression_value_83);
        Py_DECREF(tmp_subscript_value_40);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_40);
        Py_DECREF(tmp_expression_value_83);
        Py_DECREF(tmp_subscript_value_40);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_tuple_element_26;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_89 == NULL));
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[29]);
        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_26 = Py_Ellipsis;
        tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_26);
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[11]);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_expression_value_88);
        Py_DECREF(tmp_subscript_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_42);
        Py_DECREF(tmp_expression_value_88);
        Py_DECREF(tmp_subscript_value_42);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_tuple_element_27;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_92 == NULL));
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[29]);
        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = Py_Ellipsis;
        tmp_subscript_value_43 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_93;
            PyTuple_SET_ITEM0(tmp_subscript_value_43, 0, tmp_tuple_element_27);
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_93 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[11]);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_43, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_expression_value_91);
        Py_DECREF(tmp_subscript_value_43);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_43);
        Py_DECREF(tmp_expression_value_91);
        Py_DECREF(tmp_subscript_value_43);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_44;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_95 == NULL));
        tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[29]);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_44 = mod_consts[41];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_44);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_45;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_97 == NULL));
        tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[29]);
        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_45 = DEEP_COPY_TUPLE_GUIDED(mod_consts[43], "li");
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_45);
        Py_DECREF(tmp_expression_value_96);
        Py_DECREF(tmp_subscript_value_45);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_list_element_5;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_47;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_99 == NULL));
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[29]);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_101 == NULL));
        tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[27]);
        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_98);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_47 = (PyObject *)&PyUnicode_Type;
        tmp_list_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_47);
        Py_DECREF(tmp_expression_value_100);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_98);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_48;
            PyList_SET_ITEM(tmp_tuple_element_28, 0, tmp_list_element_5);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_103 == NULL));
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[27]);
            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto list_build_exception_1;
            }
            tmp_subscript_value_48 = (PyObject *)&PyDict_Type;
            tmp_list_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_tuple_element_28, 1, tmp_list_element_5);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_expression_value_98);
        Py_DECREF(tmp_tuple_element_28);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_46, 0, tmp_tuple_element_28);
        tmp_tuple_element_28 = Py_None;
        PyTuple_SET_ITEM0(tmp_subscript_value_46, 1, tmp_tuple_element_28);
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_46);
        Py_DECREF(tmp_expression_value_98);
        Py_DECREF(tmp_subscript_value_46);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_list_element_6;
        PyObject *tmp_expression_value_106;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_105 == NULL));
        tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[29]);
        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_106 == NULL));
        tmp_list_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[11]);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_104);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_29 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_tuple_element_29, 0, tmp_list_element_6);
        tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_49, 0, tmp_tuple_element_29);
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto tuple_build_exception_24;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_49, 1, tmp_tuple_element_29);
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_expression_value_104);
        Py_DECREF(tmp_subscript_value_49);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_104, tmp_subscript_value_49);
        Py_DECREF(tmp_expression_value_104);
        Py_DECREF(tmp_subscript_value_49);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_subscript_value_51;
        PyObject *tmp_tuple_element_31;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_108 == NULL));
        tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[8]);
        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_value_110 == NULL));
        tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[29]);
        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_107);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_31 = Py_Ellipsis;
        tmp_subscript_value_51 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_51, 0, tmp_tuple_element_31);
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto tuple_build_exception_25;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_51, 1, tmp_tuple_element_31);
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_expression_value_107);
        Py_DECREF(tmp_expression_value_109);
        Py_DECREF(tmp_subscript_value_51);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_109, tmp_subscript_value_51);
        Py_DECREF(tmp_expression_value_109);
        Py_DECREF(tmp_subscript_value_51);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_107);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_tuple_element_32;
            PyTuple_SET_ITEM(tmp_subscript_value_50, 0, tmp_tuple_element_30);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            assert(!(tmp_expression_value_112 == NULL));
            tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[29]);
            if (tmp_expression_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_26;
            }
            tmp_tuple_element_32 = Py_Ellipsis;
            tmp_subscript_value_52 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_113;
                PyObject *tmp_expression_value_114;
                PyObject *tmp_subscript_value_53;
                PyTuple_SET_ITEM0(tmp_subscript_value_52, 0, tmp_tuple_element_32);
                tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_114 == NULL)) {
                    tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                }

                assert(!(tmp_expression_value_114 == NULL));
                tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[30]);
                if (tmp_expression_value_113 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;

                    goto tuple_build_exception_27;
                }
                tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[22]);

                if (unlikely(tmp_subscript_value_53 == NULL)) {
                    tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                }

                if (tmp_subscript_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_113);

                    exception_lineno = 81;

                    goto tuple_build_exception_27;
                }
                tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_113, tmp_subscript_value_53);
                Py_DECREF(tmp_expression_value_113);
                if (tmp_tuple_element_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_52, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_expression_value_111);
            Py_DECREF(tmp_subscript_value_52);
            goto tuple_build_exception_26;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_111, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_111);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_50, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_expression_value_107);
        Py_DECREF(tmp_subscript_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_50);
        Py_DECREF(tmp_expression_value_107);
        Py_DECREF(tmp_subscript_value_50);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$typing, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a95aa85c64fc86bee8e4377239162ae2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a95aa85c64fc86bee8e4377239162ae2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a95aa85c64fc86bee8e4377239162ae2, exception_lineno);
    }



    assertFrameObject(frame_a95aa85c64fc86bee8e4377239162ae2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flask.typing", false);

    Py_INCREF(module_flask$typing);
    return module_flask$typing;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$typing, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flask$typing", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
