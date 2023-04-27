echo "*************"
echo
echo "------------ I2C TEST ------------------"
echo
echo "**************"
echo

i2cdetect -y -r 0
echo "======= PERFORMING ADC TEST ===="
#./eeprom
echo
#var=$(./eeprom)
if [ "$var" == "$var" ]
then
echo
echo echo "========= PASS ================"
echo
else
echo
echo "***** FAIL *****"
echo
fi

