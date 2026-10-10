INCLUDE="-Iinclude -Isrc/handlers"

mkdir -p .build

nasm $INCLUDE -f elf64 -o .build/interpreter.o src/interpreter.asm
gcc $INCLUDE -o .build/main.o -c src/main.c

gcc -pie -o .build/DeekVM .build/*

echo "Build finished with exit code $?"