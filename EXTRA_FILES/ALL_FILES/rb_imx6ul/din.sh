echo "*****************"
echo
echo "------------------ DIN TEST -----------------------"
echo
echo "*****************"
echo
echo
echo 133 > /sys/class/gpio/export
if [ -d "/sys/class/gpio/gpio133" ]
then
    echo "GPIO Exported"
else
    echo "GPIO Export Failed"
fi
echo in > /sys/class/gpio/gpio133/direction
sleep 2
gpio5_value=$(cat /sys/class/gpio/gpio133/value)
if [ "$gpio5_value" == 1 ]
then
    echo
    echo "============= PASS ==============="
echo
else
    echo
    echo "============= FAIL ================"
    fi
