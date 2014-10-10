#!/bin/sh

gccxml --gccxml-compiler g++-4.8 -I . -fxml=main.xml main.cpp
