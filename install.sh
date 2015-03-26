#!/usr/bin/env bash

set -ue

bundle install
if [ ! -x bin/gort ]; then
    mkdir bin
    pushd bin
      wget https://s3.amazonaws.com/gort-io/0.3.0/gort_0.3.0_linux_amd64.tar.gz
      tar --strip-components=1 -xvzf gort_0.3.0_linux_amd64.tar.gz
      rm gort_0.3.0_linux_amd64.tar.gz
    popd
fi

bin/gort arduino install
bin/gort arduino upload firmata /dev/ttyACM0
