//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSObject> _accountDidChangeNotificationObserver;
    NSNumber *_isCellularEnabledForDocumentsAndData;
}

@property (nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;

+ (id)_notifAccountStore;
+ (BOOL)isNetworkReachableForFlags:(unsigned int)arg1;
+ (id)sharedReachabilityMonitor;
- (void).cxx_destruct;
- (void)_accountDidChange;
- (BOOL)_isCellularAllowedForBR;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isNetworkReachableForBundle:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
