#!/bin/bash
declare -a files_array
for arguments in $*; do
files_array+=("${array[@]}" $arguments)
echo $arguments
for file in `ls *$arguments`; do

echo $file
done
done

echo "The file extensions are: ${files_array[@]}"

current_date=$(date +%a%b%d%H%M%S%Z%Y)


mkdir "$current_date"

var=$(pwd)
basename $(pwd)
current_directory="$(basename $PWD)"
echo $current_directory
echo "$current_date"



for file_ending in ${files_array[@]}; do
tar -cvf archive.tar --wildcards .$file_ending
done

