//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct PPScoreInterpreterValue {
    union {
        double _field1;
        shared_ptr_07d87f91 _field2;
        void *_field3;
    } _field1;
    unsigned char _field2;
};

struct PPScoredItemCompareGreater;

struct PPSubscoreIdentifier {
    unsigned char _field1;
    unsigned short _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PASDBIterAction_ {
    BOOL _field1;
};

struct __CFString;

struct __DDQueryOffset {
    unsigned int :32;
    unsigned int :32;
};

struct __DDResult {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    CDStruct_912cb5d2 _field3;
    long long _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    struct __CFDictionary *_field9;
    long long _field10;
    unsigned char _field11;
    float _field12;
};

struct __hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic_flag {
    _Atomic BOOL _Value;
};

struct header_s {
    unsigned int qidCount;
    unsigned int topicCount;
    unsigned int nonzeroCount;
    unsigned int payloadLen;
};

struct pair<unsigned short, unsigned short>;

struct priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>, PPScoredItemCompareGreater> {
    struct vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>> _field1;
    struct PPScoredItemCompareGreater _field2;
};

struct shared_ptr<std::__1::vector<float, std::__1::allocator<float>>> {
    vector_f9ed6fc8 *_field1;
    struct __shared_weak_count *_field2;
};

struct type {
    unsigned char __lx[32];
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>> {
    struct __compressed_pair<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>*, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>>> {
        struct vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> {
    struct __compressed_pair<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>*, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> {
        vector_6aa931c0 *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<float, std::__1::allocator<float>>, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>> {
    struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float>>*, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float>>>> {
        vector_f9ed6fc8 *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>> {
    struct __compressed_pair<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>*, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>>> {
        struct vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>> {
    struct __compressed_pair<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>*, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>>> {
        struct vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>>>, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>>>>> {
    struct __compressed_pair<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>>>*, std::__1::default_delete<std::__1::vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>>>>> {
        struct vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>>> *__value_;
    } __ptr_;
};

struct unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>> {
    struct __hash_table<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>, std::__1::allocator<std::__1::__hash_node<PPSubscoreIdentifier, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<PPSubscoreIdentifier>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<PPSubscoreIdentifier>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue>>;

struct vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<PPScoredItem *__strong *, std::__1::allocator<PPScoredItem *>> {
        id *_field1;
    } _field3;
};

struct vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>> {
    struct PPSubscoreIdentifier *_field1;
    struct PPSubscoreIdentifier *_field2;
    struct __compressed_pair<PPSubscoreIdentifier *, std::__1::allocator<PPSubscoreIdentifier>> {
        struct PPSubscoreIdentifier *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> {
    struct pair<unsigned short, unsigned short> *_field1;
    struct pair<unsigned short, unsigned short> *_field2;
    struct __compressed_pair<std::__1::pair<unsigned short, unsigned short>*, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> {
        struct pair<unsigned short, unsigned short> *_field1;
    } _field3;
};

struct vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float>>>>>;

struct vector<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>, std::__1::allocator<std::__1::vector<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::allocator<std::__1::unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>>>>>>;

struct vector<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>, std::__1::allocator<std::__1::vector<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *), std::__1::allocator<PPScoreInterpreterValue (^)(PPScoreInterpreterCtx *)>>>>>>;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int resultSizeLog10:1;
    unsigned int error:1;
    unsigned int exclusionSpec:1;
    unsigned int limitHit:1;
    unsigned int timeLimited:1;
    unsigned int timeSpec:1;
} CDStruct_68ee747f;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Ambiguous groups
typedef struct {
    unsigned int algorithm:1;
    unsigned int donationSource:1;
    unsigned int newItem:1;
    unsigned int userCreated:1;
} CDStruct_f1067582;

typedef struct {
    unsigned int algorithm:1;
    unsigned int donationSource:1;
} CDStruct_e3b84e97;

typedef struct {
    unsigned int donationSource:1;
} CDStruct_a8edabe5;

typedef struct {
    unsigned int schemaVersion:1;
} CDStruct_278ffb8f;

typedef struct shared_ptr<std::__1::vector<float, std::__1::allocator<float>>> {
    vector_f9ed6fc8 *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_07d87f91;

typedef struct unique_ptr<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> {
    struct __compressed_pair<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>*, std::__1::default_delete<std::__1::vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>>>> {
        vector_6aa931c0 *__value_;
    } __ptr_;
} unique_ptr_49fb3468;

typedef struct unordered_set<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>> {
    struct __hash_table<PPSubscoreIdentifier, std::__1::hash<PPSubscoreIdentifier>, std::__1::equal_to<PPSubscoreIdentifier>, std::__1::allocator<PPSubscoreIdentifier>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*>, std::__1::allocator<std::__1::__hash_node<PPSubscoreIdentifier, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<PPSubscoreIdentifier, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<PPSubscoreIdentifier>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<PPSubscoreIdentifier>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_set_103214ac;

typedef struct vector<PPSubscoreIdentifier, std::__1::allocator<PPSubscoreIdentifier>> {
    struct PPSubscoreIdentifier *_field1;
    struct PPSubscoreIdentifier *_field2;
    struct __compressed_pair<PPSubscoreIdentifier *, std::__1::allocator<PPSubscoreIdentifier>> {
        struct PPSubscoreIdentifier *_field1;
    } _field3;
} vector_6aa931c0;

typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;
