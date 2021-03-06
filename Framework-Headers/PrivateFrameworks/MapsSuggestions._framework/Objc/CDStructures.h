//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MapsSuggestionsEngineBuilder, MapsSuggestionsObservers, NSArray, NSDate, NSMutableArray, NSMutableSet, NSObject, NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct Duration {
    struct duration<long long, std::__1::ratio<1, 1000000000>> _field1;
};

struct Notification {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> darwinNotification;
    int token;
    unsigned long long state;
};

struct NotificationReceiver;

struct NotificationSender;

struct Queue {
    NSObject *_innerQueue;
    NSString *_name;
};

struct ReadWriteQueue {
    NSObject *_innerQueue;
    NSString *_name;
};

struct SignalPack {
    struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::__1::hash<MapsSuggestionsSignalType>, std::__1::equal_to<MapsSuggestionsSignalType>, std::__1::allocator<std::__1::pair<const MapsSuggestionsSignalType, MSg::Signal>>> dict_;
};

struct Timer {
    struct Queue _queue;
    NSString *_name;
    NSObject *_timer;
    struct {
        NSDate *firesAt;
    } _state;
};

struct _Config {
    NSString *name;
    MapsSuggestionsEngineBuilder *engineBuilder;
    MapsSuggestionsObservers *observers;
    double minRunTime;
    double maxRunTime;
    double minSleepTime;
    double maxSleepTime;
    double leewayRunTime;
    double leewaySleepTime;
    NSMutableArray *triggers;
    NSMutableArray *runConditions;
    NSMutableSet *filters;
    unsigned long long maxEntries;
    BOOL nilledWhenAsleep;
};

struct _RollingWindowBudgetRule;

struct _State {
    NSDate *minSilenceDate;
    NSDate *earliestRunDate;
    NSString *firedTriggerName;
    NSString *failedRunConditionName;
    id stopRunTimer;
    id wakeUpTimer;
    NSArray *entries;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*> *__next_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long _field1;
};

struct unique_ptr<MSg::NotificationReceiver, std::__1::default_delete<MSg::NotificationReceiver>> {
    struct __compressed_pair<MSg::NotificationReceiver *, std::__1::default_delete<MSg::NotificationReceiver>> {
        struct NotificationReceiver *__value_;
    } __ptr_;
};

struct unique_ptr<MSg::NotificationSender, std::__1::default_delete<MSg::NotificationSender>> {
    struct __compressed_pair<MSg::NotificationSender *, std::__1::default_delete<MSg::NotificationSender>> {
        struct NotificationSender *__value_;
    } __ptr_;
};

struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> {
    struct __compressed_pair<MSg::Queue *, std::__1::default_delete<MSg::Queue>> {
        struct Queue *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::__1::hash<MapsSuggestionsSignalType>, std::__1::equal_to<MapsSuggestionsSignalType>, std::__1::allocator<std::__1::pair<const MapsSuggestionsSignalType, MSg::Signal>>> {
    struct __hash_table<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true>, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true>, std::__1::allocator<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<MSg::_RollingWindowBudgetRule, std::__1::allocator<MSg::_RollingWindowBudgetRule>> {
    struct _RollingWindowBudgetRule *__begin_;
    struct _RollingWindowBudgetRule *__end_;
    struct __compressed_pair<MSg::_RollingWindowBudgetRule *, std::__1::allocator<MSg::_RollingWindowBudgetRule>> {
        struct _RollingWindowBudgetRule *__value_;
    } __end_cap_;
};

struct vector<MapsSuggestionsEntryType, std::__1::allocator<MapsSuggestionsEntryType>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType>> {
        long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

// Template types
typedef struct vector<MapsSuggestionsEntryType, std::__1::allocator<MapsSuggestionsEntryType>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType>> {
        long long *__value_;
    } __end_cap_;
} vector_8215e319;

