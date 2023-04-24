#!/bin/bash
echo -n "*******************************************"
echo
echo -n "=============BUTTON/SWITCH TEST============="
echo
echo -n "********************************************"
echo
echo 40 > /sys/class/gpio/export
echo "Status of button"
status=$(cat /sys/class/gpio/gpio40/value)
if [ "$status" -eq 1 ]; then
    echo "Button released"
    echo
    echo -n "===============PASS============="
    echo
else
    echo "Button pressed"
    echo
    echo -n "================FAIL============="
    echo

