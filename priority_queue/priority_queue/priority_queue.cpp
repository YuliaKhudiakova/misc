//
//  priority_queue.cpp
//  priority_queue
//
//  Created by Yulia Khudiakova on 28.01.15.
//  Copyright (c) 2015 Yulia Khudiakova. All rights reserved.
//

#include "priority_queue.h"

template<typename T>
void TPriorityQueue<T>::Insert(const T& key) {
    Pq.push_back(key);
    BubbleUp(Pq.size() - 1);
}

template<typename T>
const T& TPriorityQueue<T>::GetMin() const {
    return Pq[1];
}

template<typename T>
void TPriorityQueue<T>::DeleteMin() {
    if (IsEmpty())
        return;
    
    std::swap(Pq[1], Pq.back());
    BubbleDown(1);
    Pq.pop_back();
}

template<typename T>
bool TPriorityQueue<T>::IsEmpty() const {
    return Pq.size() == 1;
}

template<typename T>
size_t TPriorityQueue<T>::GetSize() const {
    return Pq.size() - 1;
}

template<typename T>
void TPriorityQueue<T>::BubbleUp(size_t index) {
    while (parent && Pq[index] < Pq[index / 2]) {
        std::swap(Pq[index], Pq[index / 2]);
        
        index /= 2;
    }
}

template<typename T>
void TPriorityQueue<T>::BubbleDown(size_t index) {
    size_t size = Pq.size();
    size_t child = 2 * index;
    
    while (child < size) {
        if (child + 1 < size && Pq[child] > Pq[child + 1])
            ++child;
            
        if (Pq[index] < Pq[child])
            break;
        
        std::swap(Pq[index], Pq[child]);
        
        index = child;
        child *= 2;
    }
}


