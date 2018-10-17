// Generated code for Python source for module '__main__'
// created by Nuitka version 0.5.0.1

// This code is in part copyright 2013 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__modules.hpp"
#include "__constants.hpp"
#include "__helpers.hpp"

// The _module___main__ is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module___main__;
PyDictObject *moduledict___main__;

NUITKA_MAY_BE_UNUSED static PyObject *GET_MODULE_VALUE0( PyObject *var_name )
{
    // For module variable values, need to lookup in module dictionary or in
    // built-in dictionary.

    PyObject *result = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)var_name );

    if (likely( result != NULL ))
    {
        assertObject( result );

        return result;
    }

    result = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)var_name );

    if (likely( result != NULL ))
    {
        assertObject( result );

        return result;
    }

    PyErr_Format( PyExc_NameError, "global name '%s' is not defined", Nuitka_String_AsString(var_name ));
    throw PythonException();
}

NUITKA_MAY_BE_UNUSED static PyObject *GET_MODULE_VALUE1( PyObject *var_name )
{
    return INCREASE_REFCOUNT( GET_MODULE_VALUE0( var_name ) );
}

NUITKA_MAY_BE_UNUSED void static DEL_MODULE_VALUE( PyObject *var_name, bool tolerant )
{
    int status = PyDict_DelItem( (PyObject *)moduledict___main__, var_name );

    if (unlikely( status == -1 && tolerant == false ))
    {
        PyErr_Format(
            PyExc_NameError,
            "global name '%s' is not defined",
            Nuitka_String_AsString( var_name )
        );

        throw PythonException();
    }
}

NUITKA_MAY_BE_UNUSED static PyObject *GET_LOCALS_OR_MODULE_VALUE0( PyObject *locals_dict, PyObject *var_name )
{
    PyObject *result = PyDict_GetItem( locals_dict, var_name );

    if ( result != NULL )
    {
        return result;
    }
    else
    {
        return GET_MODULE_VALUE0( var_name );
    }
}

NUITKA_MAY_BE_UNUSED static PyObject *GET_LOCALS_OR_MODULE_VALUE1( PyObject *locals_dict, PyObject *var_name )
{
    PyObject *result = PyDict_GetItem( locals_dict, var_name );

    if ( result != NULL )
    {
        return INCREASE_REFCOUNT( result );
    }
    else
    {
        return GET_MODULE_VALUE1( var_name );
    }
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_10_printmatlab_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_11_printstochkit_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_12_printSBML_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_2_addreaction_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_isfloat_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_6_printmathematica_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_7_printodes_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_8_printdriver_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_9_printpython_of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_sencillo_of_module___main__(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__( const_str_plain___module__ );
    PyObjectLocalVariable var___doc__( const_str_plain___doc__ );
    PyObjectLocalVariable var___init__( const_str_plain___init__ );
    PyObjectLocalVariable var_addreaction( const_str_plain_addreaction );
    PyObjectLocalVariable var_findmodifiers( const_str_plain_findmodifiers );
    PyObjectLocalVariable var_isfloat( const_str_plain_isfloat );
    PyObjectLocalVariable var_rmwhitespace( const_str_plain_rmwhitespace );
    PyObjectLocalVariable var_printmathematica( const_str_plain_printmathematica );
    PyObjectLocalVariable var_printodes( const_str_plain_printodes );
    PyObjectLocalVariable var_printdriver( const_str_plain_printdriver );
    PyObjectLocalVariable var_printpython( const_str_plain_printpython );
    PyObjectLocalVariable var_printmatlab( const_str_plain_printmatlab );
    PyObjectLocalVariable var_printstochkit( const_str_plain_printstochkit );
    PyObjectLocalVariable var_printSBML( const_str_plain_printSBML );

    // Actual function code.
    var___module__.assign0( const_str_plain___main__ );
    var___doc__.assign0( const_str_digest_d1448bfc766c1bc3045af4a09cbd06d8 );
    var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_sencillo_of_module___main__(  ) );
    var_addreaction.assign1( MAKE_FUNCTION_function_2_addreaction_of_class_1_sencillo_of_module___main__(  ) );
    var_findmodifiers.assign1( MAKE_FUNCTION_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( MAKE_TUPLE1( PyObjectTemporary( PyList_New( 0 ) ).asObject0() ) ) );
    var_isfloat.assign1( MAKE_FUNCTION_function_4_isfloat_of_class_1_sencillo_of_module___main__(  ) );
    var_rmwhitespace.assign1( MAKE_FUNCTION_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__(  ) );
    var_printmathematica.assign1( MAKE_FUNCTION_function_6_printmathematica_of_class_1_sencillo_of_module___main__(  ) );
    var_printodes.assign1( MAKE_FUNCTION_function_7_printodes_of_class_1_sencillo_of_module___main__(  ) );
    var_printdriver.assign1( MAKE_FUNCTION_function_8_printdriver_of_class_1_sencillo_of_module___main__(  ) );
    var_printpython.assign1( MAKE_FUNCTION_function_9_printpython_of_class_1_sencillo_of_module___main__(  ) );
    var_printmatlab.assign1( MAKE_FUNCTION_function_10_printmatlab_of_class_1_sencillo_of_module___main__(  ) );
    var_printstochkit.assign1( MAKE_FUNCTION_function_11_printstochkit_of_class_1_sencillo_of_module___main__(  ) );
    var_printSBML.assign1( MAKE_FUNCTION_function_12_printSBML_of_class_1_sencillo_of_module___main__(  ) );
    return var_printSBML.updateLocalsDict( var_printstochkit.updateLocalsDict( var_printmatlab.updateLocalsDict( var_printpython.updateLocalsDict( var_printdriver.updateLocalsDict( var_printodes.updateLocalsDict( var_printmathematica.updateLocalsDict( var_rmwhitespace.updateLocalsDict( var_isfloat.updateLocalsDict( var_findmodifiers.updateLocalsDict( var_addreaction.updateLocalsDict( var___init__.updateLocalsDict( var___doc__.updateLocalsDict( var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_fname )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_fname( const_str_plain_fname, _python_par_fname );
    PyObjectLocalVariable var_reactions( const_str_plain_reactions );
    PyObjectLocalVariable var_species( const_str_plain_species );
    PyObjectLocalVariable var_parameters( const_str_plain_parameters );
    PyObjectLocalVariable var_variables( const_str_plain_variables );
    PyObjectLocalVariable var_nononames( const_str_plain_nononames );
    PyObjectLocalVariable var_line( const_str_plain_line );
    PyObjectLocalVariable var_bits( const_str_plain_bits );
    PyObjectLocalVariable var_bitsofbits( const_str_plain_bitsofbits );
    PyObjectLocalVariable var_reactionname( const_str_plain_reactionname );
    PyObjectLocalVariable var_chemeq( const_str_plain_chemeq );
    PyObjectLocalVariable var_chemrates( const_str_plain_chemrates );
    PyObjectLocalVariable var_crate( const_str_plain_crate );
    PyObjectLocalVariable var_chems( const_str_plain_chems );
    PyObjectLocalVariable var_chemeqf( const_str_plain_chemeqf );
    PyObjectLocalVariable var_chemeqb( const_str_plain_chemeqb );
    PyObjectLocalVariable var_vardict( const_str_plain_vardict );
    PyObjectLocalVariable var_var( const_str_plain_var );
    PyObjectLocalVariable var_vname( const_str_plain_vname );
    PyObjectLocalVariable var_vvalue( const_str_plain_vvalue );
    PyObjectLocalVariable var_pardict( const_str_plain_pardict );
    PyObjectLocalVariable var_par( const_str_plain_par );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_1___init___of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_sencillo_of_module___main__ );
        }

        frame_function_1___init___of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_518503ee3c102766d0680a147a8eb92b, module___main__ );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 134 );
        {
            PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_fname.asObject0(), const_str_plain_split ) ).asObject0(), const_str_dot ) ).asObject0(), const_int_0, 0 ) );
            SET_ATTRIBUTE( tmp_identifier.asObject0(), par_self.asObject0(), const_str_plain_name );
        }
        var_reactions.assign1( PyDict_New() );
        var_species.assign1( PyDict_New() );
        var_parameters.assign1( PyList_New( 0 ) );
        var_variables.assign1( PyList_New( 0 ) );
        var_nononames.assign0( const_int_0 );
        frame_guard.setLineNumber( 146 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( OPEN_FILE( par_fname.asObject0(), NULL, NULL ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 146 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                var_line.assign0( tmp_for_loop_1__iter_value.asObject0() );
                frame_guard.setLineNumber( 148 );
                var_line.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_line.asObject0(), const_str_plain_rstrip ) ).asObject0() ) );
                frame_guard.setLineNumber( 150 );
                if ( ( (!( CHECK_IF_TRUE( var_line.asObject0() ) )) || ( RICH_COMPARE_BOOL_EQ( var_line.asObject0(), const_str_plain_INIT ) || ( RICH_COMPARE_BOOL_EQ( var_line.asObject0(), const_str_plain_EQN ) || ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_line.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_chr_35 ) || RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_line.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_chr_37 ) ) ) ) ) )
                {
                    frame_guard.setLineNumber( 156 );
                    CONSIDER_THREADING(); continue;
                }
                else
                {
                    frame_guard.setLineNumber( 162 );
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_line.asObject0(), const_int_neg_1, -1 ) ).asObject0(), const_str_chr_59 ) )
                    {
                        frame_guard.setLineNumber( 164 );
                        var_line.assign1( LOOKUP_INDEX_SLICE( var_line.asObject0(), 0, -1 ) );
                    }
                    frame_guard.setLineNumber( 168 );
                    if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_line.asObject0(), const_str_plain_find ) ).asObject0(), const_str_chr_35 ) ).asObject0(), const_int_neg_1 ) )
                    {
                        frame_guard.setLineNumber( 170 );
                        {
                            PyObjectTempKeeper0 slice1;
                            var_line.assign1( ( slice1.assign( var_line.asObject0() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_line.asObject0(), const_str_plain_find ) ).asObject0(), const_str_chr_35 ) ).asObject0() ) ) );
                        }
                    }
                    frame_guard.setLineNumber( 174 );
                    if ( SEQUENCE_CONTAINS_BOOL( const_str_chr_59, var_line.asObject0() ) )
                    {
                        frame_guard.setLineNumber( 178 );
                        var_bits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_line.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_59 ) );
                        frame_guard.setLineNumber( 184 );
                        if ( SEQUENCE_CONTAINS_BOOL( const_str_chr_58, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0() ) )
                        {
                            frame_guard.setLineNumber( 188 );
                            var_bitsofbits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_58 ) );
                            frame_guard.setLineNumber( 190 );
                            var_reactionname.assign1( LOOKUP_SUBSCRIPT_CONST( var_bitsofbits.asObject0(), const_int_0, 0 ) );
                            frame_guard.setLineNumber( 192 );
                            {
                                PyObjectTempKeeper1 call1;
                                var_chemeq.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bitsofbits.asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 198 );
                            var_reactionname.assign1( TO_STR( var_nononames.asObject0() ) );
                            frame_guard.setLineNumber( 200 );
                            PyObject *tmp_inplace_assign_1__inplace_start = var_nononames.asObject0();
                            PyObjectTemporary tmp_inplace_assign_1__inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_inplace_assign_1__inplace_start, const_int_pos_1 ) );
                            if ( ( tmp_inplace_assign_1__inplace_start != tmp_inplace_assign_1__inplace_end.asObject0() ) )
                            {
                                var_nononames.assign0( tmp_inplace_assign_1__inplace_end.asObject0() );
                            }
                            frame_guard.setLineNumber( 202 );
                            var_chemeq.assign1( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) );
                        }
                        var_chemrates.assign1( PyList_New( 0 ) );
                        frame_guard.setLineNumber( 210 );
                        PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_INDEX_SLICE( var_bits.asObject0(), 1, PY_SSIZE_T_MAX ) ).asObject0() ) );
                        PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
                        int _at_lineno_3 = 0;
#endif


                        try
                        {
                            // Tried block:
                            while( true )
                            {
                                frame_guard.setLineNumber( 210 );
                                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                                if ( _tmp_unpack_4 == NULL )
                                {
                                    break;
                                }
                                tmp_for_loop_2__iter_value.assign1( _tmp_unpack_4 );
                                var_crate.assign0( tmp_for_loop_2__iter_value.asObject0() );
                                frame_guard.setLineNumber( 212 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper1 call2;
                                    DECREASE_REFCOUNT( ( call2.assign( LOOKUP_ATTRIBUTE( var_chemrates.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call2.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_crate.asObject0() ) ) ).asObject0() ) ) );
                                }

                                CONSIDER_THREADING();
                            }
                        }
                        catch ( PythonException &_exception )
                        {
#if PYTHON_VERSION >= 300
                            if ( !_exception.hasTraceback() )
                            {
                                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                            }
                            else
                            {
                                _exception.addTraceback( frame_guard.getFrame0() );
                            }
#else
                            _at_lineno_3 = frame_guard.getLineNumber();
#endif

                            _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
                            frame_guard.preserveExistingException();

                            _exception.toExceptionHandler();
#endif
                        }

                        // Final block:
                        tmp_for_loop_2__iter_value.del( true );
                        tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
                        if ( _at_lineno_3 != 0 )
                        {
                           frame_guard.setLineNumber( _at_lineno_3 );
                        }
#endif
                        _caught_3.rethrow();
                        // Final end
                        frame_guard.setLineNumber( 218 );
                        if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_0625bca2f7bba9b6443f8735158e3712, var_chemeq.asObject0() ) )
                        {
                            frame_guard.setLineNumber( 222 );
                            var_chems.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_chemeq.asObject0(), const_str_plain_split ) ).asObject0(), const_str_digest_0625bca2f7bba9b6443f8735158e3712 ) );
                            frame_guard.setLineNumber( 224 );
                            {
                                PyObjectTempKeeper1 op1;
                                var_chemeqf.assign1( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_digest_b4d414045ddc319a7da99472065d3b35 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                            }
                            frame_guard.setLineNumber( 226 );
                            {
                                PyObjectTempKeeper1 op1;
                                var_chemeqb.assign1( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_pos_1, 1 ) ).asObject0(), const_str_digest_b4d414045ddc319a7da99472065d3b35 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 228 );
                            if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_2ec0d680849fdc0188423f0ea7b13447, var_chemeq.asObject0() ) )
                            {
                                frame_guard.setLineNumber( 232 );
                                var_chems.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_chemeq.asObject0(), const_str_plain_split ) ).asObject0(), const_str_digest_2ec0d680849fdc0188423f0ea7b13447 ) );
                                frame_guard.setLineNumber( 234 );
                                {
                                    PyObjectTempKeeper1 op1;
                                    var_chemeqf.assign1( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_digest_467a1c8e1232bf2ab85edf0ba09a9b75 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                                }
                                frame_guard.setLineNumber( 236 );
                                {
                                    PyObjectTempKeeper1 op1;
                                    var_chemeqb.assign1( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_pos_1, 1 ) ).asObject0(), const_str_digest_467a1c8e1232bf2ab85edf0ba09a9b75 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chems.asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                                }
                            }
                        }
                        frame_guard.setLineNumber( 238 );
                        if ( ( SEQUENCE_CONTAINS_BOOL( const_str_digest_0625bca2f7bba9b6443f8735158e3712, var_chemeq.asObject0() ) || SEQUENCE_CONTAINS_BOOL( const_str_digest_2ec0d680849fdc0188423f0ea7b13447, var_chemeq.asObject0() ) ) )
                        {
                            frame_guard.setLineNumber( 240 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper0 call2;
                                PyObjectTempKeeper0 call3;
                                PyObjectTempKeeper1 call4;
                                PyObjectTempKeeper0 call5;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_addreaction ) ), call2.assign( var_reactions.asObject0() ), call3.assign( var_species.asObject0() ), call4.assign( BINARY_OPERATION_ADD( var_reactionname.asObject0(), const_str_plain__f ) ), frame_guard.setLineNumber( 242 ), call5.assign( var_chemeqf.asObject0() ), CALL_FUNCTION_WITH_ARGS5( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chemrates.asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                            }
                            frame_guard.setLineNumber( 244 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper0 call2;
                                PyObjectTempKeeper0 call3;
                                PyObjectTempKeeper1 call4;
                                PyObjectTempKeeper0 call5;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_addreaction ) ), call2.assign( var_reactions.asObject0() ), call3.assign( var_species.asObject0() ), call4.assign( BINARY_OPERATION_ADD( var_reactionname.asObject0(), const_str_plain__b ) ), frame_guard.setLineNumber( 246 ), call5.assign( var_chemeqb.asObject0() ), CALL_FUNCTION_WITH_ARGS5( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chemrates.asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 252 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper0 call2;
                                PyObjectTempKeeper0 call3;
                                PyObjectTempKeeper0 call4;
                                PyObjectTempKeeper0 call5;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_addreaction ) ), call2.assign( var_reactions.asObject0() ), call3.assign( var_species.asObject0() ), call4.assign( var_reactionname.asObject0() ), call5.assign( var_chemeq.asObject0() ), frame_guard.setLineNumber( 254 ), CALL_FUNCTION_WITH_ARGS5( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_chemrates.asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                            }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 262 );
                        var_bits.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_line.asObject0(), const_str_plain_split ) ).asObject0() ) );
                        frame_guard.setLineNumber( 264 );
                        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_plain_parameter ) )
                        {
                            frame_guard.setLineNumber( 268 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper1 call2;
                                DECREASE_REFCOUNT( ( call2.assign( LOOKUP_ATTRIBUTE( var_parameters.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call2.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( const_str_space, const_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( var_bits.asObject0(), 1, PY_SSIZE_T_MAX ) ).asObject0() ) ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 270 );
                            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_plain_variable ) )
                            {
                                frame_guard.setLineNumber( 274 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper1 call2;
                                    DECREASE_REFCOUNT( ( call2.assign( LOOKUP_ATTRIBUTE( var_variables.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call2.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( const_str_space, const_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( var_bits.asObject0(), 1, PY_SSIZE_T_MAX ) ).asObject0() ) ) ).asObject0() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 280 );
                                var_bits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_line.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_61 ) );
                                frame_guard.setLineNumber( 282 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper1 call2;
                                    PyObjectTempKeeper0 subscr1;
                                    {
                                        PyObjectTemporary tmp_identifier( ( call2.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call2.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                                        SET_SUBSCRIPT( tmp_identifier.asObject0(), PyObjectTemporary( ( subscr1.assign( var_species.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0() ) ) ).asObject0() ) ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 );
                                    }
                                }
                            }
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 288 );
        {
            PyObjectTempKeeper1 call1;
            var_reactions.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_collections ), const_str_plain_OrderedDict ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION( LOOKUP_BUILTIN( const_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_reactions.asObject0(), const_str_plain_items ) ).asObject0() ) ).asObject0() ) ).asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__(  ) ).asObject0(), const_str_plain_key ) ).asObject0() ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 296 );
        {
            PyObjectTempKeeper1 call1;
            var_species.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_collections ), const_str_plain_OrderedDict ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION( LOOKUP_BUILTIN( const_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_species.asObject0(), const_str_plain_items ) ).asObject0() ) ).asObject0() ) ).asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__(  ) ).asObject0(), const_str_plain_key ) ).asObject0() ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 306 );
        {
            PyObject *tmp_identifier = var_reactions.asObject0();
            SET_ATTRIBUTE( tmp_identifier, par_self.asObject0(), const_str_plain_reactions );
        }
        frame_guard.setLineNumber( 308 );
        {
            PyObject *tmp_identifier = var_species.asObject0();
            SET_ATTRIBUTE( tmp_identifier, par_self.asObject0(), const_str_plain_species );
        }
        frame_guard.setLineNumber( 314 );
        var_vardict.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_collections ), const_str_plain_OrderedDict ) ).asObject0() ) );
        frame_guard.setLineNumber( 316 );
        PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( MAKE_ITERATOR( var_variables.asObject0() ) );
        PythonExceptionKeeper _caught_5;
