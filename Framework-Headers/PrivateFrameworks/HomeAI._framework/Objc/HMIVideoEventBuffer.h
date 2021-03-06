//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableArray;

@interface HMIVideoEventBuffer : HMFObject
{
    NSMutableArray *_data;
    HMFUnfairLock *_lock;
    long long _maxCapacity;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)description;
- (id)extractObjectsInTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithMaxCapacity:(long long)arg1;
- (id)neighborsOfObject:(id)arg1;
- (id)objectsInTimeRange:(CDStruct_e83c9415)arg1 includeEnd:(BOOL)arg2;
- (void)removeAllObjects;

@end

