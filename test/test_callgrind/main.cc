/* Copyright 2021 Himo Chen */
#include <cstdio>

void CallC() {
  printf("CallC:");
  for (int i = 0; i < 32; ++i) {
    printf(" %d", i);
  }
  printf("\n");
}

void CallB() {
  CallC();
}

void CallA() {
  CallB();
  CallC();

  printf("CallA:");
  for (int i = 0; i < 16; ++i) {
    printf(" %d", i);
  }
  printf("\n");
}

int main() {
  CallA();
  return 0;
}