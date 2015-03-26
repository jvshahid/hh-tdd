require "helper"
require 'blinking'

describe 'Blinking' do
  let(:robot) { Artoo::MainRobot.new }

  before :each do
    robot.work
  end


  it 'turns the led on when the button is pushed' do
    robot.led.expects :on
    robot.button.publish "push"
    process_messages
  end

  it 'turns the led off when the button is released' do
    robot.led.expects :off
    robot.button.publish "release"
    process_messages
  end
end
