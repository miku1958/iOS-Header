//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject
{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __CFDictionary *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property (nonatomic) NSString *hostname; // @synthesize hostname=_hostname;

- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)hasObservers;
- (id)initWithHostname:(id)arg1;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;

@end

