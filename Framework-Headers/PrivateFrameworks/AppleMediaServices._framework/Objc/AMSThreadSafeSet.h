//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    NSMutableSet *_backingSet;
    NSObject<OS_dispatch_queue> *_backingSetAccessQueue;
}

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (strong, nonatomic) NSMutableSet *backingSet; // @synthesize backingSet=_backingSet;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue; // @synthesize backingSetAccessQueue=_backingSetAccessQueue;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)init;
- (void)removeObject:(id)arg1;

@end
