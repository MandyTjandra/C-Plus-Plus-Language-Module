#include <queue>
#include <iostream>
#include <string>
using namespace std;

struct Chat {
    string user;
    string message;
};

int main() {
    queue<Chat> chatQueue; // Queue<DATA_TYPES> queue_name;

    // Adding some chat messages to the queue
    chatQueue.push({"Mandy", "Hello!"});
    chatQueue.push({"Tommy", "Hi, how are you?"});
    chatQueue.push({"Mandy", "I'm good, thanks!"});

    // Processing chat messages in the queue
    while (!chatQueue.empty()) {
        Chat currentChat = chatQueue.front();
        cout << currentChat.user << ": " << currentChat.message << endl;
        chatQueue.pop(); // Remove the front message from the queue
    }

    return 0;
}

/*Queue memiliki konsep FIFO atau First In First Out.*/