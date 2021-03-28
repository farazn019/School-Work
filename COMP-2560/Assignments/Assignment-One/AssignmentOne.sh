#!/bin/bash
#/bin/true
#/bin/false


let "i = 3"
#let "inital_arguments=false"

if [[ $1 = "-t" ]];
then
	path="$2"
	#inital_arguments="true"
	echo "Made it"
	let "i = 2"
	argv=($*)
	N=$(( $#-$i))
	extensions=${argv[@]:$i:$N}
	cd $path
	
else
	let "i = 0"
	
	argv=($*)
	N=$(( $#-$i))
	extensions=${argv[@]:$i:$N}
fi
	#fi

echo $extensions
echo $N

current_date=$(date +%a%b%d%H%M%S%Z%Y)


mkdir $current_date


for ext in $extensions; do
	echo $ext
	for file in `ls *$ext`; do
		echo $file
		cp "$file" $current_date
		rm $file
	done
done

tar czf archive.tar.gz $current_date
rm -rf $current_date

#fi
