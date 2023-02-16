#!/bin/bash
CC="clang-11"
SOURCES="C-Examples"
TEMP="tmp"
## CLANG-11 FLAGS
CLANG11_OPTIONS_DWARF3="-g3 -ggnu-pubnames -gdwarf-3 -fdebug-types-section -fno-eliminate-unused-debug-types -ggdb -grecord-gcc-switches -gcolumn-info -Og"
CLANG11_OPTIONS_DWARF4="-g3 -ggnu-pubnames -gdwarf-4 -fdebug-types-section -fno-eliminate-unused-debug-types -ggdb -grecord-gcc-switches -gcolumn-info -Og"
CLANG11_OPTIONS_DWARF5="-g3 -ggnu-pubnames -gdwarf-5 -fdebug-types-section -fno-eliminate-unused-debug-types -ggdb -grecord-gcc-switches -gcolumn-info -Og"

#CLANG_OPTIONS_DWARF3="-g3 -ggnu-pubnames -gdwarf-3 -fdebug-types-section  -fno-eliminate-unused-debug-types  -gno-split-dwarf -ggdb -grecord-gcc-switches -gcolumn-info -Og "
#CLANG_OPTIONS_DWARF4="-g3 -ggnu-pubnames -gdwarf-4 -fdebug-types-section  -fno-eliminate-unused-debug-types  -gno-split-dwarf -ggdb -grecord-gcc-switches -gcolumn-info -Og "
#CLANG_OPTIONS_DWARF5="-g3 -ggnu-pubnames -gdwarf-5 -fdebug-types-section  -fno-eliminate-unused-debug-types  -gno-split-dwarf -ggdb -grecord-gcc-switches -gcolumn-info -Og "

mkdir -p ${TEMP}
for file in ${SOURCES}/*.c; do
    tmp_file=${TEMP}/$(basename "$file")
    echo $tmp_file
    cat "${file}" | sed '0,/#include/s//#define A_MACRO 1\n#ifdef A_MACRO\n#define B_MACRO 2\n#endif\n#include/' > ${tmp_file// /_}
done

for file in ${TEMP}/*.c; do
   mkdir -p out/${CC}_DWARF3/
   $CC $CLANG_OPTIONS_DWARF3 "$file" -o "out/${CC}_DWARF3/$(basename $file .c)" 2>&1 | tee -a out/${CC}_DWARF3/_compile.log
   echo $CLANG_OPTIONS_DWARF3 > out/${CC}_DWARF3/_flags.log
   mkdir -p out/${CC}_DWARF4/
   $CC $CLANG_OPTIONS_DWARF4 "$file" -o "out/${CC}_DWARF4/$(basename $file .c)" 2>&1 | tee -a out/${CC}_DWARF4/_compile.log
   echo $CLANG_OPTIONS_DWARF4 > out/${CC}_DWARF4/_flags.log
   mkdir -p out/${CC}_DWARF5/
   $CC $CLANG_OPTIONS_DWARF5 "$file" -o "out/${CC}_DWARF5/$(basename $file .c)" 2>&1 | tee -a out/${CC}_DWARF5/_compile.log
   echo $CLANG_OPTIONS_DWARF5 > out/${CC}_DWARF5/_flags.log
done
