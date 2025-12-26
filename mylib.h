// mylib.h

// [Functions](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#functions)
// in mylib_h.java
void foo(int x);

// [Global Variables](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#global-variables)
// in mylib_h.java
int bar;

// [Constants (Macros & Enums)](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#constants-macros--enums)
// in mylib_h.java
#define MY_MACRO 42
enum MY_ENUM { A, B, C };

// [Structs & Unions](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#structs--unions)
// genereates Point.java
struct Point {
  int x;
  int y;
};

// [Function Pointers](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#function-pointers)
// generates callback_t.java
typedef int (*callback_t)(int x, int y);

// [Variadic Functions](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#variadic-functions)
// in mylib_h.java
void foo_variadic(int x, ...);

// [Typedefs](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#typedefs)
// in mylib_h.java
typedef int MyInt;

// generates MyPoint.java
typedef struct Point MyPoint;

// [Array Types](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#array-types)
// in mylib_h.java
int FOO_ARRAY[3][5];

// [Nested Types](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md#nested-types)
// generates Foo.java
struct Foo {
    struct {
        int baz;
    } bar; // field of Foo

    void (*cb)(void);
};
