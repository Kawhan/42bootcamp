#!/bin/sh
groups $FT_USER student | tr ' ' ',' | tr -d "\n"