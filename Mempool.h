
#ifndef MEMORY_POOL_YXY_H
#define MEMORY_POOL_YXY_H

#include <thread>
#include <cstdint>
#include <cstddef>
#include <stdexcept>
#include <atomic>
#include <new>
#include <memory>
#include <mutex>
#include <thread>
#include <type_traits>
#include <unordered_map>
#include <vector>


// ---------------- 初始分配节点数 ----------------------
#ifndef INIT_POOL_ALLOC_SIZE
#define INIT_POOL_ALLOC_SIZE 16
#endif


// ------------------- 前向声明 -------------------------
template<typename T>
class MemPoolManager;

template <typename T>
class MemPool;




#endif // MEMORY_POOL_YXY_H