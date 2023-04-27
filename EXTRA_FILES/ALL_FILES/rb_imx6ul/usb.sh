echo " ------------------------ TEST USB ------------------------------------ "
echo
echo " ***************** "
echo
echo " Insert any pen drive to board for USB Test "
echo
echo " Waiting for 5 sec "
sleep 5
echo " Creating test file "
touch file.txt
echo " Welcome on phytec " > file.txt

if [ -e "/dev/sda" ] || [ -e "/dev/sdb" ] || [ -e "/dev/sdc" ]
then
    echo
    echo " USB device plugged in to board "
    echo " ------- Mounting the USB device -------- "

    echo
    mount /dev/sda /mnt
    cd /mnt ||
    echo " Copying file from board to USB device "
    echo
    cp /home/Testing/file.txt /mnt
    cd / ||

    if [ -e "/mnt/file.txt" ]
    then
        echo " Copying file from board to USB device successful "
        echo
        echo "============= PASS ==============="
        echo
    else
        echo " Files not copied "
        echo "============= FAIL ==============="
    fi
else
    echo " USB device not found "
    echo "============= FAIL ==============="
fi