#if PYTHON_VERSION < 300
        int _at_lineno_5 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 316 );
                PyObject *_tmp_unpack_6 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                if ( _tmp_unpack_6 == NULL )
                {
                    break;
                }
                tmp_for_loop_3__iter_value.assign1( _tmp_unpack_6 );
                var_var.assign0( tmp_for_loop_3__iter_value.asObject0() );
                frame_guard.setLineNumber( 318 );
                {
                    PyObjectTempKeeper1 call1;
                    var_vname.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_var.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_61 ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 320 );
                {
                    PyObjectTempKeeper1 call1;
                    var_vvalue.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_var.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_61 ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 322 );
                {
                    PyObjectTemporary tmp_identifier( MAKE_DICT1( var_vvalue.asObject0(), const_str_plain_value ) );
                    PyObject *tmp_subscribed = var_vardict.asObject0();
                    SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_vname.asObject0() );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_5 = frame_guard.getLineNumber();
#endif

            _caught_5.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_3__iter_value.del( true );
        tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_5 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_5 );
        }
#endif
        _caught_5.rethrow();
        // Final end
        frame_guard.setLineNumber( 324 );
        {
            PyObject *tmp_identifier = var_vardict.asObject0();
            SET_ATTRIBUTE( tmp_identifier, par_self.asObject0(), const_str_plain_variables );
        }
        frame_guard.setLineNumber( 328 );
        PyObjectTemporaryWithDel tmp_for_loop_4__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_vardict.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_7;
#if PYTHON_VERSION < 300
        int _at_lineno_7 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 328 );
                PyObject *_tmp_unpack_8 = ITERATOR_NEXT( tmp_for_loop_4__for_iterator.asObject0() );

                if ( _tmp_unpack_8 == NULL )
                {
                    break;
                }
                tmp_for_loop_4__iter_value.assign1( _tmp_unpack_8 );
                var_var.assign0( tmp_for_loop_4__iter_value.asObject0() );
                frame_guard.setLineNumber( 330 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 subscr1;
                    PyObjectTempKeeper0 subscr2;
                    {
                        PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_findmodifiers ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr2.assign( var_vardict.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_var.asObject0() ) ) ).asObject0(), const_str_plain_value ) ).asObject0() ) ) );
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), PyObjectTemporary( ( subscr1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_var.asObject0() ) ) ).asObject0(), const_str_plain_modifiers );
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_7 = frame_guard.getLineNumber();
#endif

            _caught_7.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_4__iter_value.del( true );
        tmp_for_loop_4__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_7 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_7 );
        }
#endif
        _caught_7.rethrow();
        // Final end
        var_pardict.assign1( PyDict_New() );
        frame_guard.setLineNumber( 338 );
        PyObjectTemporaryWithDel tmp_for_loop_5__for_iterator( MAKE_ITERATOR( var_parameters.asObject0() ) );
        PythonExceptionKeeper _caught_9;
#if PYTHON_VERSION < 300
        int _at_lineno_9 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 338 );
                PyObject *_tmp_unpack_10 = ITERATOR_NEXT( tmp_for_loop_5__for_iterator.asObject0() );

                if ( _tmp_unpack_10 == NULL )
                {
                    break;
                }
                tmp_for_loop_5__iter_value.assign1( _tmp_unpack_10 );
                var_par.assign0( tmp_for_loop_5__iter_value.asObject0() );
                frame_guard.setLineNumber( 340 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 call2;
                    {
                        PyObjectTemporary tmp_identifier( ( call2.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call2.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_par.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_61 ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) );
                        PyObject *tmp_subscribed = var_pardict.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_par.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_61 ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ) ).asObject0() );
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_9 = frame_guard.getLineNumber();
#endif

            _caught_9.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_5__iter_value.del( true );
        tmp_for_loop_5__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_9 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_9 );
        }
#endif
        _caught_9.rethrow();
        // Final end
        frame_guard.setLineNumber( 342 );
        {
            PyObject *tmp_identifier = var_pardict.asObject0();
            SET_ATTRIBUTE( tmp_identifier, par_self.asObject0(), const_str_plain_parameters );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_fname.updateLocalsDict( par_self.updateLocalsDict( var_par.updateLocalsDict( var_pardict.updateLocalsDict( var_vvalue.updateLocalsDict( var_vname.updateLocalsDict( var_var.updateLocalsDict( var_vardict.updateLocalsDict( var_chemeqb.updateLocalsDict( var_chemeqf.updateLocalsDict( var_chems.updateLocalsDict( var_crate.updateLocalsDict( var_chemrates.updateLocalsDict( var_chemeq.updateLocalsDict( var_reactionname.updateLocalsDict( var_bitsofbits.updateLocalsDict( var_bits.updateLocalsDict( var_line.updateLocalsDict( var_nononames.updateLocalsDict( var_variables.updateLocalsDict( var_parameters.updateLocalsDict( var_species.updateLocalsDict( var_reactions.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_1___init___of_class_1_sencillo_of_module___main__ );
           frame_function_1___init___of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_fname = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_fname == key )
            {
                assert( _python_par_fname == NULL );
                _python_par_fname = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_fname, key ) )
            {
                assert( _python_par_fname == NULL );
                _python_par_fname = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_fname != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_fname = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_fname == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_fname = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_fname == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_fname };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_fname );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_fname );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_x( const_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ );
        }

        frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_606dca3ae6f84dfdf561f4faa9ac22aa, module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 290 );
        return LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( par_x.asObject0(), const_int_pos_1, 1 ) ).asObject0(), const_str_digest_4bd49cef95602385120501d1936958ca );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ );
           frame_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_x, key ) )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_x( const_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ );
        }

        frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_0967ac78558840396b76c510e2010dc7, module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 298 );
        return LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( par_x.asObject0(), const_int_pos_1, 1 ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ );
           frame_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_x, key ) )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_addreaction_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_r, PyObject *_python_par_s, PyObject *_python_par_name, PyObject *_python_par_chemeq, PyObject *_python_par_chemrates )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_r( const_str_plain_r, _python_par_r );
    PyObjectLocalParameterVariableNoDel par_s( const_str_plain_s, _python_par_s );
    PyObjectLocalParameterVariableNoDel par_name( const_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel par_chemeq( const_str_plain_chemeq, _python_par_chemeq );
    PyObjectLocalParameterVariableNoDel par_chemrates( const_str_plain_chemrates, _python_par_chemrates );
    PyObjectLocalVariable var_bits( const_str_plain_bits );
    PyObjectLocalVariable var_rbits( const_str_plain_rbits );
    PyObjectLocalVariable var_rs( const_str_plain_rs );
    PyObjectLocalVariable var_reacs( const_str_plain_reacs );
    PyObjectLocalVariable var_reacs_n( const_str_plain_reacs_n );
    PyObjectLocalVariable var_c( const_str_plain_c );
    PyObjectLocalVariable var_rsi( const_str_plain_rsi );
    PyObjectLocalVariable var_rsbd( const_str_plain_rsbd );
    PyObjectLocalVariable var_ps( const_str_plain_ps );
    PyObjectLocalVariable var_prods( const_str_plain_prods );
    PyObjectLocalVariable var_prods_n( const_str_plain_prods_n );
    PyObjectLocalVariable var_psi( const_str_plain_psi );
    PyObjectLocalVariable var_psbd( const_str_plain_psbd );
    PyObjectLocalVariable var_ratec( const_str_plain_ratec );
    PyObjectLocalVariable var_rate( const_str_plain_rate );
    PyObjectLocalVariable var_species( const_str_plain_species );
    PyObjectLocalVariable var_frate( const_str_plain_frate );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_addreaction_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_a3e14a495fa80a64dc06e0393214e0f3, module___main__ );
    }

    FrameGuard frame_guard( frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 366 );
        if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_b4d414045ddc319a7da99472065d3b35, par_chemeq.asObject0() ) )
        {
            frame_guard.setLineNumber( 368 );
            var_bits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_chemeq.asObject0(), const_str_plain_split ) ).asObject0(), const_str_digest_b4d414045ddc319a7da99472065d3b35 ) );
        }
        else
        {
            frame_guard.setLineNumber( 372 );
            var_bits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_chemeq.asObject0(), const_str_plain_split ) ).asObject0(), const_str_digest_467a1c8e1232bf2ab85edf0ba09a9b75 ) );
        }
        frame_guard.setLineNumber( 378 );
        var_rbits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_chemrates.asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_61 ) );
        frame_guard.setLineNumber( 380 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( var_rbits.asObject0() ) ).asObject0(), const_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 384 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rbits.asObject0(), const_str_plain_append ) ).asObject0(), const_str_empty ) );
        }
        frame_guard.setLineNumber( 390 );
        var_rs.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_43 ) );
        frame_guard.setLineNumber( 392 );
        var_reacs.assign1( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( var_rs.asObject0() ) ).asObject0() ) );
        var_reacs_n.assign1( PyDict_New() );
        frame_guard.setLineNumber( 396 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), var_rs.asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 396 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
                int _at_lineno_3 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_1__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_1__iter_value.asObject0() ) );
                    tmp_tuple_unpack_1__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_1__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_1__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_1__element_1.asObject0() );
                    var_rsi.assign0( tmp_tuple_unpack_1__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_3 = frame_guard.getLineNumber();
#endif

                    _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_1__source_iter.del( true );
                tmp_tuple_unpack_1__element_1.del( true );
                tmp_tuple_unpack_1__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_3 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_3 );
                }
#endif
                _caught_3.rethrow();
                // Final end
                frame_guard.setLineNumber( 398 );
                var_rsbd.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rsi.asObject0(), const_str_plain_split ) ).asObject0() ) );
                frame_guard.setLineNumber( 400 );
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( var_rsbd.asObject0() ) ).asObject0(), const_int_pos_2 ) )
                {
                    frame_guard.setLineNumber( 404 );
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( var_rsbd.asObject0(), const_int_pos_1, 1 ) );
                        PyObject *tmp_subscribed = var_reacs.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_c.asObject0() );
                    }
                    frame_guard.setLineNumber( 406 );
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( var_rsbd.asObject0(), const_int_0, 0 ) );
                        PyObject *tmp_subscribed = var_reacs_n.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_rsbd.asObject0(), const_int_pos_1, 1 ) ).asObject0() );
                    }
                    frame_guard.setLineNumber( 408 );
                    if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_b4d414045ddc319a7da99472065d3b35, par_chemeq.asObject0() ) )
                    {
                        frame_guard.setLineNumber( 410 );
                        PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_f513cbc21acb4f0002495a44614d71c9, par_chemeq.asObject0() ) ).asObject0() ) ).asObject0() );
                        PRINT_NEW_LINE_TO( NULL );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 416 );
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( var_rsbd.asObject0(), const_int_0, 0 ) );
                        PyObject *tmp_subscribed = var_reacs.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_c.asObject0() );
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 422 );
        var_ps.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_pos_1, 1 ) ).asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_43 ) );
        frame_guard.setLineNumber( 424 );
        var_prods.assign1( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( var_ps.asObject0() ) ).asObject0() ) );
        var_prods_n.assign1( PyDict_New() );
        frame_guard.setLineNumber( 428 );
        PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), var_ps.asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_4;
#if PYTHON_VERSION < 300
        int _at_lineno_4 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 428 );
                PyObject *_tmp_unpack_5 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                if ( _tmp_unpack_5 == NULL )
                {
                    break;
                }
                tmp_for_loop_2__iter_value.assign1( _tmp_unpack_5 );
                PythonExceptionKeeper _caught_6;
#if PYTHON_VERSION < 300
                int _at_lineno_6 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_2__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_2__iter_value.asObject0() ) );
                    tmp_tuple_unpack_2__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_2__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_2__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_2__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_2__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_2__element_1.asObject0() );
                    var_psi.assign0( tmp_tuple_unpack_2__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_6 = frame_guard.getLineNumber();
#endif

                    _caught_6.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_2__source_iter.del( true );
                tmp_tuple_unpack_2__element_1.del( true );
                tmp_tuple_unpack_2__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_6 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_6 );
                }
#endif
                _caught_6.rethrow();
                // Final end
                frame_guard.setLineNumber( 430 );
                var_psbd.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_psi.asObject0(), const_str_plain_split ) ).asObject0() ) );
                frame_guard.setLineNumber( 432 );
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( var_psbd.asObject0() ) ).asObject0(), const_int_pos_2 ) )
                {
                    frame_guard.setLineNumber( 436 );
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( var_psbd.asObject0(), const_int_pos_1, 1 ) );
                        PyObject *tmp_subscribed = var_prods.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_c.asObject0() );
                    }
                    frame_guard.setLineNumber( 438 );
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( var_psbd.asObject0(), const_int_0, 0 ) );
                        PyObject *tmp_subscribed = var_prods_n.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_psbd.asObject0(), const_int_pos_1, 1 ) ).asObject0() );
                    }
                    frame_guard.setLineNumber( 440 );
                    if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_b4d414045ddc319a7da99472065d3b35, par_chemeq.asObject0() ) )
                    {
                        frame_guard.setLineNumber( 442 );
                        PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_2f0f8da9e881fdeabd3e77d9c73bfd2c, par_chemeq.asObject0() ) ).asObject0() ) ).asObject0() );
                        PRINT_NEW_LINE_TO( NULL );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 448 );
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( var_psbd.asObject0(), const_int_0, 0 ) );
                        PyObject *tmp_subscribed = var_prods.asObject0();
                        SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_c.asObject0() );
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_4 = frame_guard.getLineNumber();
#endif

            _caught_4.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_2__iter_value.del( true );
        tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_4 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_4 );
        }
#endif
        _caught_4.rethrow();
        // Final end
        frame_guard.setLineNumber( 454 );
        {
            PyObjectTempKeeper0 make_dict1;
            PyObjectTempKeeper0 make_dict2;
            PyObjectTempKeeper1 make_dict3;
            PyObjectTempKeeper1 make_dict4;
            {
                frame_guard.setLineNumber( 454 );
                PyObjectTemporary tmp_identifier( ( make_dict1.assign( var_reacs.asObject0() ), make_dict2.assign( var_prods.asObject0() ), make_dict3.assign( LOOKUP_SUBSCRIPT_CONST( var_rbits.asObject0(), const_int_pos_1, 1 ) ), frame_guard.setLineNumber( 456 ), make_dict4.assign( LOOKUP_SUBSCRIPT_CONST( var_rbits.asObject0(), const_int_0, 0 ) ), MAKE_DICT5( make_dict1.asObject0(), const_str_plain_reactants, make_dict2.asObject0(), const_str_plain_products, make_dict3.asObject0(), const_str_digest_4bd49cef95602385120501d1936958ca, make_dict4.asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b, par_chemeq.asObject0(), const_str_plain_name ) ) );
                PyObject *tmp_subscribed = par_r.asObject0();
                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, par_name.asObject0() );
            }
        }
        frame_guard.setLineNumber( 460 );
        if ( SEQUENCE_CONTAINS_BOOL( const_str_plain_null, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0() ) )
        {
            frame_guard.setLineNumber( 464 );
            {
                PyObjectTempKeeper0 subscr1;
                SET_SUBSCRIPT( const_str_empty, PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_reactants );
            }
        }
        else
        {
            frame_guard.setLineNumber( 466 );
            if ( SEQUENCE_CONTAINS_BOOL( const_str_plain_null, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_pos_1, 1 ) ).asObject0() ) )
            {
                frame_guard.setLineNumber( 470 );
                {
                    PyObjectTempKeeper0 subscr1;
                    SET_SUBSCRIPT( const_str_empty, PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_products );
                }
            }
        }
        frame_guard.setLineNumber( 476 );
        if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_b4d414045ddc319a7da99472065d3b35, par_chemeq.asObject0() ) )
        {
            frame_guard.setLineNumber( 478 );
            {
                PyObjectTempKeeper0 subscr1;
                SET_SUBSCRIPT( const_int_pos_1, PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_digest_258f51a08760fdae27a872c9dcd3ba93 );
            }
            frame_guard.setLineNumber( 480 );
            {
                PyObjectTempKeeper0 subscr1;
                var_ratec.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) );
            }
            frame_guard.setLineNumber( 482 );
            if ( ( SEQUENCE_CONTAINS_BOOL( const_str_chr_43, var_ratec.asObject0() ) || SEQUENCE_CONTAINS_BOOL( const_str_chr_45, var_ratec.asObject0() ) ) )
            {
                frame_guard.setLineNumber( 486 );
                var_ratec.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_40, var_ratec.asObject0() ) ).asObject0(), const_str_chr_41 ) );
            }
            frame_guard.setLineNumber( 488 );
            if ( SEQUENCE_CONTAINS_BOOL( const_str_plain_null, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_bits.asObject0(), const_int_0, 0 ) ).asObject0() ) )
            {
                frame_guard.setLineNumber( 492 );
                var_rate.assign0( var_ratec.asObject0() );
            }
            else
            {
                frame_guard.setLineNumber( 498 );
                {
                    PyObjectTempKeeper1 op1;
                    PyObjectTempKeeper0 subscr1;
                    var_rate.assign1( ( op1.assign( BINARY_OPERATION_ADD( var_ratec.asObject0(), const_str_chr_42 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 502 );
                {
                    PyObjectTempKeeper0 subscr1;
                    if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0() ) ).asObject0(), const_int_pos_1 ) )
                    {
                        frame_guard.setLineNumber( 504 );
                        PyObject *tmp_inplace_assign_1__inplace_start = var_rate.asObject0();
                        PyObject *_tmp_inplace_assign_1__inplace_end;
                        {
                            PyObjectTempKeeper0 op1;
                            PyObjectTempKeeper0 subscr1;
                            _tmp_inplace_assign_1__inplace_end = ( op1.assign( tmp_inplace_assign_1__inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_42, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ).asObject0() ) );
                        }
                        PyObjectTemporary tmp_inplace_assign_1__inplace_end( _tmp_inplace_assign_1__inplace_end );
                        if ( ( tmp_inplace_assign_1__inplace_start != tmp_inplace_assign_1__inplace_end.asObject0() ) )
                        {
                            var_rate.assign0( tmp_inplace_assign_1__inplace_end.asObject0() );
                        }
                    }
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 510 );
            {
                PyObjectTempKeeper0 subscr1;
                SET_SUBSCRIPT( const_int_0, PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_digest_258f51a08760fdae27a872c9dcd3ba93 );
            }
            frame_guard.setLineNumber( 512 );
            if ( ( SEQUENCE_CONTAINS_BOOL( const_str_chr_43, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_rbits.asObject0(), const_int_0, 0 ) ).asObject0() ) || SEQUENCE_CONTAINS_BOOL( const_str_chr_45, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_rbits.asObject0(), const_int_0, 0 ) ).asObject0() ) ) )
            {
                frame_guard.setLineNumber( 516 );
                var_rate.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_40, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( var_rbits.asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_chr_41 ) );
            }
            else
            {
                frame_guard.setLineNumber( 520 );
                var_rate.assign1( LOOKUP_SUBSCRIPT_CONST( var_rbits.asObject0(), const_int_0, 0 ) );
            }
        }
        frame_guard.setLineNumber( 528 );
        PyObject *_tmp_for_loop_3__for_iterator;
        {
            PyObjectTempKeeper0 subscr1;
            _tmp_for_loop_3__for_iterator = MAKE_ITERATOR( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0() );
        }
        PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( _tmp_for_loop_3__for_iterator );
        PythonExceptionKeeper _caught_7;
