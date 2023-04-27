echo "*********************************"
echo
echo "---------- TEST ADC  -----------"
echo
echo "*********************************"
if [ -e "/sys/bus/iio/devices/" ]
then
   echo "ADC NODE EXISTS"

# var=$( cat /sys/bus/iio/devices/iio\:device0/in_voltage6_raw )

    echo "======= PERFORMING ADC TEST ===="

#    echo $var
./ADC 3
    echo
    echo "========= PASS ================"
    echo
else
    echo " ADC NODE NOT  FOUND"
    echo "========== FAIL ============="
fi

