//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAMutex {
    CDUnknownFunctionPointerType *_field1;
    char *_field2;
    struct _opaque_pthread_t *_field3;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field4;
};

struct Data {
    NSString *name;
};

struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, NSURL *>, std::__1::__tree_node<std::__1::__value_type<unsigned long, NSURL *>, void *>*, long>> {
    struct __tree_iterator<std::__1::__value_type<unsigned long, NSURL *>, std::__1::__tree_node<std::__1::__value_type<unsigned long, NSURL *>, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
    } _field1;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<unsigned long, NSURL *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSURL *>>> {
    struct __tree<std::__1::__value_type<unsigned long, NSURL *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, NSURL *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, NSURL *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, NSURL *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, NSURL *>, std::__1::less<unsigned long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, NSURL *>, std::__1::__tree_node<std::__1::__value_type<unsigned long, NSURL *>, void *>*, long>> {
    struct __tree_iterator<std::__1::__value_type<unsigned long, NSURL *>, std::__1::__tree_node<std::__1::__value_type<unsigned long, NSURL *>, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
    } _field1;
} __map_iterator_49c891e4;