#if PYTHON_VERSION < 300
        int _at_lineno_7 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 528 );
                PyObject *_tmp_unpack_8 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                if ( _tmp_unpack_8 == NULL )
                {
                    break;
                }
                tmp_for_loop_3__iter_value.assign1( _tmp_unpack_8 );
                var_species.assign0( tmp_for_loop_3__iter_value.asObject0() );
                frame_guard.setLineNumber( 530 );
                if ( ( RICH_COMPARE_BOOL_NE( var_species.asObject0(), const_str_empty ) && RICH_COMPARE_BOOL_NE( var_species.asObject0(), const_str_plain_null ) ) )
                {
                    frame_guard.setLineNumber( 532 );
                    {
                        PyObjectTempKeeper1 call1;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( var_reacs_n.asObject0(), const_str_plain_has_key ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_species.asObject0() ) ) ).asObject0() ) )
                        {
                            frame_guard.setLineNumber( 536 );
                            {
                                PyObjectTempKeeper1 op1;
                                PyObjectTempKeeper0 subscr1;
                                var_frate.assign1( ( op1.assign( BINARY_OPERATION_ADD( var_rate.asObject0(), const_str_chr_42 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( ( subscr1.assign( var_reacs_n.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_species.asObject0() ) ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 542 );
                            var_frate.assign0( var_rate.asObject0() );
                        }
                    }
                    frame_guard.setLineNumber( 544 );
                    {
                        PyObjectTempKeeper1 call1;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_s.asObject0(), const_str_plain_has_key ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_species.asObject0() ) ) ).asObject0() ) )
                        {
                            frame_guard.setLineNumber( 546 );
                            PyObject *_tmp_inplace_assign_2__inplace_target;
                            {
                                PyObjectTempKeeper0 subscr1;
                                _tmp_inplace_assign_2__inplace_target = ( subscr1.assign( par_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_species.asObject0() ) );
                            }
                            PyObjectTemporary tmp_inplace_assign_2__inplace_target( _tmp_inplace_assign_2__inplace_target );
                            PyObject *tmp_inplace_assign_2__inplace_subscript = const_str_plain_death;
                            {
                                PyObjectTempKeeper1 op1;
                                PyObjectTempKeeper0 subscr1;
                                {
                                    PyObjectTemporary tmp_identifier( ( op1.assign( ( subscr1.assign( tmp_inplace_assign_2__inplace_target.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_2__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_45, var_frate.asObject0() ) ).asObject0() ) ) );
                                    PyObject *tmp_subscribed = tmp_inplace_assign_2__inplace_target.asObject0();
                                    SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_2__inplace_subscript );
                                }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 550 );
                            {
                                PyObjectTemporary tmp_identifier( MAKE_DICT3( const_str_empty, const_str_plain_birth, PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_45, var_frate.asObject0() ) ).asObject0(), const_str_plain_death, const_str_plain_0, const_str_digest_a6d027ddca3ec307b7bd889905598201 ) );
                                PyObject *tmp_subscribed = par_s.asObject0();
                                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_species.asObject0() );
                            }
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_7 = frame_guard.getLineNumber();
#endif

            _caught_7.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_3__iter_value.del( true );
        tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_7 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_7 );
        }
#endif
        _caught_7.rethrow();
        // Final end
        frame_guard.setLineNumber( 554 );
        PyObject *_tmp_for_loop_4__for_iterator;
        {
            PyObjectTempKeeper0 subscr1;
            _tmp_for_loop_4__for_iterator = MAKE_ITERATOR( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( par_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), par_name.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0() );
        }
        PyObjectTemporaryWithDel tmp_for_loop_4__for_iterator( _tmp_for_loop_4__for_iterator );
        PythonExceptionKeeper _caught_9;
#if PYTHON_VERSION < 300
        int _at_lineno_9 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 554 );
                PyObject *_tmp_unpack_10 = ITERATOR_NEXT( tmp_for_loop_4__for_iterator.asObject0() );

                if ( _tmp_unpack_10 == NULL )
                {
                    break;
                }
                tmp_for_loop_4__iter_value.assign1( _tmp_unpack_10 );
                var_species.assign0( tmp_for_loop_4__iter_value.asObject0() );
                frame_guard.setLineNumber( 556 );
                if ( ( RICH_COMPARE_BOOL_NE( var_species.asObject0(), const_str_empty ) && RICH_COMPARE_BOOL_NE( var_species.asObject0(), const_str_plain_null ) ) )
                {
                    frame_guard.setLineNumber( 558 );
                    {
                        PyObjectTempKeeper1 call1;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( var_prods_n.asObject0(), const_str_plain_has_key ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_species.asObject0() ) ) ).asObject0() ) )
                        {
                            frame_guard.setLineNumber( 562 );
                            {
                                PyObjectTempKeeper1 op1;
                                PyObjectTempKeeper0 subscr1;
                                var_frate.assign1( ( op1.assign( BINARY_OPERATION_ADD( var_rate.asObject0(), const_str_chr_42 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( ( subscr1.assign( var_prods_n.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_species.asObject0() ) ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 568 );
                            var_frate.assign0( var_rate.asObject0() );
                        }
                    }
                    frame_guard.setLineNumber( 570 );
                    {
                        PyObjectTempKeeper1 call1;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_s.asObject0(), const_str_plain_has_key ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_species.asObject0() ) ) ).asObject0() ) )
                        {
                            frame_guard.setLineNumber( 572 );
                            PyObject *_tmp_inplace_assign_3__inplace_target;
                            {
                                PyObjectTempKeeper0 subscr1;
                                _tmp_inplace_assign_3__inplace_target = ( subscr1.assign( par_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_species.asObject0() ) );
                            }
                            PyObjectTemporary tmp_inplace_assign_3__inplace_target( _tmp_inplace_assign_3__inplace_target );
                            PyObject *tmp_inplace_assign_3__inplace_subscript = const_str_plain_birth;
                            {
                                PyObjectTempKeeper1 op1;
                                PyObjectTempKeeper0 subscr1;
                                {
                                    PyObjectTemporary tmp_identifier( ( op1.assign( ( subscr1.assign( tmp_inplace_assign_3__inplace_target.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_3__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_43, var_frate.asObject0() ) ).asObject0() ) ) );
                                    PyObject *tmp_subscribed = tmp_inplace_assign_3__inplace_target.asObject0();
                                    SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_3__inplace_subscript );
                                }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 576 );
                            {
                                PyObjectTemporary tmp_identifier( MAKE_DICT3( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_43, var_frate.asObject0() ) ).asObject0(), const_str_plain_birth, const_str_empty, const_str_plain_death, const_str_plain_0, const_str_digest_a6d027ddca3ec307b7bd889905598201 ) );
                                PyObject *tmp_subscribed = par_s.asObject0();
                                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, var_species.asObject0() );
                            }
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_9 = frame_guard.getLineNumber();
#endif

            _caught_9.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_4__iter_value.del( true );
        tmp_for_loop_4__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_9 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_9 );
        }
#endif
        _caught_9.rethrow();
        // Final end
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_chemrates.updateLocalsDict( par_chemeq.updateLocalsDict( par_name.updateLocalsDict( par_s.updateLocalsDict( par_r.updateLocalsDict( par_self.updateLocalsDict( var_frate.updateLocalsDict( var_species.updateLocalsDict( var_rate.updateLocalsDict( var_ratec.updateLocalsDict( var_psbd.updateLocalsDict( var_psi.updateLocalsDict( var_prods_n.updateLocalsDict( var_prods.updateLocalsDict( var_ps.updateLocalsDict( var_rsbd.updateLocalsDict( var_rsi.updateLocalsDict( var_c.updateLocalsDict( var_reacs_n.updateLocalsDict( var_reacs.updateLocalsDict( var_rs.updateLocalsDict( var_rbits.updateLocalsDict( var_bits.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ );
           frame_function_2_addreaction_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_addreaction_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_r = NULL;
    PyObject *_python_par_s = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_chemeq = NULL;
    PyObject *_python_par_chemrates = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "addreaction() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_r == key )
            {
                assert( _python_par_r == NULL );
                _python_par_r = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_s == key )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_chemeq == key )
            {
                assert( _python_par_chemeq == NULL );
                _python_par_chemeq = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_chemrates == key )
            {
                assert( _python_par_chemrates == NULL );
                _python_par_chemrates = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_r, key ) )
            {
                assert( _python_par_r == NULL );
                _python_par_r = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_s, key ) )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_name, key ) )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_chemeq, key ) )
            {
                assert( _python_par_chemeq == NULL );
                _python_par_chemeq = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_chemrates, key ) )
            {
                assert( _python_par_chemrates == NULL );
                _python_par_chemrates = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "addreaction() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 6 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_r != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_r = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_r == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_r = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_s == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_s = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_chemeq != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_chemeq = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_chemeq == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_chemeq = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_chemrates != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_chemrates = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_chemrates == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_chemrates = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_r == NULL || _python_par_s == NULL || _python_par_name == NULL || _python_par_chemeq == NULL || _python_par_chemrates == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_r, _python_par_s, _python_par_name, _python_par_chemeq, _python_par_chemrates };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_addreaction_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_r, _python_par_s, _python_par_name, _python_par_chemeq, _python_par_chemrates );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_r );
    Py_XDECREF( _python_par_s );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_chemeq );
    Py_XDECREF( _python_par_chemrates );

    return NULL;
}

static PyObject *dparse_function_2_addreaction_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_2_addreaction_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_addreaction_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_rate, PyObject *_python_par_exclude )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_rate( const_str_plain_rate, _python_par_rate );
    PyObjectLocalParameterVariableNoDel par_exclude( const_str_plain_exclude, _python_par_exclude );
    PyObjectLocalVariable var_bits( const_str_plain_bits );
    PyObjectLocalVariable var_species( const_str_plain_species );
    PyObjectLocalVariable var_varnames( const_str_plain_varnames );
    PyObjectLocalVariable var_mods( const_str_plain_mods );
    PyObjectLocalVariable var_b( const_str_plain_b );
    PyObjectLocalVariable var_bb( const_str_plain_bb );
    PyObjectLocalVariable var_rem( const_str_plain_rem );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_findmodifiers_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_ddbe411834e9c0d1ceb39730611087a5, module___main__ );
    }

    FrameGuard frame_guard( frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 592 );
        {
            PyObjectTempKeeper1 call1;
            var_bits.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_re ), const_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS3( call1.asObject0(), const_str_digest_7b6e1df60e48d262df53ae6cf95ad706, const_str_chr_59, par_rate.asObject0() ) ) ).asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_59 ) );
        }
        frame_guard.setLineNumber( 594 );
        var_species.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) ).asObject0(), const_str_plain_keys ) ).asObject0() ) );
        frame_guard.setLineNumber( 596 );
        var_varnames.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) ).asObject0(), const_str_plain_keys ) ).asObject0() ) );
        var_mods.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 600 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( var_bits.asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 600 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                var_b.assign0( tmp_for_loop_1__iter_value.asObject0() );
                frame_guard.setLineNumber( 602 );
                {
                    PyObjectTempKeeper1 call1;
                    var_bb.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_rmwhitespace ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_b.asObject0() ) ) );
                }
                frame_guard.setLineNumber( 604 );
                {
                    PyObjectTempKeeper0 cmp1;
                    if ( ( cmp1.assign( var_bb.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), var_species.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 606 );
                        {
                            PyObjectTempKeeper1 call1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_mods.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_bb.asObject0() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 608 );
                        {
                            PyObjectTempKeeper0 cmp1;
                            if ( ( cmp1.assign( var_bb.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), var_varnames.asObject0() ) ) )
                            {
                                frame_guard.setLineNumber( 610 );
                                PyObject *tmp_inplace_assign_1__inplace_start = var_mods.asObject0();
                                PyObject *_tmp_inplace_assign_1__inplace_end;
                                {
                                    PyObjectTempKeeper0 op1;
                                    PyObjectTempKeeper1 subscr1;
                                    _tmp_inplace_assign_1__inplace_end = ( op1.assign( tmp_inplace_assign_1__inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_bb.asObject0() ) ) ).asObject0(), const_str_plain_modifiers ) ).asObject0() ) );
                                }
                                PyObjectTemporary tmp_inplace_assign_1__inplace_end( _tmp_inplace_assign_1__inplace_end );
                                if ( ( tmp_inplace_assign_1__inplace_start != tmp_inplace_assign_1__inplace_end.asObject0() ) )
                                {
                                    var_mods.assign0( tmp_inplace_assign_1__inplace_end.asObject0() );
                                }
                            }
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 614 );
        var_mods.assign1( TO_LIST( PyObjectTemporary( TO_SET( var_mods.asObject0() ) ).asObject0() ) );
        frame_guard.setLineNumber( 618 );
        PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( par_exclude.asObject0() ) );
        PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
        int _at_lineno_3 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 618 );
                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                if ( _tmp_unpack_4 == NULL )
                {
                    break;
                }
                tmp_for_loop_2__iter_value.assign1( _tmp_unpack_4 );
                var_rem.assign0( tmp_for_loop_2__iter_value.asObject0() );
                frame_guard.setLineNumber( 620 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_mods.asObject0(), const_str_plain_remove ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_rem.asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_3 = frame_guard.getLineNumber();
#endif

            _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_2__iter_value.del( true );
        tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_3 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_3 );
        }
#endif
        _caught_3.rethrow();
        // Final end
        frame_guard.setLineNumber( 622 );
        return TO_LIST( PyObjectTemporary( TO_SET( var_mods.asObject0() ) ).asObject0() );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_exclude.updateLocalsDict( par_rate.updateLocalsDict( par_self.updateLocalsDict( var_rem.updateLocalsDict( var_bb.updateLocalsDict( var_b.updateLocalsDict( var_mods.updateLocalsDict( var_varnames.updateLocalsDict( var_species.updateLocalsDict( var_bits.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ );
           frame_function_3_findmodifiers_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_rate = NULL;
    PyObject *_python_par_exclude = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "findmodifiers() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rate == key )
            {
                assert( _python_par_rate == NULL );
                _python_par_rate = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_exclude == key )
            {
                assert( _python_par_exclude == NULL );
                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_rate, key ) )
            {
                assert( _python_par_rate == NULL );
                _python_par_rate = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_exclude, key ) )
            {
                assert( _python_par_exclude == NULL );
                _python_par_exclude = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "findmodifiers() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_rate != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_rate = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_rate == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_rate = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_exclude != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_exclude = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_exclude == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_exclude = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_rate == NULL || _python_par_exclude == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_rate, _python_par_exclude };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_rate, _python_par_exclude );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_rate );
    Py_XDECREF( _python_par_exclude );

    return NULL;
}

static PyObject *dparse_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_isfloat_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_s( const_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_isfloat_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_8b0bfa462bfd63d8a1849226906db323, module___main__ );
    }

    FrameGuardWithExceptionPreservation frame_guard( frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 630 );
        try
        {
            frame_guard.setLineNumber( 632 );
            DECREASE_REFCOUNT( TO_FLOAT( par_s.asObject0() ) );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }

            frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
            ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_ValueError ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( Py_False );
            }
            else
            {
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_s.updateLocalsDict( par_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ );
           frame_function_4_isfloat_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_True );
}
static PyObject *fparse_function_4_isfloat_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_s = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "isfloat() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_s == key )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_s, key ) )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "isfloat() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_s == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_s = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_s == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_s };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_isfloat_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_4_isfloat_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_isfloat_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_isfloat_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_s( const_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_rmwhitespace_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_550d2f2701b590a3857e999ccfb7af67, module___main__ );
    }

    FrameGuard frame_guard( frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 644 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( const_str_empty, const_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_s.asObject0(), const_str_plain_split ) ).asObject0() ) ).asObject0() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_s.updateLocalsDict( par_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ );
           frame_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_s = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "rmwhitespace() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_s == key )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_s, key ) )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rmwhitespace() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_s == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_s = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_s == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_s };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_printmathematica_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_ofile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_ofile( const_str_plain_ofile, _python_par_ofile );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_out( const_str_plain_out );
    PyObjectLocalVariable var_sname( const_str_plain_sname );
    PyObjectLocalVariable var_outstring( const_str_plain_outstring );
    PyObjectTempVariable tmp_for_loop_1__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_printmathematica_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_66551d851b86f51f2908b425bea8c246, module___main__ );
    }

    FrameGuard frame_guard( frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 656 );
        var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
        frame_guard.setLineNumber( 658 );
        var_out.assign1( OPEN_FILE( PyObjectTemporary( BINARY_OPERATION_ADD( par_ofile.asObject0(), const_str_digest_250c948b70fd38777e2759fe81f6c83b ) ).asObject0(), const_str_plain_w, NULL ) );
        frame_guard.setLineNumber( 660 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 660 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                var_sname.assign0( tmp_for_loop_1__iter_value.asObject0() );
                frame_guard.setLineNumber( 662 );
                {
                    PyObjectTempKeeper1 op1;
                    PyObjectTempKeeper1 op2;
                    PyObjectTempKeeper0 subscr1;
                    PyObjectTempKeeper0 subscr2;
                    var_outstring.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( ( frame_guard.setLineNumber( 662 ), op2.assign( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_plain_d, var_sname.asObject0() ) ).asObject0(), const_str_digest_3e482d5bb5e8f99d8fa4d9fff1925634 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain_birth ) ).asObject0() ) ) ), frame_guard.setLineNumber( 664 ), BINARY_OPERATION_ADD( op2.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( frame_guard.setLineNumber( 664 ), subscr2.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain_death ) ).asObject0() ) ) ).asObject0(), const_str_digest_56f785241d0ed9fe51a8170b9dd50272 ) );
                }
                frame_guard.setLineNumber( 666 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_outstring.asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 668 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_close ) ).asObject0() ) );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_outstring.updateLocalsDict( var_sname.updateLocalsDict( var_out.updateLocalsDict( var_s.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ );
           frame_function_6_printmathematica_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_printmathematica_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_ofile = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printmathematica() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ofile == key )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_ofile, key ) )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printmathematica() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_ofile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ofile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ofile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ofile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_ofile == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_ofile };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_printmathematica_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_ofile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_ofile );

    return NULL;
}

