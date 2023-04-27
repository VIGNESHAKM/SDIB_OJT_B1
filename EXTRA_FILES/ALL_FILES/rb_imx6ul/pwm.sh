o "------------- PWM Test---------------"
echo "**********************************"
echo

if [ -d "/sys/class/pwm/pwmchip0/" ]
then
    echo "PWMchip0 Exist"
    echo
    echo 0 > /sys/class/pwm/pwmchip0/export
    echo "PWM Test"
    echo
    sleep 3
    echo "Setting PWM Time Period"
    echo 50000 > /sys/class/pwm/pwmchip0/pwm0/period
    echo
    echo "Setting duty cycle"
    echo 25000 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
    echo
    sleep 3
    echo 12000 > /sys/class/pwm/pwmchip0/pwm0/duty_cycle
    echo "Enabling PWM"
    echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable
    cat /sys/kernel/debug/pwm
    echo
    echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable
    sleep 3
    echo
    status=$(cat /sys/class/pwm/pwmchip0/pwm0/enable)
    if [ "$status" == "1" ]
    then
        echo
        echo "============= PASS ==============="
        echo
    else
        echo
        echo "============= FAIL ==============="
        echo
    fi
else
    echo "fail"
fi
