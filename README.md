# Artoo TDD

This is a blinking led example using artoo and minitest.

## C version

The equivalent C++ version is in `blinking.ino`. You can upload the
program by running `make upload` if you have arduino-mk installed or
simply use the arduino IDE.

## Ruby version

The ruby version is in `blinking.rb`, using artoo requires installing
firmata on your arduino. Run `./install.sh` to run bundle install,
download `gort` and upload the firmware to your arduino. Note, you may
have to update the shell script to work for other OS and/or raspberry
pi.

Once you installed firmata on your arduino, `ruby blinking.rb` should
run your app.

Run `ruby -I.:spec spec/blinking_spec.rb` to run the specs. The specs
don't require the arduino to be connected (it is mocked out).