static PyObject *dparse_function_6_printmathematica_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6_printmathematica_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_printmathematica_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_printodes_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_out, PyObject *_python_par_otype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_out( const_str_plain_out, _python_par_out );
    PyObjectLocalParameterVariableNoDel par_otype( const_str_plain_otype, _python_par_otype );
    PyObjectLocalVariable var_p( const_str_plain_p );
    PyObjectLocalVariable var_r( const_str_plain_r );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_v( const_str_plain_v );
    PyObjectLocalVariable var_deliml( const_str_plain_deliml );
    PyObjectLocalVariable var_delimr( const_str_plain_delimr );
    PyObjectLocalVariable var_stp( const_str_plain_stp );
    PyObjectLocalVariable var_inc( const_str_plain_inc );
    PyObjectLocalVariable var_c( const_str_plain_c );
    PyObjectLocalVariable var_rname( const_str_plain_rname );
    PyObjectLocalVariable var_par( const_str_plain_par );
    PyObjectLocalVariable var_sname( const_str_plain_sname );
    PyObjectLocalVariable var_var( const_str_plain_var );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;

    // Actual function code.
    static PyFrameObject *frame_function_7_printodes_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_7_printodes_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_7_printodes_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_printodes_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_7_printodes_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_7_printodes_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_977e9b7c42e1167ff1309953b9864488, module___main__ );
    }

    FrameGuard frame_guard( frame_function_7_printodes_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_7_printodes_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 680 );
        var_p.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_parameters ) );
        frame_guard.setLineNumber( 682 );
        var_r.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_reactions ) );
        frame_guard.setLineNumber( 684 );
        var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
        frame_guard.setLineNumber( 686 );
        var_v.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) );
        frame_guard.setLineNumber( 688 );
        if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_python ) )
        {
            var_deliml.assign0( const_str_chr_91 );
            var_delimr.assign0( const_str_chr_93 );
            var_stp.assign0( const_str_empty );
            var_inc.assign0( const_int_0 );
        }
        else
        {
            frame_guard.setLineNumber( 698 );
            if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_matlab ) )
            {
                var_deliml.assign0( const_str_chr_40 );
                var_delimr.assign0( const_str_chr_41 );
                var_stp.assign0( const_str_chr_59 );
                var_inc.assign0( const_int_pos_1 );
            }
        }
        var_c.assign0( const_int_0 );
        frame_guard.setLineNumber( 712 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_r.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 712 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                var_rname.assign0( tmp_for_loop_1__iter_value.asObject0() );
                frame_guard.setLineNumber( 716 );
                {
                    PyObjectTempKeeper0 subscr1;
                    if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_rname.asObject0() ) ) ).asObject0(), const_str_digest_4bd49cef95602385120501d1936958ca ) ).asObject0(), const_str_empty ) )
                    {
                        frame_guard.setLineNumber( 718 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper1 op1;
                            PyObjectTempKeeper0 op2;
                            PyObjectTempKeeper1 op3;
                            PyObjectTempKeeper1 op4;
                            PyObjectTempKeeper1 op5;
                            PyObjectTempKeeper0 subscr1;
                            DECREASE_REFCOUNT( ( frame_guard.setLineNumber( 718 ), call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 720 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op5.assign( ( op4.assign( ( op3.assign( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_9, PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_rname.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) ).asObject0() ) ).asObject0(), const_str_digest_22b5378d86bfd02fc819632a89af0072 ) ), frame_guard.setLineNumber( 720 ), BINARY_OPERATION_ADD( op1.asObject0(), var_deliml.asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( ( op2.assign( var_c.asObject0() ), BINARY_OPERATION_ADD( op2.asObject0(), var_inc.asObject0() ) ) ).asObject0() ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op4.asObject0(), var_delimr.asObject0() ) ) ), BINARY_OPERATION_ADD( op5.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                        }
                        frame_guard.setLineNumber( 722 );
                        PyObject *tmp_inplace_assign_1__inplace_start = var_c.asObject0();
                        PyObjectTemporary tmp_inplace_assign_1__inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_inplace_assign_1__inplace_start, const_int_pos_1 ) );
                        if ( ( tmp_inplace_assign_1__inplace_start != tmp_inplace_assign_1__inplace_end.asObject0() ) )
                        {
                            var_c.assign0( tmp_inplace_assign_1__inplace_end.asObject0() );
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 724 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_chr_10 ) );
        frame_guard.setLineNumber( 728 );
        PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_p.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
        int _at_lineno_3 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 728 );
                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                if ( _tmp_unpack_4 == NULL )
                {
                    break;
                }
                tmp_for_loop_2__iter_value.assign1( _tmp_unpack_4 );
                PythonExceptionKeeper _caught_5;
#if PYTHON_VERSION < 300
                int _at_lineno_5 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_1__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_2__iter_value.asObject0() ) );
                    tmp_tuple_unpack_1__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_1__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_1__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_1__element_1.asObject0() );
                    var_par.assign0( tmp_tuple_unpack_1__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_5 = frame_guard.getLineNumber();
#endif

                    _caught_5.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_1__source_iter.del( true );
                tmp_tuple_unpack_1__element_1.del( true );
                tmp_tuple_unpack_1__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_5 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_5 );
                }
#endif
                _caught_5.rethrow();
                // Final end
                frame_guard.setLineNumber( 730 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 op1;
                    PyObjectTempKeeper0 op2;
                    PyObjectTempKeeper1 op3;
                    PyObjectTempKeeper1 op4;
                    PyObjectTempKeeper1 op5;
                    DECREASE_REFCOUNT( ( frame_guard.setLineNumber( 730 ), call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 732 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op5.assign( ( op4.assign( ( frame_guard.setLineNumber( 730 ), op3.assign( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_9, var_par.asObject0() ) ).asObject0(), const_str_digest_ebdcf37e5f5c15ba20e31183097af0fa ) ), BINARY_OPERATION_ADD( op1.asObject0(), var_deliml.asObject0() ) ) ), frame_guard.setLineNumber( 732 ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( ( frame_guard.setLineNumber( 732 ), op2.assign( var_c.asObject0() ), BINARY_OPERATION_ADD( op2.asObject0(), var_inc.asObject0() ) ) ).asObject0() ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op4.asObject0(), var_delimr.asObject0() ) ) ), BINARY_OPERATION_ADD( op5.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_3 = frame_guard.getLineNumber();
#endif

            _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_2__iter_value.del( true );
        tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_3 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_3 );
        }
#endif
        _caught_3.rethrow();
        // Final end
        frame_guard.setLineNumber( 734 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_chr_10 ) );
        frame_guard.setLineNumber( 738 );
        PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_6;
#if PYTHON_VERSION < 300
        int _at_lineno_6 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 738 );
                PyObject *_tmp_unpack_7 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                if ( _tmp_unpack_7 == NULL )
                {
                    break;
                }
                tmp_for_loop_3__iter_value.assign1( _tmp_unpack_7 );
                PythonExceptionKeeper _caught_8;
#if PYTHON_VERSION < 300
                int _at_lineno_8 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_2__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_3__iter_value.asObject0() ) );
                    tmp_tuple_unpack_2__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_2__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_2__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_2__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_2__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_2__element_1.asObject0() );
                    var_sname.assign0( tmp_tuple_unpack_2__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_8 = frame_guard.getLineNumber();
#endif

                    _caught_8.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_2__source_iter.del( true );
                tmp_tuple_unpack_2__element_1.del( true );
                tmp_tuple_unpack_2__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_8 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_8 );
                }
#endif
                _caught_8.rethrow();
                // Final end
                frame_guard.setLineNumber( 740 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 op1;
                    PyObjectTempKeeper0 op2;
                    PyObjectTempKeeper1 op3;
                    PyObjectTempKeeper1 op4;
                    PyObjectTempKeeper1 op5;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op5.assign( ( op4.assign( ( op3.assign( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_9, var_sname.asObject0() ) ).asObject0(), const_str_digest_18add45ae44cfb81c494873dd89e4b1e ) ), BINARY_OPERATION_ADD( op1.asObject0(), var_deliml.asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( ( op2.assign( var_c.asObject0() ), BINARY_OPERATION_ADD( op2.asObject0(), var_inc.asObject0() ) ) ).asObject0() ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op4.asObject0(), var_delimr.asObject0() ) ) ), BINARY_OPERATION_ADD( op5.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_6 = frame_guard.getLineNumber();
#endif

            _caught_6.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_3__iter_value.del( true );
        tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_6 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_6 );
        }
#endif
        _caught_6.rethrow();
        // Final end
        frame_guard.setLineNumber( 742 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_chr_10 ) );
        frame_guard.setLineNumber( 746 );
        PyObjectTemporaryWithDel tmp_for_loop_4__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_v.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_9;
#if PYTHON_VERSION < 300
        int _at_lineno_9 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 746 );
                PyObject *_tmp_unpack_10 = ITERATOR_NEXT( tmp_for_loop_4__for_iterator.asObject0() );

                if ( _tmp_unpack_10 == NULL )
                {
                    break;
                }
                tmp_for_loop_4__iter_value.assign1( _tmp_unpack_10 );
                var_var.assign0( tmp_for_loop_4__iter_value.asObject0() );
                frame_guard.setLineNumber( 748 );
                if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_python ) )
                {
                    frame_guard.setLineNumber( 750 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper1 op1;
                        PyObjectTempKeeper1 op2;
                        PyObjectTempKeeper0 subscr1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_9, var_var.asObject0() ) ).asObject0(), const_str_digest_8e12c91677b3b3df266a770b22c82f2f ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS2( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_v.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_var.asObject0() ) ) ).asObject0(), const_str_plain_value ) ).asObject0(), const_str_plain_replace ) ).asObject0(), const_str_chr_94, const_str_digest_514faf5a71b4f0f67374c388f37aa0d7 ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 752 );
                    if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_matlab ) )
                    {
                        frame_guard.setLineNumber( 754 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper1 op1;
                            PyObjectTempKeeper1 op2;
                            PyObjectTempKeeper0 subscr1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_9, var_var.asObject0() ) ).asObject0(), const_str_digest_8e12c91677b3b3df266a770b22c82f2f ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_v.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_var.asObject0() ) ) ).asObject0(), const_str_plain_value ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_9 = frame_guard.getLineNumber();
#endif

            _caught_9.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_4__iter_value.del( true );
        tmp_for_loop_4__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_9 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_9 );
        }
#endif
        _caught_9.rethrow();
        // Final end
        frame_guard.setLineNumber( 756 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_chr_10 ) );
        frame_guard.setLineNumber( 760 );
        if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_python ) )
        {
            frame_guard.setLineNumber( 762 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_7e5127aaece3d4313e0f523ca1b45a8a, PyObjectTemporary( TO_STR( PyObjectTemporary( BUILTIN_LEN( var_s.asObject0() ) ).asObject0() ) ).asObject0() ) ).asObject0(), const_str_digest_878e08b0c9cf3710b9dc228122b07c7f ) ).asObject0() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 764 );
            if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_matlab ) )
            {
                frame_guard.setLineNumber( 766 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_b32622c583e068e4d139b920ae744abf ) );
            }
        }
        frame_guard.setLineNumber( 768 );
        PyObjectTemporaryWithDel tmp_for_loop_5__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_11;
#if PYTHON_VERSION < 300
        int _at_lineno_11 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 768 );
                PyObject *_tmp_unpack_12 = ITERATOR_NEXT( tmp_for_loop_5__for_iterator.asObject0() );

                if ( _tmp_unpack_12 == NULL )
                {
                    break;
                }
                tmp_for_loop_5__iter_value.assign1( _tmp_unpack_12 );
                PythonExceptionKeeper _caught_13;
#if PYTHON_VERSION < 300
                int _at_lineno_13 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_3__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_5__iter_value.asObject0() ) );
                    tmp_tuple_unpack_3__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_3__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_3__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_3__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_3__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_3__element_1.asObject0() );
                    var_sname.assign0( tmp_tuple_unpack_3__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_13 = frame_guard.getLineNumber();
#endif

                    _caught_13.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_3__source_iter.del( true );
                tmp_tuple_unpack_3__element_1.del( true );
                tmp_tuple_unpack_3__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_13 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_13 );
                }
#endif
                _caught_13.rethrow();
                // Final end
                frame_guard.setLineNumber( 770 );
                if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_python ) )
                {
                    frame_guard.setLineNumber( 772 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper0 op1;
                        PyObjectTempKeeper1 op2;
                        PyObjectTempKeeper1 op3;
                        PyObjectTempKeeper1 op4;
                        PyObjectTempKeeper1 op5;
                        PyObjectTempKeeper1 op6;
                        PyObjectTempKeeper0 subscr1;
                        PyObjectTempKeeper0 subscr2;
                        DECREASE_REFCOUNT( ( frame_guard.setLineNumber( 772 ), call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 776 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op6.assign( ( frame_guard.setLineNumber( 774 ), op5.assign( ( frame_guard.setLineNumber( 772 ), op4.assign( BINARY_OPERATION_ADD( PyObjectTemporary( ( op3.assign( ( op2.assign( BINARY_OPERATION_ADD( const_str_digest_d78cd8e132eea107785d5d617c4abd32, var_deliml.asObject0() ) ), BINARY_OPERATION_ADD( op2.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( ( op1.assign( var_c.asObject0() ), BINARY_OPERATION_ADD( op1.asObject0(), var_inc.asObject0() ) ) ).asObject0() ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), var_delimr.asObject0() ) ) ).asObject0(), const_str_digest_8e12c91677b3b3df266a770b22c82f2f ) ), frame_guard.setLineNumber( 774 ), BINARY_OPERATION_ADD( op4.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS2( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( frame_guard.setLineNumber( 774 ), subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain_birth ) ).asObject0(), const_str_plain_replace ) ).asObject0(), const_str_chr_94, const_str_digest_514faf5a71b4f0f67374c388f37aa0d7 ) ).asObject0() ) ) ), frame_guard.setLineNumber( 776 ), BINARY_OPERATION_ADD( op5.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS2( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( frame_guard.setLineNumber( 776 ), subscr2.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain_death ) ).asObject0(), const_str_plain_replace ) ).asObject0(), const_str_chr_94, const_str_digest_514faf5a71b4f0f67374c388f37aa0d7 ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op6.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 778 );
                    if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_matlab ) )
                    {
                        frame_guard.setLineNumber( 780 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper0 op1;
                            PyObjectTempKeeper1 op2;
                            PyObjectTempKeeper1 op3;
                            PyObjectTempKeeper1 op4;
                            PyObjectTempKeeper1 op5;
                            PyObjectTempKeeper1 op6;
                            PyObjectTempKeeper0 subscr1;
                            PyObjectTempKeeper0 subscr2;
                            DECREASE_REFCOUNT( ( frame_guard.setLineNumber( 780 ), call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 782 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op6.assign( ( op5.assign( ( frame_guard.setLineNumber( 780 ), op4.assign( BINARY_OPERATION_ADD( PyObjectTemporary( ( op3.assign( ( op2.assign( BINARY_OPERATION_ADD( const_str_digest_d78cd8e132eea107785d5d617c4abd32, var_deliml.asObject0() ) ), BINARY_OPERATION_ADD( op2.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( ( op1.assign( var_c.asObject0() ), BINARY_OPERATION_ADD( op1.asObject0(), var_inc.asObject0() ) ) ).asObject0() ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), var_delimr.asObject0() ) ) ).asObject0(), const_str_digest_8e12c91677b3b3df266a770b22c82f2f ) ), frame_guard.setLineNumber( 782 ), BINARY_OPERATION_ADD( op4.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( frame_guard.setLineNumber( 782 ), subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain_birth ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr2.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain_death ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op6.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_11 = frame_guard.getLineNumber();
#endif

            _caught_11.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_5__iter_value.del( true );
        tmp_for_loop_5__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_11 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_11 );
        }
#endif
        _caught_11.rethrow();
        // Final end
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_otype.updateLocalsDict( par_out.updateLocalsDict( par_self.updateLocalsDict( var_var.updateLocalsDict( var_sname.updateLocalsDict( var_par.updateLocalsDict( var_rname.updateLocalsDict( var_c.updateLocalsDict( var_inc.updateLocalsDict( var_stp.updateLocalsDict( var_delimr.updateLocalsDict( var_deliml.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_printodes_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_7_printodes_of_class_1_sencillo_of_module___main__ );
           frame_function_7_printodes_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_printodes_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_out = NULL;
    PyObject *_python_par_otype = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printodes() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_out == key )
            {
                assert( _python_par_out == NULL );
                _python_par_out = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_otype == key )
            {
                assert( _python_par_otype == NULL );
                _python_par_otype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_out, key ) )
            {
                assert( _python_par_out == NULL );
                _python_par_out = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_otype, key ) )
            {
                assert( _python_par_otype == NULL );
                _python_par_otype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printodes() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_out != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_out = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_out == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_out = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_otype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_otype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_otype == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_otype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_out == NULL || _python_par_otype == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_out, _python_par_otype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_printodes_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_out, _python_par_otype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_out );
    Py_XDECREF( _python_par_otype );

    return NULL;
}

static PyObject *dparse_function_7_printodes_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_7_printodes_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_printodes_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_printdriver_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_out, PyObject *_python_par_otype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_out( const_str_plain_out, _python_par_out );
    PyObjectLocalParameterVariableNoDel par_otype( const_str_plain_otype, _python_par_otype );
    PyObjectLocalVariable var_p( const_str_plain_p );
    PyObjectLocalVariable var_r( const_str_plain_r );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_v( const_str_plain_v );
    PyObjectLocalVariable var_deliml( const_str_plain_deliml );
    PyObjectLocalVariable var_delimr( const_str_plain_delimr );
    PyObjectLocalVariable var_stp( const_str_plain_stp );
    PyObjectLocalVariable var_fillc( const_str_plain_fillc );
    PyObjectLocalVariable var_commt( const_str_plain_commt );
    PyObjectLocalVariable var_outstring( const_str_plain_outstring );
    PyObjectLocalVariable var_par( const_str_plain_par );
    PyObjectLocalVariable var_rname( const_str_plain_rname );
    PyObjectLocalVariable var_sname( const_str_plain_sname );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_printdriver_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_52fe0716121c382168aa08b2283ed603, module___main__ );
    }

    FrameGuard frame_guard( frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 796 );
        var_p.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_parameters ) );
        frame_guard.setLineNumber( 798 );
        var_r.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_reactions ) );
        frame_guard.setLineNumber( 800 );
        var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
        frame_guard.setLineNumber( 802 );
        var_v.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) );
        frame_guard.setLineNumber( 804 );
        if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_python ) )
        {
            var_deliml.assign0( const_str_digest_6b361a14efa1680dee5bd64382e09ddb );
            var_delimr.assign0( const_str_digest_cf5c227bf3a1f6aad63e9692699136fd );
            var_stp.assign0( const_str_empty );
            var_fillc.assign0( const_str_chr_44 );
            var_commt.assign0( const_str_chr_35 );
        }
        else
        {
            frame_guard.setLineNumber( 816 );
            if ( RICH_COMPARE_BOOL_EQ( par_otype.asObject0(), const_str_plain_matlab ) )
            {
                var_deliml.assign0( const_str_chr_91 );
                var_delimr.assign0( const_str_chr_93 );
                var_stp.assign0( const_str_chr_59 );
                var_fillc.assign0( const_str_space );
                var_commt.assign0( const_str_chr_37 );
            }
        }
        frame_guard.setLineNumber( 832 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( var_commt.asObject0(), const_str_digest_6a36d52f4d183ae26ca6d1c1d6014280 ) ).asObject0() ) ) );
        }
        var_outstring.assign0( const_str_empty );
        frame_guard.setLineNumber( 836 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_p.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 836 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                var_par.assign0( tmp_for_loop_1__iter_value.asObject0() );
                frame_guard.setLineNumber( 838 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 op1;
                    PyObjectTempKeeper1 op2;
                    PyObjectTempKeeper0 subscr1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( var_par.asObject0(), const_str_digest_8e12c91677b3b3df266a770b22c82f2f ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( ( subscr1.assign( var_p.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_par.asObject0() ) ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 840 );
                PyObject *tmp_inplace_assign_1__inplace_start = var_outstring.asObject0();
                PyObject *_tmp_inplace_assign_1__inplace_end;
                {
                    PyObjectTempKeeper0 op1;
                    PyObjectTempKeeper0 op2;
                    _tmp_inplace_assign_1__inplace_end = ( op2.assign( tmp_inplace_assign_1__inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op2.asObject0(), PyObjectTemporary( ( op1.assign( var_fillc.asObject0() ), BINARY_OPERATION_ADD( op1.asObject0(), var_par.asObject0() ) ) ).asObject0() ) );
                }
                PyObjectTemporary tmp_inplace_assign_1__inplace_end( _tmp_inplace_assign_1__inplace_end );
                if ( ( tmp_inplace_assign_1__inplace_start != tmp_inplace_assign_1__inplace_end.asObject0() ) )
                {
                    var_outstring.assign0( tmp_inplace_assign_1__inplace_end.asObject0() );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 842 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op2;
            PyObjectTempKeeper1 op3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op3.assign( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( const_str_digest_2fc1d2a14ef375d0c183129f7f67f8a9, var_deliml.asObject0() ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( var_outstring.asObject0(), 1, PY_SSIZE_T_MAX ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_delimr.asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_digest_e1c06d85ae7b8b032bef47e42e4c08f9 ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 848 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( var_commt.asObject0(), const_str_digest_320ce4d14a8fc90b52c6906d83848a28 ) ).asObject0() ) ) );
        }
        var_outstring.assign0( const_str_empty );
        frame_guard.setLineNumber( 852 );
        PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_r.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
        int _at_lineno_3 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 852 );
                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                if ( _tmp_unpack_4 == NULL )
                {
                    break;
                }
                tmp_for_loop_2__iter_value.assign1( _tmp_unpack_4 );
                var_rname.assign0( tmp_for_loop_2__iter_value.asObject0() );
                frame_guard.setLineNumber( 856 );
                {
                    PyObjectTempKeeper0 subscr1;
                    if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_rname.asObject0() ) ) ).asObject0(), const_str_digest_4bd49cef95602385120501d1936958ca ) ).asObject0(), const_str_empty ) )
                    {
                        frame_guard.setLineNumber( 858 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper1 op1;
                            PyObjectTempKeeper1 op2;
                            PyObjectTempKeeper0 subscr1;
                            PyObjectTempKeeper0 subscr2;
                            DECREASE_REFCOUNT( ( frame_guard.setLineNumber( 858 ), call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 860 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op2.assign( ( frame_guard.setLineNumber( 858 ), op1.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_rname.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) ).asObject0(), const_str_digest_8e12c91677b3b3df266a770b22c82f2f ) ), frame_guard.setLineNumber( 860 ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( frame_guard.setLineNumber( 860 ), subscr2.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_rname.asObject0() ) ) ).asObject0(), const_str_digest_4bd49cef95602385120501d1936958ca ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                        }
                        frame_guard.setLineNumber( 862 );
                        PyObject *tmp_inplace_assign_2__inplace_start = var_outstring.asObject0();
                        PyObject *_tmp_inplace_assign_2__inplace_end;
                        {
                            PyObjectTempKeeper0 op1;
                            PyObjectTempKeeper0 op2;
                            PyObjectTempKeeper0 subscr1;
                            _tmp_inplace_assign_2__inplace_end = ( op2.assign( tmp_inplace_assign_2__inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op2.asObject0(), PyObjectTemporary( ( op1.assign( var_fillc.asObject0() ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_rname.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) ).asObject0() ) ) ).asObject0() ) );
                        }
                        PyObjectTemporary tmp_inplace_assign_2__inplace_end( _tmp_inplace_assign_2__inplace_end );
                        if ( ( tmp_inplace_assign_2__inplace_start != tmp_inplace_assign_2__inplace_end.asObject0() ) )
                        {
                            var_outstring.assign0( tmp_inplace_assign_2__inplace_end.asObject0() );
                        }
                    }
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_3 = frame_guard.getLineNumber();
#endif

            _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_2__iter_value.del( true );
        tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_3 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_3 );
        }
