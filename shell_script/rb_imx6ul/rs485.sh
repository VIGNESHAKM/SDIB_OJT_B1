echo "***************************************************"
echo
echo "----------------- RS485 TEST ---------------------"
echo
echo "***************************************************"
echo
echo "-----checking for RS485----"
echo

if [ -e "/dev/ttymxc5" ]
then
    echo " RS485 Node exists"
    echo
    echo " ------ Performing 485-----"
    echo
    echo "************* PASS **************"
    echo " press Ctrl+C to exit to microcom "
    microcom -s 115200 /dev/ttymxc5


    echo "------ pass ------"
else

    echo "RS485 Node not found"
echo "===========fail-============="
fi

