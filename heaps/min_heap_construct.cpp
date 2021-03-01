#include <vector>
using namespace std;

// Do not edit the class below except for the buildHeap,
// siftDown, siftUp, peek, remove, and insert methods.
// Feel free to add new properties and methods to the class.
class MinHeap {
public:
  vector<int> heap;
  MinHeap(vector<int> vector) {
        heap = buildHeap(vector);
    }

  vector<int> buildHeap(vector<int> &vector_) {
    // Write your code here.
        vector<int> vec;
        for (int x : vector_) {
            vec.push_back(x);
            siftUp(vec.size() - 1, vec);
        }
    return vec;
  }
    
    int up(int x) {
        return (x-1) >> 1;
    }
    
    int left_(int x) {
        return (x << 1) + 1;
    }
    
    int right_(int x) {
        return (x << 1) + 2;
    }

  void siftDown(int currentIdx, int endIdx, vector<int> &heap) {
        int left = left_(currentIdx);
        int right = right_(currentIdx);
        if (right <= endIdx) {
            int swappy = (heap[left] < heap[right]) ? left : right;
            if (heap[swappy] < heap[currentIdx]) {
                swap(heap[currentIdx], heap[swappy]);
                return siftDown(swappy, endIdx, heap);
            }
        } else if (left <= endIdx) {
            if (heap[left] < heap[currentIdx]) {
                swap(heap[left], heap[currentIdx]);
                return siftDown(left, endIdx, heap);
            }
        }
  }

  void siftUp(int currentIdx, vector<int> &heap) {
        if (currentIdx == 0) return;
        if (heap[currentIdx] < heap[up(currentIdx)]) {
            swap(heap[currentIdx], heap[up(currentIdx)]);
            siftUp(up(currentIdx), heap);
        }
  }

  int peek() {
    return heap[0];
  }

  int remove() {
        int x = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        siftDown(0, heap.size() - 1, heap);
    return x;
  }

  void insert(int value) {
    heap.push_back(value);
        siftUp(heap.size() - 1, heap);
  }
};
