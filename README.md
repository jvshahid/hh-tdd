# Artoo TDD

This is a blinking led example using artoo and minitest.

## C version

The equivalent C++ version is in `blinking.ino`. You can upload the
program by running `make upload` if you have arduino-mk installed or
simply use the arduino IDE.

## Ruby version

The ruby version is in `blinking.rb`, using artoo requires installing
firmata on your arduino. Run `./install.sh` to run bundle install,
download `gort` and upload the firmware to your arduino.

You may have to update the shell script to work for other OS and/or
raspberry pi.

Run `ruby -I.:spec spec/blinking_spec.rb` to run the specs
