echo "*******************************************"
echo
echo "----------------- RS485 TEST ---------------------"
echo
echo "*****************"
echo
echo "-----checking for RS485----"
echo

if [ -e "/dev/ttyS2" ]
then
    echo " RS485 Node exists"
    echo
    echo " ------ Performing 485-----"
    echo
    echo " press Ctrl+C to exit to microcom "
    microcom -s 115200 /dev/ttyS2
    echo
    echo "-------- RS485 Node pass ----"
else
    echo "RS485 Node not found"
fi
