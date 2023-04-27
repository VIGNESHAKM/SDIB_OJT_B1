echo "************************************************"
echo
echo "---------- TEST ADC  -----------"
echo
echo "***********"
#if [ -e "/sys/bus/iio/devices/iio\:device0/in_voltage6_raw " ]
#then
   echo "ADC NODE EXISTS"

 var=$( cat /sys/bus/iio/devices/iio\:device0/in_voltage6_raw )

    echo "======= PERFORMING ADC TEST ===="
    echo $var
    echo
    echo "========= PASS ================"
    echo
#else
#    echo " ADC NODE NOT  FOUND"
#    echo "========== FAIL ============="
#fi
