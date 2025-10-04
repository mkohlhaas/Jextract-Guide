// mylib.h

typedef int (*callback_t)(int x, int y);

int call_me_back(callback_t callback) { return callback(1, 2); }

int bar;

#define MY_MACRO 42

enum MY_ENUM { A, B, C };

struct Point {
  int x;
  int y;
};

struct Point *new_point(void);
void delete_point(struct Point *ptr);

void foo(int x);
