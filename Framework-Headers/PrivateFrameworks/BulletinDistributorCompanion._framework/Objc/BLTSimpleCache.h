//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BLTSimpleCache : NSObject
{
    NSMutableArray *_objects;
    unsigned long long _capacity;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)cacheObject:(id)arg1;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objects;

@end

