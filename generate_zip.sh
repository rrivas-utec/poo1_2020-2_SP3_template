#!/usr/bin/env bash

project_name=task_2
source_code='SP2.h SP2.cpp'
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}