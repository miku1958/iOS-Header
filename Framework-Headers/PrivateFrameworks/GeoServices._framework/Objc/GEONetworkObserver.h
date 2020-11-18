//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock;

@interface GEONetworkObserver : NSObject
{
    NSLock *_lock;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    BOOL _initialized;
    BOOL _networkNotified;
    BOOL _networkReachable;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedNetworkObserver;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (void)initializeIfNecessary;
- (BOOL)isCellConnection;
- (BOOL)isConnectionRequired;
- (BOOL)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)arg1;

@end

