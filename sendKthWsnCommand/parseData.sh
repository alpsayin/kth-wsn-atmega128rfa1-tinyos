#!/bin/bash
awk '{FS="type=data"} {print $2}' output.txt | tr '\t' '\n' | awk '{FS="data2="}{print $2" "}' | tr -d '\n'