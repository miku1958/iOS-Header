//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _UIPointVector : NSObject
{
    unsigned long long _count;
    unsigned long long _capacity;
    MISSING_TYPE **_vectors;
}

@property (nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property (nonatomic) unsigned long long count; // @synthesize count=_count;
@property (nonatomic) MISSING_TYPE **vectors; // @synthesize vectors=_vectors;

- (void)addVector: /* Error: Ran out of types for this method. */;
- (void)clear;
- (void)dealloc;
- (id)init;
- (MISSING_TYPE *)lastVector;
- (void)removeVectorAtIndex:(unsigned long long)arg1;
- (void)reset;
- (MISSING_TYPE *)vectorAtIndex:(unsigned long long)arg1;

@end
