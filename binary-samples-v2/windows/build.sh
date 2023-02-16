#!/bin/bash
OUTPUT="build_gcc10_dwarf2"
mkdir $OUTPUT
G_OPTIONS="-g3 -ggnu-pubnames -gdwarf-2 -fdebug-types-section -gas-loc-support -gas-locview-support -gvariable-location-views -ginline-points -fno-eliminate-unused-debug-types -gstatement-frontiers -gno-split-dwarf -ggdb -gdescribe-dies -grecord-gcc-switches -gcolumn-info -Og -femit-struct-debug-detailed=any"

for file in *.c; do
	c_file=$(basename "$file" '.c')
	echo $c_file
	gcc $G_OPTIONS "$file" -o "$OUTPUT/$c_file"
done

ls $OUTPUT/*.exe