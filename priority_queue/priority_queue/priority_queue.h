//
//  priority_queue.h
//  priority_queue
//
//  Created by Yulia Khudiakova on 28.01.15.
//  Copyright (c) 2015 Yulia Khudiakova. All rights reserved.
//

#pragma once

#include <vector>

template<typename T>
class TPriorityQueue {
public:
    TPriorityQueue()
        : Pq(1, 0) {
    }
    void Insert(const T& data);
    const T& GetMin() const;
    void DeleteMin();
    bool IsEmpty() const;
    size_t GetSize() const;
private:
    void BubbleUp(size_t index);
    void BubbleDown(size_t index);
private:
    std::vector<T> Pq;
};