#endif
        _caught_3.rethrow();
        // Final end
        frame_guard.setLineNumber( 864 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op2;
            PyObjectTempKeeper1 op3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op3.assign( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( const_str_digest_e1efea47580fca95f0e72dff106041f9, var_deliml.asObject0() ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( var_outstring.asObject0(), 1, PY_SSIZE_T_MAX ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_delimr.asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_digest_e1c06d85ae7b8b032bef47e42e4c08f9 ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 870 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( var_commt.asObject0(), const_str_digest_23c40eb1e980ecdd316670e65a573e1e ) ).asObject0() ) ) );
        }
        var_outstring.assign0( const_str_empty );
        frame_guard.setLineNumber( 874 );
        PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_5;
#if PYTHON_VERSION < 300
        int _at_lineno_5 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 874 );
                PyObject *_tmp_unpack_6 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                if ( _tmp_unpack_6 == NULL )
                {
                    break;
                }
                tmp_for_loop_3__iter_value.assign1( _tmp_unpack_6 );
                var_sname.assign0( tmp_for_loop_3__iter_value.asObject0() );
                frame_guard.setLineNumber( 876 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 subscr1;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_isfloat ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 ) ).asObject0() ) ) ).asObject0() ) )
                    {
                        frame_guard.setLineNumber( 878 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper1 op1;
                            PyObjectTempKeeper1 op2;
                            PyObjectTempKeeper0 subscr1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( var_sname.asObject0(), const_str_digest_056fcc7a077048d2459fe3056022b7c2 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 884 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper1 op1;
                            PyObjectTempKeeper1 op2;
                            PyObjectTempKeeper0 subscr1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op2.assign( BINARY_OPERATION_ADD( PyObjectTemporary( ( op1.assign( BINARY_OPERATION_ADD( var_sname.asObject0(), const_str_digest_056fcc7a077048d2459fe3056022b7c2 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 ) ).asObject0() ) ) ).asObject0(), const_str_plain__0 ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_chr_10 ) ).asObject0() ) ) );
                        }
                    }
                }
                frame_guard.setLineNumber( 886 );
                PyObject *tmp_inplace_assign_3__inplace_start = var_outstring.asObject0();
                PyObject *_tmp_inplace_assign_3__inplace_end;
                {
                    PyObjectTempKeeper0 op1;
                    PyObjectTempKeeper0 op2;
                    _tmp_inplace_assign_3__inplace_end = ( op2.assign( tmp_inplace_assign_3__inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op2.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op1.assign( var_fillc.asObject0() ), BINARY_OPERATION_ADD( op1.asObject0(), var_sname.asObject0() ) ) ).asObject0(), const_str_plain__0 ) ).asObject0() ) );
                }
                PyObjectTemporary tmp_inplace_assign_3__inplace_end( _tmp_inplace_assign_3__inplace_end );
                if ( ( tmp_inplace_assign_3__inplace_start != tmp_inplace_assign_3__inplace_end.asObject0() ) )
                {
                    var_outstring.assign0( tmp_inplace_assign_3__inplace_end.asObject0() );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_5 = frame_guard.getLineNumber();
#endif

            _caught_5.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_3__iter_value.del( true );
        tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_5 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_5 );
        }
#endif
        _caught_5.rethrow();
        // Final end
        frame_guard.setLineNumber( 888 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op2;
            PyObjectTempKeeper1 op3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op3.assign( ( op2.assign( ( op1.assign( BINARY_OPERATION_ADD( const_str_digest_025d3144a595c606dc792919df2a0a50, var_deliml.asObject0() ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( var_outstring.asObject0(), 1, PY_SSIZE_T_MAX ) ).asObject0() ) ) ), BINARY_OPERATION_ADD( op2.asObject0(), var_delimr.asObject0() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), var_stp.asObject0() ) ) ).asObject0(), const_str_digest_e1c06d85ae7b8b032bef47e42e4c08f9 ) ).asObject0() ) ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_otype.updateLocalsDict( par_out.updateLocalsDict( par_self.updateLocalsDict( var_sname.updateLocalsDict( var_rname.updateLocalsDict( var_par.updateLocalsDict( var_outstring.updateLocalsDict( var_commt.updateLocalsDict( var_fillc.updateLocalsDict( var_stp.updateLocalsDict( var_delimr.updateLocalsDict( var_deliml.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ );
           frame_function_8_printdriver_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8_printdriver_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_out = NULL;
    PyObject *_python_par_otype = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printdriver() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_out == key )
            {
                assert( _python_par_out == NULL );
                _python_par_out = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_otype == key )
            {
                assert( _python_par_otype == NULL );
                _python_par_otype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_out, key ) )
            {
                assert( _python_par_out == NULL );
                _python_par_out = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_otype, key ) )
            {
                assert( _python_par_otype == NULL );
                _python_par_otype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printdriver() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_out != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_out = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_out == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_out = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_otype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_otype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_otype == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_otype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_out == NULL || _python_par_otype == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_out, _python_par_otype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_printdriver_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_out, _python_par_otype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_out );
    Py_XDECREF( _python_par_otype );

    return NULL;
}

static PyObject *dparse_function_8_printdriver_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_8_printdriver_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_printdriver_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_printpython_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_ofile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_ofile( const_str_plain_ofile, _python_par_ofile );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_out( const_str_plain_out );
    PyObjectLocalVariable var_c( const_str_plain_c );
    PyObjectLocalVariable var_sname( const_str_plain_sname );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;

    // Actual function code.
    static PyFrameObject *frame_function_9_printpython_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_9_printpython_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_9_printpython_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_printpython_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_9_printpython_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_9_printpython_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_92d4a31759e28b2de3faa650ebeddf48, module___main__ );
    }

    FrameGuard frame_guard( frame_function_9_printpython_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_9_printpython_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 900 );
        var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
        frame_guard.setLineNumber( 904 );
        var_out.assign1( OPEN_FILE( PyObjectTemporary( BINARY_OPERATION_ADD( par_ofile.asObject0(), const_str_digest_1a40f6fd617577d6822f9043448b92c2 ) ).asObject0(), const_str_plain_w, NULL ) );
        frame_guard.setLineNumber( 906 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_4ee7161039003a8b1cc2732208a995f7 ) );
        frame_guard.setLineNumber( 908 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_236a02692600d1e2bb815e6b93e4d9a9 ) );
        frame_guard.setLineNumber( 910 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_4d36b4c37a47a1c71f0682611b6ce507 ) );
        frame_guard.setLineNumber( 916 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_eefc452a138439cbcb8527a6896c206c, par_ofile.asObject0() ) ).asObject0(), const_str_digest_16a9c75ab35d39fbe216fb2f4545c32e ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 918 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_printodes ) ), CALL_FUNCTION_WITH_ARGS2( call1.asObject0(), var_out.asObject0(), const_str_plain_python ) ) );
        }
        frame_guard.setLineNumber( 920 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_3aedb7419339b2c67de20f5d4e9d1af2 ) );
        frame_guard.setLineNumber( 926 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_5b1f35e49e7c7942aa30bd2be4c6d4fb ) );
        frame_guard.setLineNumber( 928 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_ef3df5a770db6d1f21b12d1e49ac2ec6 ) );
        frame_guard.setLineNumber( 930 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_printdriver ) ), CALL_FUNCTION_WITH_ARGS2( call1.asObject0(), var_out.asObject0(), const_str_plain_python ) ) );
        }
        frame_guard.setLineNumber( 932 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_1b2b5992e39e1767ce5c0f61daaa11ad ) );
        frame_guard.setLineNumber( 934 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_dd212d686b07bd5660121a5474becae1, par_ofile.asObject0() ) ).asObject0(), const_str_digest_9c9062d4826c950b43be75b5bc7fa522 ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 938 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 938 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
                int _at_lineno_3 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_1__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_1__iter_value.asObject0() ) );
                    tmp_tuple_unpack_1__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_1__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_1__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_1__element_1.asObject0() );
                    var_sname.assign0( tmp_tuple_unpack_1__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_3 = frame_guard.getLineNumber();
#endif

                    _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_1__source_iter.del( true );
                tmp_tuple_unpack_1__element_1.del( true );
                tmp_tuple_unpack_1__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_3 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_3 );
                }
#endif
                _caught_3.rethrow();
                // Final end
                frame_guard.setLineNumber( 940 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 op1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op1.assign( BINARY_OPERATION_ADD( var_sname.asObject0(), const_str_digest_f3b8067168732f9feed200b3914b39c1 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( TO_STR( var_c.asObject0() ) ).asObject0() ) ) ).asObject0(), const_str_digest_f75d1ecd2fcd4dc44f478438e9bfad08 ) ).asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 942 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_chr_10 ) );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_sname.updateLocalsDict( var_c.updateLocalsDict( var_out.updateLocalsDict( var_s.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_printpython_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_9_printpython_of_class_1_sencillo_of_module___main__ );
           frame_function_9_printpython_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_9_printpython_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_ofile = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printpython() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ofile == key )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_ofile, key ) )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printpython() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_ofile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ofile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ofile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ofile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_ofile == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_ofile };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_printpython_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_ofile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_ofile );

    return NULL;
}

static PyObject *dparse_function_9_printpython_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_9_printpython_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_printpython_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_printmatlab_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_ofile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_ofile( const_str_plain_ofile, _python_par_ofile );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_out( const_str_plain_out );
    PyObjectLocalVariable var_c( const_str_plain_c );
    PyObjectLocalVariable var_sname( const_str_plain_sname );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;

    // Actual function code.
    static PyFrameObject *frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_printmatlab_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_956c9e5e837e9a8e3fcc1b43bb580f3c, module___main__ );
    }

    FrameGuard frame_guard( frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 954 );
        var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
        frame_guard.setLineNumber( 960 );
        var_out.assign1( OPEN_FILE( PyObjectTemporary( BINARY_OPERATION_ADD( par_ofile.asObject0(), const_str_digest_ecc0636a4b47e0be2f5ad996853f3c94 ) ).asObject0(), const_str_plain_w, NULL ) );
        frame_guard.setLineNumber( 962 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_abe4af3ec859fe0faf8f15ed469e0e8c, par_ofile.asObject0() ) ).asObject0(), const_str_digest_879c9165c4807d104ebb9f00a50312df ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 964 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_printodes ) ), CALL_FUNCTION_WITH_ARGS2( call1.asObject0(), var_out.asObject0(), const_str_plain_matlab ) ) );
        }
        frame_guard.setLineNumber( 966 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_close ) ).asObject0() ) );
        frame_guard.setLineNumber( 972 );
        var_out.assign1( OPEN_FILE( PyObjectTemporary( BINARY_OPERATION_ADD( par_ofile.asObject0(), const_str_digest_d122b2db5a711a6972ccf66040424526 ) ).asObject0(), const_str_plain_w, NULL ) );
        frame_guard.setLineNumber( 974 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_printdriver ) ), CALL_FUNCTION_WITH_ARGS2( call1.asObject0(), var_out.asObject0(), const_str_plain_matlab ) ) );
        }
        frame_guard.setLineNumber( 976 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_6c2da87f87cf82b560cf572d68165409 ) );
        frame_guard.setLineNumber( 978 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_67b639ddd55df0dfc4e394fd337232e6 ) );
        frame_guard.setLineNumber( 980 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_f234936ef3c2ef794f855b0d010bc312 ) );
        frame_guard.setLineNumber( 982 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_757c1507adc0c151d46c5fdd2ef04960, par_ofile.asObject0() ) ).asObject0(), const_str_digest_06ca99c8ca3d09493f0c9494684befa1 ) ).asObject0(), const_str_digest_e4e04d1e122cdc333b340218e5522945 ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 986 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 986 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
                int _at_lineno_3 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_1__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_1__iter_value.asObject0() ) );
                    tmp_tuple_unpack_1__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_1__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_1__source_iter.asObject0(), 2 );
                    var_c.assign0( tmp_tuple_unpack_1__element_1.asObject0() );
                    var_sname.assign0( tmp_tuple_unpack_1__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_3 = frame_guard.getLineNumber();
#endif

                    _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_1__source_iter.del( true );
                tmp_tuple_unpack_1__element_1.del( true );
                tmp_tuple_unpack_1__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_3 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_3 );
                }
#endif
                _caught_3.rethrow();
                // Final end
                frame_guard.setLineNumber( 988 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 op1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op1.assign( BINARY_OPERATION_ADD( var_sname.asObject0(), const_str_digest_4e7fbf9353b1469885ae9142000ef3b6 ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_ADD( var_c.asObject0(), const_int_pos_1 ) ).asObject0() ) ).asObject0() ) ) ).asObject0(), const_str_digest_d91a3cfec8562180fce57e8c5fc6c5e8 ) ).asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 990 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_chr_10 ) );
        frame_guard.setLineNumber( 992 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_close ) ).asObject0() ) );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_sname.updateLocalsDict( var_c.updateLocalsDict( var_out.updateLocalsDict( var_s.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ );
           frame_function_10_printmatlab_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_10_printmatlab_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_ofile = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printmatlab() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ofile == key )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_ofile, key ) )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printmatlab() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_ofile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ofile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ofile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ofile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_ofile == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_ofile };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_printmatlab_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_ofile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_ofile );

    return NULL;
}

