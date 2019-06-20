#! /bin/bash
clang --target=wasm32 -emit-llvm -c -S $1.c