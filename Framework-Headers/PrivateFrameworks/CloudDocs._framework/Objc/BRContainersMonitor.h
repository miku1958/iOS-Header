//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BRContainersMonitor : NSObject
{
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (BOOL)isContainerID:(id)arg1;
+ (BOOL)isContainerIDForeground:(id)arg1;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forContainerID:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1 forContainerID:(id)arg2;

@end