static PyObject *dparse_function_10_printmatlab_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_10_printmatlab_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_printmatlab_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_printstochkit_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_ofile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_ofile( const_str_plain_ofile, _python_par_ofile );
    PyObjectLocalVariable var_p( const_str_plain_p );
    PyObjectLocalVariable var_r( const_str_plain_r );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_v( const_str_plain_v );
    PyObjectLocalVariable var_out( const_str_plain_out );
    PyObjectLocalVariable var_par( const_str_plain_par );
    PyObjectLocalVariable var_reac( const_str_plain_reac );
    PyObjectLocalVariable var_i( const_str_plain_i );
    PyObjectLocalVariable var_spec( const_str_plain_spec );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_printstochkit_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_3b12609dfbbeb8627a83d8d5f7aa1ed7, module___main__ );
    }

    FrameGuard frame_guard( frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1008 );
        var_p.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_parameters ) );
        frame_guard.setLineNumber( 1010 );
        var_r.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_reactions ) );
        frame_guard.setLineNumber( 1012 );
        var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
        frame_guard.setLineNumber( 1014 );
        var_v.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) );
        frame_guard.setLineNumber( 1018 );
        var_out.assign1( OPEN_FILE( PyObjectTemporary( BINARY_OPERATION_ADD( par_ofile.asObject0(), const_str_digest_4e9f6c7fdef327a6b0e08505dc57a694 ) ).asObject0(), const_str_plain_w, NULL ) );
        frame_guard.setLineNumber( 1024 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_e53a87d8f68b40efabb00060e2e53b03 ) );
        frame_guard.setLineNumber( 1026 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_e5afbaff88292bcf317c4312dd81a437, PyObjectTemporary( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_name ) ).asObject0() ) ).asObject0(), const_str_digest_7f0313b696b786042cb0f7bf7714d2ba ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 1028 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_f2776caa1eeafb00e750a7f87804bcd6, PyObjectTemporary( TO_STR( PyObjectTemporary( BUILTIN_LEN( var_r.asObject0() ) ).asObject0() ) ).asObject0() ) ).asObject0(), const_str_digest_2ac1832c8d8ee32f2513a1ec6bc36a45 ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 1030 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_c5f65bb914d089810e87c225e6dba1d4, PyObjectTemporary( TO_STR( PyObjectTemporary( BUILTIN_LEN( var_s.asObject0() ) ).asObject0() ) ).asObject0() ) ).asObject0(), const_str_digest_ce52d52ff6a467fdb66408d8085779a8 ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 1036 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_169c76fc1b7e2be689fbb74b5e053a61 ) );
        frame_guard.setLineNumber( 1038 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_p.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 1038 );
                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_2 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                var_par.assign0( tmp_for_loop_1__iter_value.asObject0() );
                frame_guard.setLineNumber( 1040 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_b67113497f7d0a377a61be8048c9f795 ) );
                frame_guard.setLineNumber( 1042 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_de44840fb75939127cb0e34ff07da768, var_par.asObject0() ) ).asObject0(), const_str_digest_88495668437763b5525ac9d37972a48e ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 1044 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 subscr1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_919962080d6b72eb8117336facc6312a, PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_p.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_par.asObject0() ) ) ).asObject0(), const_str_plain_value ) ).asObject0() ) ).asObject0(), const_str_digest_66aa945e71694ba086f11ec5c65e11b2 ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 1046 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_5e441d9d18c26d5c3fc71a7b1ce397af ) );

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 1048 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_da309e37a3d91aa16bc5e6ba845489e6 ) );
        frame_guard.setLineNumber( 1054 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_77aed19f730a56ab2154abcfdbfa976e ) );
        frame_guard.setLineNumber( 1056 );
        PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_r.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
        int _at_lineno_3 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 1056 );
                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                if ( _tmp_unpack_4 == NULL )
                {
                    break;
                }
                tmp_for_loop_2__iter_value.assign1( _tmp_unpack_4 );
                var_reac.assign0( tmp_for_loop_2__iter_value.asObject0() );
                frame_guard.setLineNumber( 1058 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_3df537ab82b43160ce4cce03a46cebe7 ) );
                frame_guard.setLineNumber( 1060 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_de44840fb75939127cb0e34ff07da768, var_reac.asObject0() ) ).asObject0(), const_str_digest_88495668437763b5525ac9d37972a48e ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 1062 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 subscr1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_bd69e64c08dd1cfe1cf82baf4176065b, PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_name ) ).asObject0() ) ).asObject0(), const_str_digest_7f0313b696b786042cb0f7bf7714d2ba ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 1066 );
                {
                    PyObjectTempKeeper0 subscr1;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_258f51a08760fdae27a872c9dcd3ba93 ) ).asObject0() ) )
                    {
                        frame_guard.setLineNumber( 1068 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_332c50b7164d453e24fd0ae01b72aee0 ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 1072 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_18289395439e69db63f60c95ed010fef ) );
                        frame_guard.setLineNumber( 1074 );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper0 subscr1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1076 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_39da3b9d703f0631a28352da9954cd0b, PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) ).asObject0() ) ).asObject0(), const_str_digest_a6a5512894965ea496597811f1cf7d80 ) ).asObject0() ) ) );
                        }
                    }
                }
                frame_guard.setLineNumber( 1080 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_f256f1f5bb76c516c04d1aea658819f6 ) );
                frame_guard.setLineNumber( 1082 );
                {
                    PyObjectTempKeeper0 subscr1;
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0() ) ).asObject0(), const_int_pos_1 ) )
                    {
                        frame_guard.setLineNumber( 1084 );
                        {
                            PyObjectTempKeeper0 subscr1;
                            if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_0, 0 ) ).asObject0(), const_str_plain_null ) )
                            {
                                frame_guard.setLineNumber( 1086 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper0 subscr1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1088 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_digest_f50e09abe148272b5256699b580d2e8c ) ).asObject0() ) ) );
                                }
                            }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 1092 );
                        {
                            PyObjectTempKeeper1 cmp1;
                            PyObjectTempKeeper0 subscr1;
                            PyObjectTempKeeper0 subscr2;
                            if ( ( cmp1.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_0, 0 ) ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr2.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) )
                            {
                                frame_guard.setLineNumber( 1094 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper0 subscr1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1096 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_digest_446d8828be3f96998045907baae77d59 ) ).asObject0() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 1100 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper0 subscr1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1102 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_digest_f50e09abe148272b5256699b580d2e8c ) ).asObject0() ) ) );
                                }
                                frame_guard.setLineNumber( 1104 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper0 subscr1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1106 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ).asObject0(), const_str_digest_f50e09abe148272b5256699b580d2e8c ) ).asObject0() ) ) );
                                }
                            }
                        }
                    }
                }
                frame_guard.setLineNumber( 1108 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_f2ec2c9c154318491177db68e285aeef ) );
                frame_guard.setLineNumber( 1112 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_7957ca43630593addbc9912580749f2d ) );
                frame_guard.setLineNumber( 1114 );
                {
                    PyObjectTempKeeper0 subscr1;
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0() ) ).asObject0(), const_int_pos_1 ) )
                    {
                        frame_guard.setLineNumber( 1116 );
                        {
                            PyObjectTempKeeper0 subscr1;
                            if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_0, 0 ) ).asObject0(), const_str_plain_null ) )
                            {
                                frame_guard.setLineNumber( 1118 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper0 subscr1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1120 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_digest_f50e09abe148272b5256699b580d2e8c ) ).asObject0() ) ) );
                                }
                            }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 1124 );
                        {
                            PyObjectTempKeeper1 cmp1;
                            PyObjectTempKeeper0 subscr1;
                            PyObjectTempKeeper0 subscr2;
                            if ( ( cmp1.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_0, 0 ) ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr2.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0() ) ) )
                            {
                                frame_guard.setLineNumber( 1126 );
                                {
                                    PyObjectTempKeeper1 cmp1;
                                    PyObjectTempKeeper0 subscr1;
                                    PyObjectTempKeeper0 subscr2;
                                    if ( ( cmp1.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_0, 0 ) ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr2.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_pos_2, 2 ) ).asObject0() ) ) )
                                    {
                                        frame_guard.setLineNumber( 1128 );
                                        {
                                            PyObjectTempKeeper1 call1;
                                            PyObjectTempKeeper0 subscr1;
                                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1130 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_digest_4c5e156a1fe187bd8ecb62b8a4e82d3a ) ).asObject0() ) ) );
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 1134 );
                                        {
                                            PyObjectTempKeeper1 call1;
                                            PyObjectTempKeeper0 subscr1;
                                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1136 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ).asObject0(), const_str_digest_446d8828be3f96998045907baae77d59 ) ).asObject0() ) ) );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 1140 );
                                PyObject *_tmp_for_loop_3__for_iterator;
                                {
                                    PyObjectTempKeeper0 subscr1;
                                    _tmp_for_loop_3__for_iterator = MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0() ) ).asObject0() ) ).asObject0() );
                                }
                                PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( _tmp_for_loop_3__for_iterator );
                                PythonExceptionKeeper _caught_5;
#if PYTHON_VERSION < 300
                                int _at_lineno_5 = 0;
#endif


                                try
                                {
                                    // Tried block:
                                    while( true )
                                    {
                                        frame_guard.setLineNumber( 1140 );
                                        PyObject *_tmp_unpack_6 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                                        if ( _tmp_unpack_6 == NULL )
                                        {
                                            break;
                                        }
                                        tmp_for_loop_3__iter_value.assign1( _tmp_unpack_6 );
                                        var_i.assign0( tmp_for_loop_3__iter_value.asObject0() );
                                        frame_guard.setLineNumber( 1142 );
                                        {
                                            PyObjectTempKeeper1 call1;
                                            PyObjectTempKeeper0 subscr1;
                                            PyObjectTempKeeper1 subscr2;
                                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1144 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5a6e869a3963b6416bcec9ccf4b1f2ba, PyObjectTemporary( ( subscr2.assign( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_i.asObject0() ) ) ).asObject0() ) ).asObject0(), const_str_digest_f50e09abe148272b5256699b580d2e8c ) ).asObject0() ) ) );
                                        }

                                        CONSIDER_THREADING();
                                    }
                                }
                                catch ( PythonException &_exception )
                                {
#if PYTHON_VERSION >= 300
                                    if ( !_exception.hasTraceback() )
                                    {
                                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                                    }
                                    else
                                    {
                                        _exception.addTraceback( frame_guard.getFrame0() );
                                    }
#else
                                    _at_lineno_5 = frame_guard.getLineNumber();
#endif

                                    _caught_5.save( _exception );

#if PYTHON_VERSION >= 300
                                    frame_guard.preserveExistingException();

                                    _exception.toExceptionHandler();
#endif
                                }

                                // Final block:
                                tmp_for_loop_3__iter_value.del( true );
                                tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
                                if ( _at_lineno_5 != 0 )
                                {
                                   frame_guard.setLineNumber( _at_lineno_5 );
                                }
#endif
                                _caught_5.rethrow();
                                // Final end
                            }
                        }
                    }
                }
                frame_guard.setLineNumber( 1146 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_9e1647e9dd9e6b4c06c628db29763c30 ) );
                frame_guard.setLineNumber( 1148 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_74c85fc1323738489942098502fe7d26 ) );

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_3 = frame_guard.getLineNumber();
#endif

            _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_2__iter_value.del( true );
        tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_3 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_3 );
        }
#endif
        _caught_3.rethrow();
        // Final end
        frame_guard.setLineNumber( 1150 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_818dc06df96c97dca734dbda2130c742 ) );
        frame_guard.setLineNumber( 1156 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_c99cf231d05de9378f88d9fafd0941c7 ) );
        frame_guard.setLineNumber( 1158 );
        PyObjectTemporaryWithDel tmp_for_loop_4__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_7;
#if PYTHON_VERSION < 300
        int _at_lineno_7 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 1158 );
                PyObject *_tmp_unpack_8 = ITERATOR_NEXT( tmp_for_loop_4__for_iterator.asObject0() );

                if ( _tmp_unpack_8 == NULL )
                {
                    break;
                }
                tmp_for_loop_4__iter_value.assign1( _tmp_unpack_8 );
                var_spec.assign0( tmp_for_loop_4__iter_value.asObject0() );
                frame_guard.setLineNumber( 1160 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_878120b0c91aaf9d181875108e97e12f ) );
                frame_guard.setLineNumber( 1162 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_de44840fb75939127cb0e34ff07da768, var_spec.asObject0() ) ).asObject0(), const_str_digest_88495668437763b5525ac9d37972a48e ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 1164 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 subscr1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ), frame_guard.setLineNumber( 1166 ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_676abef1cf4a9dc24d122fcd5886ab03, PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_spec.asObject0() ) ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 ) ).asObject0() ) ).asObject0(), const_str_digest_9941a42018ec5428855034a96292fd96 ) ).asObject0() ) ) );
                }
                frame_guard.setLineNumber( 1168 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_aa365d0cc455e8d43dce3aa7c3feb8bf ) );

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_7 = frame_guard.getLineNumber();
#endif

            _caught_7.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_4__iter_value.del( true );
        tmp_for_loop_4__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_7 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_7 );
        }
#endif
        _caught_7.rethrow();
        // Final end
        frame_guard.setLineNumber( 1170 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_dd78b1391e96a052be8eba2102216429 ) );
        frame_guard.setLineNumber( 1174 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_write ) ).asObject0(), const_str_digest_4ff974da3b84cae63104321c46e10630 ) );
        frame_guard.setLineNumber( 1176 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_out.asObject0(), const_str_plain_close ) ).asObject0() ) );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_spec.updateLocalsDict( var_i.updateLocalsDict( var_reac.updateLocalsDict( var_par.updateLocalsDict( var_out.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ );
           frame_function_11_printstochkit_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_printstochkit_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_ofile = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printstochkit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ofile == key )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_ofile, key ) )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printstochkit() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_ofile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ofile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ofile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ofile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_ofile == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_ofile };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_printstochkit_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_ofile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_ofile );

    return NULL;
}

