echo  "***************************************************"
echo
echo "------------------- DOUT TEST ----------------------"
echo
echo  "***************************************************"
echo "check if R63 resiter mounted or not "
echo
echo "------------ GPIOPIN-5 --------------"
echo
echo 15 > /sys/class/gpio/export
echo
if [ -d "/sys/class/gpio/gpio15" ]
then
    echo "GPIO Exported"
else
    echo "GPIO Exported Failed"
fi
echo out > /sys/class/gpio/gpio15/direction
echo 1 > /sys/class/gpio/gpio15/value
sleep 2
echo 0 > /sys/class/gpio/gpio15/value
sleep 2
gpio_value=$(cat /sys/class/gpio/gpio15/value)
if [ "$gpio_value" == 1 ]
then
    echo " DOUT CONNECTED "
    echo
    echo "============= PASS ==============="
    echo
else
    echo " DOUT NOT CONNECTED "
    echo
    echo "============= FAIL==============="
    echo
fi
