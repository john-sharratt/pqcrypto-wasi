#ifndef RANDOMBYTES_H
#define RANDOMBYTES_H

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#ifdef _WIN32
#include <crtdefs.h>
#else
#include <unistd.h>
#endif

#define randombytes PQCRYPTO_RUST_randombytes

#if defined(__wasi__)
void randombytes(uint8_t *buf, size_t n);
#else
int randombytes(uint8_t *buf, size_t n);
#endif

#endif