static PyObject *dparse_function_11_printstochkit_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_11_printstochkit_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_printstochkit_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_printSBML_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_ofile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_self( const_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel par_ofile( const_str_plain_ofile, _python_par_ofile );
    PyObjectLocalVariable var_p( const_str_plain_p );
    PyObjectLocalVariable var_r( const_str_plain_r );
    PyObjectLocalVariable var_s( const_str_plain_s );
    PyObjectLocalVariable var_v( const_str_plain_v );
    PyObjectLocalVariable var_document( const_str_plain_document );
    PyObjectLocalVariable var_model( const_str_plain_model );
    PyObjectLocalVariable var_c( const_str_plain_c );
    PyObjectLocalVariable var_spec( const_str_plain_spec );
    PyObjectLocalVariable var_ss( const_str_plain_ss );
    PyObjectLocalVariable var_par( const_str_plain_par );
    PyObjectLocalVariable var_pp( const_str_plain_pp );
    PyObjectLocalVariable var_var( const_str_plain_var );
    PyObjectLocalVariable var_reac( const_str_plain_reac );
    PyObjectLocalVariable var_rvalue( const_str_plain_rvalue );
    PyObjectLocalVariable var_newrate( const_str_plain_newrate );
    PyObjectLocalVariable var_vv( const_str_plain_vv );
    PyObjectLocalVariable var_value( const_str_plain_value );
    PyObjectLocalVariable var_rr( const_str_plain_rr );
    PyObjectLocalVariable var_i( const_str_plain_i );
    PyObjectLocalVariable var_rrr( const_str_plain_rrr );
    PyObjectLocalVariable var_rrp( const_str_plain_rrp );
    PyObjectLocalVariable var_rrate( const_str_plain_rrate );
    PyObjectLocalVariable var_reactant( const_str_plain_reactant );
    PyObjectLocalVariable var_mods( const_str_plain_mods );
    PyObjectLocalVariable var_mod( const_str_plain_mod );
    PyObjectLocalVariable var_mdf( const_str_plain_mdf );
    PyObjectLocalVariable var_rrk( const_str_plain_rrk );
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_for_loop_6__iter_value;
    PyObjectTempVariable tmp_for_loop_7__iter_value;
    PyObjectTempVariable tmp_for_loop_8__iter_value;
    PyObjectTempVariable tmp_for_loop_9__iter_value;
    PyObjectTempVariable tmp_for_loop_10__iter_value;

    // Actual function code.
    static PyFrameObject *frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ ) )
    {
        if ( frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_printSBML_of_class_1_sencillo_of_module___main__" );
#endif
            Py_DECREF( frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ );
        }

        frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ = MAKE_FRAME( codeobj_b75bb349bfd0dcad699e7df2011f46b6, module___main__ );
    }

    FrameGuard frame_guard( frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1188 );
        if ( CHECK_IF_TRUE( GET_MODULE_VALUE0( const_str_plain_sbml ) ) )
        {
            frame_guard.setLineNumber( 1192 );
            var_p.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_parameters ) );
            frame_guard.setLineNumber( 1194 );
            var_r.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_reactions ) );
            frame_guard.setLineNumber( 1196 );
            var_s.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_species ) );
            frame_guard.setLineNumber( 1198 );
            var_v.assign1( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_variables ) );
            frame_guard.setLineNumber( 1204 );
            var_document.assign1( CALL_FUNCTION_WITH_ARGS2( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_libsbml ), const_str_plain_SBMLDocument ) ).asObject0(), const_int_pos_2, const_int_pos_3 ) );
            frame_guard.setLineNumber( 1206 );
            var_model.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_document.asObject0(), const_str_plain_createModel ) ).asObject0() ) );
            frame_guard.setLineNumber( 1208 );
            var_c.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createCompartment ) ).asObject0() ) );
            frame_guard.setLineNumber( 1210 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_c.asObject0(), const_str_plain_setId ) ).asObject0(), const_str_plain_cell ) );
            frame_guard.setLineNumber( 1212 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_c.asObject0(), const_str_plain_setVolume ) ).asObject0(), const_float_1_0 ) );
            frame_guard.setLineNumber( 1218 );
            PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_s.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
            PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
            int _at_lineno_1 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 1218 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_1__iter_value.assign1( _tmp_unpack_2 );
                    var_spec.assign0( tmp_for_loop_1__iter_value.asObject0() );
                    frame_guard.setLineNumber( 1220 );
                    var_ss.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createSpecies ) ).asObject0() ) );
                    frame_guard.setLineNumber( 1222 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_ss.asObject0(), const_str_plain_setId ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_spec.asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 1224 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_ss.asObject0(), const_str_plain_setCompartment ) ).asObject0(), const_str_plain_cell ) );
                    frame_guard.setLineNumber( 1226 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper1 eval1;
                        PyObjectTempKeeper0 eval2;
                        PyObjectTempKeeper0 subscr1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_ss.asObject0(), const_str_plain_setInitialAmount ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( ( eval1.assign( COMPILE_CODE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_s.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_spec.asObject0() ) ) ).asObject0(), const_str_digest_a6d027ddca3ec307b7bd889905598201 ) ).asObject0(), const_str_angle_string, const_str_plain_eval, 0 ) ), eval2.assign( ((PyModuleObject *)module___main__)->md_dict ), EVAL_CODE( eval1.asObject0(), eval2.asObject0(), PyObjectTemporary( par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_rrk.updateLocalsDict( var_mdf.updateLocalsDict( var_mod.updateLocalsDict( var_mods.updateLocalsDict( var_reactant.updateLocalsDict( var_rrate.updateLocalsDict( var_rrp.updateLocalsDict( var_rrr.updateLocalsDict( var_i.updateLocalsDict( var_rr.updateLocalsDict( var_value.updateLocalsDict( var_vv.updateLocalsDict( var_newrate.updateLocalsDict( var_rvalue.updateLocalsDict( var_reac.updateLocalsDict( var_var.updateLocalsDict( var_pp.updateLocalsDict( var_par.updateLocalsDict( var_ss.updateLocalsDict( var_spec.updateLocalsDict( var_c.updateLocalsDict( var_model.updateLocalsDict( var_document.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject0() ) ) ).asObject0() ) ) );
                    }

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_1 = frame_guard.getLineNumber();
#endif

                _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_1__iter_value.del( true );
            tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_1 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_1 );
            }
#endif
            _caught_1.rethrow();
            // Final end
            frame_guard.setLineNumber( 1232 );
            PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_p.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
            PythonExceptionKeeper _caught_3;
#if PYTHON_VERSION < 300
            int _at_lineno_3 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 1232 );
                    PyObject *_tmp_unpack_4 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                    if ( _tmp_unpack_4 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_2__iter_value.assign1( _tmp_unpack_4 );
                    var_par.assign0( tmp_for_loop_2__iter_value.asObject0() );
                    frame_guard.setLineNumber( 1234 );
                    var_pp.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createParameter ) ).asObject0() ) );
                    frame_guard.setLineNumber( 1236 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setId ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_par.asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 1238 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setConstant ) ).asObject0(), Py_True ) );
                    frame_guard.setLineNumber( 1240 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper1 eval1;
                        PyObjectTempKeeper0 eval2;
                        PyObjectTempKeeper0 subscr1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setValue ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( ( eval1.assign( COMPILE_CODE( PyObjectTemporary( ( subscr1.assign( var_p.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_par.asObject0() ) ) ).asObject0(), const_str_angle_string, const_str_plain_eval, 0 ) ), eval2.assign( ((PyModuleObject *)module___main__)->md_dict ), EVAL_CODE( eval1.asObject0(), eval2.asObject0(), PyObjectTemporary( par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_rrk.updateLocalsDict( var_mdf.updateLocalsDict( var_mod.updateLocalsDict( var_mods.updateLocalsDict( var_reactant.updateLocalsDict( var_rrate.updateLocalsDict( var_rrp.updateLocalsDict( var_rrr.updateLocalsDict( var_i.updateLocalsDict( var_rr.updateLocalsDict( var_value.updateLocalsDict( var_vv.updateLocalsDict( var_newrate.updateLocalsDict( var_rvalue.updateLocalsDict( var_reac.updateLocalsDict( var_var.updateLocalsDict( var_pp.updateLocalsDict( var_par.updateLocalsDict( var_ss.updateLocalsDict( var_spec.updateLocalsDict( var_c.updateLocalsDict( var_model.updateLocalsDict( var_document.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject0() ) ) ).asObject0() ) ) );
                    }

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_3 = frame_guard.getLineNumber();
#endif

                _caught_3.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_2__iter_value.del( true );
            tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_3 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_3 );
            }
#endif
            _caught_3.rethrow();
            // Final end
            frame_guard.setLineNumber( 1246 );
            PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_v.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
            PythonExceptionKeeper _caught_5;
#if PYTHON_VERSION < 300
            int _at_lineno_5 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 1246 );
                    PyObject *_tmp_unpack_6 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                    if ( _tmp_unpack_6 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_3__iter_value.assign1( _tmp_unpack_6 );
                    var_var.assign0( tmp_for_loop_3__iter_value.asObject0() );
                    frame_guard.setLineNumber( 1248 );
                    var_pp.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createParameter ) ).asObject0() ) );
                    frame_guard.setLineNumber( 1250 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setId ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_var.asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 1252 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setConstant ) ).asObject0(), Py_False ) );

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_5 = frame_guard.getLineNumber();
#endif

                _caught_5.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_3__iter_value.del( true );
            tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_5 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_5 );
            }
#endif
            _caught_5.rethrow();
            // Final end
            frame_guard.setLineNumber( 1258 );
            PyObjectTemporaryWithDel tmp_for_loop_4__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_r.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
            PythonExceptionKeeper _caught_7;
#if PYTHON_VERSION < 300
            int _at_lineno_7 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 1258 );
                    PyObject *_tmp_unpack_8 = ITERATOR_NEXT( tmp_for_loop_4__for_iterator.asObject0() );

                    if ( _tmp_unpack_8 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_4__iter_value.assign1( _tmp_unpack_8 );
                    var_reac.assign0( tmp_for_loop_4__iter_value.asObject0() );
                    frame_guard.setLineNumber( 1260 );
                    {
                        PyObjectTempKeeper0 subscr1;
                        var_rvalue.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_4bd49cef95602385120501d1936958ca ) );
                    }
                    frame_guard.setLineNumber( 1262 );
                    if ( CHECK_IF_TRUE( var_rvalue.asObject0() ) )
                    {
                        frame_guard.setLineNumber( 1266 );
                        {
                            PyObjectTempKeeper0 subscr1;
                            var_newrate.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) );
                        }
                        frame_guard.setLineNumber( 1268 );
                        var_pp.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createParameter ) ).asObject0() ) );
                        frame_guard.setLineNumber( 1270 );
                        {
                            PyObjectTempKeeper1 call1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setId ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_newrate.asObject0() ) ) );
                        }
                        frame_guard.setLineNumber( 1272 );
                        {
                            PyObjectTempKeeper1 call1;
                            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_isfloat ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_rvalue.asObject0() ) ) ).asObject0() ) )
                            {
                                frame_guard.setLineNumber( 1276 );
                                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setConstant ) ).asObject0(), Py_True ) );
                                frame_guard.setLineNumber( 1278 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    PyObjectTempKeeper1 eval1;
                                    PyObjectTempKeeper0 eval2;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setValue ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( ( eval1.assign( COMPILE_CODE( var_rvalue.asObject0(), const_str_angle_string, const_str_plain_eval, 0 ) ), eval2.assign( ((PyModuleObject *)module___main__)->md_dict ), EVAL_CODE( eval1.asObject0(), eval2.asObject0(), PyObjectTemporary( par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_rrk.updateLocalsDict( var_mdf.updateLocalsDict( var_mod.updateLocalsDict( var_mods.updateLocalsDict( var_reactant.updateLocalsDict( var_rrate.updateLocalsDict( var_rrp.updateLocalsDict( var_rrr.updateLocalsDict( var_i.updateLocalsDict( var_rr.updateLocalsDict( var_value.updateLocalsDict( var_vv.updateLocalsDict( var_newrate.updateLocalsDict( var_rvalue.updateLocalsDict( var_reac.updateLocalsDict( var_var.updateLocalsDict( var_pp.updateLocalsDict( var_par.updateLocalsDict( var_ss.updateLocalsDict( var_spec.updateLocalsDict( var_c.updateLocalsDict( var_model.updateLocalsDict( var_document.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject0() ) ) ).asObject0() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 1284 );
                                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_pp.asObject0(), const_str_plain_setConstant ) ).asObject0(), Py_False ) );
                                frame_guard.setLineNumber( 1286 );
                                var_vv.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createAssignmentRule ) ).asObject0() ) );
                                frame_guard.setLineNumber( 1288 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    var_value.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_libsbml ), const_str_plain_parseFormula ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_rvalue.asObject0() ) ) );
                                }
                                frame_guard.setLineNumber( 1290 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_vv.asObject0(), const_str_plain_setVariable ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_newrate.asObject0() ) ) );
                                }
                                frame_guard.setLineNumber( 1292 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_vv.asObject0(), const_str_plain_setMath ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_value.asObject0() ) ) );
                                }
                            }
                        }
                    }

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_7 = frame_guard.getLineNumber();
#endif

                _caught_7.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_4__iter_value.del( true );
            tmp_for_loop_4__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_7 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_7 );
            }
#endif
            _caught_7.rethrow();
            // Final end
            frame_guard.setLineNumber( 1298 );
            PyObjectTemporaryWithDel tmp_for_loop_5__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_v.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
            PythonExceptionKeeper _caught_9;
#if PYTHON_VERSION < 300
            int _at_lineno_9 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 1298 );
                    PyObject *_tmp_unpack_10 = ITERATOR_NEXT( tmp_for_loop_5__for_iterator.asObject0() );

                    if ( _tmp_unpack_10 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_5__iter_value.assign1( _tmp_unpack_10 );
                    var_var.assign0( tmp_for_loop_5__iter_value.asObject0() );
                    frame_guard.setLineNumber( 1300 );
                    var_vv.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createAssignmentRule ) ).asObject0() ) );
                    frame_guard.setLineNumber( 1302 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper0 subscr1;
                        var_value.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_libsbml ), const_str_plain_parseFormula ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_v.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_var.asObject0() ) ) ).asObject0(), const_str_plain_value ) ).asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 1304 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_vv.asObject0(), const_str_plain_setVariable ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_var.asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 1306 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_vv.asObject0(), const_str_plain_setMath ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_value.asObject0() ) ) );
                    }

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_9 = frame_guard.getLineNumber();
#endif

                _caught_9.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_5__iter_value.del( true );
            tmp_for_loop_5__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_9 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_9 );
            }
#endif
            _caught_9.rethrow();
            // Final end
            frame_guard.setLineNumber( 1312 );
            PyObjectTemporaryWithDel tmp_for_loop_6__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_r.asObject0(), const_str_plain_keys ) ).asObject0() ) ).asObject0() ) );
            PythonExceptionKeeper _caught_11;
#if PYTHON_VERSION < 300
            int _at_lineno_11 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 1312 );
                    PyObject *_tmp_unpack_12 = ITERATOR_NEXT( tmp_for_loop_6__for_iterator.asObject0() );

                    if ( _tmp_unpack_12 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_6__iter_value.assign1( _tmp_unpack_12 );
                    var_reac.assign0( tmp_for_loop_6__iter_value.asObject0() );
                    frame_guard.setLineNumber( 1314 );
                    var_rr.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_model.asObject0(), const_str_plain_createReaction ) ).asObject0() ) );
                    frame_guard.setLineNumber( 1316 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_setId ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( const_str_plain_r_, var_reac.asObject0() ) ).asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 1318 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_setCompartment ) ).asObject0(), const_str_plain_cell ) );
                    frame_guard.setLineNumber( 1320 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_setReversible ) ).asObject0(), Py_False ) );
                    frame_guard.setLineNumber( 1322 );
                    PyObject *_tmp_for_loop_7__for_iterator;
                    {
                        PyObjectTempKeeper0 subscr1;
                        _tmp_for_loop_7__for_iterator = MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0() ) ).asObject0() ) ).asObject0() );
                    }
                    PyObjectTemporaryWithDel tmp_for_loop_7__for_iterator( _tmp_for_loop_7__for_iterator );
                    PythonExceptionKeeper _caught_13;
#if PYTHON_VERSION < 300
                    int _at_lineno_13 = 0;
#endif


                    try
                    {
                        // Tried block:
                        while( true )
                        {
                            frame_guard.setLineNumber( 1322 );
                            PyObject *_tmp_unpack_14 = ITERATOR_NEXT( tmp_for_loop_7__for_iterator.asObject0() );

                            if ( _tmp_unpack_14 == NULL )
                            {
                                break;
                            }
                            tmp_for_loop_7__iter_value.assign1( _tmp_unpack_14 );
                            var_i.assign0( tmp_for_loop_7__iter_value.asObject0() );
                            frame_guard.setLineNumber( 1324 );
                            var_rrr.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_createReactant ) ).asObject0() ) );
                            frame_guard.setLineNumber( 1326 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper0 subscr1;
                                PyObjectTempKeeper1 subscr2;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_rrr.asObject0(), const_str_plain_setSpecies ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( ( subscr2.assign( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_i.asObject0() ) ) ).asObject0() ) ) );
                            }

                            CONSIDER_THREADING();
                        }
                    }
                    catch ( PythonException &_exception )
                    {
#if PYTHON_VERSION >= 300
                        if ( !_exception.hasTraceback() )
                        {
                            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                        }
                        else
                        {
                            _exception.addTraceback( frame_guard.getFrame0() );
                        }
#else
                        _at_lineno_13 = frame_guard.getLineNumber();
#endif

                        _caught_13.save( _exception );

#if PYTHON_VERSION >= 300
                        frame_guard.preserveExistingException();

                        _exception.toExceptionHandler();
#endif
                    }

                    // Final block:
                    tmp_for_loop_7__iter_value.del( true );
                    tmp_for_loop_7__for_iterator.del( false );
#if PYTHON_VERSION < 300
                    if ( _at_lineno_13 != 0 )
                    {
                       frame_guard.setLineNumber( _at_lineno_13 );
                    }
#endif
                    _caught_13.rethrow();
                    // Final end
                    frame_guard.setLineNumber( 1328 );
                    PyObject *_tmp_for_loop_8__for_iterator;
                    {
                        PyObjectTempKeeper0 subscr1;
                        _tmp_for_loop_8__for_iterator = MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ).asObject0() ) ).asObject0() ) ).asObject0() );
                    }
                    PyObjectTemporaryWithDel tmp_for_loop_8__for_iterator( _tmp_for_loop_8__for_iterator );
                    PythonExceptionKeeper _caught_15;
#if PYTHON_VERSION < 300
                    int _at_lineno_15 = 0;
#endif


                    try
                    {
                        // Tried block:
                        while( true )
                        {
                            frame_guard.setLineNumber( 1328 );
                            PyObject *_tmp_unpack_16 = ITERATOR_NEXT( tmp_for_loop_8__for_iterator.asObject0() );

                            if ( _tmp_unpack_16 == NULL )
                            {
                                break;
                            }
                            tmp_for_loop_8__iter_value.assign1( _tmp_unpack_16 );
                            var_i.assign0( tmp_for_loop_8__iter_value.asObject0() );
                            frame_guard.setLineNumber( 1330 );
                            var_rrp.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_createProduct ) ).asObject0() ) );
                            frame_guard.setLineNumber( 1332 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper0 subscr1;
                                PyObjectTempKeeper1 subscr2;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_rrp.asObject0(), const_str_plain_setSpecies ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( ( subscr2.assign( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_products ) ), LOOKUP_SUBSCRIPT( subscr2.asObject0(), var_i.asObject0() ) ) ).asObject0() ) ) );
                            }

                            CONSIDER_THREADING();
                        }
                    }
                    catch ( PythonException &_exception )
                    {
#if PYTHON_VERSION >= 300
                        if ( !_exception.hasTraceback() )
                        {
                            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                        }
                        else
                        {
                            _exception.addTraceback( frame_guard.getFrame0() );
                        }
#else
                        _at_lineno_15 = frame_guard.getLineNumber();
#endif

                        _caught_15.save( _exception );

#if PYTHON_VERSION >= 300
                        frame_guard.preserveExistingException();

                        _exception.toExceptionHandler();
#endif
                    }

                    // Final block:
                    tmp_for_loop_8__iter_value.del( true );
                    tmp_for_loop_8__for_iterator.del( false );
#if PYTHON_VERSION < 300
                    if ( _at_lineno_15 != 0 )
                    {
                       frame_guard.setLineNumber( _at_lineno_15 );
                    }
#endif
                    _caught_15.rethrow();
                    // Final end
                    frame_guard.setLineNumber( 1334 );
                    {
                        PyObjectTempKeeper0 subscr1;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_258f51a08760fdae27a872c9dcd3ba93 ) ).asObject0() ) )
                        {
                            frame_guard.setLineNumber( 1338 );
                            {
                                PyObjectTempKeeper0 subscr1;
                                var_rrate.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) );
                            }
                            frame_guard.setLineNumber( 1340 );
                            PyObject *_tmp_for_loop_9__for_iterator;
                            {
                                PyObjectTempKeeper0 subscr1;
                                _tmp_for_loop_9__for_iterator = MAKE_ITERATOR( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0() );
                            }
                            PyObjectTemporaryWithDel tmp_for_loop_9__for_iterator( _tmp_for_loop_9__for_iterator );
                            PythonExceptionKeeper _caught_17;
#if PYTHON_VERSION < 300
                            int _at_lineno_17 = 0;
#endif


                            try
                            {
                                // Tried block:
                                while( true )
                                {
                                    frame_guard.setLineNumber( 1340 );
                                    PyObject *_tmp_unpack_18 = ITERATOR_NEXT( tmp_for_loop_9__for_iterator.asObject0() );

                                    if ( _tmp_unpack_18 == NULL )
                                    {
                                        break;
                                    }
                                    tmp_for_loop_9__iter_value.assign1( _tmp_unpack_18 );
                                    var_reactant.assign0( tmp_for_loop_9__iter_value.asObject0() );
                                    frame_guard.setLineNumber( 1342 );
                                    PyObject *tmp_inplace_assign_1__inplace_start = var_rrate.asObject0();
                                    PyObject *_tmp_inplace_assign_1__inplace_end;
                                    {
                                        PyObjectTempKeeper0 op1;
                                        _tmp_inplace_assign_1__inplace_end = ( op1.assign( tmp_inplace_assign_1__inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( const_str_chr_42, var_reactant.asObject0() ) ).asObject0() ) );
                                    }
                                    PyObjectTemporary tmp_inplace_assign_1__inplace_end( _tmp_inplace_assign_1__inplace_end );
                                    if ( ( tmp_inplace_assign_1__inplace_start != tmp_inplace_assign_1__inplace_end.asObject0() ) )
                                    {
                                        var_rrate.assign0( tmp_inplace_assign_1__inplace_end.asObject0() );
                                    }

                                    CONSIDER_THREADING();
                                }
                            }
                            catch ( PythonException &_exception )
                            {
#if PYTHON_VERSION >= 300
                                if ( !_exception.hasTraceback() )
                                {
                                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                                }
                                else
                                {
                                    _exception.addTraceback( frame_guard.getFrame0() );
                                }
#else
                                _at_lineno_17 = frame_guard.getLineNumber();
#endif

                                _caught_17.save( _exception );

#if PYTHON_VERSION >= 300
                                frame_guard.preserveExistingException();

                                _exception.toExceptionHandler();
#endif
                            }

                            // Final block:
                            tmp_for_loop_9__iter_value.del( true );
                            tmp_for_loop_9__for_iterator.del( false );
#if PYTHON_VERSION < 300
                            if ( _at_lineno_17 != 0 )
                            {
                               frame_guard.setLineNumber( _at_lineno_17 );
                            }
