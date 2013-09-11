#!/bin/bash

help()
{
echo;
echo "usage:";
echo "#$0 <DEVICE> <MOUNT_POINT>";
}
_mount()
{
DEVICE=$1;
MOUNT_POINT=$2;
CMD="mount -t ntfs $DEVICE $MOUNT_POINT";
'$CMD'
if [$? -eq 0]
then 
echo "INFO: Successfully mounted [$DEVICE] on [$MOUNT_POINT]";
else
echo "ERROR: Failed to Mount [$DEVICE] on [$MMOUNT_POINT].";
exit 1;
fi

}




_unmount()
{
MOUNT_POINT=$1;
CMD="unmount $MOUNT_POINT";
'$CMD'
if [$? -eq 0]
then 
echo "INFO: Succesfully unmounted [$MOUNT_POINT].";
else
echo "ERROR:Failed to Unmount [$MOUNT_POINT].";
exit 1;
fi
}



#
#Main Code
#

if [ $# -lt 2 ]
then 
help;
exit 1;
fi
DEVICE = $1
MOUNT_POINT = $2

_mount $DEVICE $MOUNT_POINT
_unmount $MOUNT_POINT
exit 0;

