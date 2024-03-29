echo "************************************"
echo
echo "---------BUTTON/SWITCH TEST--------"
echo
echo "***********************************"
echo

# Export GPIO pin 40
echo 40 > /sys/class/gpio/export

echo "Status of Button: "

# Read the value of the GPIO pin
status=$(cat /sys/class/gpio/gpio40/value)

if [ "$status" -eq 0 ]; then
    echo "Button released"
    echo
    echo "******** PASS *********"
    echo
else
 echo "Button pressed"
    echo
    echo "******** FAIL *********"
    echo
fi
