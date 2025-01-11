package com.module8.javaconcurrency;



import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class Module8 {
    private static final Lock lock = new ReentrantLock();
    private static final Condition condition = lock.newCondition();
    private static boolean threadOneComplete = false;

    public static void main(String[] args) {
        Thread thread1 = new Thread(new CountUpTask());
        Thread thread2 = new Thread(new CountDownTask());

        thread1.start();
        thread2.start();

        try {
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted: " + e.getMessage());
        }
    }

    // Thread to count up
    static class CountUpTask implements Runnable {
        @Override
        public void run() {
            lock.lock();
            try {
                for (int i = 0; i <= 20; i++) {
                    System.out.println("Thread 1 - Count Up: " + i);
                }
                threadOneComplete = true;
                condition.signal();
            } finally {
                lock.unlock();
            }
        }
    }

    // Thread to count down
    static class CountDownTask implements Runnable {
        @Override
        public void run() {
            lock.lock();
            try {
                while (!threadOneComplete) {
                    condition.await();
                }
                for (int i = 20; i >= 0; i--) {
                    System.out.println("Thread 2 - Count Down: " + i);
                }
            } catch (InterruptedException e) {
                System.out.println("Thread interrupted: " + e.getMessage());
            } finally {
                lock.unlock();
            }
        }
    }
}
