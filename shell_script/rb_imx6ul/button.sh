echo  "******************************"
echo
echo "------ TEST USART  ------------"
echo
echo  "******************************"
if [ -e "/dev/ttymxc2" ]
then
echo "ADC NODE EXIST"
echo
echo "------------ performing UART Test ------- "
echo
./UART
echo "--------------------- PASS ----------------"
echo
else
echo "USART Node NOT Found "
echo "--------------------- FAIL ----------------"
fi



