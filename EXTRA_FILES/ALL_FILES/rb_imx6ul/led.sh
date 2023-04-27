while :
do
read CH
{
case "$CH" in
"1")
echo 77 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio77/direction
echo 0 > /sys/class/gpio/gpio77/value
echo "*** LED1 ON ****"

;;

"2")
echo 81 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio81/direction
echo 0 > /sys/class/gpio/gpio81/value
echo "*** LED2 ON ****"
;;

"3")
echo 83 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio83/direction
echo 0 > /sys/class/gpio/gpio83/value
echo "*** LED3 ON ****"
;;
