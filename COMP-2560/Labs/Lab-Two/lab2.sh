declare -a files_array
for arguments in $*; do
files_array+=("${array[@]}" $arguments)
echo $arguments
for file in `ls *$arguments`; do
echo $file
done
done

echo "The file extensions are: ${files_array[@]}"

tar -cvf archive.tar *
