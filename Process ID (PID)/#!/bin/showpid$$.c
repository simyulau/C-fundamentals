#!/bin/bash
echo '***************************************'
echo '$$ is a PID variable'
echo ' ps will show all shell processes '
echo 'script PID, current bash PID different'
echo '***************************************'
ps
echo PID of shell is $$
echo "show the exit code: $?"
exit
