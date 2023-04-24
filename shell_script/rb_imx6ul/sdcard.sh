echo "***************************************************"
echo
echo "=============== TEST SD CARD ======================"
echo
echo "***************************************************"
touch test.txt
echo " Welcome on phytec " > data.txt

if [ -e "/dev/mmcblk0" ]
then
  echo "SD card found on the board"
  echo "---------mounting the sd card--------"
  mount /dev/mmcblk0p1 /mnt/
  cd /mnt/ ||
  echo "copying file from board to sd card"
  cp /home/Testing/test.txt /mnt/
  if [ -e "/mnt/test.txt" ]
 then
    echo "copying of file from board to sd card successful"
    echo "*************PASS**********"
else
echo "====fail======"
fi
echo "unmounting /mnt"
umount /mnt
else
echo " no sdcard found"
fi
