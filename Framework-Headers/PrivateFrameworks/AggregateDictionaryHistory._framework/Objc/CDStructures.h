//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Database {
    struct sqlite3 *_field1;
    struct unordered_map<unsigned long, sqlite3_stmt *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, sqlite3_stmt *>>> _field2;
};

struct __hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>;

struct sqlite3;

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<unsigned long, sqlite3_stmt *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, sqlite3_stmt *>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::hash<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::equal_to<unsigned long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

