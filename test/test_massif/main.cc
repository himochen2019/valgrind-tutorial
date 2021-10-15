/* Copyright 2021 Himo Chen */
#include <unistd.h>

char* AllocateBytes(size_t bytes) {
  return new char[bytes];
}

int main() {
  char* bytes = AllocateBytes(1024);
  char* bytes_2 = AllocateBytes(8192);
  for (int i = 0; i < 16; ++i) {
    delete [] AllocateBytes(1024);
  }
  delete [] bytes; bytes = nullptr;
  delete [] bytes_2; bytes_2 = nullptr;
  return 0;
}