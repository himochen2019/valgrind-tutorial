/* Copyright 2021 Himo Chen */
#include <cstdio>

// Test MLK (Memory Leak)
void TestMLK() {
  int* i = new int[1024];
}

// Test FMR (Free Memory Read)
void TestFMR() {
  int* i = new int;
  delete i;

  *i = 1;
}

// Test ABR (Array Boundary Read)
void TestABR() {
  int* i = new int[4];

  i[4] = 1;
}

// Test UMR (Uninitialized Memory Read)
void TestUMR() {
  int i;

  if (i > 0) printf("TestUMR: %d\n", i);
}

int main() {
  TestMLK();
  TestFMR();
  TestABR();
  TestUMR();
  return 0;
}