#!/bin/bash
node_id=$1
type=$2
type_col=3

case "$type" in
    "temperature" ) type_col=3;;
    "pressure" ) type_col=4;;
    "humidity" ) type_col=5;;
    "luminosity" ) type_col=6;;
    "battery" ) type_col=7;;
esac
gnuplot -e "set term jpeg; set output \""$type""$node_id".jpeg\"; plot \"./data_output.txt\" using 2:(\$1==$node_id ? \$"$type_col" : 1/0) title '"$type" "$node_id"' with lines"
