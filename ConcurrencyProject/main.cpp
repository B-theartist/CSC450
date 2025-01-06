/*
Initialize a mutex (mtx)
Initialize a condition variable (cv)
Set a boolean variable (threadOneComplete) to false

Define function countUp():
    For i from 0 to 20:
        Acquire lock using mutex
        Print "Thread 1 - Count Up: " followed by i
        Release lock

    Acquire lock using mutex
    Set threadOneComplete to true
    Release lock
    Notify condition variable (cv)

Define function countDown():
    Acquire lock using mutex
    Wait until threadOneComplete is true using condition variable (cv)
    Release lock

    For i from 20 to 0:
        Print "Thread 2 - Count Down: " followed by i

Define main():
    Create thread1 to execute countUp function
    Create thread2 to execute countDown function

    Wait for thread1 to finish
    Wait for thread2 to finish

    Exit the program
*/


#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool threadOneComplete = false;

// Function for counting up
void countUp() {
    for (int i = 0; i <= 20; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        std::cout << "Thread 1 - Count Up: " << i << std::endl;
    }
    // Notify that thread one is complete
    {
        std::unique_lock<std::mutex> lock(mtx);
        threadOneComplete = true;
    }
    cv.notify_one();
}

// Function for counting down
void countDown() {
    // Wait for thread one to complete
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []() -> bool { return threadOneComplete; });

    for (int i = 20; i >= 0; --i) {
        std::cout << "Thread 2 - Count Down: " << i << std::endl;
    }
}

int main() {
    // Create threads
    std::thread thread1(countUp);
    std::thread thread2(countDown);

    // Join threads to ensure they finish
    thread1.join();
    thread2.join();

    return 0;
}