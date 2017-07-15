#include "gtest/gtest.h"
#include "PID.h"
#include <chrono>


TEST(PID, test_init) {
  PID pid;

  pid.Init(1, 2, 3);

  EXPECT_TRUE(pid.Kp==1);
  EXPECT_TRUE(pid.Ki==2);
  EXPECT_TRUE(pid.Kd==3);

}

TEST(PID, test_clock) {
  PID pid;
  long start = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
  std::cout << "time:" << start << std::endl;


  using namespace std::chrono;
  high_resolution_clock::time_point t1 = high_resolution_clock::now();

  std::cout << "printing out 1000 stars...\n";
  for (int i=0; i<10000000; ++i) {
  }
  std::cout << std::endl;

  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double, std::milli> time_span = t2 - t1;
  std::cout << "It took me " << time_span.count() << " milliseconds.";


  start = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
  std::cout << "time:" << start << std::endl;
//  EXPECT_TRUE(pid.Kp==1);
//  EXPECT_TRUE(pid.Ki==2);
//  EXPECT_TRUE(pid.Kd==3);

}

//
//
//
//TEST(PID, test_P_down) {
//  PID pid;
//
//  pid.Init(0, 0, 0);
//
//  pid.UpdateError(1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(0.9);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  EXPECT_DOUBLE_EQ(pid.Kp, 1);
//  pid.UpdateError(0.8);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(0.7);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//
//}
//
//TEST(PID, test_P_up) {
//  PID pid;
//
//  pid.Init(0, 0, 0);
//
//  pid.UpdateError(1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.2);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.3);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//
//}
//
//TEST(PID, test_P_up_down) {
//  PID pid;
//
//  pid.Init(0, 0, 0);
//
//  pid.UpdateError(1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(0.9);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(0.7);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//}
//
//
//TEST(PID, test_P_down_up) {
//  PID pid;
//
//  pid.Init(0, 0, 0);
//
//  pid.UpdateError(1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(0.9);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.1);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.2);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//  pid.UpdateError(1.3);
//  std::cout << "KP: " << pid.Kp << "   " << pid.p_error << std::endl;
//
//}
