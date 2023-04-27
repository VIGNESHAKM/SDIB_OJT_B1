#!/bin/sh                                                 
echo "------------------------------------------------"   
echo "********888TEST SD CARD*******"                     
echo "---------------------------------------------------"
                                              
if [ -e "/dev/mmcblk0p1" ]                    
then                                          
  echo "SD card exists in the board"          
  echo "---------mounting the sd card--------"
  mount /dev/mmcblk0p1 /mnt                
  cd /mnt                                                  
  echo "copying file from board to sd card"                
  cp /home/root/test.txt /mnt/                             
  if [ -e "mnt/test.txt" ]                                 
then                                                       
    echo "copying of file from board to sd card successful"
    echo "==============PASS=========="
  else                                
    echo "file not copied to sd card" 
    echo "=============FAIL=========="
  fi                                                       
  cd /                                 
  echo "unmounting /mnt"              
  umount /mnt                         
else                                  
  echo "no sd card found"
fi         