#endif
                            _caught_17.rethrow();
                            // Final end
                            frame_guard.setLineNumber( 1344 );
                            {
                                PyObjectTempKeeper1 call1;
                                PyObjectTempKeeper1 call2;
                                PyObjectTempKeeper0 subscr1;
                                var_mods.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_findmodifiers ) ), call2.assign( MAKE_TUPLE1( var_rrate.asObject0() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_plain_reactants ) ).asObject0(), const_str_plain_exclude ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 1350 );
                            {
                                PyObjectTempKeeper0 subscr1;
                                var_rrate.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( ( subscr1.assign( var_r.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), var_reac.asObject0() ) ) ).asObject0(), const_str_digest_577f2df08d38b7025bbdd177d064337b ) );
                            }
                            frame_guard.setLineNumber( 1352 );
                            {
                                PyObjectTempKeeper1 call1;
                                var_mods.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( par_self.asObject0(), const_str_plain_findmodifiers ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_rrate.asObject0() ) ) );
                            }
                        }
                    }
                    frame_guard.setLineNumber( 1356 );
                    PyObjectTemporaryWithDel tmp_for_loop_10__for_iterator( MAKE_ITERATOR( var_mods.asObject0() ) );
                    PythonExceptionKeeper _caught_19;
#if PYTHON_VERSION < 300
                    int _at_lineno_19 = 0;
#endif


                    try
                    {
                        // Tried block:
                        while( true )
                        {
                            frame_guard.setLineNumber( 1356 );
                            PyObject *_tmp_unpack_20 = ITERATOR_NEXT( tmp_for_loop_10__for_iterator.asObject0() );

                            if ( _tmp_unpack_20 == NULL )
                            {
                                break;
                            }
                            tmp_for_loop_10__iter_value.assign1( _tmp_unpack_20 );
                            var_mod.assign0( tmp_for_loop_10__iter_value.asObject0() );
                            frame_guard.setLineNumber( 1358 );
                            var_mdf.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_createModifier ) ).asObject0() ) );
                            frame_guard.setLineNumber( 1360 );
                            {
                                PyObjectTempKeeper1 call1;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_mdf.asObject0(), const_str_plain_setSpecies ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_mod.asObject0() ) ) );
                            }

                            CONSIDER_THREADING();
                        }
                    }
                    catch ( PythonException &_exception )
                    {
#if PYTHON_VERSION >= 300
                        if ( !_exception.hasTraceback() )
                        {
                            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                        }
                        else
                        {
                            _exception.addTraceback( frame_guard.getFrame0() );
                        }
#else
                        _at_lineno_19 = frame_guard.getLineNumber();
#endif

                        _caught_19.save( _exception );

#if PYTHON_VERSION >= 300
                        frame_guard.preserveExistingException();

                        _exception.toExceptionHandler();
#endif
                    }

                    // Final block:
                    tmp_for_loop_10__iter_value.del( true );
                    tmp_for_loop_10__for_iterator.del( false );
#if PYTHON_VERSION < 300
                    if ( _at_lineno_19 != 0 )
                    {
                       frame_guard.setLineNumber( _at_lineno_19 );
                    }
#endif
                    _caught_19.rethrow();
                    // Final end
                    frame_guard.setLineNumber( 1362 );
                    var_rrk.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_rr.asObject0(), const_str_plain_createKineticLaw ) ).asObject0() ) );
                    frame_guard.setLineNumber( 1364 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_rrk.asObject0(), const_str_plain_setFormula ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_rrate.asObject0() ) ) );
                    }

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_11 = frame_guard.getLineNumber();
#endif

                _caught_11.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_6__iter_value.del( true );
            tmp_for_loop_6__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_11 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_11 );
            }
#endif
            _caught_11.rethrow();
            // Final end
            frame_guard.setLineNumber( 1370 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_document.asObject0(), const_str_plain_setModel ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_model.asObject0() ) ) );
            }
            frame_guard.setLineNumber( 1372 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_libsbml ), const_str_plain_writeSBMLToFile ) ), call2.assign( var_document.asObject0() ), CALL_FUNCTION_WITH_ARGS2( call1.asObject0(), call2.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( par_ofile.asObject0(), const_str_digest_4e9f6c7fdef327a6b0e08505dc57a694 ) ).asObject0() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 1380 );
            PRINT_ITEM_TO( NULL, const_str_digest_7e952922146aab1c04ad960655f9a048 );
            PRINT_NEW_LINE_TO( NULL );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = par_ofile.updateLocalsDict( par_self.updateLocalsDict( var_rrk.updateLocalsDict( var_mdf.updateLocalsDict( var_mod.updateLocalsDict( var_mods.updateLocalsDict( var_reactant.updateLocalsDict( var_rrate.updateLocalsDict( var_rrp.updateLocalsDict( var_rrr.updateLocalsDict( var_i.updateLocalsDict( var_rr.updateLocalsDict( var_value.updateLocalsDict( var_vv.updateLocalsDict( var_newrate.updateLocalsDict( var_rvalue.updateLocalsDict( var_reac.updateLocalsDict( var_var.updateLocalsDict( var_pp.updateLocalsDict( var_par.updateLocalsDict( var_ss.updateLocalsDict( var_spec.updateLocalsDict( var_c.updateLocalsDict( var_model.updateLocalsDict( var_document.updateLocalsDict( var_v.updateLocalsDict( var_s.updateLocalsDict( var_r.updateLocalsDict( var_p.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ )
        {
           Py_DECREF( frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ );
           frame_function_12_printSBML_of_class_1_sencillo_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_12_printSBML_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_ofile = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "printSBML() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ofile == key )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_self, key ) )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( const_str_plain_ofile, key ) )
            {
                assert( _python_par_ofile == NULL );
                _python_par_ofile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "printSBML() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_ofile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ofile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ofile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ofile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_ofile == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_ofile };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_printSBML_of_class_1_sencillo_of_module___main__( self, _python_par_self, _python_par_ofile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_ofile );

    return NULL;
}

static PyObject *dparse_function_12_printSBML_of_class_1_sencillo_of_module___main__( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_12_printSBML_of_class_1_sencillo_of_module___main__( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_printSBML_of_class_1_sencillo_of_module___main__( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_printmatlab_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_printmatlab_of_class_1_sencillo_of_module___main__,
        dparse_function_10_printmatlab_of_class_1_sencillo_of_module___main__,
        const_str_plain_printmatlab,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3066adeb07aa9757a8254ee37c751448,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_printstochkit_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_printstochkit_of_class_1_sencillo_of_module___main__,
        dparse_function_11_printstochkit_of_class_1_sencillo_of_module___main__,
        const_str_plain_printstochkit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_39812dc7f2ad5558636bd8b61e89e7f0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_printSBML_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_printSBML_of_class_1_sencillo_of_module___main__,
        dparse_function_12_printSBML_of_class_1_sencillo_of_module___main__,
        const_str_plain_printSBML,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f60b265eec4bf8e4b2f567626eb3f7d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_sencillo_of_module___main__,
        dparse_function_1___init___of_class_1_sencillo_of_module___main__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d8310a7e26642480e66667e7a32ac240,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_addreaction_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_addreaction_of_class_1_sencillo_of_module___main__,
        dparse_function_2_addreaction_of_class_1_sencillo_of_module___main__,
        const_str_plain_addreaction,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0503cb5d9ef14310ca80fdb08dec50d6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        const_str_digest_b8def7fb0ec568539338d665c56b229d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_findmodifiers_of_class_1_sencillo_of_module___main__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_findmodifiers_of_class_1_sencillo_of_module___main__,
        dparse_function_3_findmodifiers_of_class_1_sencillo_of_module___main__,
        const_str_plain_findmodifiers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f4583ec857c1b53bf679121812f4b5e,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        const_str_digest_7e19ab1081407c310cd1cba23de00396
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_isfloat_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_isfloat_of_class_1_sencillo_of_module___main__,
        dparse_function_4_isfloat_of_class_1_sencillo_of_module___main__,
        const_str_plain_isfloat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b0bfa462bfd63d8a1849226906db323,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__,
        dparse_function_5_rmwhitespace_of_class_1_sencillo_of_module___main__,
        const_str_plain_rmwhitespace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_550d2f2701b590a3857e999ccfb7af67,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_printmathematica_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_printmathematica_of_class_1_sencillo_of_module___main__,
        dparse_function_6_printmathematica_of_class_1_sencillo_of_module___main__,
        const_str_plain_printmathematica,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b1c99d6260d11ded3948708f38dbd32d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_printodes_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_printodes_of_class_1_sencillo_of_module___main__,
        dparse_function_7_printodes_of_class_1_sencillo_of_module___main__,
        const_str_plain_printodes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c953292ddf12659773e3bca4361eac28,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_printdriver_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_printdriver_of_class_1_sencillo_of_module___main__,
        dparse_function_8_printdriver_of_class_1_sencillo_of_module___main__,
        const_str_plain_printdriver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1de37c458feb88fbbd975864b65735d5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_printpython_of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_printpython_of_class_1_sencillo_of_module___main__,
        dparse_function_9_printpython_of_class_1_sencillo_of_module___main__,
        const_str_plain_printpython,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8acede18ea0a3f5dbd015da3feedcdf2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__,
        dparse_lambda_1_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_606dca3ae6f84dfdf561f4faa9ac22aa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__,
        dparse_lambda_2_lambda_of_function_1___init___of_class_1_sencillo_of_module___main__,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0967ac78558840396b76c510e2010dc7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module___main__,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{

    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( __main__ )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___main__ );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( meta_path_loader_entries );
#endif

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = (PyDictObject *)((PyModuleObject *)module___main__)->md_dict;

    assertObject( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain___main__, module___main__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module___main__ );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( module___main__ != module___main__ )
        {
#endif
            value = PyModule_GetDict( value );
#ifdef _NUITKA_EXE
        }
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any


    // Module code
    PyFrameObject *frame_module___main__ = MAKE_FRAME( codeobj_6624603e74969439352a86e63f997ace, module___main__ );

    FrameGuard frame_guard( frame_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        DECREASE_REFCOUNT( IMPORT_MODULE( const_str_plain_site, ((PyModuleObject *)module___main__)->md_dict, ((PyModuleObject *)module___main__)->md_dict, const_tuple_empty, const_int_neg_1 ) );
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, Py_None );
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, const_str_digest_d464ea34d1896c167b585fe22e89bc33 );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_sys, IMPORT_MODULE( const_str_plain_sys, ((PyModuleObject *)module___main__)->md_dict, ((PyModuleObject *)module___main__)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_subprocess, IMPORT_MODULE( const_str_plain_subprocess, ((PyModuleObject *)module___main__)->md_dict, ((PyModuleObject *)module___main__)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_collections, IMPORT_MODULE( const_str_plain_collections, ((PyModuleObject *)module___main__)->md_dict, ((PyModuleObject *)module___main__)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_re, IMPORT_MODULE( const_str_plain_re, ((PyModuleObject *)module___main__)->md_dict, ((PyModuleObject *)module___main__)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_sbml, const_int_0 );
        PyObject *tmp_class_creation_1__bases = const_tuple_empty;
        frame_guard.setLineNumber( 12 );
        PyObjectTemporaryWithDel tmp_class_creation_1__class_dict( impl_class_1_sencillo_of_module___main__(  ) );
        PyObjectTemporaryWithDel tmp_class_creation_1__metaclass( ( SEQUENCE_CONTAINS_BOOL( const_str_plain___metaclass__, tmp_class_creation_1__class_dict.asObject0() ) ? DICT_GET_ITEM( tmp_class_creation_1__class_dict.asObject0(), const_str_plain___metaclass__ ) : SELECT_METACLASS( tmp_class_creation_1__bases, GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___metaclass__ ) ) ) );
        PyObject *_tmp_class_creation_1__class;
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _tmp_class_creation_1__class = ( call1.assign( tmp_class_creation_1__metaclass.asObject0() ), call2.assign( tmp_class_creation_1__bases ), CALL_FUNCTION_WITH_ARGS3( call1.asObject0(), const_str_plain_sencillo, call2.asObject0(), tmp_class_creation_1__class_dict.asObject0() ) );
        }
        PyObjectTemporaryWithDel tmp_class_creation_1__class( _tmp_class_creation_1__class );
        tmp_class_creation_1__bases = NULL;
        tmp_class_creation_1__class_dict.del( false );
        tmp_class_creation_1__metaclass.del( false );
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_sencillo, tmp_class_creation_1__class.asObject0() );
        tmp_class_creation_1__class.del( false );
        frame_guard.setLineNumber( 1402 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sys ), const_str_plain_argv ) ).asObject0() ) ).asObject0(), const_int_pos_3 ) )
        {
            frame_guard.setLineNumber( 1406 );
            UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_fname, LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sys ), const_str_plain_argv ) ).asObject0(), const_int_pos_2, 2 ) );
            frame_guard.setLineNumber( 1408 );
            UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_ofile, LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fname ), const_str_plain_split ) ).asObject0(), const_str_dot ) ).asObject0(), const_int_0, 0 ) );
            frame_guard.setLineNumber( 1410 );
            {
                PyObjectTempKeeper0 call1;
                UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_S, ( call1.assign( GET_MODULE_VALUE0( const_str_plain_sencillo ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), GET_MODULE_VALUE0( const_str_plain_fname ) ) ) );
            }
            frame_guard.setLineNumber( 1414 );
            UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_key, LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sys ), const_str_plain_argv ) ).asObject0(), const_int_pos_1, 1 ) ).asObject0(), const_str_plain_split ) ).asObject0(), const_str_chr_45 ) ).asObject0(), const_int_pos_1, 1 ) );
            frame_guard.setLineNumber( 1416 );
            if ( RICH_COMPARE_BOOL_EQ( GET_MODULE_VALUE0( const_str_plain_key ), const_str_plain_M ) )
            {
                frame_guard.setLineNumber( 1418 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_S ), const_str_plain_printmathematica ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), GET_MODULE_VALUE0( const_str_plain_ofile ) ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 1420 );
                if ( RICH_COMPARE_BOOL_EQ( GET_MODULE_VALUE0( const_str_plain_key ), const_str_plain_m ) )
                {
                    frame_guard.setLineNumber( 1422 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_S ), const_str_plain_printmatlab ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), GET_MODULE_VALUE0( const_str_plain_ofile ) ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 1424 );
                    if ( RICH_COMPARE_BOOL_EQ( GET_MODULE_VALUE0( const_str_plain_key ), const_str_plain_y ) )
                    {
                        frame_guard.setLineNumber( 1426 );
                        {
                            PyObjectTempKeeper1 call1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_S ), const_str_plain_printpython ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), GET_MODULE_VALUE0( const_str_plain_ofile ) ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 1428 );
                        if ( RICH_COMPARE_BOOL_EQ( GET_MODULE_VALUE0( const_str_plain_key ), const_str_plain_s ) )
                        {
                            frame_guard.setLineNumber( 1430 );
                            {
                                PyObjectTempKeeper1 call1;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_S ), const_str_plain_printstochkit ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), GET_MODULE_VALUE0( const_str_plain_ofile ) ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 1432 );
                            if ( RICH_COMPARE_BOOL_EQ( GET_MODULE_VALUE0( const_str_plain_key ), const_str_plain_S ) )
                            {
                                frame_guard.setLineNumber( 1434 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_S ), const_str_plain_printSBML ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), GET_MODULE_VALUE0( const_str_plain_ofile ) ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 1438 );
                                PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sencillo ), const_str_plain___doc__ ) ).asObject0() ) ).asObject0() );
                                PRINT_NEW_LINE_TO( NULL );
                            }
                        }
                    }
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 1446 );
            PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sencillo ), const_str_plain___doc__ ) ).asObject0() ) ).asObject0() );
            PRINT_NEW_LINE_TO( NULL );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

#if 0
    // TODO: Recognize the need for it
        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)module___main__)->md_dict );
#endif

        // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( module___main__ );
}
// The main program for C++. It needs to prepare the interpreter and then
// calls the initialization code of the __main__ module.

#include "structseq.h"
#ifdef _NUITKA_WINMAIN_ENTRY_POINT
int __stdcall WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, char* lpCmdLine, int nCmdShow )
{
    int argc = __argc;
    char** argv = __argv;
#else
int main( int argc, char *argv[] )
{
#endif
#ifdef _NUITKA_STANDALONE
    prepareStandaloneEnvironment();
#endif

    // Initialize Python environment.
    Py_DebugFlag = 0;
#if 0
    Py_Py3kWarningFlag = 0;
#endif
#if 0
    Py_DivisionWarningFlag =
#if 0
        Py_Py3kWarningFlag ||
#endif
        0;
#endif
    Py_InspectFlag = 0;
    Py_InteractiveFlag = 0;
    Py_OptimizeFlag = 0;
    Py_DontWriteBytecodeFlag = 0;
    Py_NoUserSiteDirectory = 0;
    Py_IgnoreEnvironmentFlag = 0;
#if 0
    Py_TabcheckFlag = 0;
#endif
    Py_VerboseFlag = 0;
#if 0
    Py_UnicodeFlag = 0;
#endif
    Py_BytesWarningFlag = 0;
#if 1
    Py_HashRandomizationFlag = 1;
#endif

    // We want to import the site module, but only after we finished our own
    // setup. The site module import will be the first thing, the main module
    // does.
    Py_NoSiteFlag = 1;

    // Initialize the embedded CPython interpreter.
    setCommandLineParameters( argc, argv, true );
    Py_Initialize();

    // Lie about it, believe it or not, there are "site" files, that check
    // against later imports, see below.
    Py_NoSiteFlag = 0;

    // Set the command line parameters for run time usage.
    setCommandLineParameters( argc, argv, false );

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();
    _initBuiltinOriginalValues();

    // Revert the wrong sys.flags value, it's used by "site" on at least Debian
    // for Python3.3, more uses may exist.
#if 0 == 0
#if PYTHON_VERSION >= 330
    PyStructSequence_SetItem( PySys_GetObject( "flags" ), 6, const_int_0 );
#elif PYTHON_VERSION >= 320
    PyStructSequence_SetItem( PySys_GetObject( "flags" ), 7, const_int_0 );
#elif PYTHON_VERSION >= 260
    PyStructSequence_SET_ITEM( PySys_GetObject( (char *)"flags" ), 9, const_int_0 );
#endif
#endif

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    enhancePythonTypes();

    // Set the sys.executable path to the original Python executable on Linux
    // or to python.exe on Windows.
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_c42384e11d8039023cc63f738682e4b1
    );

    patchBuiltinModule();
    patchTypeComparison();

    // Allow to override the ticker value, to remove checks for threads in
    // CPython core from impact on benchmarks.
    char const *ticker_value = getenv( "NUITKA_TICKER" );
    if ( ticker_value != NULL )
    {
        _Py_Ticker = atoi( ticker_value );
        assert ( _Py_Ticker >= 20 );
    }

#if _NUITKA_STANDALONE
    setEarlyFrozenModulesFileAttribute();
#endif

    // Execute the "__main__" module init function.
    MOD_INIT_NAME( __main__ )();

    if ( ERROR_OCCURED() )
    {
        // Cleanup code may need a frame, so put one back.
        PyThreadState_GET()->frame = MAKE_FRAME( codeobj_6624603e74969439352a86e63f997ace, module___main__ );

        PyErr_PrintEx( 0 );
        Py_Exit( 1 );
    }
    else
    {
        Py_Exit( 0 );
    }
}
