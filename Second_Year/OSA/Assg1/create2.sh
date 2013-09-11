#!/bin/sh

echo "Select the option\n1.Create a new file\n2.Rename a file\n3.Delete a file"

read mode

case $mode in

1 )
 
echo "enter name for new file"
read name
touch $name;;

2 )

echo "enter name for the file you want to rename"
read name
echo "enter the new name for the file"
read name2
mv -T $name $name2;;

3 )

echo "enter name for the file you want to delete"
read name
rm $name ;;

esac
 
