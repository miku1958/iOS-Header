//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _UTDeclaredType;

__attribute__((visibility("hidden")))
@interface _UTDeclaredTypeSortableWrapper : NSObject
{
    _UTDeclaredType *_declaredType;
    struct LSDatabase {
        struct __CFRuntimeBase;
        struct FSNode *;
        unsigned int;
        unsigned char;
        struct __CSStore *;
        struct LSSchema {
            CDStruct_13af5226;
            CDStruct_c0454aff;
            unsigned int;
            unsigned int;
            unsigned int;
            unsigned int;
            CDStruct_538b3674;
            unsigned int;
            CDStruct_c315bc87 [12];
            unsigned int;
            unsigned int;
            unsigned int;
            unsigned int;
            unsigned int;
            struct _LSSchemaCache {
                struct _opaque_pthread_rwlock_t;
                struct __CFDictionary *;
                id;
                id;
                struct unordered_map<unsigned int, std::__1::unordered_map<unsigned int, bool, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, bool>>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unordered_map<unsigned int, bool, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, bool>>>>>> *;
                CDStruct_a561fd19;
            };
        };
    } *_database;
    const CDStruct_b227e4e8 *_utypeData;
}

@property (nonatomic) struct LSDatabase *database; // @synthesize database=_database;
@property (strong, nonatomic) _UTDeclaredType *declaredType; // @synthesize declaredType=_declaredType;
@property (nonatomic) const CDStruct_b227e4e8 *utypeData; // @synthesize utypeData=_utypeData;

- (long long)compare:(id)arg1;
- (void)dealloc;

@end

