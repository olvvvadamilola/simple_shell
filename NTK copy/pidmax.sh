#!/bin/bash

pid_max=$(cat /sys/kernel/pid_max)

echo "the max process id is: $pid_max"