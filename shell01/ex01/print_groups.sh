#!/bin/bash
id -G -n bocal | tr ' ' ',' | tr -d '\n'
