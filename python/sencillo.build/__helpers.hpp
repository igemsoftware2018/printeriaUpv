#ifndef __NUITKA_TUPLES_H__
#define __NUITKA_TUPLES_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE1( PyObject *element0 )
{
    PyObject *result = PyTuple_New( 1 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE2( PyObject *element0, PyObject *element1 )
{
    PyObject *result = PyTuple_New( 2 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE3( PyObject *element0, PyObject *element1, PyObject *element2 )
{
    PyObject *result = PyTuple_New( 3 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE4( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3 )
{
    PyObject *result = PyTuple_New( 4 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE5( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4 )
{
    PyObject *result = PyTuple_New( 5 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE6( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5 )
{
    PyObject *result = PyTuple_New( 6 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE10( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9 )
{
    PyObject *result = PyTuple_New( 10 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE11( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10 )
{
    PyObject *result = PyTuple_New( 11 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE16( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15 )
{
    PyObject *result = PyTuple_New( 16 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE23( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22 )
{
    PyObject *result = PyTuple_New( 23 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );
    assertObject( element22 );
    PyTuple_SET_ITEM( result, 22, INCREASE_REFCOUNT( element22 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE29( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4, PyObject *element5, PyObject *element6, PyObject *element7, PyObject *element8, PyObject *element9, PyObject *element10, PyObject *element11, PyObject *element12, PyObject *element13, PyObject *element14, PyObject *element15, PyObject *element16, PyObject *element17, PyObject *element18, PyObject *element19, PyObject *element20, PyObject *element21, PyObject *element22, PyObject *element23, PyObject *element24, PyObject *element25, PyObject *element26, PyObject *element27, PyObject *element28 )
{
    PyObject *result = PyTuple_New( 29 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );
    assertObject( element5 );
    PyTuple_SET_ITEM( result, 5, INCREASE_REFCOUNT( element5 ) );
    assertObject( element6 );
    PyTuple_SET_ITEM( result, 6, INCREASE_REFCOUNT( element6 ) );
    assertObject( element7 );
    PyTuple_SET_ITEM( result, 7, INCREASE_REFCOUNT( element7 ) );
    assertObject( element8 );
    PyTuple_SET_ITEM( result, 8, INCREASE_REFCOUNT( element8 ) );
    assertObject( element9 );
    PyTuple_SET_ITEM( result, 9, INCREASE_REFCOUNT( element9 ) );
    assertObject( element10 );
    PyTuple_SET_ITEM( result, 10, INCREASE_REFCOUNT( element10 ) );
    assertObject( element11 );
    PyTuple_SET_ITEM( result, 11, INCREASE_REFCOUNT( element11 ) );
    assertObject( element12 );
    PyTuple_SET_ITEM( result, 12, INCREASE_REFCOUNT( element12 ) );
    assertObject( element13 );
    PyTuple_SET_ITEM( result, 13, INCREASE_REFCOUNT( element13 ) );
    assertObject( element14 );
    PyTuple_SET_ITEM( result, 14, INCREASE_REFCOUNT( element14 ) );
    assertObject( element15 );
    PyTuple_SET_ITEM( result, 15, INCREASE_REFCOUNT( element15 ) );
    assertObject( element16 );
    PyTuple_SET_ITEM( result, 16, INCREASE_REFCOUNT( element16 ) );
    assertObject( element17 );
    PyTuple_SET_ITEM( result, 17, INCREASE_REFCOUNT( element17 ) );
    assertObject( element18 );
    PyTuple_SET_ITEM( result, 18, INCREASE_REFCOUNT( element18 ) );
    assertObject( element19 );
    PyTuple_SET_ITEM( result, 19, INCREASE_REFCOUNT( element19 ) );
    assertObject( element20 );
    PyTuple_SET_ITEM( result, 20, INCREASE_REFCOUNT( element20 ) );
    assertObject( element21 );
    PyTuple_SET_ITEM( result, 21, INCREASE_REFCOUNT( element21 ) );
    assertObject( element22 );
    PyTuple_SET_ITEM( result, 22, INCREASE_REFCOUNT( element22 ) );
    assertObject( element23 );
    PyTuple_SET_ITEM( result, 23, INCREASE_REFCOUNT( element23 ) );
    assertObject( element24 );
    PyTuple_SET_ITEM( result, 24, INCREASE_REFCOUNT( element24 ) );
    assertObject( element25 );
    PyTuple_SET_ITEM( result, 25, INCREASE_REFCOUNT( element25 ) );
    assertObject( element26 );
    PyTuple_SET_ITEM( result, 26, INCREASE_REFCOUNT( element26 ) );
    assertObject( element27 );
    PyTuple_SET_ITEM( result, 27, INCREASE_REFCOUNT( element27 ) );
    assertObject( element28 );
    PyTuple_SET_ITEM( result, 28, INCREASE_REFCOUNT( element28 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_LISTS_H__
#define __NUITKA_LISTS_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST0(  )
{
    PyObject *result = PyList_New( 0 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }



    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_DICTS_H__
#define __NUITKA_DICTS_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT0(  )
{
    PyObject *result = _PyDict_NewPresized( 0 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }



    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT1( PyObject *value1, PyObject *key1 )
{
    PyObject *result = _PyDict_NewPresized( 1 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT2( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2 )
{
    PyObject *result = _PyDict_NewPresized( 2 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT3( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3 )
{
    PyObject *result = _PyDict_NewPresized( 3 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT5( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2, PyObject *value3, PyObject *key3, PyObject *value4, PyObject *key4, PyObject *value5, PyObject *key5 )
{
    PyObject *result = _PyDict_NewPresized( 5 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key3 );
    assertObject( value3 );

    {
        int status = PyDict_SetItem( result, key3, value3 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key4 );
    assertObject( value4 );

    {
        int status = PyDict_SetItem( result, key4, value4 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key5 );
    assertObject( value5 );

    {
        int status = PyDict_SetItem( result, key5, value5 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_SETS_H__
#define __NUITKA_SETS_H__


#endif
#ifndef __NUITKA_CALLS_H__
#define __NUITKA_CALLS_H__

extern PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject *arg0 );
extern PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject *arg0, PyObject *arg1 );
extern PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject *arg0, PyObject *arg1, PyObject *arg2 );
extern PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject *arg0, PyObject *arg1, PyObject *arg2, PyObject *arg3, PyObject *arg4 );
#endif
