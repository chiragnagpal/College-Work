#!/bin/bash
echo "-------------------------------------------"
echo "     The List of Mounted File Systems"
echo "-------------------------------------------"
cat /proc/partitions | sed 's/name/DEVICE_NAME/g'
echo "-------------------------------------------" 
echo "1.Mount\n2.Unmount\n3.Exit"
echo "Select your choice"
read option

case $option in

1)

echo "you have successfully mounted a device";;


2)
echo "Select drive to unmount";;

3)
echo "Bye Bye";;

esac


